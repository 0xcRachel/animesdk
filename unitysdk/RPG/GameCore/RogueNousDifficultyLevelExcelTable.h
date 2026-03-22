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

#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16EA9D70)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16EA9BC0)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16EA9890)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16EA9B60)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16EA9F40)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16EA9910)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16EA9F80)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EAA160)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16EAA450)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EAA7B0)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16EAA0C0)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16EAA020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousDifficultyLevelExcelTable_TypeDefinitionIndex = 13587;

	class RogueNousDifficultyLevelExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousDifficultyLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x2EC60);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDifficultyLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousDifficultyLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousDifficultyLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x2EC68);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousDifficultyLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x2EC70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousDifficultyLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xAF80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousDifficultyLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0xAF81);
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

		static ::RPG::GameCore::RogueNousDifficultyLevelRow* GetData(::System::UInt32 DifficultyID)
		{
			return ((::RPG::GameCore::RogueNousDifficultyLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE_GETDATA_OFFSET))(DifficultyID);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousDifficultyLevelRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousDifficultyLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
