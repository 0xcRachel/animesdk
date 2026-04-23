#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_70D2E0F3216AAE0C_17;
class Class_1_BF2908093F14DD44;
class Class_1_C74059A83466814F;
class Class_1_D17CAE2570A8D8F0;
class Class_1_F3CA30716D4FAF92_17;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class IRogueMiracleInfo; }
namespace RPG::Client { class RogueMagicGameLevelInfo; }
namespace RPG::Client { class RogueMagicGameScorePreviewInfo; }
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace RPG::Client { class RogueReviveAvatarInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICGAMEDATA_CLEARINPROGRESSAREA_OFFSET UNITYSDK_OFFSET(0x172BC4A0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x172BB090)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0x172BC6E0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET UNITYSDK_OFFSET(0x172BC5D0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x172BC8E0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEMAGICSCEPTERINFO_OFFSET UNITYSDK_OFFSET(0x172BC660)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x172BC620)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x172BC6A0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_CURAREAID_OFFSET UNITYSDK_OFFSET(0x172BD050)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_CURDIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0x172BCF20)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_HASAREAINPROGRESS_OFFSET UNITYSDK_OFFSET(0x172BC540)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_ISHUDINFOFOLDED_OFFSET UNITYSDK_OFFSET(0x172BD120)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x172BD0F0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0x172BD070)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x172BD090)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x172BD0D0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0x172BD0B0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_GET_SCOREPREVIEWINFO_OFFSET UNITYSDK_OFFSET(0x172BD110)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_ISAREAEXTRAROUNDAVAILABLE_OFFSET UNITYSDK_OFFSET(0x172BAF00)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_ISCURGAMEEXTRAROUNDAVAILABLE_OFFSET UNITYSDK_OFFSET(0x172BC4F0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_ISCURGAMEFORCEHUDUNFOLDED_OFFSET UNITYSDK_OFFSET(0x172BC550)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_CURAREAID_OFFSET UNITYSDK_OFFSET(0x172BD060)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_ISHUDINFOFOLDED_OFFSET UNITYSDK_OFFSET(0x172BD1F0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x172BD100)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0x172BD080)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x172BD0A0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x172BD0E0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0x172BD0C0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNCREVIVECOST_OFFSET UNITYSDK_OFFSET(0x172BC1B0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNCSCOREPREVIEW_OFFSET UNITYSDK_OFFSET(0x172BC370)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNC_1_OFFSET UNITYSDK_OFFSET(0x172BC210)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x172BB6D0)
#define RPG_CLIENT_ROGUEMAGICGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x172BAA70)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicGameData_TypeDefinitionIndex = 62092;

	class RogueMagicGameData : public ::System::Object
	{
	public:
		::Class_1_D17CAE2570A8D8F0* _AvatarCollectionBuilder; // 0x10
		::RPG::Client::RogueMagicGameScorePreviewInfo* _ScorePreviewInfo_k__BackingField; // 0x18
		::RPG::Client::RogueMiracleInfo* _MiracleInfo_k__BackingField; // 0x20
		::RPG::Client::RogueMagicGameLevelInfo* _LevelInfo_k__BackingField; // 0x28
		::RPG::Client::RogueMagicScepterInfo* _ScepterInfo_k__BackingField; // 0x30
		::RPG::Client::RogueReviveAvatarInfo* _ReviveAvatarInfo_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _CurDiffCompIDs; // 0x40
		::System::UInt32 _CurAreaID_k__BackingField; // 0x48
		::System::UInt32 _LeftExtraRoundCount_k__BackingField; // 0x4C

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

		::System::Void Sync(::Class_1_BF2908093F14DD44* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BF2908093F14DD44*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNC_OFFSET))(this, proto);
		}

		::System::Void Sync_1(::Class_1_F3CA30716D4FAF92_17* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F3CA30716D4FAF92_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNC_1_OFFSET))(this, proto);
		}

		::System::Void SyncReviveCost(::Class_1_C74059A83466814F* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C74059A83466814F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNCREVIVECOST_OFFSET))(this, proto);
		}

		::System::Void SyncScorePreview(::Class_1_70D2E0F3216AAE0C_17* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_70D2E0F3216AAE0C_17*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_SYNCSCOREPREVIEW_OFFSET))(this, proto);
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

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetRogueAvatarCollection()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEAVATARCOLLECTION_OFFSET))(this);
		}

		::RPG::Client::IRogueMiracleInfo* GetRogueMiracleInfo()
		{
			return ((::RPG::Client::IRogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICGAMEDATA_GETROGUEMIRACLEINFO_OFFSET))(this);
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
