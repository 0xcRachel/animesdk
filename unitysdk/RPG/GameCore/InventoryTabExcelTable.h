#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class InventoryTabRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18893830)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x188936B0)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18893380)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18893650)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x188939B0)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18893400)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x188939F0)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18893BD0)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x188940E0)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x188943F0)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18893B30)
#define RPG_GAMECORE_INVENTORYTABEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18893A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InventoryTabExcelTable_TypeDefinitionIndex = 13108;

	class InventoryTabExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*>**)Il2CppClass::FromTypeDefinitionIndex(InventoryTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x2DE80);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InventoryTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x2DE88);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(InventoryTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x2DE90);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InventoryTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x8EF0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(InventoryTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x8EF1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InventoryTabRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::InventoryTabRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::InventoryTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::InventoryTabRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::InventoryTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INVENTORYTABEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
