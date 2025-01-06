#pragma once
#include "ErrorMsg.h"
#include "Env.h"
#include "RuntimeStack.h"

using namespace absyn;

namespace interpreter
{

	class Interpreter 
	{
	private:
		symbol::Env					env;	//symbol tables
		runtime::RuntimeStack		renv;	//runtime environment
		ErrorMsg					*errormsg;

		class BreakExpException
		{};

	public:
		Interpreter(ErrorMsg *r)
			: errormsg(r)
		{}

		const runtime::VarEntry interp(const Absyn *v);

		//expressions
		const runtime::VarEntry interp(const Exp *e);

		const runtime::VarEntry interp(const OpExp *e);
		const runtime::VarEntry interp_student(const OpExp* e);
		const runtime::VarEntry interp_teacher(const OpExp* e);

		const runtime::VarEntry interp(const VarExp *e);
		const runtime::VarEntry interp_student(const VarExp* e);
		const runtime::VarEntry interp_teacher(const VarExp* e);

		const runtime::VarEntry interp(const NilExp *e);
		const runtime::VarEntry interp_student(const NilExp* e);
		const runtime::VarEntry interp_teacher(const NilExp* e);

		const runtime::VarEntry interp(const IntExp *e);
		const runtime::VarEntry interp_student(const IntExp* e);
		const runtime::VarEntry interp_teacher(const IntExp* e);

		const runtime::VarEntry interp(const StringExp *e);
		const runtime::VarEntry interp_student(const StringExp* e);
		const runtime::VarEntry interp_teacher(const StringExp* e);

		const runtime::VarEntry interp(const CallExp *e);
		const runtime::VarEntry interp_student(const CallExp* e);
		const runtime::VarEntry interp_teacher(const CallExp* e);

		const runtime::VarEntry interp(const RecordExp *e);
		const runtime::VarEntry interp_student(const RecordExp* e);
		const runtime::VarEntry interp_teacher(const RecordExp* e);

		const runtime::VarEntry interp(const SeqExp *e);
		const runtime::VarEntry interp_student(const SeqExp* e);
		const runtime::VarEntry interp_teacher(const SeqExp* e);

		const runtime::VarEntry interp(const AssignExp *e);
		const runtime::VarEntry interp_student(const AssignExp* e);
		const runtime::VarEntry interp_teacher(const AssignExp* e);

		const runtime::VarEntry interp(const IfExp *e);
		const runtime::VarEntry interp_student(const IfExp* e);
		const runtime::VarEntry interp_teacher(const IfExp* e);

		const runtime::VarEntry interp(const WhileExp *e);
		const runtime::VarEntry interp_student(const WhileExp* e);
		const runtime::VarEntry interp_teacher(const WhileExp* e);

		const runtime::VarEntry interp(const ForExp *e);
		const runtime::VarEntry interp_student(const ForExp* e);
		const runtime::VarEntry interp_teacher(const ForExp* e);

		const runtime::VarEntry interp(const BreakExp *e);
		const runtime::VarEntry interp_student(const BreakExp* e);
		const runtime::VarEntry interp_teacher(const BreakExp* e);

		const runtime::VarEntry interp(const LetExp *e);
		const runtime::VarEntry interp_student(const LetExp* e);
		const runtime::VarEntry interp_teacher(const LetExp* e);

		const runtime::VarEntry interp(const ArrayExp *e);
		const runtime::VarEntry interp_student(const ArrayExp* e);
		const runtime::VarEntry interp_teacher(const ArrayExp* e);
	
		//declarations
		void interp(const Dec* d);

		void interp(const FunctionDec *d);
		void interp_student(const FunctionDec* d);
		void interp_teacher(const FunctionDec* d);

		void interp(const VarDec *d);
		void interp_student(const VarDec* d);
		void interp_teacher(const VarDec* d);

		void interp(const TypeDec *d);
		void interp_student(const TypeDec* d);
		void interp_teacher(const TypeDec* d);

		//type info
		types::Type* interp(const Ty* t);

		types::Type* interp(const NameTy *t);
		types::Type* interp_student(const NameTy* t);
		types::Type* interp_teacher(const NameTy* t);

		types::Type* interp(const RecordTy *t);
		types::Type* interp_student(const RecordTy* t);
		types::Type* interp_teacher(const RecordTy* t);

		types::Type* interp(const ArrayTy *t);
		types::Type* interp_student(const ArrayTy* t);
		types::Type* interp_teacher(const ArrayTy* t);


		//if newvalue is NULL, it means retrieve
		//if newvalue is not NULL, it means update
		//variables
		runtime::VarEntry& interp(const Var *v);

		runtime::VarEntry& interp(const SimpleVar *v);
		runtime::VarEntry& interp_student(const SimpleVar* v);
		runtime::VarEntry& interp_teacher(const SimpleVar* v);

		runtime::VarEntry& interp(const FieldVar *v);
		runtime::VarEntry& interp_student(const FieldVar* v);
		runtime::VarEntry& interp_teacher(const FieldVar* v);

		runtime::VarEntry& interp(const SubscriptVar *v);
		runtime::VarEntry& interp_student(const SubscriptVar* v);
		runtime::VarEntry& interp_teacher(const SubscriptVar* v);


	};
} // end of namespace semantics
