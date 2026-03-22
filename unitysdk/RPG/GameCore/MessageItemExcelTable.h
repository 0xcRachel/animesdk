#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MessageItemExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class MessageItemRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16C83E90)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16C83C40)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x16C837C0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16C83990)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16C83BD0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16C841B0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16C83A10)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x16C843F0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x16C83920)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x16C83F20)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16C841F0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16C84C80)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16C84CD0)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C85150)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16C84C20)
#define RPG_GAMECORE_MESSAGEITEMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16C84390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageItemExcelTable_TypeDefinitionIndex = 13128;

	class MessageItemExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x37810);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x37818);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x37820);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x37828);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x37830);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x37838);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x37840);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0xD860);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageItemExcelTable_TypeDefinitionIndex)->GetStaticField(0xD861);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MessageItemRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MessageItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::MessageItemRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::MessageItemExcelTable_IndexKey key, ::RPG::GameCore::MessageItemRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::MessageItemExcelTable_IndexKey, ::RPG::GameCore::MessageItemRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MessageItemRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MessageItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGEITEMEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
