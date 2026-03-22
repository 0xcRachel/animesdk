#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"
#include "unitysdk/RPG/GameCore/ItemMainType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class ItemData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EQUIPMENTREDDOTFILTER_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9181EC0)
#define RPG_CLIENT_EQUIPMENTREDDOTFILTER_UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0x9181200)
#define RPG_CLIENT_EQUIPMENTREDDOTFILTER__CHECKEQUIPMENTREDDOT_OFFSET UNITYSDK_OFFSET(0x9181810)
#define RPG_CLIENT_EQUIPMENTREDDOTFILTER__CHECKHASCANUSEEQUIPMENTANDRELIC_OFFSET UNITYSDK_OFFSET(0x9181580)
#define RPG_CLIENT_EQUIPMENTREDDOTFILTER__CHECKRELICREDDOT_OFFSET UNITYSDK_OFFSET(0x91818C0)
#define RPG_CLIENT_EQUIPMENTREDDOTFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x91821E0)
#define RPG_CLIENT_EQUIPMENTREDDOTFILTER__ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x9181F90)
#define RPG_CLIENT_EQUIPMENTREDDOTFILTER__TRYREFRESHITEMDATALIST_OFFSET UNITYSDK_OFFSET(0x9181FE0)
#define RPG_CLIENT_EQUIPMENTREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x9182380)

namespace RPG::Client
{
	inline static constexpr unsigned int EquipmentRedDotFilter_TypeDefinitionIndex = 53239;

	class EquipmentRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* RelicQuickDressAvatarIDs; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemMainType>* _ItemMainTypes; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ItemData*>* _ItemDataList; // 0x20
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::RelicType>* _HasCanUseRelic; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* EquipmentTagAvatarIDs; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* RelicSmartSuitAvatarIDs; // 0x38
		::System::Boolean _HasCanUseEquipment; // 0x40
		::System::Boolean _NeedRefreshItems; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTREDDOTFILTER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateRedDot(::System::Boolean isRelicTwoSetUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTREDDOTFILTER_UPDATEREDDOT_OFFSET))(this, isRelicTwoSetUnlock);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTREDDOTFILTER_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _OnItemChanged(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTREDDOTFILTER__ONITEMCHANGED_OFFSET))(this, arg);
		}

		::System::Void _CheckHasCanUseEquipmentAndRelic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTREDDOTFILTER__CHECKHASCANUSEEQUIPMENTANDRELIC_OFFSET))(this);
		}

		::System::Void _TryRefreshItemDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTREDDOTFILTER__TRYREFRESHITEMDATALIST_OFFSET))(this);
		}

		::System::Void _CheckEquipmentRedDot(::RPG::Client::AvatarData* avatarData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTREDDOTFILTER__CHECKEQUIPMENTREDDOT_OFFSET))(this, avatarData);
		}

		::System::Void _CheckRelicRedDot(::RPG::Client::AvatarData* avatarData, ::System::Boolean isRelicTwoSetUnlock)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTREDDOTFILTER__CHECKRELICREDDOT_OFFSET))(this, avatarData, isRelicTwoSetUnlock);
		}

		::System::Void __iFixBaseProxy_AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EQUIPMENTREDDOTFILTER___IFIXBASEPROXY_ADDHANDLERS_OFFSET))(this);
		}
	};
}
