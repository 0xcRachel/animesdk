#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x19C739B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x19C73940)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x19C73960)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x19C73950)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19C739A0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int NotEqualInstruction_TypeDefinitionIndex = 3546;

	class NotEqualInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C10);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_DoubleLiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C18);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C20);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C28);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C30);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt64LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C38);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Char()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C40);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Byte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C48);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_SingleLiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C50);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C58);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_CharLiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C60);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C68);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt32LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C70);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_SByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C78);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Single()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C80);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Boolean()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C88);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_SByteLiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C90);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt16LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10C98);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10CA0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_ByteLiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10CA8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10CB0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32LiftedToNull()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10CB8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Double()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10CC0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_reference()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(NotEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x10CC8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type, ::System::Boolean liftedToNull)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_NOTEQUALINSTRUCTION_CREATE_OFFSET))(type, liftedToNull);
		}
	};
}
