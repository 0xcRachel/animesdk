#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Remoting/Messaging/MessageDictionary.h"

namespace System { class String; }
namespace System::Runtime::Remoting::Messaging { class IMethodReturnMessage; }

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRETURNDICTIONARY__CCTOR_OFFSET UNITYSDK_OFFSET(0x163CA800)
#define SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRETURNDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x163C9E90)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int MethodReturnDictionary_TypeDefinitionIndex = 1316;

	class MethodReturnDictionary : public ::System::Runtime::Remoting::Messaging::MessageDictionary
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_InternalExceptionKeys()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MethodReturnDictionary_TypeDefinitionIndex)->GetStaticField(0x118A0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_InternalReturnKeys()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MethodReturnDictionary_TypeDefinitionIndex)->GetStaticField(0x118A8);
		}

		::System::Void _ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Remoting::Messaging::IMethodReturnMessage*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRETURNDICTIONARY__CTOR_OFFSET))(this, message);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_METHODRETURNDICTIONARY__CCTOR_OFFSET))();
		}
	};
}
