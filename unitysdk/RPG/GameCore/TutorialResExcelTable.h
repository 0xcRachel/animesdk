#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TutorialResRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TUTORIALRESEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1912EDE0)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1912EC30)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1912E900)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1912EBD0)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1912EFB0)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1912E980)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1912EFF0)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1912F1D0)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1912F440)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1912F7A0)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1912F130)
#define RPG_GAMECORE_TUTORIALRESEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1912F090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialResExcelTable_TypeDefinitionIndex = 14599;

	class TutorialResExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialResExcelTable_TypeDefinitionIndex)->GetStaticField(0xFEA0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialResExcelTable_TypeDefinitionIndex)->GetStaticField(0xFEA8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialResRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialResRow*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialResExcelTable_TypeDefinitionIndex)->GetStaticField(0xFEB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(TutorialResExcelTable_TypeDefinitionIndex)->GetStaticField(0x52B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TutorialResExcelTable_TypeDefinitionIndex)->GetStaticField(0x52B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialResRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialResRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialResRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TutorialResRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::TutorialResRow* GetData(::System::Int32 ID)
		{
			return ((::RPG::GameCore::TutorialResRow*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::TutorialResRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::TutorialResRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALRESEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
