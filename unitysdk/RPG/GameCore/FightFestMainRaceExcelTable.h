#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FightFestMainRaceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D14E00)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D14C80)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D14950)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D14C20)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D14FD0)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D149D0)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D15010)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D151F0)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D15600)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D15910)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D15150)
#define RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D150B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestMainRaceExcelTable_TypeDefinitionIndex = 12546;

	class FightFestMainRaceExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestMainRaceRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestMainRaceRow*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestMainRaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x204F0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestMainRaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x204F8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestMainRaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x20500);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FightFestMainRaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x7100);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(FightFestMainRaceExcelTable_TypeDefinitionIndex)->GetStaticField(0x7101);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestMainRaceRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestMainRaceRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestMainRaceRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestMainRaceRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::FightFestMainRaceRow* GetData(::System::UInt32 MainRaceID)
		{
			return ((::RPG::GameCore::FightFestMainRaceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_GETDATA_OFFSET))(MainRaceID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::FightFestMainRaceRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::FightFestMainRaceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTMAINRACEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
