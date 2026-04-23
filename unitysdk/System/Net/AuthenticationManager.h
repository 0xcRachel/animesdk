#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Net { class Authorization; }
namespace System::Net { class ICredentialPolicy; }
namespace System::Net { class ICredentials; }
namespace System::Net { class WebRequest; }

#define SYSTEM_NET_AUTHENTICATIONMANAGER_AUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x18329E80)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_DOAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x18329F80)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_ENSUREMODULES_OFFSET UNITYSDK_OFFSET(0x18329C00)
#define SYSTEM_NET_AUTHENTICATIONMANAGER_PREAUTHENTICATE_OFFSET UNITYSDK_OFFSET(0x1832A630)
#define SYSTEM_NET_AUTHENTICATIONMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1832AD10)

namespace System::Net
{
	inline static constexpr unsigned int AuthenticationManager_TypeDefinitionIndex = 2811;

	class AuthenticationManager : public ::System::Object
	{
	public:
		static ::System::Net::ICredentialPolicy** StaticGet_credential_policy()
		{
			return (::System::Net::ICredentialPolicy**)Il2CppClass::FromTypeDefinitionIndex(AuthenticationManager_TypeDefinitionIndex)->GetStaticField(0x12080);
		}
		static ::System::Collections::ArrayList** StaticGet_modules()
		{
			return (::System::Collections::ArrayList**)Il2CppClass::FromTypeDefinitionIndex(AuthenticationManager_TypeDefinitionIndex)->GetStaticField(0x12088);
		}
		static ::System::Object** StaticGet_locker()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AuthenticationManager_TypeDefinitionIndex)->GetStaticField(0x12090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void EnsureModules()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_ENSUREMODULES_OFFSET))();
		}

		static ::System::Net::Authorization* Authenticate(::System::String* challenge, ::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials)
		{
			return ((::System::Net::Authorization*(*)(::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_AUTHENTICATE_OFFSET))(challenge, request, credentials);
		}

		static ::System::Net::Authorization* DoAuthenticate(::System::String* challenge, ::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials)
		{
			return ((::System::Net::Authorization*(*)(::System::String*, ::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_DOAUTHENTICATE_OFFSET))(challenge, request, credentials);
		}

		static ::System::Net::Authorization* PreAuthenticate(::System::Net::WebRequest* request, ::System::Net::ICredentials* credentials)
		{
			return ((::System::Net::Authorization*(*)(::System::Net::WebRequest*, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONMANAGER_PREAUTHENTICATE_OFFSET))(request, credentials);
		}
	};
}
