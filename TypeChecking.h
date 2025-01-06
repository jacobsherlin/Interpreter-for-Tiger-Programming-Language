#pragma once
#include "ErrorMsg.h"
#include "Env.h"

using namespace absyn;

namespace semantics
{

	class TypeChecking
	{
	private:
		symbol::Env										env;
		ErrorMsg* errormsg;
		symbol::SymbolTable<symbol::SymTabEntry>		lv;
		//used to store current for-loop variables which
		//cannot be updated, and store the information
		//about current break is legal or illegal
		//You don't need to use it in project #5

//constants
		static const types::INT* int_type;
		static const types::STRING* str_type;
		static const types::NIL* nil_type;
		static const types::VOID* void_type;

		static const string			breakSign;
		bool						errorFlag;


	public:
		TypeChecking(ErrorMsg* r);

		void error(const Absyn* a, string msg);

		bool hasSemanticError() const;

		void checkInt(const types::Type* et, const Absyn* a);

		//insert a variable into the var/function symbol table
		void insertVar(string name, symbol::SymTabEntry entry);

		//insert a function into the var/function symbol table
		void insertFunc(string name, symbol::SymTabEntry entry);

		//insert a type into the type symbol table
		void insertType(string name, symbol::SymTabEntry entry);

		const types::Type* visit(const Absyn* v);

		//variables
		const types::Type* visit(const Var* v);

		const types::Type* visit(const SimpleVar* v);
		const types::Type* visit_student(const SimpleVar* v);
		const types::Type* visit_teacher(const SimpleVar* v);

		const types::Type* visit(const FieldVar* v);
		const types::Type* visit_student(const FieldVar* v);
		const types::Type* visit_teacher(const FieldVar* v);

		const types::Type* visit(const SubscriptVar* v);
		const types::Type* visit_student(const SubscriptVar* v);
		const types::Type* visit_teacher(const SubscriptVar* v);

		//expressions
		const types::Type* visit(const Exp* e);

		const types::Type* visit(const OpExp* e);
		const types::Type* visit_student(const OpExp* e);
		const types::Type* visit_teacher(const OpExp* e);

		const types::Type* visit(const VarExp* e);
		const types::Type* visit_student(const VarExp* e);
		const types::Type* visit_teacher(const VarExp* e);

		const types::Type* visit(const NilExp* e);
		const types::Type* visit_student(const NilExp* e);
		const types::Type* visit_teacher(const NilExp* e);

		const types::Type* visit(const IntExp* e);
		const types::Type* visit_student(const IntExp* e);
		const types::Type* visit_teacher(const IntExp* e);

		const types::Type* visit(const StringExp* e);
		const types::Type* visit_student(const StringExp* e);
		const types::Type* visit_teacher(const StringExp* e);

		const types::Type* visit(const CallExp* e);
		const types::Type* visit_student(const CallExp* e);
		const types::Type* visit_teacher(const CallExp* e);

		const types::Type* visit(const RecordExp* e);
		const types::Type* visit_student(const RecordExp* e);
		const types::Type* visit_teacher(const RecordExp* e);

		const types::Type* visit(const SeqExp* e);
		const types::Type* visit_student(const SeqExp* e);
		const types::Type* visit_teacher(const SeqExp* e);

		const types::Type* visit(const AssignExp* e);
		const types::Type* visit_student(const AssignExp* e);
		const types::Type* visit_teacher(const AssignExp* e);

		const types::Type* visit(const IfExp* e);
		const types::Type* visit_student(const IfExp* e);
		const types::Type* visit_teacher(const IfExp* e);

		const types::Type* visit(const WhileExp* e);
		const types::Type* visit_student(const WhileExp* e);
		const types::Type* visit_teacher(const WhileExp* e);

		const types::Type* visit(const ForExp* e);
		const types::Type* visit_student(const ForExp* e);
		const types::Type* visit_teacher(const ForExp* e);

		const types::Type* visit(const BreakExp* e);
		const types::Type* visit_student(const BreakExp* e);
		const types::Type* visit_teacher(const BreakExp* e);

		const types::Type* visit(const LetExp* e);
		const types::Type* visit_student(const LetExp* e);
		const types::Type* visit_teacher(const LetExp* e);

		const types::Type* visit(const ArrayExp* e);
		const types::Type* visit_student(const ArrayExp* e);
		const types::Type* visit_teacher(const ArrayExp* e);

		//Declarations
		const types::Type* visit(const Dec* d);

		const types::Type* visit(const FunctionDec* d);
		const types::Type* visit_student(const FunctionDec* d);
		const types::Type* visit_teacher(const FunctionDec* d);

		const types::Type* visit(const VarDec* d);
		const types::Type* visit_student(const VarDec* d);
		const types::Type* visit_teacher(const VarDec* d);

		const types::Type* visit(const TypeDec* d);
		const types::Type* visit_student(const TypeDec* d);
		const types::Type* visit_teacher(const TypeDec* d);

		//types
		const types::Type* visit(const Ty* t);

		const types::Type* visit(const NameTy* t);
		const types::Type* visit_student(const NameTy* t);
		const types::Type* visit_teacher(const NameTy* t);

		const types::Type* visit(const RecordTy* t);
		const types::Type* visit_student(const RecordTy* t);
		const types::Type* visit_teacher(const RecordTy* t);

		const types::Type* visit(const ArrayTy* t);
		const types::Type* visit_student(const ArrayTy* t);
		const types::Type* visit_teacher(const ArrayTy* t);


	};
} // end of namespace semantics
