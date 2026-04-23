#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_CREATENORMALSHELFDATA_OFFSET UNITYSDK_OFFSET(0x143F2390)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_CREATESPECIALSHELFDATA_OFFSET UNITYSDK_OFFSET(0x143F2530)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_CURRENTINTERACTCOUNT_OFFSET UNITYSDK_OFFSET(0x143F28E0)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_ISSPECIALSHELF_OFFSET UNITYSDK_OFFSET(0x143F2940)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x143F2960)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_ISUSING_OFFSET UNITYSDK_OFFSET(0x143F28D0)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_SHELFICON_OFFSET UNITYSDK_OFFSET(0x143F2900)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_SHELFNAME_OFFSET UNITYSDK_OFFSET(0x143F2920)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_ISSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0x143F2740)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SETSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET UNITYSDK_OFFSET(0x143F2800)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_CURRENTINTERACTCOUNT_OFFSET UNITYSDK_OFFSET(0x143F28F0)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_ISSPECIALSHELF_OFFSET UNITYSDK_OFFSET(0x143F2950)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x143F2970)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_SHELFICON_OFFSET UNITYSDK_OFFSET(0x143F2910)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_SHELFNAME_OFFSET UNITYSDK_OFFSET(0x143F2930)
#define RPG_CLIENT_ONLINECAKECATCHSHELFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x143F2520)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlineCakeCatchShelfData_TypeDefinitionIndex = 58019;

	class OnlineCakeCatchShelfData : public ::System::Object
	{
	public:
		::System::String* _ShelfIcon_k__BackingField; // 0x10
		::RPG::Client::TextID _ShelfName_k__BackingField; // 0x18
		::System::UInt32 _CurrentInteractCount_k__BackingField; // 0x28
		::System::Boolean _IsUnlocked_k__BackingField; // 0x2C
		::System::Boolean _IsSpecialShelf_k__BackingField; // 0x2D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::OnlineCakeCatchShelfData* CreateNormalShelfData()
		{
			return ((::RPG::Client::OnlineCakeCatchShelfData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_CREATENORMALSHELFDATA_OFFSET))();
		}

		static ::RPG::Client::OnlineCakeCatchShelfData* CreateSpecialShelfData()
		{
			return ((::RPG::Client::OnlineCakeCatchShelfData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_CREATESPECIALSHELFDATA_OFFSET))();
		}

		::System::Boolean IsSpecialShelfUnlockStatusSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_ISSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET))(this);
		}

		::System::Void SetSpecialShelfUnlockStatusSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SETSPECIALSHELFUNLOCKSTATUSSEEN_OFFSET))(this);
		}

		::System::Boolean get_IsUsing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_ISUSING_OFFSET))(this);
		}

		::System::UInt32 get_CurrentInteractCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_CURRENTINTERACTCOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentInteractCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_CURRENTINTERACTCOUNT_OFFSET))(this, value);
		}

		::System::String* get_ShelfIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_SHELFICON_OFFSET))(this);
		}

		::System::Void set_ShelfIcon(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_SHELFICON_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_ShelfName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_SHELFNAME_OFFSET))(this);
		}

		::System::Void set_ShelfName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_SHELFNAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsSpecialShelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_ISSPECIALSHELF_OFFSET))(this);
		}

		::System::Void set_IsSpecialShelf(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_ISSPECIALSHELF_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINECAKECATCHSHELFDATA_SET_ISUNLOCKED_OFFSET))(this, value);
		}
	};
}
