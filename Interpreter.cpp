#include "Interpreter.h"

using namespace symbol;

#define student_version interp_student
#define teacher_version interp_teacher

namespace interpreter
{
	const runtime::VarEntry Interpreter::interp(const Absyn *v)
	{
		if ( dynamic_cast<const Exp *>(v) != NULL )
			return interp( dynamic_cast<const Exp *>(v) );
		else
			throw runtime_error("invalid node");
	}

	const runtime::VarEntry Interpreter::interp(const Exp* e)
	{
		if (dynamic_cast<const OpExp*>(e) != NULL)
			return interp((const OpExp*)e);
		else if (dynamic_cast<const VarExp*>(e) != NULL)
			return interp((const VarExp*)e);
		else if (dynamic_cast<const NilExp*>(e) != NULL)
			return interp((const NilExp*)e);
		else if (dynamic_cast<const IntExp*>(e) != NULL)
			return interp((const IntExp*)e);
		else if (dynamic_cast<const StringExp*>(e) != NULL)
			return interp((const StringExp*)e);
		else if (dynamic_cast<const CallExp*>(e) != NULL)
			return interp((const CallExp*)e);
		else if (dynamic_cast<const RecordExp*>(e) != NULL)
			return interp((const RecordExp*)e);
		else if (dynamic_cast<const SeqExp*>(e) != NULL)
			return interp((const SeqExp*)e);
		else if (dynamic_cast<const AssignExp*>(e) != NULL)
			return interp((const AssignExp*)e);
		else if (dynamic_cast<const IfExp*>(e) != NULL)
			return interp((const IfExp*)e);
		else if (dynamic_cast<const WhileExp*>(e) != NULL)
			return interp((const WhileExp*)e);
		else if (dynamic_cast<const ForExp*>(e) != NULL)
			return interp((const ForExp*)e);
		else if (dynamic_cast<const BreakExp*>(e) != NULL)
			return interp((const BreakExp*)e);
		else if (dynamic_cast<const LetExp*>(e) != NULL)
			return interp((const LetExp*)e);
		else if (dynamic_cast<const ArrayExp*>(e) != NULL)
			return interp((const ArrayExp*)e);
		else
			throw new runtime_error("ExpType.interp(Exp*)");
	}

	runtime::VarEntry& Interpreter::interp(const Var* v)
	{
		if (dynamic_cast<const SimpleVar*>(v) != NULL)
			return interp((const SimpleVar*)v);
		else if (dynamic_cast<const FieldVar*>(v) != NULL)
			return interp((const FieldVar*)v);
		else if (dynamic_cast<const SubscriptVar*>(v) != NULL)
			return interp((const SubscriptVar*)v);
		else
			throw new runtime_error("ExpType.interp(Var*)");
	}

	void Interpreter::interp(const Dec* d)
	{
		if (dynamic_cast<const TypeDec*>(d) != NULL)
			return interp((const TypeDec*)d);
		else if (dynamic_cast<const VarDec*>(d) != NULL)
			return interp((const VarDec*)d);
		else if (dynamic_cast<const FunctionDec*>(d) != NULL)
			return interp((const FunctionDec*)d);
		else
			throw new runtime_error("ExpType.interp(Dec*)");
	}

	types::Type* Interpreter::interp(const Ty* t)
	{
		if (dynamic_cast<const NameTy*>(t) != NULL)
			return interp((const NameTy*)t);
		else if (dynamic_cast<const ArrayTy*>(t) != NULL)
			return interp((const ArrayTy*)t);
		else if (dynamic_cast<const RecordTy*>(t) != NULL)
			return interp((const RecordTy*)t);
		else
			throw new runtime_error("ExpType.interp(Ty*)");
	}

	runtime::VarEntry& Interpreter::interp(const SimpleVar *v)
	{
		return student_version(v);
	}

	runtime::VarEntry& Interpreter::interp(const FieldVar *v)
	{
		return teacher_version(v);
	}

	runtime::VarEntry& Interpreter::interp(const SubscriptVar *v)
	{
		return teacher_version(v);
	}

	const runtime::VarEntry Interpreter::interp(const OpExp *e)
	{
		return student_version(e);
	}

	const runtime::VarEntry Interpreter::interp(const VarExp *e)
	{
		return student_version(e);
	}

	const runtime::VarEntry Interpreter::interp(const NilExp *e)
	{
		return teacher_version(e);
	}

	const runtime::VarEntry Interpreter::interp(const IntExp *e)
	{
		return student_version(e);
	}

	const runtime::VarEntry Interpreter::interp(const StringExp *e)
	{
		return student_version(e);
	}

	const runtime::VarEntry Interpreter::interp(const CallExp *e)
	{
		return teacher_version(e);
	}

	const runtime::VarEntry Interpreter::interp(const RecordExp *e)
	{
		return teacher_version(e);
	}

	const runtime::VarEntry Interpreter::interp(const SeqExp *e)
	{
		return student_version(e);
	}

	const runtime::VarEntry Interpreter::interp(const AssignExp *e)
	{
		return student_version(e);
	}

	const runtime::VarEntry Interpreter::interp(const IfExp *e)
	{
		return student_version(e);
	}

	const runtime::VarEntry Interpreter::interp(const WhileExp *e)
	{
		return student_version(e);
	}

	const runtime::VarEntry Interpreter::interp(const ForExp *e)
	{
		return student_version(e);
	}

	const runtime::VarEntry Interpreter::interp(const BreakExp *e)
	{
		return teacher_version(e);
	}

	const runtime::VarEntry Interpreter::interp(const LetExp *e)
	{
		return student_version(e);
	}

	const runtime::VarEntry Interpreter::interp(const ArrayExp *e)
	{
		return student_version(e);
	}

	void Interpreter::interp(const FunctionDec *d)
	{
		teacher_version(d);
	}

	void Interpreter::interp(const VarDec *d)
	{
		teacher_version(d);
	}

	void Interpreter::interp(const TypeDec *d)
	{
		teacher_version(d);
	}

	types::Type* Interpreter::interp(const NameTy *t)
	{
		return teacher_version(t);
	}

	types::Type* Interpreter::interp(const RecordTy *t)
	{
		return teacher_version(t);
	}

	types::Type* Interpreter::interp(const ArrayTy *t)
	{
		return teacher_version(t);
	}


} // end of namespace semantics
