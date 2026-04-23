#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class ArrayList; }
namespace System::Runtime::Remoting { class ObjRef; }

#define SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYDISCONNECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x17ADF690)
#define SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYMARSHALEDOBJECT_OFFSET UNITYSDK_OFFSET(0x17ADDB30)
#define SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYUNMARSHALEDOBJECT_OFFSET UNITYSDK_OFFSET(0x17ADCC30)
#define SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES__CCTOR_OFFSET UNITYSDK_OFFSET(0x17ADFA40)

namespace System::Runtime::Remoting::Services
{
	inline static constexpr unsigned int TrackingServices_TypeDefinitionIndex = 1225;

	class TrackingServices : public ::System::Object
	{
	public:
		static ::System::Collections::ArrayList** StaticGet__handlers()
		{
			return (::System::Collections::ArrayList**)Il2CppClass::FromTypeDefinitionIndex(TrackingServices_TypeDefinitionIndex)->GetStaticField(0x9000);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES__CCTOR_OFFSET))();
		}

		static ::System::Void NotifyMarshaledObject(::System::Object* obj, ::System::Runtime::Remoting::ObjRef* or)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Runtime::Remoting::ObjRef*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYMARSHALEDOBJECT_OFFSET))(obj, or);
		}

		static ::System::Void NotifyUnmarshaledObject(::System::Object* obj, ::System::Runtime::Remoting::ObjRef* or)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Runtime::Remoting::ObjRef*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYUNMARSHALEDOBJECT_OFFSET))(obj, or);
		}

		static ::System::Void NotifyDisconnectedObject(::System::Object* obj)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_SERVICES_TRACKINGSERVICES_NOTIFYDISCONNECTEDOBJECT_OFFSET))(obj);
		}
	};
}
