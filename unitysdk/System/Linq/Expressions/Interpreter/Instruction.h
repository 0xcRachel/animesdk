#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Linq::Expressions::Interpreter { class InterpretedFrame; }

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_CONSUMEDCONTINUATIONS_OFFSET UNITYSDK_OFFSET(0x17CC9980)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_CONSUMEDSTACK_OFFSET UNITYSDK_OFFSET(0x17CC9960)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_PRODUCEDCONTINUATIONS_OFFSET UNITYSDK_OFFSET(0x17CC9990)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_PRODUCEDSTACK_OFFSET UNITYSDK_OFFSET(0x17CC9970)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_NULLCHECK_OFFSET UNITYSDK_OFFSET(0x17CB9A30)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17CC99A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17CBB030)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int Instruction_TypeDefinitionIndex = 3409;

	class Instruction : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ConsumedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_CONSUMEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ProducedStack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_PRODUCEDSTACK_OFFSET))(this);
		}

		::System::Int32 get_ConsumedContinuations()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_CONSUMEDCONTINUATIONS_OFFSET))(this);
		}

		::System::Int32 get_ProducedContinuations()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_GET_PRODUCEDCONTINUATIONS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_TOSTRING_OFFSET))(this);
		}

		static ::System::Void NullCheck(::System::Object* o)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTION_NULLCHECK_OFFSET))(o);
		}
	};
}
