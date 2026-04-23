#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EquipmentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x194533D0)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19453250)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19452F20)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_GET_PROMOTIONLUT_OFFSET UNITYSDK_OFFSET(0x194541A0)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x194531F0)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19453550)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19452FA0)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x19454730)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19453590)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19453770)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19453E90)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x194547D0)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x194536D0)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19453630)
#define RPG_GAMECORE_EQUIPMENTEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x194541E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EquipmentExcelTable_TypeDefinitionIndex = 12515;

	class EquipmentExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentRow*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EB90);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__PromotionLUT()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EB98);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EBA0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EquipmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x1EBA8);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EquipmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x6F10);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EquipmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x6F11);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EquipmentExcelTable_TypeDefinitionIndex)->GetStaticField(0x6F12);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EquipmentRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EquipmentRow* GetData(::System::UInt32 EquipmentID)
		{
			return ((::RPG::GameCore::EquipmentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_GETDATA_OFFSET))(EquipmentID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EquipmentRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::EquipmentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* get_PromotionLUT()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_GET_PROMOTIONLUT_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EQUIPMENTEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}
	};
}
