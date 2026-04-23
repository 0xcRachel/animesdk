#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_80.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_29.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TutorialGuideShowType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MVVM::Model { class ITutorialGuideCollection; }
namespace RPG::Client::MVVM::Model { class TutorialGuideCategoryInfo; }
namespace RPG::Client::MVVM::Model { class TutorialGuideSpecialGotoInfo; }
namespace RPG::Client::MVVM::Model { class TutorialSingleGuideInfo; }
namespace RPG::GameCore { class TutorialTriggerParam; }

#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GETCATEGORYINFO_OFFSET UNITYSDK_OFFSET(0x16968680)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GETGUIDEINFOBYINDEX_OFFSET UNITYSDK_OFFSET(0x16968290)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GETSPECIALGOTOINFO_OFFSET UNITYSDK_OFFSET(0x16968770)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_CANREVIEW_OFFSET UNITYSDK_OFFSET(0x16968900)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x169688E0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_FINISHTRIGGERPARAMS_OFFSET UNITYSDK_OFFSET(0x16968980)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x16968860)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_GROUPTYPEID_OFFSET UNITYSDK_OFFSET(0x16968880)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_GUIDECOUNT_OFFSET UNITYSDK_OFFSET(0x169688A0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_GUIDETYPE_OFFSET UNITYSDK_OFFSET(0x16968570)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_HASVIDEO_OFFSET UNITYSDK_OFFSET(0x169689E0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_MESSAGETEXT_OFFSET UNITYSDK_OFFSET(0x169689A0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x16968940)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x169689C0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_TRIGGERPARAMS_OFFSET UNITYSDK_OFFSET(0x16968960)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_TUTORIALGUIDEIDLIST_OFFSET UNITYSDK_OFFSET(0x169688C0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_TUTORIALSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x16968920)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_USERDATA_OFFSET UNITYSDK_OFFSET(0x16968A10)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x169689F0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SETSTATUSBYINT_OFFSET UNITYSDK_OFFSET(0x16968630)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_CANREVIEW_OFFSET UNITYSDK_OFFSET(0x16968910)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x169688F0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_FINISHTRIGGERPARAMS_OFFSET UNITYSDK_OFFSET(0x16968990)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x16968870)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_GROUPTYPEID_OFFSET UNITYSDK_OFFSET(0x16968890)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_GUIDECOUNT_OFFSET UNITYSDK_OFFSET(0x169688B0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_MESSAGETEXT_OFFSET UNITYSDK_OFFSET(0x169689B0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x16968950)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x169689D0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_TRIGGERPARAMS_OFFSET UNITYSDK_OFFSET(0x16968970)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_TUTORIALGUIDEIDLIST_OFFSET UNITYSDK_OFFSET(0x169688D0)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_TUTORIALSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x16968930)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_USERDATA_OFFSET UNITYSDK_OFFSET(0x16968A20)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x16968A00)
#define RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16968280)

namespace RPG::Client::MVVM::Model
{
	inline static constexpr unsigned int TutorialGuideGroupData_TypeDefinitionIndex = 68535;

	class TutorialGuideGroupData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* _TriggerParams_k__BackingField; // 0x10
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* _FinishTriggerParams_k__BackingField; // 0x18
		::System::Object* _UserData_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _TutorialGuideIDList_k__BackingField; // 0x28
		::RPG::Client::MVVM::Model::ITutorialGuideCollection* _BelongCollection; // 0x30
		::System::Boolean _CanReview_k__BackingField; // 0x38
		::Enum_3_0A3761FE34514D6C_80 _Status_k__BackingField; // 0x3C
		::RPG::Client::TextID _MessageText_k__BackingField; // 0x40
		::System::Int32 _GuideCount_k__BackingField; // 0x50
		::RPG::GameCore::TutorialGuideShowType _TutorialShowType_k__BackingField; // 0x54
		::System::UInt32 _Category_k__BackingField; // 0x58
		::System::UInt32 _GroupID_k__BackingField; // 0x5C
		::System::UInt32 _VideoID_k__BackingField; // 0x60
		::System::UInt32 _GroupTypeID_k__BackingField; // 0x64
		::System::UInt32 _Order_k__BackingField; // 0x68

		::System::Void _ctor(::RPG::Client::MVVM::Model::ITutorialGuideCollection* belongCollection)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::ITutorialGuideCollection*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA__CTOR_OFFSET))(this, belongCollection);
		}

		::RPG::Client::MVVM::Model::TutorialSingleGuideInfo* GetGuideInfoByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::MVVM::Model::TutorialSingleGuideInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GETGUIDEINFOBYINDEX_OFFSET))(this, index);
		}

		::System::Void SetStatusByInt(::System::Int32 status)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SETSTATUSBYINT_OFFSET))(this, status);
		}

		::RPG::Client::MVVM::Model::TutorialGuideCategoryInfo* GetCategoryInfo()
		{
			return ((::RPG::Client::MVVM::Model::TutorialGuideCategoryInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GETCATEGORYINFO_OFFSET))(this);
		}

		::RPG::Client::MVVM::Model::TutorialGuideSpecialGotoInfo* GetSpecialGotoInfo()
		{
			return ((::RPG::Client::MVVM::Model::TutorialGuideSpecialGotoInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GETSPECIALGOTOINFO_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_GROUPID_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupTypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_GROUPTYPEID_OFFSET))(this);
		}

		::System::Void set_GroupTypeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_GROUPTYPEID_OFFSET))(this, value);
		}

		::System::Int32 get_GuideCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_GUIDECOUNT_OFFSET))(this);
		}

		::System::Void set_GuideCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_GUIDECOUNT_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_TutorialGuideIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_TUTORIALGUIDEIDLIST_OFFSET))(this);
		}

		::System::Void set_TutorialGuideIDList(::Il2CppArray<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_TUTORIALGUIDEIDLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_Category()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_Category(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_CATEGORY_OFFSET))(this, value);
		}

		::System::Boolean get_CanReview()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_CANREVIEW_OFFSET))(this);
		}

		::System::Void set_CanReview(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_CANREVIEW_OFFSET))(this, value);
		}

		::RPG::GameCore::TutorialGuideShowType get_TutorialShowType()
		{
			return ((::RPG::GameCore::TutorialGuideShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_TUTORIALSHOWTYPE_OFFSET))(this);
		}

		::System::Void set_TutorialShowType(::RPG::GameCore::TutorialGuideShowType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TutorialGuideShowType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_TUTORIALSHOWTYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_ORDER_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* get_TriggerParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_TRIGGERPARAMS_OFFSET))(this);
		}

		::System::Void set_TriggerParams(::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_TRIGGERPARAMS_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* get_FinishTriggerParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_FINISHTRIGGERPARAMS_OFFSET))(this);
		}

		::System::Void set_FinishTriggerParams(::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_FINISHTRIGGERPARAMS_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_MessageText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_MESSAGETEXT_OFFSET))(this);
		}

		::System::Void set_MessageText(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_MESSAGETEXT_OFFSET))(this, value);
		}

		::Enum_3_0A3761FE34514D6C_80 get_Status()
		{
			return ((::Enum_3_0A3761FE34514D6C_80(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_0A3761FE34514D6C_80 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_80))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_STATUS_OFFSET))(this, value);
		}

		::System::Boolean get_HasVideo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_HASVIDEO_OFFSET))(this);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_VIDEOID_OFFSET))(this);
		}

		::System::Void set_VideoID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_VIDEOID_OFFSET))(this, value);
		}

		::Enum_3_ED790DAC948A65A9_29 get_GuideType()
		{
			return ((::Enum_3_ED790DAC948A65A9_29(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_GUIDETYPE_OFFSET))(this);
		}

		::System::Object* get_UserData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_GET_USERDATA_OFFSET))(this);
		}

		::System::Void set_UserData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_MODEL_TUTORIALGUIDEGROUPDATA_SET_USERDATA_OFFSET))(this, value);
		}
	};
}
