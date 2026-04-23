#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Protocol/Ntlm/MessageBase.h"
#include "unitysdk/Mono/Security/Protocol/Ntlm/NtlmAuthLevel.h"

namespace Mono::Security::Protocol::Ntlm { class Type2Message; }
namespace System { class String; }

#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODESTRING_OFFSET UNITYSDK_OFFSET(0x19416F90)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODE_OFFSET UNITYSDK_OFFSET(0x19416A90)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_ENCODESTRING_OFFSET UNITYSDK_OFFSET(0x194170B0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x19416950)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GETBYTES_OFFSET UNITYSDK_OFFSET(0x194171E0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x194169F0)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x19416A70)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x19416A80)
#define MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19416610)

namespace Mono::Security::Protocol::Ntlm
{
	inline static constexpr unsigned int Type3Message_TypeDefinitionIndex = 2269;

	class Type3Message : public ::Mono::Security::Protocol::Ntlm::MessageBase
	{
	public:
		::System::String* _password; // 0x18
		::Il2CppArray<::System::Byte>* _challenge; // 0x20
		::Il2CppArray<::System::Byte>* _lm; // 0x28
		::System::String* _username; // 0x30
		::System::String* _domain; // 0x38
		::Il2CppArray<::System::Byte>* _nt; // 0x40
		::System::String* _host; // 0x48
		::Mono::Security::Protocol::Ntlm::Type2Message* _type2; // 0x50
		::Mono::Security::Protocol::Ntlm::NtlmAuthLevel _level; // 0x58

		::System::Void _ctor(::Mono::Security::Protocol::Ntlm::Type2Message* type2)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::Protocol::Ntlm::Type2Message*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE__CTOR_OFFSET))(this, type2);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_FINALIZE_OFFSET))(this);
		}

		::System::Void set_Domain(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_DOMAIN_OFFSET))(this, value);
		}

		::System::Void set_Password(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_PASSWORD_OFFSET))(this, value);
		}

		::System::Void set_Username(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_SET_USERNAME_OFFSET))(this, value);
		}

		::System::Void Decode(::Il2CppArray<::System::Byte>* message)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODE_OFFSET))(this, message);
		}

		::System::String* DecodeString(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 len)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_DECODESTRING_OFFSET))(this, buffer, offset, len);
		}

		::Il2CppArray<::System::Byte>* EncodeString(::System::String* text)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_ENCODESTRING_OFFSET))(this, text);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_NTLM_TYPE3MESSAGE_GETBYTES_OFFSET))(this);
		}
	};
}
