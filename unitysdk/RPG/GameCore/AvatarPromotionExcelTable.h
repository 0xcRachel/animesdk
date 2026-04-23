#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdapterEnumerator_2.h"
#include "unitysdk/RPG/GameCore/AvatarPromotionExcelTable_IndexKey.h"
#include "unitysdk/Struct_2_F780BA94AF5E7E37.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_238EB93629797DE5;
namespace RPG::GameCore { class AvatarPromotionRow; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2; }
namespace RPG::GameCore { template <typename T1, typename T2> class TableLRUCache_2_CacheOperation; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18206680)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18207020)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETLRUINFO_OFFSET UNITYSDK_OFFSET(0x18206C20)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18206BA0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18206FB0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18207580)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18206DF0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_LOADTOROW_OFFSET UNITYSDK_OFFSET(0x182077C0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_SETLRUOPERATION_OFFSET UNITYSDK_OFFSET(0x18206D80)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_TRYLOADROW_OFFSET UNITYSDK_OFFSET(0x18207280)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x182075C0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18209480)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x182094D0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x182099A0)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18209420)
#define RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18207760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPromotionExcelTable_TypeDefinitionIndex = 12031;

	class AvatarPromotionExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0xC8C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_fullPathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0xC8C8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0xC8D0);
		}
		static ::System::String** StaticGet_srcFileName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0xC8D8);
		}
		static ::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>** StaticGet_LRUCache()
		{
			return (::RPG::GameCore::TableLRUCache_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0xC8E0);
		}
		static ::Class_2_238EB93629797DE5** StaticGet_headers()
		{
			return (::Class_2_238EB93629797DE5**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0xC8E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0xC8F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x4A50);
		}
		static ::System::Boolean* StaticGet_IsLoadReverseMap()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarPromotionExcelTable_TypeDefinitionIndex)->GetStaticField(0x4A51);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::Struct_2_F780BA94AF5E7E37 GetLRUInfo()
		{
			return ((::Struct_2_F780BA94AF5E7E37(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETLRUINFO_OFFSET))();
		}

		static ::System::Void SetLRUOperation(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>* putin, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>* takeout, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>* discard)
		{
			return ((::System::Void(*)(::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>*, ::RPG::GameCore::TableLRUCache_2_CacheOperation<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_SETLRUOPERATION_OFFSET))(putin, takeout, discard);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::AdapterEnumerator_2<::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarPromotionRow* GetData(::System::UInt32 AvatarID, ::System::UInt32 Promotion)
		{
			return ((::RPG::GameCore::AvatarPromotionRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_GETDATA_OFFSET))(AvatarID, Promotion);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void LoadToRow(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> offsetData, ::RPG::GameCore::AvatarPromotionRow* row)
		{
			return ((::System::Void(*)(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>, ::RPG::GameCore::AvatarPromotionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_LOADTOROW_OFFSET))(offsetData, row);
		}

		static ::System::Boolean TryLoadRow(::RPG::GameCore::AvatarPromotionExcelTable_IndexKey key, ::RPG::GameCore::AvatarPromotionRow*& row)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AvatarPromotionExcelTable_IndexKey, ::RPG::GameCore::AvatarPromotionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE_TRYLOADROW_OFFSET))(key, row);
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarPromotionRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarPromotionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROMOTIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
