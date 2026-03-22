#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_INDEX_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x29260)
#define SYSTEM_INDEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FFA6E0)
#define SYSTEM_INDEX_FROMEND_OFFSET UNITYSDK_OFFSET(0x156AC8E0)
#define SYSTEM_INDEX_FROMSTART_OFFSET UNITYSDK_OFFSET(0x156AC870)
#define SYSTEM_INDEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x59D0)
#define SYSTEM_INDEX_GETOFFSET_OFFSET UNITYSDK_OFFSET(0x1FFA640)
#define SYSTEM_INDEX_GET_END_OFFSET UNITYSDK_OFFSET(0x156AC860)
#define SYSTEM_INDEX_GET_ISFROMEND_OFFSET UNITYSDK_OFFSET(0x1FFA630)
#define SYSTEM_INDEX_GET_START_OFFSET UNITYSDK_OFFSET(0x156AC850)
#define SYSTEM_INDEX_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1FFA620)
#define SYSTEM_INDEX_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x156ACA90)
#define SYSTEM_INDEX_TOSTRINGFROMEND_OFFSET UNITYSDK_OFFSET(0x1FFA750)
#define SYSTEM_INDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FFA740)
#define SYSTEM_INDEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x29250)
#define SYSTEM_INDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFA5B0)

namespace System
{
	inline static constexpr unsigned int Index_TypeDefinitionIndex = 9853;

	struct alignas(4) Index
	{
		::System::Int32 _value; // 0x10

		::System::Void _ctor(::System::Int32 value, ::System::Boolean fromEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_INDEX__CTOR_OFFSET))(this, value, fromEnd);
		}

		::System::Void _ctor_1(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_INDEX__CTOR_1_OFFSET))(this, value);
		}

		static ::System::Index get_Start()
		{
			return ((::System::Index(*)())((::PBYTE)hIl2Cpp + SYSTEM_INDEX_GET_START_OFFSET))();
		}

		static ::System::Index get_End()
		{
			return ((::System::Index(*)())((::PBYTE)hIl2Cpp + SYSTEM_INDEX_GET_END_OFFSET))();
		}

		static ::System::Index FromStart(::System::Int32 value)
		{
			return ((::System::Index(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_FROMSTART_OFFSET))(value);
		}

		static ::System::Index FromEnd(::System::Int32 value)
		{
			return ((::System::Index(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_FROMEND_OFFSET))(value);
		}

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean get_IsFromEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_GET_ISFROMEND_OFFSET))(this);
		}

		::System::Int32 GetOffset(::System::Int32 length)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_GETOFFSET_OFFSET))(this, length);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_EQUALS_OFFSET))(this, value);
		}

		::System::Boolean Equals_1(::System::Index other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Index))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Index op_Implicit(::System::Int32 value)
		{
			return ((::System::Index(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_OP_IMPLICIT_OFFSET))(value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_TOSTRING_OFFSET))(this);
		}

		::System::String* ToStringFromEnd()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INDEX_TOSTRINGFROMEND_OFFSET))(this);
		}
	};
}
