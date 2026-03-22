#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_33CFB36424333436;
class Class_1_3463368126F74BA9;
class Class_1_6D16597294F5284D_7;
class Class_1_6F217BB0BBC97582;
class Class_1_9F7A7BFCC6CA78B0;
namespace RPG::Client { class TeamBuild; }
namespace RPG::Client { class TeamBuildRecipe; }
namespace RPG::Client { class TeamBuildSynopsis; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Exception; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMBUILDCALCULATOR_CHECKDATAISVALID_OFFSET UNITYSDK_OFFSET(0xA04AD90)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDASSOCIATION_OFFSET UNITYSDK_OFFSET(0xA04A520)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDS_OFFSET UNITYSDK_OFFSET(0xA04A240)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_GET_MAXTEAMBUILDSYNOPSISCOUNT_OFFSET UNITYSDK_OFFSET(0xA049A80)
#define RPG_CLIENT_TEAMBUILDCALCULATOR_REFRESH_OFFSET UNITYSDK_OFFSET(0xA049BD0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__ADDTEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0xA04BC40)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPES_OFFSET UNITYSDK_OFFSET(0xA04B0D0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__CLEARDATA_OFFSET UNITYSDK_OFFSET(0xA049E00)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA04C760)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__HASAVATARCHECKER_OFFSET UNITYSDK_OFFSET(0xA04C600)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__PREPARERECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0xA049F40)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__PREPARETEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0xA04AF40)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__PREPAREUNRELEASEDAVATARDATA_OFFSET UNITYSDK_OFFSET(0xA04A0E0)
#define RPG_CLIENT_TEAMBUILDCALCULATOR__TRUECHECKER_OFFSET UNITYSDK_OFFSET(0xA04C720)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__14_0_OFFSET UNITYSDK_OFFSET(0xA04C930)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__14_1_OFFSET UNITYSDK_OFFSET(0xA04CC30)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARETEAMBUILDRECIPE_B__17_0_OFFSET UNITYSDK_OFFSET(0xA04CC80)
#define RPG_CLIENT_TEAMBUILDCALCULATOR___PREPAREUNRELEASEDAVATARDATA_B__15_0_OFFSET UNITYSDK_OFFSET(0xA04CC70)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildCalculator_TypeDefinitionIndex = 54024;

	class TeamBuildCalculator : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _RecommendAvatarIDs; // 0x10
		::System::Collections::Generic::List_1<::Class_1_6D16597294F5284D_7*>* _RecommendLineups; // 0x18
		::Class_1_33CFB36424333436* _UnreleasedAvatarData; // 0x20
		::Class_1_6F217BB0BBC97582* _TeamBuildSynopsisBuilder; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TeamBuildRecipe*>*>* _TeamBuildRecipeDict; // 0x30
		::Class_1_9F7A7BFCC6CA78B0* _TeamBuildBuilder; // 0x38
		::System::Nullable_1<::System::Int32> _MaxTeamBuildSynopsisCount; // 0x40
		::System::Boolean _HasData; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MaxTeamBuildSynopsisCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GET_MAXTEAMBUILDSYNOPSISCOUNT_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* Refresh()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_REFRESH_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuild*>* GetTeamBuilds(::System::UInt32 avatarID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuild*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDS_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>* GetTeamBuildAssociation(::System::Collections::Generic::IList_1<::System::UInt32>* partialAvatarIDs, ::System::Boolean checkHasAvatar)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TeamBuildSynopsis*>*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_GETTEAMBUILDASSOCIATION_OFFSET))(this, partialAvatarIDs, checkHasAvatar);
		}

		::System::Boolean CheckDataIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR_CHECKDATAISVALID_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareRecommendLineupData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__PREPARERECOMMENDLINEUPDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareUnreleasedAvatarData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__PREPAREUNRELEASEDAVATARDATA_OFFSET))(this);
		}

		::System::Void _ClearData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__CLEARDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PrepareTeamBuildRecipe()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__PREPARETEAMBUILDRECIPE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _BuildTeamBuildRecipes()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__BUILDTEAMBUILDRECIPES_OFFSET))(this);
		}

		::System::Void _AddTeamBuildRecipe(::RPG::Client::TeamBuildRecipe* teamBuildRecipe)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamBuildRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__ADDTEAMBUILDRECIPE_OFFSET))(this, teamBuildRecipe);
		}

		static ::System::Boolean _HasAvatarChecker(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__HASAVATARCHECKER_OFFSET))(avatarID);
		}

		static ::System::Boolean _TrueChecker(::System::UInt32 avatarID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR__TRUECHECKER_OFFSET))(avatarID);
		}

		::System::Void __PrepareRecommendLineupData_b__14_0(::Class_1_3463368126F74BA9* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3463368126F74BA9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__14_0_OFFSET))(this, rsp);
		}

		::System::Void __PrepareRecommendLineupData_b__14_1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARERECOMMENDLINEUPDATA_B__14_1_OFFSET))(this, ex);
		}

		::System::Void __PrepareUnreleasedAvatarData_b__15_0(::Class_1_33CFB36424333436* blockData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_33CFB36424333436*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPAREUNRELEASEDAVATARDATA_B__15_0_OFFSET))(this, blockData);
		}

		::System::Void __PrepareTeamBuildRecipe_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDCALCULATOR___PREPARETEAMBUILDRECIPE_B__17_0_OFFSET))(this);
		}
	};
}
