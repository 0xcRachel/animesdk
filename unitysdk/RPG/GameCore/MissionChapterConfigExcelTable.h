#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MissionChapterConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16CACB10)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16CAC960)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16CAC630)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16CAC900)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16CACC90)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16CAC6B0)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16CACCD0)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16CACEB0)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16CAD290)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CAD5A0)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16CACE10)
#define RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16CACD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionChapterConfigExcelTable_TypeDefinitionIndex = 12878;

	class MissionChapterConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MissionChapterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x38180);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MissionChapterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x38188);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionChapterConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionChapterConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MissionChapterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x38190);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MissionChapterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xDED0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MissionChapterConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xDED1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionChapterConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionChapterConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionChapterConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MissionChapterConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MissionChapterConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MissionChapterConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MissionChapterConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MissionChapterConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCHAPTERCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
