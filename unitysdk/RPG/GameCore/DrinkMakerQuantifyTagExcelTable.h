#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DrinkMakerQuantifyTagRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16A51950)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16A517D0)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16A514A0)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16A51770)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16A51AD0)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16A51520)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16A51B10)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16A51CF0)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16A51EB0)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A521C0)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16A51C50)
#define RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16A51BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex = 11939;

	class DrinkMakerQuantifyTagExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x26410);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x26418);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x26420);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x81D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerQuantifyTagExcelTable_TypeDefinitionIndex)->GetStaticField(0x81D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerQuantifyTagRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerQuantifyTagRow* GetData(::System::UInt32 TagID)
		{
			return ((::RPG::GameCore::DrinkMakerQuantifyTagRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_GETDATA_OFFSET))(TagID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerQuantifyTagRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerQuantifyTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERQUANTIFYTAGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
