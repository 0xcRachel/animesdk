#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_CREATEFROMNAME_1_OFFSET UNITYSDK_OFFSET(0x17648220)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_CREATEFROMNAME_OFFSET UNITYSDK_OFFSET(0x17648210)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_ENCODELONGNUMBER_OFFSET UNITYSDK_OFFSET(0x17648090)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_ENCODEOID_OFFSET UNITYSDK_OFFSET(0x17647B00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_GET_ALLOWONLYFIPSALGORITHMS_OFFSET UNITYSDK_OFFSET(0x17648200)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_MAPNAMETOOID_1_OFFSET UNITYSDK_OFFSET(0x17649C50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_MAPNAMETOOID_OFFSET UNITYSDK_OFFSET(0x17649C40)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int CryptoConfig_TypeDefinitionIndex = 1066;

	class CryptoConfig : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>* EncodeOID(::System::String* str)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_ENCODEOID_OFFSET))(str);
		}

		static ::Il2CppArray<::System::Byte>* EncodeLongNumber(::System::Int64 x)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_ENCODELONGNUMBER_OFFSET))(x);
		}

		static ::System::Boolean get_AllowOnlyFipsAlgorithms()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_GET_ALLOWONLYFIPSALGORITHMS_OFFSET))();
		}

		static ::System::Object* CreateFromName(::System::String* name)
		{
			return ((::System::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_CREATEFROMNAME_OFFSET))(name);
		}

		static ::System::Object* CreateFromName_1(::System::String* name, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Object*(*)(::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_CREATEFROMNAME_1_OFFSET))(name, args);
		}

		static ::System::String* MapNameToOID(::System::String* name, ::System::Object* arg)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_MAPNAMETOOID_OFFSET))(name, arg);
		}

		static ::System::String* MapNameToOID_1(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_CRYPTOCONFIG_MAPNAMETOOID_1_OFFSET))(name);
		}
	};
}
