#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND_IS_OFFSET UNITYSDK_OFFSET(0xA185F0)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CB3200)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0xA18540)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_PacketCommand_TypeDefinitionIndex = 43795;

	struct alignas(4) SecurityTunnel_PacketCommand
	{
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_KickOff()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x55F0);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_SecureMessage()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x55F4);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_Logout()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x55F8);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_FileTransforData()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x55FC);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_Login()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x5600);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_ExchangeSecretKey()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x5604);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_FileTransforBegin()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x5608);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_Null()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x560C);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_Heartbeat()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x5610);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_Shutdown()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x5614);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_ClientMessage()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x5618);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_FileTransforEnd()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x561C);
		}
		::System::UInt32 CommandCode; // 0x10

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND__CCTOR_OFFSET))();
		}

		::System::Boolean Is(::MiHoYo::SDK::SecurityTunnel_PacketCommand a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_PacketCommand))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND_IS_OFFSET))(this, a1);
		}
	};
}
