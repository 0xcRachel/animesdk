#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_SEQUENCEPOSITION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2389E50)
#define SYSTEM_SEQUENCEPOSITION_EQUALS_OFFSET UNITYSDK_OFFSET(0x2389E00)
#define SYSTEM_SEQUENCEPOSITION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2389EE0)
#define SYSTEM_SEQUENCEPOSITION_GETINTEGER_OFFSET UNITYSDK_OFFSET(0x608310)
#define SYSTEM_SEQUENCEPOSITION_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x5078B0)
#define SYSTEM_SEQUENCEPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x6163F0)

namespace System
{
	inline static constexpr unsigned int SequencePosition_TypeDefinitionIndex = 4980;

	struct alignas(8) SequencePosition
	{
		::System::Object* _object; // 0x10
		::System::Int32 _integer; // 0x18

		::System::Void _ctor(::System::Object* object, ::System::Int32 integer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION__CTOR_OFFSET))(this, object, integer);
		}

		::System::Object* GetObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION_GETOBJECT_OFFSET))(this);
		}

		::System::Int32 GetInteger()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION_GETINTEGER_OFFSET))(this);
		}

		::System::Boolean Equals(::System::SequencePosition other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::SequencePosition))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION_GETHASHCODE_OFFSET))(this);
		}
	};
}
