#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_BUFFERS_STANDARDFORMAT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202CB60)
#define SYSTEM_BUFFERS_STANDARDFORMAT_EQUALS_OFFSET UNITYSDK_OFFSET(0x202CAF0)
#define SYSTEM_BUFFERS_STANDARDFORMAT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x202CB50)
#define SYSTEM_BUFFERS_STANDARDFORMAT_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x202CAC0)
#define SYSTEM_BUFFERS_STANDARDFORMAT_GET_PRECISION_OFFSET UNITYSDK_OFFSET(0x202CAB0)
#define SYSTEM_BUFFERS_STANDARDFORMAT_GET_SYMBOL_OFFSET UNITYSDK_OFFSET(0x29CD0)
#define SYSTEM_BUFFERS_STANDARDFORMAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x17D148D0)
#define SYSTEM_BUFFERS_STANDARDFORMAT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x202CB80)
#define SYSTEM_BUFFERS_STANDARDFORMAT__CTOR_OFFSET UNITYSDK_OFFSET(0x202CAE0)

namespace System::Buffers
{
	inline static constexpr unsigned int StandardFormat_TypeDefinitionIndex = 4898;

	struct alignas(1) StandardFormat
	{
		::System::Byte _format; // 0x10
		::System::Byte _precision; // 0x11

		::System::Void _ctor(::System::Char symbol, ::System::Byte precision)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT__CTOR_OFFSET))(this, symbol, precision);
		}

		::System::Char get_Symbol()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_GET_SYMBOL_OFFSET))(this);
		}

		::System::Byte get_Precision()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_GET_PRECISION_OFFSET))(this);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_GET_ISDEFAULT_OFFSET))(this);
		}

		static ::System::Buffers::StandardFormat op_Implicit(::System::Char symbol)
		{
			return ((::System::Buffers::StandardFormat(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_OP_IMPLICIT_OFFSET))(symbol);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Buffers::StandardFormat other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Buffers::StandardFormat))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_EQUALS_1_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_BUFFERS_STANDARDFORMAT_TOSTRING_OFFSET))(this);
		}
	};
}
