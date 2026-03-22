#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_655;
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace RPG::Client { class RoguePickAvatarInfo; }
namespace RPG::Client { class RogueReviveAvatarInfo; }

#define RPG_CLIENT_BASEROGUEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D7A760)
#define RPG_CLIENT_BASEROGUEINFO_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0x8D7A9B0)
#define RPG_CLIENT_BASEROGUEINFO_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x8D7A9F0)
#define RPG_CLIENT_BASEROGUEINFO_GETROGUEPICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0x8D7A970)
#define RPG_CLIENT_BASEROGUEINFO_GETROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x8D7A930)
#define RPG_CLIENT_BASEROGUEINFO_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x8D7A570)
#define RPG_CLIENT_BASEROGUEINFO_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x8D7A590)
#define RPG_CLIENT_BASEROGUEINFO_GET_PICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0x8D7A550)
#define RPG_CLIENT_BASEROGUEINFO_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x8D7A530)
#define RPG_CLIENT_BASEROGUEINFO_SET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x8D7A580)
#define RPG_CLIENT_BASEROGUEINFO_SET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x8D7A5A0)
#define RPG_CLIENT_BASEROGUEINFO_SET_PICKAVATARINFO_OFFSET UNITYSDK_OFFSET(0x8D7A560)
#define RPG_CLIENT_BASEROGUEINFO_SET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x8D7A540)
#define RPG_CLIENT_BASEROGUEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x8D7AA30)
#define RPG_CLIENT_BASEROGUEINFO__INITCHESSROGUESENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x8D7A700)
#define RPG_CLIENT_BASEROGUEINFO__INITSIMULATEDROGUESENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x8D7A5B0)
#define RPG_CLIENT_BASEROGUEINFO__SETSENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x8D7A610)

namespace RPG::Client
{
	inline static constexpr unsigned int BaseRogueInfo_TypeDefinitionIndex = 53393;

	class BaseRogueInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueReviveAvatarInfo* _ReviveAvatarInfo_k__BackingField; // 0x10
		::RPG::Client::RogueMiracleInfo* _MiracleInfo_k__BackingField; // 0x18
		::RPG::Client::RoguePickAvatarInfo* _PickAvatarInfo_k__BackingField; // 0x20
		::RPG::Client::RogueBuffInfo* _BuffInfo_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO__CTOR_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GET_REVIVEAVATARINFO_OFFSET))(this);
		}

		::System::Void set_ReviveAvatarInfo(::RPG::Client::RogueReviveAvatarInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueReviveAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_SET_REVIVEAVATARINFO_OFFSET))(this, value);
		}

		::RPG::Client::RoguePickAvatarInfo* get_PickAvatarInfo()
		{
			return ((::RPG::Client::RoguePickAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GET_PICKAVATARINFO_OFFSET))(this);
		}

		::System::Void set_PickAvatarInfo(::RPG::Client::RoguePickAvatarInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoguePickAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_SET_PICKAVATARINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GET_BUFFINFO_OFFSET))(this);
		}

		::System::Void set_BuffInfo(::RPG::Client::RogueBuffInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_SET_BUFFINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GET_MIRACLEINFO_OFFSET))(this);
		}

		::System::Void set_MiracleInfo(::RPG::Client::RogueMiracleInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_SET_MIRACLEINFO_OFFSET))(this, value);
		}

		::System::Void _InitSimulatedRogueSendPacketCmd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO__INITSIMULATEDROGUESENDPACKETCMD_OFFSET))(this);
		}

		::System::Void _InitChessRogueSendPacketCmd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO__INITCHESSROGUESENDPACKETCMD_OFFSET))(this);
		}

		::System::Void _SetSendPacketCmd(::Class_0_16E4307DCC419505_655* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_655*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO__SETSENDPACKETCMD_OFFSET))(this, cmd);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* GetRogueReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GETROGUEREVIVEAVATARINFO_OFFSET))(this);
		}

		::RPG::Client::RoguePickAvatarInfo* GetRoguePickAvatarInfo()
		{
			return ((::RPG::Client::RoguePickAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GETROGUEPICKAVATARINFO_OFFSET))(this);
		}

		::RPG::Client::RogueBuffInfo* GetRogueBuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GETROGUEBUFFINFO_OFFSET))(this);
		}

		::RPG::Client::RogueMiracleInfo* GetRogueMiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BASEROGUEINFO_GETROGUEMIRACLEINFO_OFFSET))(this);
		}
	};
}
