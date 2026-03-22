#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TreasureChallengeTargetStatus.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA111AF0)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA111B30)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__ONENTERBATTLE_B__50_0_OFFSET UNITYSDK_OFFSET(0xA111B40)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__ONENTERBATTLE_B__50_1_OFFSET UNITYSDK_OFFSET(0xA111B50)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__ONENTERBATTLE_B__50_2_OFFSET UNITYSDK_OFFSET(0xA111B60)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__ONENTERBATTLE_B__50_3_OFFSET UNITYSDK_OFFSET(0xA111B70)
#define RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__TRYTRACKFIRSTSTARTMISSION_B__53_0_OFFSET UNITYSDK_OFFSET(0xA111B80)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureChallengeInstance___c_TypeDefinitionIndex = 53194;

	class TreasureChallengeInstance___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>** StaticGet___9__50_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TreasureChallengeInstance___c_TypeDefinitionIndex)->GetStaticField(0x2EC20);
		}
		static ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*>** StaticGet___9__53_0()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*>**)Il2CppClass::FromTypeDefinitionIndex(TreasureChallengeInstance___c_TypeDefinitionIndex)->GetStaticField(0x2EC28);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>, ::System::UInt32>** StaticGet___9__50_2()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TreasureChallengeInstance___c_TypeDefinitionIndex)->GetStaticField(0x2EC30);
		}
		static ::RPG::Client::TreasureChallengeInstance___c** StaticGet___9()
		{
			return (::RPG::Client::TreasureChallengeInstance___c**)Il2CppClass::FromTypeDefinitionIndex(TreasureChallengeInstance___c_TypeDefinitionIndex)->GetStaticField(0x2EC38);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>, ::RPG::Client::TreasureChallengeTargetStatus>** StaticGet___9__50_3()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>, ::RPG::Client::TreasureChallengeTargetStatus>**)Il2CppClass::FromTypeDefinitionIndex(TreasureChallengeInstance___c_TypeDefinitionIndex)->GetStaticField(0x2EC40);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>** StaticGet___9__50_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TreasureChallengeInstance___c_TypeDefinitionIndex)->GetStaticField(0x2EC48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _OnEnterBattle_b__50_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> entry)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__ONENTERBATTLE_B__50_0_OFFSET))(this, entry);
		}

		::System::UInt32 _OnEnterBattle_b__50_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> entry)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__ONENTERBATTLE_B__50_1_OFFSET))(this, entry);
		}

		::System::UInt32 _OnEnterBattle_b__50_2(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus> entry)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__ONENTERBATTLE_B__50_2_OFFSET))(this, entry);
		}

		::RPG::Client::TreasureChallengeTargetStatus _OnEnterBattle_b__50_3(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus> entry)
		{
			return ((::RPG::Client::TreasureChallengeTargetStatus(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::RPG::Client::TreasureChallengeTargetStatus>))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__ONENTERBATTLE_B__50_3_OFFSET))(this, entry);
		}

		::System::Void _TryTrackFirstStartMission_b__53_0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* mainMissionDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASURECHALLENGEINSTANCE___C__TRYTRACKFIRSTSTARTMISSION_B__53_0_OFFSET))(this, mainMissionDataList);
		}
	};
}
