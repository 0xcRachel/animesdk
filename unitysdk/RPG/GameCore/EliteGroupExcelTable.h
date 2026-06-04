#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EliteGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ELITEGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19D6FA10)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19D6F8A0)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19D6F590)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19D6F840)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19D6FB60)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19D6F610)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19D6FBA0)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19D6FD70)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19D70110)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D70430)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19D6FCD0)
#define RPG_GAMECORE_ELITEGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19D6FC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EliteGroupExcelTable_TypeDefinitionIndex = 13513;

	class EliteGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EliteGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EliteGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(EliteGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x157E0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EliteGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x157E8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EliteGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x157F0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EliteGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x7D20);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EliteGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x7D21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EliteGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EliteGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EliteGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EliteGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EliteGroupRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::EliteGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EliteGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::EliteGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELITEGROUPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
