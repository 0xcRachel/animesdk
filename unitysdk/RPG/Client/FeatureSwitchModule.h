#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B17827C431B138EB.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_6E708EAB438EC183_6;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FEATURESWITCHMODULE_GET_CLOSEDACTIVITYPANELIDS_OFFSET UNITYSDK_OFFSET(0x9244FE0)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_CLOSEDACTIVITYSCHEDULEIDS_OFFSET UNITYSDK_OFFSET(0x9244AB0)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_DISABLEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0x9245490)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_ISALLPREAVATARDISABLING_OFFSET UNITYSDK_OFFSET(0x9245400)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_ISCLOSEALLSHOP_OFFSET UNITYSDK_OFFSET(0x92466C0)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_SHIELDEDSHOPGOODSIDDIC_OFFSET UNITYSDK_OFFSET(0x9246700)
#define RPG_CLIENT_FEATURESWITCHMODULE_GET_SHIELDEDSHOPIDS_OFFSET UNITYSDK_OFFSET(0x92466E0)
#define RPG_CLIENT_FEATURESWITCHMODULE_ISFEATURECLOSED_OFFSET UNITYSDK_OFFSET(0x923B4B0)
#define RPG_CLIENT_FEATURESWITCHMODULE_ISFEATUREPARTIALCLOSED_OFFSET UNITYSDK_OFFSET(0x9246CE0)
#define RPG_CLIENT_FEATURESWITCHMODULE_ISFEATUREREDDOTCLOSED_OFFSET UNITYSDK_OFFSET(0x9246F60)
#define RPG_CLIENT_FEATURESWITCHMODULE_ISNEWPERFORMANCESKIP_OFFSET UNITYSDK_OFFSET(0x92455F0)
#define RPG_CLIENT_FEATURESWITCHMODULE_NEWPERFORMANCESKIPEXCLUDEIDS_OFFSET UNITYSDK_OFFSET(0x9245680)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_CLOSEDACTIVITYPANELIDS_OFFSET UNITYSDK_OFFSET(0x9244FF0)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_CLOSEDACTIVITYSCHEDULEIDS_OFFSET UNITYSDK_OFFSET(0x9244AC0)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_DISABLEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0x92454A0)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_ISCLOSEALLSHOP_OFFSET UNITYSDK_OFFSET(0x92466D0)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_SHIELDEDSHOPGOODSIDDIC_OFFSET UNITYSDK_OFFSET(0x9246710)
#define RPG_CLIENT_FEATURESWITCHMODULE_SET_SHIELDEDSHOPIDS_OFFSET UNITYSDK_OFFSET(0x92466F0)
#define RPG_CLIENT_FEATURESWITCHMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9246720)
#define RPG_CLIENT_FEATURESWITCHMODULE__ADDSHIELDEDSHOPGOODID_OFFSET UNITYSDK_OFFSET(0x9246530)
#define RPG_CLIENT_FEATURESWITCHMODULE__ADDSHIELDEDSHOPID_OFFSET UNITYSDK_OFFSET(0x92464D0)
#define RPG_CLIENT_FEATURESWITCHMODULE__CLEARFEATURESWITCHSHOP_OFFSET UNITYSDK_OFFSET(0x92463F0)
#define RPG_CLIENT_FEATURESWITCHMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9247110)
#define RPG_CLIENT_FEATURESWITCHMODULE__ISCLOSEDACTIVITYPANELIDSCHANGED_OFFSET UNITYSDK_OFFSET(0x9244BD0)
#define RPG_CLIENT_FEATURESWITCHMODULE__ISCLOSEDACTIVITYSCHEDULEIDSCHANGED_OFFSET UNITYSDK_OFFSET(0x92446A0)
#define RPG_CLIENT_FEATURESWITCHMODULE__ISSHIELDEDDATACHANGED_OFFSET UNITYSDK_OFFSET(0x9245C40)
#define RPG_CLIENT_FEATURESWITCHMODULE__ONUPDATEFEATURESWITCHSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9246790)
#define RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULEACTIVITYPANEL_OFFSET UNITYSDK_OFFSET(0x9244AD0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULEACTIVITY_OFFSET UNITYSDK_OFFSET(0x9244560)
#define RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULESHOP_OFFSET UNITYSDK_OFFSET(0x9245AF0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATECLOSEDACTIVITYPANELIDS_OFFSET UNITYSDK_OFFSET(0x9244DC0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATECLOSEDACTIVITYSCHEDULEIDS_OFFSET UNITYSDK_OFFSET(0x9244890)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHACTIVITYPANEL_OFFSET UNITYSDK_OFFSET(0x9244B60)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHACTIVITYSCHEDULE_OFFSET UNITYSDK_OFFSET(0x92445F0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHAVATAR_OFFSET UNITYSDK_OFFSET(0x9245000)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x92454B0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHSHOP_OFFSET UNITYSDK_OFFSET(0x9245BD0)
#define RPG_CLIENT_FEATURESWITCHMODULE__UPDATESHIELDEDDATA_OFFSET UNITYSDK_OFFSET(0x9246110)
#define RPG_CLIENT_FEATURESWITCHMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9247450)

namespace RPG::Client
{
	inline static constexpr unsigned int FeatureSwitchModule_TypeDefinitionIndex = 50949;

	class FeatureSwitchModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _DisabledAvatarIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _ShieldedShopIDs_k__BackingField; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ClosedActivityScheduleIDs_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::Enum_3_B17827C431B138EB, ::Il2CppArray<::Class_1_6E708EAB438EC183_6*>*>* _FeatureSwitchParamDict; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _ShieldedShopGoodsIDDic_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::Enum_3_B17827C431B138EB, ::System::Boolean>* _FeatureSwitchClosedDict; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _ClosedActivityPanelIDs_k__BackingField; // 0x40
		::System::Boolean _IsCloseAllShop_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__CTOR_OFFSET))(this);
		}

		::System::Void _UnInitFeatureSwitchModuleActivity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULEACTIVITY_OFFSET))(this);
		}

		::System::Void _UpdateFeatureSwitchActivitySchedule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHACTIVITYSCHEDULE_OFFSET))(this);
		}

		::System::Boolean _IsClosedActivityScheduleIDsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ISCLOSEDACTIVITYSCHEDULEIDSCHANGED_OFFSET))(this);
		}

		::System::Void _UpdateClosedActivityScheduleIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATECLOSEDACTIVITYSCHEDULEIDS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_ClosedActivityScheduleIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_GET_CLOSEDACTIVITYSCHEDULEIDS_OFFSET))(this);
		}

		::System::Void set_ClosedActivityScheduleIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_CLOSEDACTIVITYSCHEDULEIDS_OFFSET))(this, value);
		}

		::System::Void _UnInitFeatureSwitchModuleActivityPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULEACTIVITYPANEL_OFFSET))(this);
		}

		::System::Void _UpdateFeatureSwitchActivityPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHACTIVITYPANEL_OFFSET))(this);
		}

		::System::Boolean _IsClosedActivityPanelIDsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ISCLOSEDACTIVITYPANELIDSCHANGED_OFFSET))(this);
		}

		::System::Void _UpdateClosedActivityPanelIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATECLOSEDACTIVITYPANELIDS_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_ClosedActivityPanelIDs()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_GET_CLOSEDACTIVITYPANELIDS_OFFSET))(this);
		}

		::System::Void set_ClosedActivityPanelIDs(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_CLOSEDACTIVITYPANELIDS_OFFSET))(this, value);
		}

		::System::Void _UpdateFeatureSwitchAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsAllPreAvatarDisabling()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_GET_ISALLPREAVATARDISABLING_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DisabledAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_GET_DISABLEDAVATARIDS_OFFSET))(this);
		}

		::System::Void set_DisabledAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_DISABLEDAVATARIDS_OFFSET))(this, value);
		}

		::System::Void _UpdateFeatureSwitchPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHPERFORMANCE_OFFSET))(this);
		}

		::System::Boolean IsNewPerformanceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_ISNEWPERFORMANCESKIP_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* NewPerformanceSkipExcludeIds()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_NEWPERFORMANCESKIPEXCLUDEIDS_OFFSET))(this);
		}

		::System::Void _UnInitFeatureSwitchModuleShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UNINITFEATURESWITCHMODULESHOP_OFFSET))(this);
		}

		::System::Void _UpdateFeatureSwitchShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATEFEATURESWITCHSHOP_OFFSET))(this);
		}

		::System::Boolean _IsShieldedDataChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ISSHIELDEDDATACHANGED_OFFSET))(this);
		}

		::System::Void _UpdateShieldedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__UPDATESHIELDEDDATA_OFFSET))(this);
		}

		::System::Void _ClearFeatureSwitchShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__CLEARFEATURESWITCHSHOP_OFFSET))(this);
		}

		::System::Void _AddShieldedShopID(::System::UInt32 shopID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ADDSHIELDEDSHOPID_OFFSET))(this, shopID);
		}

		::System::Void _AddShieldedShopGoodID(::System::UInt32 shopID, ::System::UInt32 goodID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ADDSHIELDEDSHOPGOODID_OFFSET))(this, shopID, goodID);
		}

		::System::Boolean get_IsCloseAllShop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_GET_ISCLOSEALLSHOP_OFFSET))(this);
		}

		::System::Void set_IsCloseAllShop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_ISCLOSEALLSHOP_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ShieldedShopIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_GET_SHIELDEDSHOPIDS_OFFSET))(this);
		}

		::System::Void set_ShieldedShopIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_SHIELDEDSHOPIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_ShieldedShopGoodsIDDic()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_GET_SHIELDEDSHOPGOODSIDDIC_OFFSET))(this);
		}

		::System::Void set_ShieldedShopGoodsIDDic(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_SET_SHIELDEDSHOPGOODSIDDIC_OFFSET))(this, value);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnUpdateFeatureSwitchScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE__ONUPDATEFEATURESWITCHSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Boolean IsFeatureClosed(::Enum_3_B17827C431B138EB featureType)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_B17827C431B138EB))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_ISFEATURECLOSED_OFFSET))(this, featureType);
		}

		::System::Boolean IsFeaturePartialClosed(::Enum_3_B17827C431B138EB featureType, ::Il2CppArray<::System::UInt32>* args)
		{
			return ((::System::Boolean(*)(::PVOID, ::Enum_3_B17827C431B138EB, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_ISFEATUREPARTIALCLOSED_OFFSET))(this, featureType, args);
		}

		::System::Boolean IsFeatureRedDotClosed(::System::UInt32 reddotID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE_ISFEATUREREDDOTCLOSED_OFFSET))(this, reddotID);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEATURESWITCHMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
