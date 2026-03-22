#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Interpreter/Instruction.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CREATE_OFFSET UNITYSDK_OFFSET(0x17CBB0A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x17CBB040)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x17CBB060)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x17CBB050)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBB700)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int CastInstruction_TypeDefinitionIndex = 3627;

	class CastInstruction : public ::System::Linq::Expressions::Interpreter::Instruction
	{
	public:
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Decimal()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0x17660);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_String()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0x17668);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_UInt64()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0x17670);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_UInt16()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0x17678);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_UInt32()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0x17680);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Int16()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0x17688);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Single()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0x17690);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Char()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0x17698);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Byte()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0x176A0);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_SByte()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0x176A8);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Int64()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0x176B0);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Int32()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0x176B8);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_DateTime()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0x176C0);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Boolean()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0x176C8);
		}
		static ::System::Linq::Expressions::Interpreter::CastInstruction** StaticGet_s_Double()
		{
			return (::System::Linq::Expressions::Interpreter::CastInstruction**)Il2CppClass::FromTypeDefinitionIndex(CastInstruction_TypeDefinitionIndex)->GetStaticField(0x176D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::String* get_InstructionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_GET_INSTRUCTIONNAME_OFFSET))(this);
		}

		static ::System::Linq::Expressions::Interpreter::Instruction* Create(::System::Type* t)
		{
			return ((::System::Linq::Expressions::Interpreter::Instruction*(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CASTINSTRUCTION_CREATE_OFFSET))(t);
		}
	};
}
