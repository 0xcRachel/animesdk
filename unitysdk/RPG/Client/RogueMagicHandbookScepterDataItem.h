#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterFuncType.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueMagicScepterDataItem; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_BIGICONPATH_OFFSET UNITYSDK_OFFSET(0x9E0A6B0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_DISPLAYDATAITEM_OFFSET UNITYSDK_OFFSET(0x9E0AF30)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_FUNCTYPE_OFFSET UNITYSDK_OFFSET(0x9E0AE70)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9E0A580)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9E0AF40)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9E0A3D0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_LOCKEDUNITEFFECT_OFFSET UNITYSDK_OFFSET(0x9E0A990)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_LOCKEDUNITEXTRAEFFECTS_OFFSET UNITYSDK_OFFSET(0x9E0ABA0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9E0A3F0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_SCEPTERID_OFFSET UNITYSDK_OFFSET(0x9E0A3B0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_STYLETYPE_OFFSET UNITYSDK_OFFSET(0x9E0ADB0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_TRIGGERCOND_OFFSET UNITYSDK_OFFSET(0x9E0A7E0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9E0AF50)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_SYNCISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9E08DA0)
#define RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9E08920)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicHandbookScepterDataItem_TypeDefinitionIndex = 53563;

	class RogueMagicHandbookScepterDataItem : public ::System::Object
	{
	public:
		::RPG::Client::RogueMagicScepterDataItem* _DataItem; // 0x10
		::System::Boolean _IsUnlocked_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::Client::RogueMagicScepterDataItem* dataItem)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM__CTOR_OFFSET))(this, dataItem);
		}

		::System::Void SyncIsUnlocked(::System::Boolean isUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_SYNCISUNLOCKED_OFFSET))(this, isUnlocked);
		}

		::System::UInt32 get_ScepterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_SCEPTERID_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_LEVEL_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_BigIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_BIGICONPATH_OFFSET))(this);
		}

		::System::String* get_TriggerCond()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_TRIGGERCOND_OFFSET))(this);
		}

		::System::String* get_LockedUnitEffect()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_LOCKEDUNITEFFECT_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_LockedUnitExtraEffects()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_LOCKEDUNITEXTRAEFFECTS_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicStyleType get_StyleType()
		{
			return ((::RPG::GameCore::RogueMagicStyleType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_STYLETYPE_OFFSET))(this);
		}

		::RPG::GameCore::RogueMagicScepterFuncType get_FuncType()
		{
			return ((::RPG::GameCore::RogueMagicScepterFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_FUNCTYPE_OFFSET))(this);
		}

		::RPG::Client::RogueMagicScepterDataItem* get_DisplayDataItem()
		{
			return ((::RPG::Client::RogueMagicScepterDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_DISPLAYDATAITEM_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICHANDBOOKSCEPTERDATAITEM_SET_ISUNLOCKED_OFFSET))(this, value);
		}
	};
}
