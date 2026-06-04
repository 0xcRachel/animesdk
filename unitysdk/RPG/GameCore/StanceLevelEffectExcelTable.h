#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StanceLevelEffectRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x193461A0)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19346070)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19345F90)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19346010)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19345610)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19345650)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19345880)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19345A50)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19345C70)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19346330)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x193459B0)
#define RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19345910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StanceLevelEffectExcelTable_TypeDefinitionIndex = 14426;

	class StanceLevelEffectExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*>**)Il2CppClass::FromTypeDefinitionIndex(StanceLevelEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x4D890);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StanceLevelEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x4D898);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StanceLevelEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0x4D8A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StanceLevelEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0xECD0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(StanceLevelEffectExcelTable_TypeDefinitionIndex)->GetStaticField(0xECD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StanceLevelEffectRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StanceLevelEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StanceLevelEffectRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StanceLevelEffectRow* GetData(::System::Int32 a1)
		{
			return ((::RPG::GameCore::StanceLevelEffectRow*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STANCELEVELEFFECTEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
