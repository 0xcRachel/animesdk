#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournHexData; }
namespace System { class String; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1755C010)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_BGDESC_OFFSET UNITYSDK_OFFSET(0x1755D370)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1755D200)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_EXTRAEFFECTIDS_OFFSET UNITYSDK_OFFSET(0x1755D3A0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_HEXID_OFFSET UNITYSDK_OFFSET(0x1755C0A0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1755D1E0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1755D1A0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1755D1B0)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_SYNCUNLOCKED_OFFSET UNITYSDK_OFFSET(0x1755D150)
#define RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1755D140)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookHexDataItem_TypeDefinitionIndex = 62367;

	class RogueTournHandbookHexDataItem : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournHexData* _HexData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournHandbookHexDataItem* Create(::System::UInt32 hexID)
		{
			return ((::RPG::Client::RogueTournHandbookHexDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_CREATE_OFFSET))(hexID);
		}

		::System::Void SyncUnlocked(::System::Boolean isUnlocked)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_SYNCUNLOCKED_OFFSET))(this, isUnlocked);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::UInt32 get_HexID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_HEXID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_ICON_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_BgDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_BGDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKHEXDATAITEM_GET_EXTRAEFFECTIDS_OFFSET))(this);
		}
	};
}
