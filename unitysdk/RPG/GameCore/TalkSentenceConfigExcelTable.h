#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/TalkSentenceConfigExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class TalkSentenceConfigRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x199CCD00)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x199CCAB0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x199CC630)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x199CC800)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x199CCA40)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x199CD020)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x199CC880)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x199CD260)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x199CC790)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_SETROWDATA_OFFSET UNITYSDK_OFFSET(0x199CDCF0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x199CCD90)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x199CD060)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x199CD820)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x199CD870)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x199CDE90)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x199CD7C0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x199CD200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkSentenceConfigExcelTable_TypeDefinitionIndex = 14417;

	class TalkSentenceConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x40800);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>** StaticGet__extDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x40808);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x40810);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x40818);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x40820);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x40828);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x40830);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x40838);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCD50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCD51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TalkSentenceConfigRow* GetData(::System::UInt32 TalkSentenceID)
		{
			return ((::RPG::GameCore::TalkSentenceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GETDATA_OFFSET))(TalkSentenceID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::TalkSentenceConfigRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::TalkSentenceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey key, ::RPG::GameCore::TalkSentenceConfigRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TalkSentenceConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::TalkSentenceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Void SetRowData(::RPG::GameCore::TalkSentenceConfigRow* row)
		{
			return ((::System::Void(*)(::RPG::GameCore::TalkSentenceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_SETROWDATA_OFFSET))(row);
		}
	};
}
