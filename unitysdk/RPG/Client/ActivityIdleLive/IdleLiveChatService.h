#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1098;
class Class_1_B547B56320B70AD4;
namespace RPG::Client::ActivityIdleLive { class IdleLiveDanmuContentData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE_ADDSPECIALCHAT_OFFSET UNITYSDK_OFFSET(0x17351940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17351D00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE_GETCHAT_OFFSET UNITYSDK_OFFSET(0x17350DD0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE_UPDATENORMALCHATPHASE_OFFSET UNITYSDK_OFFSET(0x173515E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__CLEARCREATEDTRIGGERS_OFFSET UNITYSDK_OFFSET(0x17351EF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__CLEARINVALIDSPECIALCHATS_OFFSET UNITYSDK_OFFSET(0x17351000)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x17351130)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__INITUNLOCKIDTOSPECIALCHATPHASES_OFFSET UNITYSDK_OFFSET(0x17351310)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__ONSETDANMUENABLE_OFFSET UNITYSDK_OFFSET(0x17351650)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__ONSWITCHCHATDATATOSPECIALPHASE_OFFSET UNITYSDK_OFFSET(0x17351B20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__ONSWITCHNORMALCHATPHASE_OFFSET UNITYSDK_OFFSET(0x17351BE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__ONUNLOCKUPDATED_OFFSET UNITYSDK_OFFSET(0x17351710)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__TRYGETNORMALCHATCONTENT_OFFSET UNITYSDK_OFFSET(0x17350E80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__TRYGETSPECIALCHATCONTENT_OFFSET UNITYSDK_OFFSET(0x17350EE0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveChatService_TypeDefinitionIndex = 69340;

	class IdleLiveChatService : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _UnlockIdToSpecialChatPhases; // 0x10
		::System::Collections::Generic::List_1<::Class_1_B547B56320B70AD4*>* _SpecialChatDatas; // 0x18
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1098*>* _CreatedTriggers; // 0x20
		::Class_1_B547B56320B70AD4* _NormalChatData; // 0x28
		::System::Boolean _IsEnable; // 0x30
		::System::Boolean _IsDisposed; // 0x31

		::System::Void _ctor(::System::UInt32 initChatPhase, ::System::Boolean isDefaultEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__CTOR_OFFSET))(this, initChatPhase, isDefaultEnable);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData* GetChat()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE_GETCHAT_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData* _TryGetNormalChatContent()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__TRYGETNORMALCHATCONTENT_OFFSET))(this);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData* _TryGetSpecialChatContent()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveDanmuContentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__TRYGETSPECIALCHATCONTENT_OFFSET))(this);
		}

		::System::Void _ClearInvalidSpecialChats()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__CLEARINVALIDSPECIALCHATS_OFFSET))(this);
		}

		::System::Void UpdateNormalChatPhase(::System::UInt32 newChatPhase)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE_UPDATENORMALCHATPHASE_OFFSET))(this, newChatPhase);
		}

		::System::Void _InitUnlockIdToSpecialChatPhases()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__INITUNLOCKIDTOSPECIALCHATPHASES_OFFSET))(this);
		}

		::System::Void _OnSetDanmuEnable(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__ONSETDANMUENABLE_OFFSET))(this, param);
		}

		::System::Void _OnUnlockUpdated(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__ONUNLOCKUPDATED_OFFSET))(this, param);
		}

		::System::Void _OnSwitchChatDataToSpecialPhase(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__ONSWITCHCHATDATATOSPECIALPHASE_OFFSET))(this, param);
		}

		::System::Void _OnSwitchNormalChatPhase(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__ONSWITCHNORMALCHATPHASE_OFFSET))(this, param);
		}

		::System::Void AddSpecialChat(::System::UInt32 specialChatId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE_ADDSPECIALCHAT_OFFSET))(this, specialChatId);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void _ClearCreatedTriggers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE__CLEARCREATEDTRIGGERS_OFFSET))(this);
		}
	};
}
