#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace RPG::GameCore { class RogueMiracleEffectDisplayRow; }
namespace RPG::GameCore { class RogueTournHandbookMiracleRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x9E76BE0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0x9E77DD0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x9E76CD0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_DESCPARAMS_OFFSET UNITYSDK_OFFSET(0x9E77F00)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9E77D50)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_EXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x9E77F60)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_HANDBOOKMIRACLEID_OFFSET UNITYSDK_OFFSET(0x9E76CF0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_ICON_OFFSET UNITYSDK_OFFSET(0x9E77CF0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9E77FC0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_LOCKEDDESC_OFFSET UNITYSDK_OFFSET(0x9E77E50)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9E77C70)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9E77FD0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9E77C20)
#define RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9E77BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookMiracleDataItem_TypeDefinitionIndex = 53756;

	class RogueTournHandbookMiracleDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueMiracleEffectDisplayRow* _MiracleEffectDisplayRow; // 0x10
		::RPG::GameCore::RogueMiracleDisplayRow* _MiracleDisplayRow; // 0x18
		::RPG::GameCore::RogueTournHandbookMiracleRow* _HandbookMiracleRow; // 0x20
		::System::Boolean _IsUnlocked_k__BackingField; // 0x28

		::System::Void _ctor(::RPG::GameCore::RogueTournHandbookMiracleRow* handbookMiracleRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournHandbookMiracleRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM__CTOR_OFFSET))(this, handbookMiracleRow);
		}

		static ::RPG::Client::RogueTournHandbookMiracleDataItem* Create(::System::UInt32 handbookID)
		{
			return ((::RPG::Client::RogueTournHandbookMiracleDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_CREATE_OFFSET))(handbookID);
		}

		::System::Void SyncUnlocked(::System::Boolean isUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_SYNCUNLOCKED_OFFSET))(this, isUnlocked);
		}

		::System::UInt32 get_HandbookMiracleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_HANDBOOKMIRACLEID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_ICON_OFFSET))(this);
		}

		::RPG::GameCore::RogueMiracleCategory get_Category()
		{
			return ((::RPG::GameCore::RogueMiracleCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_CATEGORY_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_BgDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_BGDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_LockedDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_LOCKEDDESC_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_DESCPARAMS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_EXTRAEFFECTIDS_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKMIRACLEDATAITEM_SET_ISUNLOCKED_OFFSET))(this, value);
		}
	};
}
