#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoxingClubActivityType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BoxingClubChallengeSeasonConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETCHALLENGEIDTYPE_OFFSET UNITYSDK_OFFSET(0x187C7B30)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x187C6A60)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x187C68B0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETQUESTIDTYPE_OFFSET UNITYSDK_OFFSET(0x187C7440)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x187C6580)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x187C6850)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x187C6C30)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x187C6600)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x187C7C00)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x187C6C70)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x187C6E50)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x187C7130)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x187C7D10)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x187C6DB0)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x187C6D10)
#define RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x187C7510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex = 12196;

	class BoxingClubChallengeSeasonConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BoxingClubActivityType>** StaticGet__ChallengeIDToType()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BoxingClubActivityType>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x100E0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x100E8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BoxingClubActivityType>** StaticGet__QuestIDToType()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::BoxingClubActivityType>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x100F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x100F8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x10100);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x53E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x53E1);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BoxingClubChallengeSeasonConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x53E2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BoxingClubChallengeSeasonConfigRow* GetData(::System::UInt32 SeasonID)
		{
			return ((::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETDATA_OFFSET))(SeasonID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BoxingClubChallengeSeasonConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::BoxingClubChallengeSeasonConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::RPG::GameCore::BoxingClubActivityType GetQuestIDType(::System::UInt32 questID)
		{
			return ((::RPG::GameCore::BoxingClubActivityType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETQUESTIDTYPE_OFFSET))(questID);
		}

		static ::RPG::GameCore::BoxingClubActivityType GetChallengeIDType(::System::UInt32 challengeID)
		{
			return ((::RPG::GameCore::BoxingClubActivityType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_GETCHALLENGEIDTYPE_OFFSET))(challengeID);
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBCHALLENGESEASONCONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
