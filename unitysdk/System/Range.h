#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Index.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_RANGE_ENDAT_OFFSET UNITYSDK_OFFSET(0x156ACF70)
#define SYSTEM_RANGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FFA810)
#define SYSTEM_RANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FFA7B0)
#define SYSTEM_RANGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FFA830)
#define SYSTEM_RANGE_GETOFFSETANDLENGTH_OFFSET UNITYSDK_OFFSET(0x1FFA8D0)
#define SYSTEM_RANGE_GET_ALL_OFFSET UNITYSDK_OFFSET(0x156ACF80)
#define SYSTEM_RANGE_GET_END_OFFSET UNITYSDK_OFFSET(0x1DAE0)
#define SYSTEM_RANGE_GET_START_OFFSET UNITYSDK_OFFSET(0x59D0)
#define SYSTEM_RANGE_STARTAT_OFFSET UNITYSDK_OFFSET(0x156ACF60)
#define SYSTEM_RANGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FFA8C0)
#define SYSTEM_RANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x74250)

namespace System
{
	inline static constexpr unsigned int Range_TypeDefinitionIndex = 9855;

	struct alignas(4) Range
	{
		::System::Index _Start_k__BackingField; // 0x10
		::System::Index _End_k__BackingField; // 0x14

		::System::Void _ctor(::System::Index start, ::System::Index end)
		{
			return ((::System::Void(*)(::PVOID, ::System::Index, ::System::Index))((::PBYTE)hIl2Cpp + SYSTEM_RANGE__CTOR_OFFSET))(this, start, end);
		}

		::System::Index get_Start()
		{
			return ((::System::Index(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANGE_GET_START_OFFSET))(this);
		}

		::System::Index get_End()
		{
			return ((::System::Index(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANGE_GET_END_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RANGE_EQUALS_OFFSET))(this, value);
		}

		::System::Boolean Equals_1(::System::Range other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Range))((::PBYTE)hIl2Cpp + SYSTEM_RANGE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RANGE_TOSTRING_OFFSET))(this);
		}

		static ::System::Range StartAt(::System::Index start)
		{
			return ((::System::Range(*)(::System::Index))((::PBYTE)hIl2Cpp + SYSTEM_RANGE_STARTAT_OFFSET))(start);
		}

		static ::System::Range EndAt(::System::Index end)
		{
			return ((::System::Range(*)(::System::Index))((::PBYTE)hIl2Cpp + SYSTEM_RANGE_ENDAT_OFFSET))(end);
		}

		static ::System::Range get_All()
		{
			return ((::System::Range(*)())((::PBYTE)hIl2Cpp + SYSTEM_RANGE_GET_ALL_OFFSET))();
		}

		/*
		::System::ValueTuple_2<::System::Int32, ::System::Int32> GetOffsetAndLength(::System::Int32 length)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RANGE_GETOFFSETANDLENGTH_OFFSET))(this, length);
		}
		*/
	};
}
