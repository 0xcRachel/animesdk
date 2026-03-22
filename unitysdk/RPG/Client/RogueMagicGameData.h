#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D5D53619B020DDD;
class Class_1_6238D7FF0191672E_15;
class Class_1_6949CBEE02AA8B1E_3;
class Class_1_9A27691571A52F2A;
namespace RPG::Client { class RogueMagicGameLevelInfo; }
namespace RPG::Client { class RogueMagicGameScorePreviewInfo; }
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace RPG::Client { class RogueReviveAvatarInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICGAMEDATA_CLEARINPROGRESSAREA_OFFSET UNITYSDK_OFFSET(0x9E05ED0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E04860)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0x9E060C0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x9E062D0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEMAGICSCEPTERINFO_OFFSET UNITYSDK_OFFSET(0x9E06040)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x9E06000)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9E06080)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_CURAREAID_OFFSET UNITYSDK_OFFSET(0x9E06A40)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_CURDIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0x9E06910)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_HASAREAINPROGRESS_OFFSET UNITYSDK_OFFSET(0x9E05F70)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_ISAVATARUPGRADABLE_OFFSET UNITYSDK_OFFSET(0x9E062C0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_ISHUDINFOFOLDED_OFFSET UNITYSDK_OFFSET(0x9E06B10)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x9E06AE0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0x9E06A60)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x9E06A80)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9E06AC0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0x9E06AA0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_SCOREPREVIEWINFO_OFFSET UNITYSDK_OFFSET(0x9E06B00)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_ISAREAEXTRAROUNDAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9E046D0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_ISCURGAMEEXTRAROUNDAVAILABLE_OFFSET UNITYSDK_OFFSET(0x9E05F20)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_ISCURGAMEFORCEHUDUNFOLDED_OFFSET UNITYSDK_OFFSET(0x9E05F80)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_CURAREAID_OFFSET UNITYSDK_OFFSET(0x9E06A50)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_ISHUDINFOFOLDED_OFFSET UNITYSDK_OFFSET(0x9E06BE0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x9E06AF0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0x9E06A70)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x9E06A90)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9E06AD0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0x9E06AB0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNCREVIVECOST_OFFSET UNITYSDK_OFFSET(0x9E05BE0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNCSCOREPREVIEW_OFFSET UNITYSDK_OFFSET(0x9E05DA0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNC_1_OFFSET UNITYSDK_OFFSET(0x9E05C40)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9E04F10)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E04420)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameData_TypeDefinitionIndex = 53549;

	class RogueMagicGameData : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicGameLevelInfo* _LevelInfo_k__BackingField; // 0x10
		::RPG::Client::RogueMagicGameScorePreviewInfo* _ScorePreviewInfo_k__BackingField; // 0x18
		::RPG::Client::RogueMiracleInfo* _MiracleInfo_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _CurDiffCompIDs; // 0x28
		::RPG::Client::RogueMagicScepterInfo* _ScepterInfo_k__BackingField; // 0x30
		::RPG::Client::RogueReviveAvatarInfo* _ReviveAvatarInfo_k__BackingField; // 0x38
		::System::UInt32 _CurAreaID_k__BackingField; // 0x40
		::System::UInt32 _LeftExtraRoundCount_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Boolean IsAreaExtraRoundAvailable(::System::UInt32 areaID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_ISAREAEXTRAROUNDAVAILABLE_OFFSET))(areaID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_9A27691571A52F2A* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9A27691571A52F2A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNC_OFFSET))(this, proto);
		}

		::System::Void Sync_1(::Class_1_6949CBEE02AA8B1E_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6949CBEE02AA8B1E_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNC_1_OFFSET))(this, proto);
		}

		::System::Void SyncReviveCost(::Class_1_4D5D53619B020DDD* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4D5D53619B020DDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNCREVIVECOST_OFFSET))(this, proto);
		}

		::System::Void SyncScorePreview(::Class_1_6238D7FF0191672E_15* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6238D7FF0191672E_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNCSCOREPREVIEW_OFFSET))(this, proto);
		}

		::System::Void ClearInProgressArea()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_CLEARINPROGRESSAREA_OFFSET))(this);
		}

		::System::Boolean IsCurGameExtraRoundAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_ISCURGAMEEXTRAROUNDAVAILABLE_OFFSET))(this);
		}

		::System::Boolean IsCurGameForceHUDUnfolded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_ISCURGAMEFORCEHUDUNFOLDED_OFFSET))(this);
		}

		::RPG::Client::RogueMiracleInfo* GetRogueMiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEMIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueMagicScepterInfo* GetRogueMagicScepterInfo()
		{
			return ((::RPG::Client::RogueMagicScepterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEMAGICSCEPTERINFO_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* GetRogueReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET))(this);
		}

		::System::UInt32 GetMonsterEliteDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GETMONSTERELITEDROPID_OFFSET))(this);
		}

		::System::Boolean get_IsAvatarUpgradable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_ISAVATARUPGRADABLE_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::System::UInt32 get_CurAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_CURAREAID_OFFSET))(this);
		}

		::System::Void set_CurAreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_CURAREAID_OFFSET))(this, value);
		}

		::System::Boolean get_HasAreaInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_HASAREAINPROGRESS_OFFSET))(this);
		}

		::RPG::Client::RogueMagicGameLevelInfo* get_LevelInfo()
		{
			return ((::RPG::Client::RogueMagicGameLevelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_LEVELINFO_OFFSET))(this);
		}

		::System::Void set_LevelInfo(::RPG::Client::RogueMagicGameLevelInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicGameLevelInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_LEVELINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::System::Void set_MiracleInfo(::RPG::Client::RogueMiracleInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_MIRACLEINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueMagicScepterInfo* get_ScepterInfo()
		{
			return ((::RPG::Client::RogueMagicScepterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_SCEPTERINFO_OFFSET))(this);
		}

		::System::Void set_ScepterInfo(::RPG::Client::RogueMagicScepterInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_SCEPTERINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_REVIVEAVATARINFO_OFFSET))(this);
		}

		::System::Void set_ReviveAvatarInfo(::RPG::Client::RogueReviveAvatarInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueReviveAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_REVIVEAVATARINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_LeftExtraRoundCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_LEFTEXTRAROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_LeftExtraRoundCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_LEFTEXTRAROUNDCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_CurDiffCompLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_CURDIFFCOMPLEVEL_OFFSET))(this);
		}

		::RPG::Client::RogueMagicGameScorePreviewInfo* get_ScorePreviewInfo()
		{
			return ((::RPG::Client::RogueMagicGameScorePreviewInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_SCOREPREVIEWINFO_OFFSET))(this);
		}

		::System::Boolean get_IsHUDInfoFolded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_ISHUDINFOFOLDED_OFFSET))(this);
		}

		::System::Void set_IsHUDInfoFolded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_ISHUDINFOFOLDED_OFFSET))(this, value);
		}
	};
}
