#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlanetFesRegionProgressPhase; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PLANETFESREGIONPROGRESS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9AFF390)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9AFF3D0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GETCOMBINEDBUFF_B__16_0_OFFSET UNITYSDK_OFFSET(0x9AFF4F0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GETCOMBINEDBUFF_B__16_1_OFFSET UNITYSDK_OFFSET(0x9AFF510)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GET_ALLREWARDGOT_B__9_0_OFFSET UNITYSDK_OFFSET(0x9AFF440)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GET_CANGETREWARD_B__7_0_OFFSET UNITYSDK_OFFSET(0x9AFF3E0)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GET_REWARDID_B__11_0_OFFSET UNITYSDK_OFFSET(0x9AFF480)
#define RPG_CLIENT_PLANETFESREGIONPROGRESS___C__REQUESTGETREWARD_B__15_0_OFFSET UNITYSDK_OFFSET(0x9AFF4B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesRegionProgress___c_TypeDefinitionIndex = 53084;

	class PlanetFesRegionProgress___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesRegionProgress___c_TypeDefinitionIndex)->GetStaticField(0x46480);
		}
		static ::RPG::Client::PlanetFesRegionProgress___c** StaticGet___9()
		{
			return (::RPG::Client::PlanetFesRegionProgress___c**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesRegionProgress___c_TypeDefinitionIndex)->GetStaticField(0x46488);
		}
		static ::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::UInt32>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesRegionProgress___c_TypeDefinitionIndex)->GetStaticField(0x46490);
		}
		static ::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesRegionProgress___c_TypeDefinitionIndex)->GetStaticField(0x46498);
		}
		static ::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesRegionProgress___c_TypeDefinitionIndex)->GetStaticField(0x464A0);
		}
		static ::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesRegionProgress___c_TypeDefinitionIndex)->GetStaticField(0x464A8);
		}
		static ::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::Client::PlanetFesRegionProgressPhase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesRegionProgress___c_TypeDefinitionIndex)->GetStaticField(0x464B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_CanGetReward_b__7_0(::RPG::Client::PlanetFesRegionProgressPhase* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesRegionProgressPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GET_CANGETREWARD_B__7_0_OFFSET))(this, data);
		}

		::System::Boolean _get_AllRewardGot_b__9_0(::RPG::Client::PlanetFesRegionProgressPhase* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesRegionProgressPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GET_ALLREWARDGOT_B__9_0_OFFSET))(this, data);
		}

		::System::Boolean _get_RewardID_b__11_0(::RPG::Client::PlanetFesRegionProgressPhase* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesRegionProgressPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GET_REWARDID_B__11_0_OFFSET))(this, data);
		}

		::System::Boolean _RequestGetReward_b__15_0(::RPG::Client::PlanetFesRegionProgressPhase* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesRegionProgressPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS___C__REQUESTGETREWARD_B__15_0_OFFSET))(this, data);
		}

		::System::Boolean _GetCombinedBuff_b__16_0(::RPG::Client::PlanetFesRegionProgressPhase* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesRegionProgressPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GETCOMBINEDBUFF_B__16_0_OFFSET))(this, x);
		}

		::System::UInt32 _GetCombinedBuff_b__16_1(::RPG::Client::PlanetFesRegionProgressPhase* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::PlanetFesRegionProgressPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESREGIONPROGRESS___C__GETCOMBINEDBUFF_B__16_1_OFFSET))(this, x);
		}
	};
}
