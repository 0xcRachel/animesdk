#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_809;
class Class_1_355A2207C3B7A99D_75;
class Class_1_C74059A83466814F;
namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16364D10)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_GET_REVIVEAVATARCOSTITEMS_OFFSET UNITYSDK_OFFSET(0x16364FF0)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_GET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x16365010)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_1_OFFSET UNITYSDK_OFFSET(0x16364D80)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_2_OFFSET UNITYSDK_OFFSET(0x16364F00)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x16351730)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_SETSENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x16364CC0)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_SET_REVIVEAVATARCOSTITEMS_OFFSET UNITYSDK_OFFSET(0x16365000)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO_SET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x16365020)
#define RPG_CLIENT_ROGUEREVIVEAVATARINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16364CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueReviveAvatarInfo_TypeDefinitionIndex = 61867;

	class RogueReviveAvatarInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* _ReviveAvatarCostItems_k__BackingField; // 0x10
		::Class_0_16E4307DCC419505_809* _SendPacketCmd_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO__CTOR_OFFSET))(this);
		}

		::System::Void SetSendPacketCmd(::Class_0_16E4307DCC419505_809* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_809*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_SETSENDPACKETCMD_OFFSET))(this, cmd);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshReviveAvatarInfo(::Class_1_355A2207C3B7A99D_75* reviveInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_355A2207C3B7A99D_75*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_OFFSET))(this, reviveInfo);
		}

		::System::Void RefreshReviveAvatarInfo_1(::Class_1_C74059A83466814F* ReviveCostData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_REFRESHREVIVEAVATARINFO_1_OFFSET))(this, ReviveCostData);
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

		::Class_0_16E4307DCC419505_809* get_SendPacketCmd()
		{
			return ((::Class_0_16E4307DCC419505_809*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_GET_SENDPACKETCMD_OFFSET))(this);
		}

		::System::Void set_SendPacketCmd(::Class_0_16E4307DCC419505_809* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_809*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEREVIVEAVATARINFO_SET_SENDPACKETCMD_OFFSET))(this, value);
		}
	};
}
