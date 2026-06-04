#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNousDifficultyLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1AE42E40)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AE42CD0)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1AE429C0)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1AE42C70)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1AE42FD0)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AE42A40)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1AE43010)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AE431E0)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1AE434D0)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE43840)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1AE43140)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AE430A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDifficultyLevelExcelTable_TypeDefinitionIndex = 14198;

	class RogueNousDifficultyLevelExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousDifficultyLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F630);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDifficultyLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDifficultyLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousDifficultyLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F638);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousDifficultyLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F640);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousDifficultyLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xC730);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousDifficultyLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xC731);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDifficultyLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDifficultyLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDifficultyLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDifficultyLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousDifficultyLevelRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNousDifficultyLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousDifficultyLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousDifficultyLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
