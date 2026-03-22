#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CycleQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETCYCLEIDBYQUESTID_OFFSET UNITYSDK_OFFSET(0x169DBC30)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x169DB1D0)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x169DB020)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x169DACF0)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x169DAFC0)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x169DB350)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x169DAD70)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x169DC100)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x169DB390)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x169DB570)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x169DB920)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x169DC1A0)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x169DB4D0)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x169DB430)
#define RPG_GAMECORE_CYCLEQUESTEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x169DBCC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CycleQuestExcelTable_TypeDefinitionIndex = 13227;

	class CycleQuestExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CycleQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A9E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(CycleQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A9E8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(CycleQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A9F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__QuestToCycle()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(CycleQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A9F8);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CycleQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x9790);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CycleQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x9791);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(CycleQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x9792);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::CycleQuestRow* GetData(::System::UInt32 CycleID)
		{
			return ((::RPG::GameCore::CycleQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETDATA_OFFSET))(CycleID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::CycleQuestRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::CycleQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::UInt32 GetCycleIDByQuestID(::System::UInt32 questID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_GETCYCLEIDBYQUESTID_OFFSET))(questID);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CYCLEQUESTEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
