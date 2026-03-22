#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemMainType.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ItemList; }
namespace RPG::GameCore { class ItemConfig; }
namespace RPG::GameCore { class ItemRow; }

#define RPG_CLIENT_GACHAITEMDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x92E98C0)
#define RPG_CLIENT_GACHAITEMDATA_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x92E99B0)
#define RPG_CLIENT_GACHAITEMDATA_GET_ITEMROW_OFFSET UNITYSDK_OFFSET(0x92E99C0)
#define RPG_CLIENT_GACHAITEMDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x92E9990)
#define RPG_CLIENT_GACHAITEMDATA_HAVEADDITIONALITEM_OFFSET UNITYSDK_OFFSET(0x92E93E0)
#define RPG_CLIENT_GACHAITEMDATA_HAVECONVERTITEM_OFFSET UNITYSDK_OFFSET(0x92E9440)
#define RPG_CLIENT_GACHAITEMDATA_SETROW_OFFSET UNITYSDK_OFFSET(0x92E6940)
#define RPG_CLIENT_GACHAITEMDATA_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x92E9380)
#define RPG_CLIENT_GACHAITEMDATA_SET_ITEMROW_OFFSET UNITYSDK_OFFSET(0x92E99D0)
#define RPG_CLIENT_GACHAITEMDATA_SYNCADDITIONALITEMDATA_OFFSET UNITYSDK_OFFSET(0x92E94A0)
#define RPG_CLIENT_GACHAITEMDATA_SYNCCONVERTITEMDATA_OFFSET UNITYSDK_OFFSET(0x92E96B0)
#define RPG_CLIENT_GACHAITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x92E6810)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaItemData_TypeDefinitionIndex = 51073;

	class GachaItemData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* ConvertItems; // 0x10
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* AdditionalItems; // 0x18
		::RPG::GameCore::ItemRow* _ItemRow_k__BackingField; // 0x20
		::System::Boolean IsNew; // 0x28
		::System::UInt32 _ItemID; // 0x2C

		::System::Void _ctor(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA__CTOR_OFFSET))(this, itemID);
		}

		::System::Boolean HaveAdditionalItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_HAVEADDITIONALITEM_OFFSET))(this);
		}

		::System::Boolean HaveConvertItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_HAVECONVERTITEM_OFFSET))(this);
		}

		::System::Void SyncAdditionalItemData(::Proto::ItemList* dropData)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_SYNCADDITIONALITEMDATA_OFFSET))(this, dropData);
		}

		::System::Void SyncConvertItemData(::Proto::ItemList* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_SYNCCONVERTITEMDATA_OFFSET))(this, itemList);
		}

		::System::Int32 CompareTo(::RPG::Client::GachaItemData* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_COMPARETO_OFFSET))(this, other);
		}

		::System::Void SetRow(::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_SETROW_OFFSET))(this, itemID);
		}

		::System::UInt32 get_ItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_ItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_SET_ITEMID_OFFSET))(this, value);
		}

		::RPG::GameCore::ItemMainType get_Type()
		{
			return ((::RPG::GameCore::ItemMainType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::GameCore::ItemRow* get_ItemRow()
		{
			return ((::RPG::GameCore::ItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_GET_ITEMROW_OFFSET))(this);
		}

		::System::Void set_ItemRow(::RPG::GameCore::ItemRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAITEMDATA_SET_ITEMROW_OFFSET))(this, value);
		}
	};
}
