#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1096;
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCompareViewModel; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitResultRelicInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_CLEARCACHEDDATA_OFFSET UNITYSDK_OFFSET(0x14D04F70)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_CONFIRM_OFFSET UNITYSDK_OFFSET(0x14D052F0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_CREATE_OFFSET UNITYSDK_OFFSET(0x14D04CE0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_GETCURPAGERELICINFOS_OFFSET UNITYSDK_OFFSET(0x14D051E0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x14D04CC0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_HIDE_OFFSET UNITYSDK_OFFSET(0x14D050C0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x14D04CD0)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_SHOW_OFFSET UNITYSDK_OFFSET(0x14D05080)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x14D04E10)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL__INITSTRATEGY_OFFSET UNITYSDK_OFFSET(0x14D04F20)
#define RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL__INIT_OFFSET UNITYSDK_OFFSET(0x14D04EB0)

namespace RPG::Client::RelicSmartSuit
{
	inline static constexpr unsigned int RelicSmartSuitCompareMoreChoicePanel_TypeDefinitionIndex = 69478;

	class RelicSmartSuitCompareMoreChoicePanel : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RelicType, ::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*>* _CachedRelicInfos; // 0x10
		::Class_0_16E4307DCC419505_1096* _Strategy; // 0x18
		::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* _ViewModel; // 0x20
		::System::Boolean _IsShow_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_SET_ISSHOW_OFFSET))(this, a1);
		}

		static ::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareMoreChoicePanel* Create(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel* a1)
		{
			return ((::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareMoreChoicePanel*(*)(::RPG::Client::RelicSmartSuit::RelicSmartSuitCompareViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL__INIT_OFFSET))(this);
		}

		::System::Void _InitStrategy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL__INITSTRATEGY_OFFSET))(this);
		}

		::System::Void ClearCachedData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_CLEARCACHEDDATA_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_SHOW_OFFSET))(this);
		}

		::System::Void Hide(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_HIDE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>* GetCurPageRelicInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicSmartSuit::RelicSmartSuitResultRelicInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_GETCURPAGERELICINFOS_OFFSET))(this);
		}

		::System::Void Confirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICSMARTSUIT_RELICSMARTSUITCOMPAREMORECHOICEPANEL_CONFIRM_OFFSET))(this);
		}
	};
}
