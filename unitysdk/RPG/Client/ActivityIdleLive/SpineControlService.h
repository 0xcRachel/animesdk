#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveSpineAnimTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1098;
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveSpineController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17316700)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE_INITSERVICE_OFFSET UNITYSDK_OFFSET(0x173158D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__BUILDSPINETRIGGERDICT_OFFSET UNITYSDK_OFFSET(0x17315480)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__BUILDTRIGGERS_OFFSET UNITYSDK_OFFSET(0x17315640)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__CLEARTRIGGERS_OFFSET UNITYSDK_OFFSET(0x17316990)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__CLEARUNLOCKTRIGGERS_OFFSET UNITYSDK_OFFSET(0x17316BA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x17315160)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONPLAYSPINEANIMGROUPID_OFFSET UNITYSDK_OFFSET(0x17315DD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONSHOWQUESTION_OFFSET UNITYSDK_OFFSET(0x173165D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONSTAGEREFRESHED_OFFSET UNITYSDK_OFFSET(0x17315EA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONTHANKSGIFT_OFFSET UNITYSDK_OFFSET(0x17315AF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONTRIGGERSPINE_OFFSET UNITYSDK_OFFSET(0x173159F0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONUNLOCKIDUPDATED_OFFSET UNITYSDK_OFFSET(0x17315C00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__TRIGGERSTAYSAMENODETOOLONGSPINE_OFFSET UNITYSDK_OFFSET(0x17315FE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__TRYPLAYIDLEACTIONPERIODICALLY_OFFSET UNITYSDK_OFFSET(0x17316690)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int SpineControlService_TypeDefinitionIndex = 69450;

	class SpineControlService : public ::System::Object
	{
	public:
		// static const ::RPG::GameCore::IdleLiveSpineAnimTriggerType _ON_THANKS_GIFT_TRIGGER_TYPE; // 0x0
		::RPG::Client::ActivityIdleLive::IdleLiveSpineController* _SpineController; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::IdleLiveSpineAnimTriggerType>* _SpineTriggerDict; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1098*>* _Triggers; // 0x20
		::RPG::Client::ActivityIdleLive::IdleLiveNode* _CurNode; // 0x28
		::System::UInt32 _SameNodeStayCntCeil; // 0x30
		::System::Single _IdleInterval; // 0x34
		::System::Int32 _IdlePerformTimer; // 0x38
		::System::UInt32 _SameNodeStayCount; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__CTOR_OFFSET))(this);
		}

		::System::Void InitService(::RPG::Client::ActivityIdleLive::IdleLiveSpineController* spineController, ::System::Boolean needPlayIdle)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveSpineController*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE_INITSERVICE_OFFSET))(this, spineController, needPlayIdle);
		}

		::System::Void _OnTriggerSpine(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONTRIGGERSPINE_OFFSET))(this, param);
		}

		::System::Void _OnThanksGift(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONTHANKSGIFT_OFFSET))(this, param);
		}

		::System::Void _OnUnlockIdUpdated(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONUNLOCKIDUPDATED_OFFSET))(this, param);
		}

		::System::Void _OnPlaySpineAnimGroupId(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONPLAYSPINEANIMGROUPID_OFFSET))(this, param);
		}

		::System::Void _OnStageRefreshed(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONSTAGEREFRESHED_OFFSET))(this, param);
		}

		::System::Void _TriggerStaySameNodeTooLongSpine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__TRIGGERSTAYSAMENODETOOLONGSPINE_OFFSET))(this);
		}

		::System::Void _OnShowQuestion(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__ONSHOWQUESTION_OFFSET))(this, param);
		}

		::System::Void _TryPlayIdleActionPeriodically()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__TRYPLAYIDLEACTIONPERIODICALLY_OFFSET))(this);
		}

		::System::Void _BuildSpineTriggerDict()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__BUILDSPINETRIGGERDICT_OFFSET))(this);
		}

		::System::Void _BuildTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__BUILDTRIGGERS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void _ClearTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__CLEARTRIGGERS_OFFSET))(this);
		}

		::System::Void _ClearUnlockTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_SPINECONTROLSERVICE__CLEARUNLOCKTRIGGERS_OFFSET))(this);
		}
	};
}
