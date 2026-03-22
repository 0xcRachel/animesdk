#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/VoiceConfigExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class VoiceConfigRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1714A980)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1714A730)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x1714A2B0)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1714A480)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1714A6C0)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1714ACA0)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1714A500)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x1714AEE0)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x1714A410)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x1714AA10)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1714ACE0)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1714B3C0)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1714B410)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1714B890)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1714B360)
#define RPG_GAMECORE_VOICECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1714AE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VoiceConfigExcelTable_TypeDefinitionIndex = 14051;

	class VoiceConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(VoiceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x28720);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::VoiceConfigExcelTable_IndexKey, ::RPG::GameCore::VoiceConfigRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::VoiceConfigExcelTable_IndexKey, ::RPG::GameCore::VoiceConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(VoiceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x28728);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(VoiceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x28730);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(VoiceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x28738);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VoiceConfigExcelTable_IndexKey, ::RPG::GameCore::VoiceConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VoiceConfigExcelTable_IndexKey, ::RPG::GameCore::VoiceConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(VoiceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x28740);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(VoiceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x28748);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(VoiceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x28750);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(VoiceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8A70);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(VoiceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8A71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::VoiceConfigExcelTable_IndexKey, ::RPG::GameCore::VoiceConfigRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::VoiceConfigExcelTable_IndexKey, ::RPG::GameCore::VoiceConfigRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::VoiceConfigExcelTable_IndexKey, ::RPG::GameCore::VoiceConfigRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::VoiceConfigExcelTable_IndexKey, ::RPG::GameCore::VoiceConfigRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::VoiceConfigExcelTable_IndexKey, ::RPG::GameCore::VoiceConfigRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::VoiceConfigExcelTable_IndexKey, ::RPG::GameCore::VoiceConfigRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VoiceConfigExcelTable_IndexKey, ::RPG::GameCore::VoiceConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::VoiceConfigExcelTable_IndexKey, ::RPG::GameCore::VoiceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::VoiceConfigExcelTable_IndexKey, ::RPG::GameCore::VoiceConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::VoiceConfigExcelTable_IndexKey, ::RPG::GameCore::VoiceConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::VoiceConfigRow* GetData(::System::UInt32 VoiceID)
		{
			return ((::RPG::GameCore::VoiceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_GETDATA_OFFSET))(VoiceID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::VoiceConfigRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::VoiceConfigExcelTable_IndexKey key, ::RPG::GameCore::VoiceConfigRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::VoiceConfigExcelTable_IndexKey, ::RPG::GameCore::VoiceConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::VoiceConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::VoiceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VOICECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
