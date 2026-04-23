#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityExpeditionRank.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityExpeditionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x188750F0)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18874F40)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_GETEXPEDITIONIDSBYRANK_OFFSET UNITYSDK_OFFSET(0x18875E20)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18874C10)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18874EE0)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x188752C0)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18874C90)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x18876400)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18875300)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x188754E0)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18875AC0)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x188764A0)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18875440)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x188753A0)
#define RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x18875EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityExpeditionExcelTable_TypeDefinitionIndex = 10953;

	class ActivityExpeditionExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityExpeditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x5EF0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityExpeditionRank, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__RankExpeditionIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivityExpeditionRank, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityExpeditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x5EF8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityExpeditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x5F00);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityExpeditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x5F08);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityExpeditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E30);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityExpeditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E31);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityExpeditionExcelTable_TypeDefinitionIndex)->GetStaticField(0x1E32);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityExpeditionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityExpeditionRow* GetData(::System::UInt32 ExpeditionID)
		{
			return ((::RPG::GameCore::ActivityExpeditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_GETDATA_OFFSET))(ExpeditionID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityExpeditionRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityExpeditionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetExpeditionIDsByRank(::RPG::GameCore::ActivityExpeditionRank rank)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::GameCore::ActivityExpeditionRank))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_GETEXPEDITIONIDSBYRANK_OFFSET))(rank);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYEXPEDITIONEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
