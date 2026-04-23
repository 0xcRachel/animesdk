#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BDE0598EF34BE45E;
class Class_1_EBB10EC01CCC4716_15;
namespace RPG::Client { class RogueEndlessBattleResult; }
namespace RPG::Client { class RogueReviveAvatarInfo; }

#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177330A0)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_BATTLERESULT_OFFSET UNITYSDK_OFFSET(0x177336A0)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_BESTBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x177336C0)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_CURAREAID_OFFSET UNITYSDK_OFFSET(0x17733680)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x177336E0)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x17733180)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_BATTLERESULT_OFFSET UNITYSDK_OFFSET(0x177336B0)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_BESTBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x177336D0)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_CURAREAID_OFFSET UNITYSDK_OFFSET(0x17733690)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SYNCBATTLERESULT_1_OFFSET UNITYSDK_OFFSET(0x17733360)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SYNCBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x177331D0)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_TRYMERGEANDSHOWENDLESSGIFTROGUECOIN_OFFSET UNITYSDK_OFFSET(0x177334B0)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17732F10)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__ONHIDELOADINGPAGE_OFFSET UNITYSDK_OFFSET(0x17733630)
#define RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__TRYNOTIFYGIFTROGUECOIN_OFFSET UNITYSDK_OFFSET(0x17733500)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueEndlessProgressInfo_TypeDefinitionIndex = 62148;

	class RogueEndlessProgressInfo : public ::System::Object
	{
	public:
		::RPG::Client::RogueEndlessBattleResult* _BattleResult_k__BackingField; // 0x10
		::RPG::Client::RogueEndlessBattleResult* _BestBattleResult_k__BackingField; // 0x18
		::System::UInt32 _CachedRogueGiftCoinCount; // 0x20
		::System::UInt32 _CurAreaID_k__BackingField; // 0x24

		::System::Void _ctor(::System::UInt32 areaID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__CTOR_OFFSET))(this, areaID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshProgress(::Class_1_BDE0598EF34BE45E* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BDE0598EF34BE45E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_REFRESHPROGRESS_OFFSET))(this, proto);
		}

		::System::Void SyncBattleResult(::Class_1_EBB10EC01CCC4716_15* layerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBB10EC01CCC4716_15*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SYNCBATTLERESULT_OFFSET))(this, layerInfo);
		}

		::System::Void SyncBattleResult_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SYNCBATTLERESULT_1_OFFSET))(this);
		}

		::System::Void TryMergeAndShowEndlessGiftRogueCoin(::System::UInt32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_TRYMERGEANDSHOWENDLESSGIFTROGUECOIN_OFFSET))(this, count);
		}

		::System::Void _OnHideLoadingPage(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__ONHIDELOADINGPAGE_OFFSET))(this, arg);
		}

		::System::Void _TryNotifyGiftRogueCoin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO__TRYNOTIFYGIFTROGUECOIN_OFFSET))(this);
		}

		::System::UInt32 get_CurAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_CURAREAID_OFFSET))(this);
		}

		::System::Void set_CurAreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_CURAREAID_OFFSET))(this, value);
		}

		::RPG::Client::RogueEndlessBattleResult* get_BattleResult()
		{
			return ((::RPG::Client::RogueEndlessBattleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_BATTLERESULT_OFFSET))(this);
		}

		::System::Void set_BattleResult(::RPG::Client::RogueEndlessBattleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueEndlessBattleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_BATTLERESULT_OFFSET))(this, value);
		}

		::RPG::Client::RogueEndlessBattleResult* get_BestBattleResult()
		{
			return ((::RPG::Client::RogueEndlessBattleResult*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_BESTBATTLERESULT_OFFSET))(this);
		}

		::System::Void set_BestBattleResult(::RPG::Client::RogueEndlessBattleResult* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueEndlessBattleResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_SET_BESTBATTLERESULT_OFFSET))(this, value);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEENDLESSPROGRESSINFO_GET_REVIVEAVATARINFO_OFFSET))(this);
		}
	};
}
