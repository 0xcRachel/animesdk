#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RecordRefreshRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19016AF0)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19016940)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19016610)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x190168E0)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19016CC0)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19016690)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19016D00)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19016EE0)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19017130)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19017490)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19016E40)
#define RPG_GAMECORE_RECORDREFRESHEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19016DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RecordRefreshExcelTable_TypeDefinitionIndex = 13638;

	class RecordRefreshExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RecordRefreshExcelTable_TypeDefinitionIndex)->GetStaticField(0x28910);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RecordRefreshExcelTable_TypeDefinitionIndex)->GetStaticField(0x28918);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecordRefreshRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecordRefreshRow*>**)Il2CppClass::FromTypeDefinitionIndex(RecordRefreshExcelTable_TypeDefinitionIndex)->GetStaticField(0x28920);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RecordRefreshExcelTable_TypeDefinitionIndex)->GetStaticField(0x7D70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RecordRefreshExcelTable_TypeDefinitionIndex)->GetStaticField(0x7D71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecordRefreshRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecordRefreshRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecordRefreshRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RecordRefreshRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RecordRefreshRow* GetData(::System::UInt32 RefreshID)
		{
			return ((::RPG::GameCore::RecordRefreshRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE_GETDATA_OFFSET))(RefreshID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RecordRefreshRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RecordRefreshRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECORDREFRESHEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
