#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/RPG/GameCore/PerformanceSkipOverrideExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class PerformanceSkipOverrideRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18F14740)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18F144F0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x18F14070)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18F14240)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18F14480)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18F14B20)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18F142C0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x18F14D60)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x18F141D0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x18F147F0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18F14B60)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18F14ED0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18F14F20)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F153D0)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18F14E70)
#define RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18F14D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerformanceSkipOverrideExcelTable_TypeDefinitionIndex = 13620;

	class PerformanceSkipOverrideExcelTable : public ::System::Object
	{
	public:
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x42170);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x42178);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x42180);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x42188);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x42190);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x42198);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x421A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0xD1B0);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PerformanceSkipOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0xD1B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PerformanceSkipOverrideRow* GetData(::RPG::GameCore::ELevelPerformanceType PerformanceType, ::System::UInt32 PerformanceID)
		{
			return ((::RPG::GameCore::PerformanceSkipOverrideRow*(*)(::RPG::GameCore::ELevelPerformanceType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_GETDATA_OFFSET))(PerformanceType, PerformanceID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::PerformanceSkipOverrideRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::PerformanceSkipOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey key, ::RPG::GameCore::PerformanceSkipOverrideRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::PerformanceSkipOverrideExcelTable_IndexKey, ::RPG::GameCore::PerformanceSkipOverrideRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PerformanceSkipOverrideRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PerformanceSkipOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCESKIPOVERRIDEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
