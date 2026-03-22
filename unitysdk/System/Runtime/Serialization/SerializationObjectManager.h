#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Collections { class Hashtable; }
namespace System::Runtime::Serialization { class SerializationEventHandler; }

#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_ADDONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x15D428B0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_RAISEONSERIALIZEDEVENT_OFFSET UNITYSDK_OFFSET(0x15D42950)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_REGISTEROBJECT_OFFSET UNITYSDK_OFFSET(0x15D426F0)
#define SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D42630)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SerializationObjectManager_TypeDefinitionIndex = 1118;

	class SerializationObjectManager : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::SerializationEventHandler* m_onSerializedHandler; // 0x10
		::System::Collections::Hashtable* m_objectSeenTable; // 0x18
		::System::Runtime::Serialization::StreamingContext m_context; // 0x20

		::System::Void _ctor(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER__CTOR_OFFSET))(this, context);
		}

		::System::Void RegisterObject(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_REGISTEROBJECT_OFFSET))(this, obj);
		}

		::System::Void RaiseOnSerializedEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_RAISEONSERIALIZEDEVENT_OFFSET))(this);
		}

		::System::Void AddOnSerialized(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SERIALIZATIONOBJECTMANAGER_ADDONSERIALIZED_OFFSET))(this, obj);
		}
	};
}
