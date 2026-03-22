#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_654;
class Class_1_4D5D53619B020DDD;
class Class_1_C03D623E9F32FBCB_71;
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E455C0)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_GET_REVIVEAVATARCOSTITEMS_OFFSET UNITYSDK_OFFSET(0x9E45920)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_GET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x9E45940)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_1_OFFSET UNITYSDK_OFFSET(0x9E45630)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_2_OFFSET UNITYSDK_OFFSET(0x9E45830)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9E31F80)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_SETSENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x9E45570)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_SET_REVIVEAVATARCOSTITEMS_OFFSET UNITYSDK_OFFSET(0x9E45930)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_SET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x9E45950)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9E45560)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueReviveAvatarInfo_TypeDefinitionIndex = 53392;

	class RogueReviveAvatarInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _ReviveAvatarCostItems_k__BackingField; // 0x10
		::Class_0_16E4307DCC419505_654* _SendPacketCmd_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO__CTOR_OFFSET))(this);
		}

		::System::Void SetSendPacketCmd(::Class_0_16E4307DCC419505_654* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_654*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_SETSENDPACKETCMD_OFFSET))(this, cmd);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshReviveAvatarInfo(::Class_1_C03D623E9F32FBCB_71* reviveInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C03D623E9F32FBCB_71*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_OFFSET))(this, reviveInfo);
		}

		::System::Void RefreshReviveAvatarInfo_1(::Class_1_4D5D53619B020DDD* ReviveCostData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_1_OFFSET))(this, ReviveCostData);
		}

		::System::Void RefreshReviveAvatarInfo_2(::System::UInt32 rogueCoinCostNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_2_OFFSET))(this, rogueCoinCostNum);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* get_ReviveAvatarCostItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_GET_REVIVEAVATARCOSTITEMS_OFFSET))(this);
		}

		::System::Void set_ReviveAvatarCostItems(::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_SET_REVIVEAVATARCOSTITEMS_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_654* get_SendPacketCmd()
		{
			return ((::Class_0_16E4307DCC419505_654*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_GET_SENDPACKETCMD_OFFSET))(this);
		}

		::System::Void set_SendPacketCmd(::Class_0_16E4307DCC419505_654* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_654*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_SET_SENDPACKETCMD_OFFSET))(this, value);
		}
	};
}
