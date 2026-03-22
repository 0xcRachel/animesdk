#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x17CCD030)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x17CD2B30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x17CD2B50)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x17CD2B40)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17CD2B90)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LessThanOrEqualInstruction_TypeDefinitionIndex = 3440;

	class LessThanOrEqualInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullUInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x18580);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x18588);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullDouble()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x18590);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x18598);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullSByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x185A0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x185A8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x185B0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_SByte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x185B8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullChar()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x185C0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x185C8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x185D0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x185D8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Char()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x185E0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Byte()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x185E8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullUInt64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x185F0);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_UInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x185F8);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullSingle()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x18600);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullUInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x18608);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_liftedToNullInt32()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x18610);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Double()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x18618);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x18620);
		}
		static ::System::Linq::Expressions::Interpreter::Instruction** StaticGet_s_Single()
		{
			return (::System::Linq::Expressions::Interpreter::Instruction**)Il2CppClass::FromTypeDefinitionIndex(LessThanOrEqualInstruction_TypeDefinitionIndex)->GetStaticField(0x18628);
		}
		::System::Object* _nullValue; // 0x10

		::System::Void _ctor(::System::Object* nullValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION__CTOR_OFFSET))(this, nullValue);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* type, ::System::Boolean liftedToNull)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LESSTHANOREQUALINSTRUCTION_CREATE_OFFSET))(type, liftedToNull);
		}
	};
}
