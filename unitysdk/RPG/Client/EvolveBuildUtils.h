#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EvolveBuildUtils___c__DisplayClass15_0.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/EvolveGearType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RaccoonStateType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_E1C52EF642F86050;
namespace RPG::Client { class EvolveBuildMixData; }
namespace RPG::Client { class EvolveBuildScMixData; }
namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace RPG::GameCore { class ActivityEvolveGearForgeMaterialRow; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace RPG::GameCore { class MazeBuffRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_EVOLVEBUILDUTILS_COUNTUNLOCKEDSLOTNUM_OFFSET UNITYSDK_OFFSET(0x161D36C0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETBATTLEEXPSTEP_OFFSET UNITYSDK_OFFSET(0x161D2FA0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETCOLLECTIONIDLISTBYTYPE_OFFSET UNITYSDK_OFFSET(0x161D2E10)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARFORGEID_OFFSET UNITYSDK_OFFSET(0x161D2D80)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARFORGEROW_1_OFFSET UNITYSDK_OFFSET(0x161D4240)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARFORGEROW_OFFSET UNITYSDK_OFFSET(0x161D3FB0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARLVTOFORGE_OFFSET UNITYSDK_OFFSET(0x161D2C30)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARMIXDATASCFROMFORGEROW_OFFSET UNITYSDK_OFFSET(0x161D29B0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARMIXDATASC_OFFSET UNITYSDK_OFFSET(0x161D41D0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARMIXDATA_OFFSET UNITYSDK_OFFSET(0x161D1BE0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETRACCOONSTATETYPE_OFFSET UNITYSDK_OFFSET(0x161D2F60)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETRESONANCEGEARIDINPACKET_OFFSET UNITYSDK_OFFSET(0x161D2050)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETSORTEDEVOLVEBUILDGEAREQUIPINFO_OFFSET UNITYSDK_OFFSET(0x161D0C50)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETSORTEDGEAREQUIPINFO_OFFSET UNITYSDK_OFFSET(0x161D1680)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETSORTEDMIXDATASC_OFFSET UNITYSDK_OFFSET(0x161D25D0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_GETSORTEDMIXDATA_OFFSET UNITYSDK_OFFSET(0x161D20B0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_HASRESONANCEINPACKET_OFFSET UNITYSDK_OFFSET(0x161D1EB0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_HASRESONANCEWITHACCESSORIES_OFFSET UNITYSDK_OFFSET(0x161D1A70)
#define RPG_CLIENT_EVOLVEBUILDUTILS_ISGEARUNLOCK_OFFSET UNITYSDK_OFFSET(0x161D2B20)
#define RPG_CLIENT_EVOLVEBUILDUTILS_OPENFAKEGEARSELECTPAGE_OFFSET UNITYSDK_OFFSET(0x161D42A0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_SETMAZEBUFFDESC_OFFSET UNITYSDK_OFFSET(0x161D37E0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_SLOTINFO2GEAREQUIPINFO_OFFSET UNITYSDK_OFFSET(0x161D3580)
#define RPG_CLIENT_EVOLVEBUILDUTILS_SLOTINFOS2GEAREQUIPINFOS_OFFSET UNITYSDK_OFFSET(0x161C4D50)
#define RPG_CLIENT_EVOLVEBUILDUTILS_SORTACCESSORYLIST_OFFSET UNITYSDK_OFFSET(0x161D11E0)
#define RPG_CLIENT_EVOLVEBUILDUTILS_SORTWEAPONLIST_OFFSET UNITYSDK_OFFSET(0x161D0EB0)
#define RPG_CLIENT_EVOLVEBUILDUTILS__GETBATTLEEXPSTEP_G___GETCURSTEPEXPMAX_15_0_OFFSET UNITYSDK_OFFSET(0x161D32C0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildUtils_TypeDefinitionIndex = 58806;

	class EvolveBuildUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::SortedEvolveBuildGearEquipInfoLists* GetSortedEvolveBuildGearEquipInfo()
		{
			return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETSORTEDEVOLVEBUILDGEAREQUIPINFO_OFFSET))();
		}

		static ::RPG::Client::SortedEvolveBuildGearEquipInfoLists* GetSortedGearEquipInfo(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* weapons, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* accessories)
		{
			return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETSORTEDGEAREQUIPINFO_OFFSET))(weapons, accessories);
		}

		static ::System::Void SortWeaponList(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* weaponList)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_SORTWEAPONLIST_OFFSET))(weaponList);
		}

		static ::System::Void SortAccessoryList(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* accessoryList, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* weaponList)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_SORTACCESSORYLIST_OFFSET))(accessoryList, weaponList);
		}

		static ::System::Boolean HasResonanceInPacket(::System::UInt32 gearID, ::System::UInt32& resonanceID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_HASRESONANCEINPACKET_OFFSET))(gearID, resonanceID);
		}

		static ::System::Boolean HasResonanceWithAccessories(::System::UInt32 gearID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* accessoryIDs, ::System::UInt32& resonanceID)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_HASRESONANCEWITHACCESSORIES_OFFSET))(gearID, accessoryIDs, resonanceID);
		}

		static ::System::UInt32 GetResonanceGearIDInPacket(::System::UInt32 gearID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETRESONANCEGEARIDINPACKET_OFFSET))(gearID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildMixData*>* GetSortedMixData(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildMixData*>*(*)(::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETSORTEDMIXDATA_OFFSET))(season);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildScMixData*>* GetSortedMixDataSC(::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildScMixData*>*(*)(::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETSORTEDMIXDATASC_OFFSET))(season);
		}

		static ::System::Boolean IsGearUnlock(::System::UInt32 gearID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_ISGEARUNLOCK_OFFSET))(gearID);
		}

		static ::System::Nullable_1<::System::UInt32> GetGearLvToForge(::System::UInt32 gearID)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARLVTOFORGE_OFFSET))(gearID);
		}

		static ::System::Nullable_1<::System::UInt32> GetGearForgeID(::System::UInt32 gearID)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARFORGEID_OFFSET))(gearID);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* GetCollectionIDListByType(::RPG::GameCore::EvolveGearType type)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::GameCore::EvolveGearType))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETCOLLECTIONIDLISTBYTYPE_OFFSET))(type);
		}

		static ::RPG::GameCore::RaccoonStateType GetRaccoonStateType(::System::Int32 index)
		{
			return ((::RPG::GameCore::RaccoonStateType(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETRACCOONSTATETYPE_OFFSET))(index);
		}

		static ::RPG::Client::EvolveBuildMixData* GetGearMixData(::System::UInt32 gearID)
		{
			return ((::RPG::Client::EvolveBuildMixData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARMIXDATA_OFFSET))(gearID);
		}

		static ::System::UInt32 GetBattleExpStep(::System::UInt32 totalExp, ::RPG::GameCore::EvolveBuildSeason eSeason)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETBATTLEEXPSTEP_OFFSET))(totalExp, eSeason);
		}

		static ::RPG::GameCore::EvolveBuildGearEquipInfo* SlotInfo2GearEquipInfo(::Class_1_E1C52EF642F86050* slotInfo)
		{
			return ((::RPG::GameCore::EvolveBuildGearEquipInfo*(*)(::Class_1_E1C52EF642F86050*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_SLOTINFO2GEAREQUIPINFO_OFFSET))(slotInfo);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>* SlotInfos2GearEquipInfos(::System::Collections::Generic::IEnumerable_1<::Class_1_E1C52EF642F86050*>* slotInfos)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildGearEquipInfo*>*(*)(::System::Collections::Generic::IEnumerable_1<::Class_1_E1C52EF642F86050*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_SLOTINFOS2GEAREQUIPINFOS_OFFSET))(slotInfos);
		}

		static ::System::Int32 CountUnlockedSlotNum(::System::Collections::Generic::IEnumerable_1<::Class_1_E1C52EF642F86050*>* slotInfos)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IEnumerable_1<::Class_1_E1C52EF642F86050*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_COUNTUNLOCKEDSLOTNUM_OFFSET))(slotInfos);
		}

		static ::System::Void SetMazeBuffDesc(::UnityEngine::UI::Text* text, ::RPG::GameCore::MazeBuffRow* mazeBuff, ::System::Boolean showSimpleDesc, ::System::Boolean ShowDiff)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::RPG::GameCore::MazeBuffRow*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_SETMAZEBUFFDESC_OFFSET))(text, mazeBuff, showSimpleDesc, ShowDiff);
		}

		static ::System::Boolean GetGearForgeRow(::System::UInt32 gearID, ::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*& forgeMaterialRow)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARFORGEROW_OFFSET))(gearID, forgeMaterialRow);
		}

		static ::RPG::Client::EvolveBuildScMixData* GetGearMixDataSc(::System::UInt32 gearID)
		{
			return ((::RPG::Client::EvolveBuildScMixData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARMIXDATASC_OFFSET))(gearID);
		}

		static ::RPG::Client::EvolveBuildScMixData* GetGearMixDataScFromForgeRow(::RPG::GameCore::ActivityEvolveGearForgeMaterialRow* forgeMaterialRow)
		{
			return ((::RPG::Client::EvolveBuildScMixData*(*)(::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARMIXDATASCFROMFORGEROW_OFFSET))(forgeMaterialRow);
		}

		static ::RPG::GameCore::ActivityEvolveGearForgeMaterialRow* GetGearForgeRow_1(::System::UInt32 gearID)
		{
			return ((::RPG::GameCore::ActivityEvolveGearForgeMaterialRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_GETGEARFORGEROW_1_OFFSET))(gearID);
		}

		static ::System::Void OpenFakeGearSelectPage(::Il2CppArray<::System::UInt32>* gearIDs)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS_OPENFAKEGEARSELECTPAGE_OFFSET))(gearIDs);
		}

		static ::RPG::GameCore::FixPoint _GetBattleExpStep_g___GetCurStepExpMax_15_0(::RPG::GameCore::FixPoint step, ::RPG::Client::EvolveBuildUtils___c__DisplayClass15_0& a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::FixPoint, ::RPG::Client::EvolveBuildUtils___c__DisplayClass15_0&))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS__GETBATTLEEXPSTEP_G___GETCURSTEPEXPMAX_15_0_OFFSET))(step, a2);
		}
	};
}
