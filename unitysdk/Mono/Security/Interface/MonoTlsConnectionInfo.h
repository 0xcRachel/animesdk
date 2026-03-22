#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Interface/CipherSuiteCode.h"
#include "unitysdk/Mono/Security/Interface/TlsProtocols.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_CIPHERSUITECODE_OFFSET UNITYSDK_OFFSET(0x15A8DD20)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x15A8DD40)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_CIPHERSUITECODE_OFFSET UNITYSDK_OFFSET(0x15A8DD30)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_PEERDOMAINNAME_OFFSET UNITYSDK_OFFSET(0x15A8DD60)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_PROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x15A8DD50)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15A8DD70)
#define MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x15A8DE10)

namespace Mono::Security::Interface
{
	inline static constexpr unsigned int MonoTlsConnectionInfo_TypeDefinitionIndex = 2273;

	class MonoTlsConnectionInfo : public ::System::Object
	{
	public:
		::System::String* _PeerDomainName_k__BackingField; // 0x10
		::Mono::Security::Interface::CipherSuiteCode _CipherSuiteCode_k__BackingField; // 0x18
		::Mono::Security::Interface::TlsProtocols _ProtocolVersion_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO__CTOR_OFFSET))(this);
		}

		::Mono::Security::Interface::CipherSuiteCode get_CipherSuiteCode()
		{
			return ((::Mono::Security::Interface::CipherSuiteCode(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_CIPHERSUITECODE_OFFSET))(this);
		}

		::System::Void set_CipherSuiteCode(::Mono::Security::Interface::CipherSuiteCode value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::CipherSuiteCode))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_CIPHERSUITECODE_OFFSET))(this, value);
		}

		::Mono::Security::Interface::TlsProtocols get_ProtocolVersion()
		{
			return ((::Mono::Security::Interface::TlsProtocols(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_GET_PROTOCOLVERSION_OFFSET))(this);
		}

		::System::Void set_ProtocolVersion(::Mono::Security::Interface::TlsProtocols value)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Interface::TlsProtocols))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_PROTOCOLVERSION_OFFSET))(this, value);
		}

		::System::Void set_PeerDomainName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_SET_PEERDOMAINNAME_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_INTERFACE_MONOTLSCONNECTIONINFO_TOSTRING_OFFSET))(this);
		}
	};
}
