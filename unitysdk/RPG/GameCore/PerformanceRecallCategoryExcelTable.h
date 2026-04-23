#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PerformanceRecallCategoryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GETALLMAINCATEGORY_OFFSET UNITYSDK_OFFSET(0x18F0E1E0)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18F0D810)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18F0D660)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18F0D330)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18F0D600)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18F0D9E0)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18F0D3B0)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x18F0E630)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18F0DA20)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18F0DC00)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18F0DE80)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F0E690)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18F0DB60)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18F0DAC0)
#define RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x18F0E220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceRecallCategoryExcelTable_TypeDefinitionIndex = 13596;

	class PerformanceRecallCategoryExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallCategoryRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallCategoryRow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x41C90);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x41C98);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x41CA0);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__MainCategoryIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0x41CA8);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xD080);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xD081);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceRecallCategoryExcelTable_TypeDefinitionIndex)->GetStaticField(0xD082);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallCategoryRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallCategoryRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallCategoryRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PerformanceRecallCategoryRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PerformanceRecallCategoryRow* GetData(::System::UInt32 CategoryID)
		{
			return ((::RPG::GameCore::PerformanceRecallCategoryRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GETDATA_OFFSET))(CategoryID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PerformanceRecallCategoryRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceRecallCategoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAllMainCategory()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_GETALLMAINCATEGORY_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCERECALLCATEGORYEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
