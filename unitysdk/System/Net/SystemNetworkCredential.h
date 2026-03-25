#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkCredential.h"

#define SYSTEM_NET_SYSTEMNETWORKCREDENTIAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1872CFB0)
#define SYSTEM_NET_SYSTEMNETWORKCREDENTIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1872CEF0)

namespace System::Net
{
	inline static constexpr unsigned int SystemNetworkCredential_TypeDefinitionIndex = 2717;

	class SystemNetworkCredential : public ::System::Net::NetworkCredential
	{
	public:
		static ::System::Net::SystemNetworkCredential** StaticGet_defaultCredential()
		{
			return (::System::Net::SystemNetworkCredential**)Il2CppClass::FromTypeDefinitionIndex(SystemNetworkCredential_TypeDefinitionIndex)->GetStaticField(0x16380);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_SYSTEMNETWORKCREDENTIAL__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_SYSTEMNETWORKCREDENTIAL__CCTOR_OFFSET))();
		}
	};
}
