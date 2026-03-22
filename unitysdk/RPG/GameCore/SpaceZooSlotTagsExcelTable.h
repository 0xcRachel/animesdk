#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpaceZooSlotTagsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F76860)
#define RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F766B0)
#define RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F76380)
#define RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F76650)
#define RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F76A30)
#define RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F76400)
#define RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F76A70)
#define RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F76C50)
#define RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F76E20)
#define RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F77180)
#define RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F76BB0)
#define RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F76B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooSlotTagsExcelTable_TypeDefinitionIndex = 11236;

	class SpaceZooSlotTagsExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooSlotTagsExcelTable_TypeDefinitionIndex)->GetStaticField(0xFE40);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooSlotTagsExcelTable_TypeDefinitionIndex)->GetStaticField(0xFE48);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSlotTagsRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSlotTagsRow*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooSlotTagsExcelTable_TypeDefinitionIndex)->GetStaticField(0xFE50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooSlotTagsExcelTable_TypeDefinitionIndex)->GetStaticField(0x44E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooSlotTagsExcelTable_TypeDefinitionIndex)->GetStaticField(0x44E1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSlotTagsRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSlotTagsRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSlotTagsRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooSlotTagsRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooSlotTagsRow* GetData(::System::UInt32 FeatureID)
		{
			return ((::RPG::GameCore::SpaceZooSlotTagsRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE_GETDATA_OFFSET))(FeatureID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpaceZooSlotTagsRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooSlotTagsRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOSLOTTAGSEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
