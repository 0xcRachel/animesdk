#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ItemData.h"

namespace RPG::GameCore { class PhoneCaseConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_PHONECASEDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9A6FE50)
#define RPG_CLIENT_PHONECASEDATA_CREATEPHONECASEDATA_OFFSET UNITYSDK_OFFSET(0x9A6FC00)
#define RPG_CLIENT_PHONECASEDATA_GETITEMICONPATH_OFFSET UNITYSDK_OFFSET(0x9A6FFF0)
#define RPG_CLIENT_PHONECASEDATA_GET_CANSHOW_OFFSET UNITYSDK_OFFSET(0x9A70370)
#define RPG_CLIENT_PHONECASEDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9A70300)
#define RPG_CLIENT_PHONECASEDATA_GET_IMGPATH_OFFSET UNITYSDK_OFFSET(0x9A70280)
#define RPG_CLIENT_PHONECASEDATA_GET_ISEQUIP_OFFSET UNITYSDK_OFFSET(0x9A6FF10)
#define RPG_CLIENT_PHONECASEDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x9A702E0)
#define RPG_CLIENT_PHONECASEDATA_GET_ITEMFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x9A70220)
#define RPG_CLIENT_PHONECASEDATA_GET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0x9A701C0)
#define RPG_CLIENT_PHONECASEDATA_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x9A6CAF0)
#define RPG_CLIENT_PHONECASEDATA_SETUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9A6FE00)
#define RPG_CLIENT_PHONECASEDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x9A70310)
#define RPG_CLIENT_PHONECASEDATA_SET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x9A702F0)
#define RPG_CLIENT_PHONECASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9A6FBC0)
#define RPG_CLIENT_PHONECASEDATA__GETPATHWITHGENDER_OFFSET UNITYSDK_OFFSET(0x9A70070)
#define RPG_CLIENT_PHONECASEDATA___IFIXBASEPROXY_GET_ITEMFIGUREICONPATH_OFFSET UNITYSDK_OFFSET(0x9A70480)
#define RPG_CLIENT_PHONECASEDATA___IFIXBASEPROXY_GET_ITEMICONPATH_OFFSET UNITYSDK_OFFSET(0x9A703E0)

namespace RPG::Client
{
	inline static constexpr unsigned int PhoneCaseData_TypeDefinitionIndex = 52906;

	class PhoneCaseData : public ::RPG::Client::ItemData
	{
	public:
		::RPG::GameCore::PhoneCaseConfigRow* _Row; // 0x40
		::System::UInt32 _ID_k__BackingField; // 0x48
		::System::Boolean _IsUnlock_k__BackingField; // 0x4C

		::System::Void _ctor(::System::UInt32 configID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA__CTOR_OFFSET))(this, configID);
		}

		static ::RPG::Client::PhoneCaseData* CreatePhoneCaseData(::System::UInt32 id)
		{
			return ((::RPG::Client::PhoneCaseData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_CREATEPHONECASEDATA_OFFSET))(id);
		}

		::System::Void SetUnlocked(::System::Boolean unlock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_SETUNLOCKED_OFFSET))(this, unlock);
		}

		::System::Int32 CompareTo(::RPG::Client::PhoneCaseData* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::PhoneCaseData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_COMPARETO_OFFSET))(this, other);
		}

		static ::System::String* GetItemIconPath(::System::UInt32 itemID)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GETITEMICONPATH_OFFSET))(itemID);
		}

		::System::String* get_ItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GET_ITEMICONPATH_OFFSET))(this);
		}

		::System::String* get_ItemFigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GET_ITEMFIGUREICONPATH_OFFSET))(this);
		}

		::System::String* get_ImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GET_IMGPATH_OFFSET))(this);
		}

		::System::String* get_PrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GET_PREFABPATH_OFFSET))(this);
		}

		static ::System::String* _GetPathWithGender(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA__GETPATHWITHGENDER_OFFSET))(path);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Void set_IsUnlock(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_SET_ISUNLOCK_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean get_IsEquip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GET_ISEQUIP_OFFSET))(this);
		}

		::System::Boolean get_CanShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA_GET_CANSHOW_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_get_ItemIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA___IFIXBASEPROXY_GET_ITEMICONPATH_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_get_ItemFigureIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHONECASEDATA___IFIXBASEPROXY_GET_ITEMFIGUREICONPATH_OFFSET))(this);
		}
	};
}
