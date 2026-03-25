#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ResidentActivityPanelIndexKey.h"
#include "unitysdk/RPG/Client/ResidentActivityState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityPanelData; }
namespace RPG::Client { class ActivityRewardCountData; }
namespace RPG::Client { class ActivityRewardItem; }
namespace RPG::Client { class ActivityTagData; }
namespace RPG::Client { class ScheduleData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_ACTIVITYNAME_OFFSET UNITYSDK_OFFSET(0x8F999B0)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_ACTIVITYPANELDATA_OFFSET UNITYSDK_OFFSET(0x8F99940)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_BRIEFDESC_OFFSET UNITYSDK_OFFSET(0x8F99A80)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x8F9A190)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_DISPLAYREWARDS_OFFSET UNITYSDK_OFFSET(0x8F99F40)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_EXPECTEDPLAYINGHOURS_OFFSET UNITYSDK_OFFSET(0x8F99C60)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_GAMEPLAYINTROGUIDEVIDEOID_OFFSET UNITYSDK_OFFSET(0x8F99FD0)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_GAMEPLAYINTROIMGPATH_OFFSET UNITYSDK_OFFSET(0x8F9A060)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_INDEXKEY_OFFSET UNITYSDK_OFFSET(0x8F99950)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_INTROBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x8F99B00)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_INTRODESC_OFFSET UNITYSDK_OFFSET(0x8F99B80)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_INTROTITLE_OFFSET UNITYSDK_OFFSET(0x8F99B40)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_IPDESC_OFFSET UNITYSDK_OFFSET(0x8F99AC0)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_ISSHOWREMAINTIME_OFFSET UNITYSDK_OFFSET(0x8F9A420)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_LEFTCOUNTTEXT_OFFSET UNITYSDK_OFFSET(0x8F99BC0)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_LISTITEMIMGPATH_OFFSET UNITYSDK_OFFSET(0x8F999F0)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_REWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x8F9A0F0)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x8F9A3F0)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x8F99FB0)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x8F99F20)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET__DEBUGGERDISPLAY_OFFSET UNITYSDK_OFFSET(0x8F9A430)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_ISHIDEALLREDDOT_OFFSET UNITYSDK_OFFSET(0x8F99880)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x8F99820)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_ISSHOWNOPASSNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x8F997C0)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x8F99720)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_SETPANELSEEN_OFFSET UNITYSDK_OFFSET(0x8F998E0)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x8F9A5D0)
#define RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x8F96C60)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPanelDataResidentAdaptor_TypeDefinitionIndex = 50123;

	class ActivityPanelDataResidentAdaptor : public ::System::Object
	{
	public:
		static ::RPG::Client::TextID* StaticGet__ExpectedPlayingHoursFloatFormat()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ActivityPanelDataResidentAdaptor_TypeDefinitionIndex)->GetStaticField(0xC400);
		}
		static ::RPG::Client::TextID* StaticGet__ExpectedPlayingHoursIntegerFormat()
		{
			return (::RPG::Client::TextID*)Il2CppClass::FromTypeDefinitionIndex(ActivityPanelDataResidentAdaptor_TypeDefinitionIndex)->GetStaticField(0xC410);
		}
		::RPG::Client::ActivityPanelData* _PanelData; // 0x10
		::RPG::Client::ResidentActivityPanelIndexKey _IndexKey; // 0x18

		::System::Void _ctor(::RPG::Client::ActivityPanelData* panelData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityPanelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR__CTOR_OFFSET))(this, panelData);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR__CCTOR_OFFSET))();
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNoPassNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_ISSHOWNOPASSNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean IsHideAllRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_ISHIDEALLREDDOT_OFFSET))(this);
		}

		::System::Void SetPanelSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_SETPANELSEEN_OFFSET))(this);
		}

		::RPG::Client::ActivityPanelData* get_ActivityPanelData()
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_ACTIVITYPANELDATA_OFFSET))(this);
		}

		::RPG::Client::ResidentActivityPanelIndexKey get_IndexKey()
		{
			return ((::RPG::Client::ResidentActivityPanelIndexKey(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_INDEXKEY_OFFSET))(this);
		}

		::RPG::Client::TextID get_ActivityName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_ACTIVITYNAME_OFFSET))(this);
		}

		::System::String* get_ListItemImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_LISTITEMIMGPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_BriefDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_BRIEFDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_IPDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_IPDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_IntroButtonText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_INTROBUTTONTEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_IntroTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_INTROTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_IntroDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_INTRODESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_LeftCountText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_LEFTCOUNTTEXT_OFFSET))(this);
		}

		::System::String* get_ExpectedPlayingHours()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_EXPECTEDPLAYINGHOURS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>* get_Tags()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_TAGS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityRewardItem*>* get_DisplayRewards()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityRewardItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_DISPLAYREWARDS_OFFSET))(this);
		}

		::System::UInt32 get_SortWeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_SORTWEIGHT_OFFSET))(this);
		}

		::System::UInt32 get_GameplayIntroGuideVideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_GAMEPLAYINTROGUIDEVIDEOID_OFFSET))(this);
		}

		::System::String* get_GameplayIntroImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_GAMEPLAYINTROIMGPATH_OFFSET))(this);
		}

		::RPG::Client::ActivityRewardCountData* get_RewardCount()
		{
			return ((::RPG::Client::ActivityRewardCountData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_REWARDCOUNT_OFFSET))(this);
		}

		::RPG::Client::ResidentActivityState get_CurState()
		{
			return ((::RPG::Client::ResidentActivityState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_CURSTATE_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_Schedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_SCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsShowRemainTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET_ISSHOWREMAINTIME_OFFSET))(this);
		}

		::System::String* get__DebuggerDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPANELDATARESIDENTADAPTOR_GET__DEBUGGERDISPLAY_OFFSET))(this);
		}
	};
}
