#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_SECURITYMANAGER_CHECKELEVATEDPERMISSIONS_OFFSET UNITYSDK_OFFSET(0x15B3A3C0)
#define SYSTEM_SECURITY_SECURITYMANAGER_ENSUREELEVATEDPERMISSIONS_OFFSET UNITYSDK_OFFSET(0x15B3A3D0)
#define SYSTEM_SECURITY_SECURITYMANAGER_GET_SECURITYENABLED_OFFSET UNITYSDK_OFFSET(0x15B33D60)

namespace System::Security
{
	inline static constexpr unsigned int SecurityManager_TypeDefinitionIndex = 941;

	class SecurityManager : public ::System::Object
	{
	public:
		static ::System::Boolean get_SecurityEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYMANAGER_GET_SECURITYENABLED_OFFSET))();
		}

		static ::System::Boolean CheckElevatedPermissions()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYMANAGER_CHECKELEVATEDPERMISSIONS_OFFSET))();
		}

		static ::System::Void EnsureElevatedPermissions()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYMANAGER_ENSUREELEVATEDPERMISSIONS_OFFSET))();
		}
	};
}
