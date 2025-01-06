/*  Name: Jacob Sherlin
    Project: Implement an interpreter for Tiger language where only int and string data types are supported.
*/ 

#include "Interpreter.h"

using namespace symbol;

namespace interpreter
{
	runtime::VarEntry& Interpreter::interp_student(const SimpleVar* v)
	{
		//put you implementation here
        auto name = v->getName();
        return renv.lookup(name);
	}

	runtime::VarEntry& Interpreter::interp_student(const FieldVar* v)
	{
		/* Not supported */
		throw runtime_error("Record data type not supported!");
	}

	runtime::VarEntry& Interpreter::interp_student(const SubscriptVar* v)
	{
		/* Not supported */
		throw runtime_error("Array data type not supported!");
	}

	const runtime::VarEntry Interpreter::interp_student(const OpExp* e)
	{
		//put you implementation here
        runtime::VarEntry left = interp(e->getLeft());
        runtime::VarEntry right = interp(e->getRight());
        
        switch (e->getOper()) {
            case 0: //plus
                return runtime::VarEntry(left.ival + right.ival);
            case 1: //minus
                return runtime::VarEntry(left.ival - right.ival);
            case 2: //times
                return runtime::VarEntry(left.ival * right.ival);
            case 3: //divide
                return runtime::VarEntry(left.ival / right.ival);
            case 4: //EQ
                return runtime::VarEntry(left.ival == right.ival);
            case 5: //NEQ
                return runtime::VarEntry(left.ival != right.ival);
            case 6: //LT
                return runtime::VarEntry(left.ival < right.ival);
            case 7: //LE
                return runtime::VarEntry(left.ival <= right.ival);
            case 8: //GT
                return runtime::VarEntry(left.ival > right.ival);
            case 9: //GE
                return runtime::VarEntry(left.ival >= right.ival);
        }

	}

	const runtime::VarEntry Interpreter::interp_student(const VarExp* e)
	{
		//put you implementation here
        auto var = e->getVar();
        return interp(var);

	}

	const runtime::VarEntry Interpreter::interp_student(const NilExp* e)
	{
		throw runtime_error("Nil is not supported");
	}

	const runtime::VarEntry Interpreter::interp_student(const IntExp* e)
	{
		//put you implementation here
        auto value = e->getValue();
        return runtime::VarEntry(value);
	}

	const runtime::VarEntry Interpreter::interp_student(const StringExp* e)
	{
		//put you implementation here
        auto value = e->getValue();
        return runtime::VarEntry(value);
	}

	const runtime::VarEntry Interpreter::interp_student(const CallExp* e)
	{
		//no implementation needed
        
		return runtime::VarEntry();  //return VOID
	}

	const runtime::VarEntry Interpreter::interp_student(const RecordExp* e)
	{
		throw runtime_error("Record is not supported");
	}

	const runtime::VarEntry Interpreter::interp_student(const SeqExp* e)
	{
		//put you implementation here
        const absyn::ExpList* expList = e->getList();
        runtime::VarEntry result;
        
        for (const absyn::ExpList* current = expList; current != nullptr; current = current->getRest()) {
            result = interp(current->getHead());
        }
        
        return result;
	}

	const runtime::VarEntry Interpreter::interp_student(const AssignExp* e)
	{
		//put you implementation here
        auto varValue = interp(e->getExp());
        return interp(e->getVar()) = varValue;
	}

	const runtime::VarEntry Interpreter::interp_student(const IfExp* e)
	{
		//put you implementation here
        auto testResult = interp(e->getTest());
        if (testResult.ival != 0) {
            return interp(e->getThenClause());
        }
        
        auto elseClause = e->getElseClause();
        if (elseClause != nullptr) {
            return interp(elseClause);
        }
        
        return runtime::VarEntry();
	}

	const runtime::VarEntry Interpreter::interp_student(const WhileExp* e)
	{
		//put you implementation here
        auto condition = interp(e->getTest());

        while (condition.ival != 0) {
            interp(e->getBody());
            condition = interp(e->getTest());
        }
        
        return runtime::VarEntry();

	}

	const runtime::VarEntry Interpreter::interp_student(const ForExp* e)
	{
		//put you implementation here

        env.getVarEnv()->beginScope();
        renv.beginScope();
        
        interp(e->getVar());
        
        int initialValue = renv.lookup(e->getVar()->getName()).ival;
        int limit = interp(e->getHi()).ival;
        
        for (int counter = initialValue; counter <= limit; ++counter) {
            try {
                interp(e->getBody());
                renv.update(e->getVar()->getName(), counter + 1);
            } catch (const BreakExpException&) {
                break;
            }
        }
        
        env.getVarEnv()->endScope();
        renv.endScope();
        
        return runtime::VarEntry();
	}

	const runtime::VarEntry Interpreter::interp_student(const LetExp* e)
	{
		//put you implementation here
        env.getVarEnv()->beginScope();
        renv.beginScope();
        
        const absyn::DecList* declarations = e->getDecs();
        while (declarations != nullptr) {
            interp(declarations->getHead());
            declarations = declarations->getRest();
        }
        
        runtime::VarEntry result = interp(e->getBody());
        
        env.getVarEnv()->endScope();
        renv.endScope();
        
        return result;
	}

	const runtime::VarEntry Interpreter::interp_student(const BreakExp* e)
	{
		//no implementation needed

		return runtime::VarEntry();  //return VOID
	}

	const runtime::VarEntry Interpreter::interp_student(const ArrayExp* e)
	{
		throw runtime_error("Array data type supported currently!");
	}

	void Interpreter::interp_student(const FunctionDec* d)
	{
		//no implementation needed
	}

	void Interpreter::interp_student(const VarDec* d)
	{
		//no implementation needed
	}

	void Interpreter::interp_student(const TypeDec* d)
	{
		//no implementation needed
	}

	types::Type* Interpreter::interp_student(const NameTy* t)
	{
		return env.getTypeEnv()->lookup(t->getName()).info;
	}

	types::Type* Interpreter::interp_student(const RecordTy* t)
	{
		throw runtime_error("Record data type not supported!");
	}

	types::Type* Interpreter::interp_student(const ArrayTy* t)
	{
		throw runtime_error("Array data type not supported!");
	}

} // end of namespace semantics
