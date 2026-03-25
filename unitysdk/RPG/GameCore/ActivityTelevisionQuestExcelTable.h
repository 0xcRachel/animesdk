#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityTelevisionQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F2C790)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F2C5E0)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F2C2B0)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F2C580)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F2C910)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F2C330)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F2C950)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F2CB30)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F2CDC0)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F2D0D0)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F2CA90)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F2C9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityTelevisionQuestExcelTable_TypeDefinitionIndex = 11402;

	class ActivityTelevisionQuestExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x172C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x172C8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x172D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x9160);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x9161);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityTelevisionQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityTelevisionQuestRow* GetData(::System::UInt32 QuestGroupID)
		{
			return ((::RPG::GameCore::ActivityTelevisionQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_GETDATA_OFFSET))(QuestGroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityTelevisionQuestRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityTelevisionQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
