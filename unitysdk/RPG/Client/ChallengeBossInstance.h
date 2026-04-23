#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeInstance.h"

class Class_1_2E57B88467AF63C8_1;
class Class_1_3AD2528CD53B1639_2;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GETSCORERATIO_OFFSET UNITYSDK_OFFSET(0x15F81240)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GETSCORE_OFFSET UNITYSDK_OFFSET(0x15F811B0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLEFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x15F81340)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLELASTFINISHEDINDEX_OFFSET UNITYSDK_OFFSET(0x15F81320)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLETOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x15F81140)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASBETTERSCORE_OFFSET UNITYSDK_OFFSET(0x15F813F0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASCLEAR_OFFSET UNITYSDK_OFFSET(0x15F812E0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASNEXTBATTLE_OFFSET UNITYSDK_OFFSET(0x15F81390)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASREWARD_OFFSET UNITYSDK_OFFSET(0x15F81300)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISBATTLEALLFINISHED_OFFSET UNITYSDK_OFFSET(0x15F81360)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISLASTBATTLEWIN_OFFSET UNITYSDK_OFFSET(0x15F81410)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISSINGLEBATTLE_OFFSET UNITYSDK_OFFSET(0x15F81370)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_ISPASS_OFFSET UNITYSDK_OFFSET(0x15F80BB0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SETUPLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x15F80BF0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_BATTLEFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x15F81350)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_BATTLELASTFINISHEDINDEX_OFFSET UNITYSDK_OFFSET(0x15F81330)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASBETTERSCORE_OFFSET UNITYSDK_OFFSET(0x15F81400)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASCLEAR_OFFSET UNITYSDK_OFFSET(0x15F812F0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASREWARD_OFFSET UNITYSDK_OFFSET(0x15F81310)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_ISLASTBATTLEWIN_OFFSET UNITYSDK_OFFSET(0x15F81420)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_ISSINGLEBATTLE_OFFSET UNITYSDK_OFFSET(0x15F81380)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE_SYNCONBATTLEFINISHED_OFFSET UNITYSDK_OFFSET(0x15F80D30)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE__ADDCHALLENGEINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0x15F80760)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE__CALCISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x15F80A40)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x15F80160)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE__ONBATTLERESULTCONFIRM_OFFSET UNITYSDK_OFFSET(0x15F80CE0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE__REMOVECHALLENGEINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0x15F808D0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x15F80370)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY_SETUPLOADINGSTRATEGY_OFFSET UNITYSDK_OFFSET(0x15F81570)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY__ADDCHALLENGEINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0x15F814D0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY__CALCISNEWRECORD_OFFSET UNITYSDK_OFFSET(0x15F814F0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY__REMOVECHALLENGEINSTANCEHANDLER_OFFSET UNITYSDK_OFFSET(0x15F814E0)
#define RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY__SYNCEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x15F81430)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossInstance_TypeDefinitionIndex = 58109;

	class ChallengeBossInstance : public ::RPG::Client::ChallengeInstance
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* BuffList; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _BattleScores; // 0x68
		::System::Boolean _HasReward_k__BackingField; // 0x70
		::System::Boolean _HasClear_k__BackingField; // 0x71
		::System::Boolean _HasBetterScore_k__BackingField; // 0x72
		::System::Boolean _IsSingleBattle_k__BackingField; // 0x73
		::System::UInt32 _BattleFinishedCount_k__BackingField; // 0x74
		::System::Boolean _IsLastBattleWin_k__BackingField; // 0x78
		::System::UInt32 _BattleLastFinishedIndex_k__BackingField; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE__CTOR_OFFSET))(this);
		}

		::System::Void _SyncExtraInfo(::Class_1_3AD2528CD53B1639_2* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE__SYNCEXTRAINFO_OFFSET))(this, data);
		}

		::System::Void _AddChallengeInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE__ADDCHALLENGEINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void _RemoveChallengeInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE__REMOVECHALLENGEINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void _CalcIsNewRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE__CALCISNEWRECORD_OFFSET))(this);
		}

		::System::Boolean IsPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_ISPASS_OFFSET))(this);
		}

		::System::Void SetupLoadingStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SETUPLOADINGSTRATEGY_OFFSET))(this);
		}

		::System::Void _OnBattleResultConfirm(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE__ONBATTLERESULTCONFIRM_OFFSET))(this, obj);
		}

		::System::Void SyncOnBattleFinished(::Class_1_2E57B88467AF63C8_1* info, ::System::Boolean isBetterScore)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2E57B88467AF63C8_1*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SYNCONBATTLEFINISHED_OFFSET))(this, info, isBetterScore);
		}

		::System::UInt32 GetScore(::System::UInt32 scoreID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GETSCORE_OFFSET))(this, scoreID);
		}

		::System::Single GetScoreRatio(::System::UInt32 scoreID)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GETSCORERATIO_OFFSET))(this, scoreID);
		}

		::System::Boolean get_HasClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASCLEAR_OFFSET))(this);
		}

		::System::Void set_HasClear(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASCLEAR_OFFSET))(this, value);
		}

		::System::Boolean get_HasReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASREWARD_OFFSET))(this);
		}

		::System::Void set_HasReward(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASREWARD_OFFSET))(this, value);
		}

		::System::UInt32 get_BattleLastFinishedIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLELASTFINISHEDINDEX_OFFSET))(this);
		}

		::System::Void set_BattleLastFinishedIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_BATTLELASTFINISHEDINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_BattleFinishedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLEFINISHEDCOUNT_OFFSET))(this);
		}

		::System::Void set_BattleFinishedCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_BATTLEFINISHEDCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_BattleTotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_BATTLETOTALCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsBattleAllFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISBATTLEALLFINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsSingleBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISSINGLEBATTLE_OFFSET))(this);
		}

		::System::Void set_IsSingleBattle(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_ISSINGLEBATTLE_OFFSET))(this, value);
		}

		::System::Boolean get_HasNextBattle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASNEXTBATTLE_OFFSET))(this);
		}

		::System::Boolean get_HasBetterScore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_HASBETTERSCORE_OFFSET))(this);
		}

		::System::Void set_HasBetterScore(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_HASBETTERSCORE_OFFSET))(this, value);
		}

		::System::Boolean get_IsLastBattleWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_GET_ISLASTBATTLEWIN_OFFSET))(this);
		}

		::System::Void set_IsLastBattleWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE_SET_ISLASTBATTLEWIN_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy__SyncExtraInfo(::Class_1_3AD2528CD53B1639_2* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY__SYNCEXTRAINFO_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy__AddChallengeInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY__ADDCHALLENGEINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__RemoveChallengeInstanceHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY__REMOVECHALLENGEINSTANCEHANDLER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CalcIsNewRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY__CALCISNEWRECORD_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_SetupLoadingStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSINSTANCE___IFIXBASEPROXY_SETUPLOADINGSTRATEGY_OFFSET))(this);
		}
	};
}
