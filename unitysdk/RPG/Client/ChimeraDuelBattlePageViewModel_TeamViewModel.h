#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelGameSessionBattleTeam; }
namespace RPG::Client { class ChimeraDuelMasterData; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_CREATEFORMASTER_OFFSET UNITYSDK_OFFSET(0x8EFB2C0)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x8EF9960)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_GET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0x8EFC0F0)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_GET_MASTERDATA_OFFSET UNITYSDK_OFFSET(0x8EFC0D0)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_GET_PLAYERICON_OFFSET UNITYSDK_OFFSET(0x8EFC050)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_GET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0x8EFC030)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_GET_RANKICON_OFFSET UNITYSDK_OFFSET(0x8EFC0B0)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_GET_RANKLEVEL_OFFSET UNITYSDK_OFFSET(0x8EFC070)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_GET_RANKNAME_OFFSET UNITYSDK_OFFSET(0x8EFC090)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_SET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0x8EFC100)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_SET_MASTERDATA_OFFSET UNITYSDK_OFFSET(0x8EFC0E0)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_SET_PLAYERICON_OFFSET UNITYSDK_OFFSET(0x8EFC060)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_SET_PLAYERNAME_OFFSET UNITYSDK_OFFSET(0x8EFC040)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_SET_RANKICON_OFFSET UNITYSDK_OFFSET(0x8EFC0C0)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_SET_RANKLEVEL_OFFSET UNITYSDK_OFFSET(0x8EFC080)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_SET_RANKNAME_OFFSET UNITYSDK_OFFSET(0x8EFC0A0)
#define RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x8EFC110)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelBattlePageViewModel_TeamViewModel_TypeDefinitionIndex = 50334;

	class ChimeraDuelBattlePageViewModel_TeamViewModel : public ::System::Object
	{
	public:
		::System::String* _RankIcon_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _Chimeras_k__BackingField; // 0x18
		::System::String* _PlayerIcon_k__BackingField; // 0x20
		::RPG::Client::ChimeraDuelMasterData* _MasterData_k__BackingField; // 0x28
		::System::String* _PlayerName_k__BackingField; // 0x30
		::System::UInt32 _RankLevel_k__BackingField; // 0x38
		::RPG::Client::TextID _RankName_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::String* get_PlayerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_GET_PLAYERNAME_OFFSET))(this);
		}

		::System::Void set_PlayerName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_SET_PLAYERNAME_OFFSET))(this, value);
		}

		::System::String* get_PlayerIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_GET_PLAYERICON_OFFSET))(this);
		}

		::System::Void set_PlayerIcon(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_SET_PLAYERICON_OFFSET))(this, value);
		}

		::System::UInt32 get_RankLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_GET_RANKLEVEL_OFFSET))(this);
		}

		::System::Void set_RankLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_SET_RANKLEVEL_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_RankName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_GET_RANKNAME_OFFSET))(this);
		}

		::System::Void set_RankName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_SET_RANKNAME_OFFSET))(this, value);
		}

		::System::String* get_RankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_GET_RANKICON_OFFSET))(this);
		}

		::System::Void set_RankIcon(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_SET_RANKICON_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelMasterData* get_MasterData()
		{
			return ((::RPG::Client::ChimeraDuelMasterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_GET_MASTERDATA_OFFSET))(this);
		}

		::System::Void set_MasterData(::RPG::Client::ChimeraDuelMasterData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_SET_MASTERDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_Chimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_GET_CHIMERAS_OFFSET))(this);
		}

		::System::Void set_Chimeras(::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_SET_CHIMERAS_OFFSET))(this, value);
		}

		static ::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* Create(::RPG::Client::ChimeraDuelGameSessionBattleTeam* team)
		{
			return ((::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel*(*)(::RPG::Client::ChimeraDuelGameSessionBattleTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_CREATE_OFFSET))(team);
		}

		static ::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel* CreateForMaster(::System::UInt32 rankLevel, ::System::UInt32 masterID, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* chimeras)
		{
			return ((::RPG::Client::ChimeraDuelBattlePageViewModel_TeamViewModel*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELBATTLEPAGEVIEWMODEL_TEAMVIEWMODEL_CREATEFORMASTER_OFFSET))(rankLevel, masterID, chimeras);
		}
	};
}
