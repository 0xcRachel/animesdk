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

#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16FC9640)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16FC93F0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x16FC8F70)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16FC9140)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16FC9380)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16FC9960)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FC91C0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x16FC9BA0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x16FC90D0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_SETROWDATA_OFFSET UNITYSDK_OFFSET(0x16FCA630)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x16FC96D0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16FC99A0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FCA160)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16FCA1B0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FCA7D0)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16FCA100)
#define RPG_GAMECORE_TALKSENTENCECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FC9B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkSentenceConfigExcelTable_TypeDefinitionIndex = 13828;

	class TalkSentenceConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x14ED0);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x14ED8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x14EE0);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x14EE8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x14EF0);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x14EF8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>** StaticGet__extDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TalkSentenceConfigExcelTable_IndexKey, ::RPG::GameCore::TalkSentenceConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x14F00);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x14F08);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x4F80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TalkSentenceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x4F81);
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
