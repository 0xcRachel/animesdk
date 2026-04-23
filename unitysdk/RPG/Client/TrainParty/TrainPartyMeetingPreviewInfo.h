#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartyMeetingPreviewInfo_PreviewSkillEffectInfo.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::TrainParty { class TrainPartyMeetingCategoryInfo; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingData; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingPassengerCardInfo; }
namespace RPG::Client::TrainParty { class TrainPartyMeetingPreviewInfo_MeetingPreviewContext; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerSkillInfo; }
namespace RPG::GameCore { class TrainPartySkillEffectRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_GETPREVIEWBASESCORE_OFFSET UNITYSDK_OFFSET(0x17814950)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_GETPREVIEWCATEGORYNAME_OFFSET UNITYSDK_OFFSET(0x17814B60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_GETPREVIEWMEETINGSKILLINFO_OFFSET UNITYSDK_OFFSET(0x17814F90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_GETPREVIEWPASSENGERDATA_OFFSET UNITYSDK_OFFSET(0x17814FE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_GET_FORCEREFRESHSKILLANIM_OFFSET UNITYSDK_OFFSET(0x17815D40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_GET_MATCHCATEGORYINFO_OFFSET UNITYSDK_OFFSET(0x17814B40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x17815CC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_ISCARDSCORED_OFFSET UNITYSDK_OFFSET(0x17815040)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_ISMEETINGSKILLACTIVATED_OFFSET UNITYSDK_OFFSET(0x17815290)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_REFRESHSKILLEFFECTS_OFFSET UNITYSDK_OFFSET(0x17812B40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0x17813D90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_RESET_OFFSET UNITYSDK_OFFSET(0x17814560)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_SET_FORCEREFRESHSKILLANIM_OFFSET UNITYSDK_OFFSET(0x17815D50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17813D40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO__ISMEETINGSKILLEFFECTCANACTIVATED_OFFSET UNITYSDK_OFFSET(0x178153B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO__ONMEETINGSKILLACTIVATED_OFFSET UNITYSDK_OFFSET(0x17815300)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO__ONSKILLPREPROCESS_OFFSET UNITYSDK_OFFSET(0x17815950)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO__ONSKILLPROCESS_OFFSET UNITYSDK_OFFSET(0x17815B20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO__REFRESHSCOREPREVIEW_OFFSET UNITYSDK_OFFSET(0x17814690)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO__REFRESHSKILLPREVIEW_OFFSET UNITYSDK_OFFSET(0x178148E0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyMeetingPreviewInfo_TypeDefinitionIndex = 68603;

	class TrainPartyMeetingPreviewInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ActivatedSkillIDSet; // 0x10
		::RPG::Client::TrainParty::TrainPartyMeetingPreviewInfo_MeetingPreviewContext* _Context; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPreviewInfo_PreviewSkillEffectInfo>* _AllSkillEffectInfos; // 0x20
		::RPG::Client::TrainParty::TrainPartyMeetingData* _Owner; // 0x28
		::System::Int32 _LastSkillActivatedFlag; // 0x30
		::System::Boolean _ForceRefreshSkillAnim_k__BackingField; // 0x34
		::System::Int32 _CurSkillActivatedFlag; // 0x38

		::System::Void _ctor(::RPG::Client::TrainParty::TrainPartyMeetingData* owner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO__CTOR_OFFSET))(this, owner);
		}

		::System::Void RefreshSkillEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_REFRESHSKILLEFFECTS_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_RESET_OFFSET))(this);
		}

		::System::Void Refresh(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>* sortedCardInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_REFRESH_OFFSET))(this, sortedCardInfos);
		}

		::System::UInt32 GetPreviewBaseScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_GETPREVIEWBASESCORE_OFFSET))(this);
		}

		::System::String* GetPreviewCategoryName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_GETPREVIEWCATEGORYNAME_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo* GetPreviewMeetingSkillInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_GETPREVIEWMEETINGSKILLINFO_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerData* GetPreviewPassengerData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_GETPREVIEWPASSENGERDATA_OFFSET))(this);
		}

		::System::Boolean IsCardScored(::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo* card)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingPassengerCardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_ISCARDSCORED_OFFSET))(this, card);
		}

		::System::Boolean IsMeetingSkillActivated(::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo* skillInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_ISMEETINGSKILLACTIVATED_OFFSET))(this, skillInfo);
		}

		::System::Void _OnMeetingSkillActivated(::RPG::Client::TrainParty::TrainPartyMeetingPreviewInfo_PreviewSkillEffectInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyMeetingPreviewInfo_PreviewSkillEffectInfo))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO__ONMEETINGSKILLACTIVATED_OFFSET))(this, info);
		}

		::System::Boolean _IsMeetingSkillEffectCanActivated(::RPG::GameCore::TrainPartySkillEffectRow* effectRow)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainPartySkillEffectRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO__ISMEETINGSKILLEFFECTCANACTIVATED_OFFSET))(this, effectRow);
		}

		::System::Void _OnSkillPreProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO__ONSKILLPREPROCESS_OFFSET))(this);
		}

		::System::Void _OnSkillProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO__ONSKILLPROCESS_OFFSET))(this);
		}

		::System::Void _RefreshSkillPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO__REFRESHSKILLPREVIEW_OFFSET))(this);
		}

		::System::Void _RefreshScorePreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO__REFRESHSCOREPREVIEW_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo* get_MatchCategoryInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyMeetingCategoryInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_GET_MATCHCATEGORYINFO_OFFSET))(this);
		}

		::System::UInt32 get_Ratio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_GET_RATIO_OFFSET))(this);
		}

		::System::Boolean get_ForceRefreshSkillAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_GET_FORCEREFRESHSKILLANIM_OFFSET))(this);
		}

		::System::Void set_ForceRefreshSkillAnim(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYMEETINGPREVIEWINFO_SET_FORCEREFRESHSKILLANIM_OFFSET))(this, value);
		}
	};
}
