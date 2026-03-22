#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameplayGuideDataConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GETALLITEMIDSBYTYPE_OFFSET UNITYSDK_OFFSET(0x16B0C270)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16B0B750)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16B0B5D0)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GETTYPEALLENTRANCEIDS_OFFSET UNITYSDK_OFFSET(0x16B0CD20)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GET_CONDITIONMAINMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x16B0CD90)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GET_CONDITIONSUBMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x16B0CDD0)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16B0B2A0)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16B0B570)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16B0B8D0)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16B0B320)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x16B0CE10)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16B0B910)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B0BAF0)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16B0BF60)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B0CFA0)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16B0BA50)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16B0B9B0)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x16B0C2E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameplayGuideDataConfigExcelTable_TypeDefinitionIndex = 12148;

	class GameplayGuideDataConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideDataConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E0C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__TypeEntranceIDs()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideDataConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E0C8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideDataConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E0D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideDataConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideDataConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideDataConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E0D8);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__ConditionSubMissionIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideDataConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E0E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet__GuideItems()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideDataConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E0E8);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__ConditionMainMissionIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideDataConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2E0F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideDataConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xAC00);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideDataConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xAC01);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideDataConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xAC02);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideDataConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideDataConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideDataConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideDataConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GameplayGuideDataConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::GameplayGuideDataConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GameplayGuideDataConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameplayGuideDataConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetAllItemIDsByType(::System::UInt32 typeID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GETALLITEMIDSBYTYPE_OFFSET))(typeID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetTypeAllEntranceIDs(::System::UInt32 typeID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GETTYPEALLENTRANCEIDS_OFFSET))(typeID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* get_ConditionMainMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GET_CONDITIONMAINMISSIONIDS_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* get_ConditionSubMissionIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_GET_CONDITIONSUBMISSIONIDS_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
