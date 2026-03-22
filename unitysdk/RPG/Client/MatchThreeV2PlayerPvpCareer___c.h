#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63CAB6C405C6C7B1_1.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_96;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x968E5C0)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x968E600)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCARENASTATISTICS_B__19_0_OFFSET UNITYSDK_OFFSET(0x968E650)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCARENASTATISTICS_B__19_1_OFFSET UNITYSDK_OFFSET(0x968E670)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCSOLOSTATISTICS_B__18_0_OFFSET UNITYSDK_OFFSET(0x968E610)
#define RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCSOLOSTATISTICS_B__18_1_OFFSET UNITYSDK_OFFSET(0x968E630)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex = 52498;

	class MatchThreeV2PlayerPvpCareer___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MatchThreeV2PlayerPvpCareer___c** StaticGet___9()
		{
			return (::RPG::Client::MatchThreeV2PlayerPvpCareer___c**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex)->GetStaticField(0x2E870);
		}
		static ::System::Func_2<::Class_1_FA4F4A67B1C04320_96*, ::System::UInt32>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::Class_1_FA4F4A67B1C04320_96*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex)->GetStaticField(0x2E878);
		}
		static ::System::Func_2<::Class_1_FA4F4A67B1C04320_96*, ::Enum_3_63CAB6C405C6C7B1_1>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::Class_1_FA4F4A67B1C04320_96*, ::Enum_3_63CAB6C405C6C7B1_1>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex)->GetStaticField(0x2E880);
		}
		static ::System::Func_2<::Class_1_FA4F4A67B1C04320_96*, ::Enum_3_63CAB6C405C6C7B1_1>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::Class_1_FA4F4A67B1C04320_96*, ::Enum_3_63CAB6C405C6C7B1_1>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex)->GetStaticField(0x2E888);
		}
		static ::System::Func_2<::Class_1_FA4F4A67B1C04320_96*, ::System::UInt32>** StaticGet___9__18_1()
		{
			return (::System::Func_2<::Class_1_FA4F4A67B1C04320_96*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeV2PlayerPvpCareer___c_TypeDefinitionIndex)->GetStaticField(0x2E890);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__CTOR_OFFSET))(this);
		}

		::Enum_3_63CAB6C405C6C7B1_1 _SyncSoloStatistics_b__18_0(::Class_1_FA4F4A67B1C04320_96* pair)
		{
			return ((::Enum_3_63CAB6C405C6C7B1_1(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_96*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCSOLOSTATISTICS_B__18_0_OFFSET))(this, pair);
		}

		::System::UInt32 _SyncSoloStatistics_b__18_1(::Class_1_FA4F4A67B1C04320_96* pair)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_96*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCSOLOSTATISTICS_B__18_1_OFFSET))(this, pair);
		}

		::Enum_3_63CAB6C405C6C7B1_1 _SyncArenaStatistics_b__19_0(::Class_1_FA4F4A67B1C04320_96* pair)
		{
			return ((::Enum_3_63CAB6C405C6C7B1_1(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_96*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCARENASTATISTICS_B__19_0_OFFSET))(this, pair);
		}

		::System::UInt32 _SyncArenaStatistics_b__19_1(::Class_1_FA4F4A67B1C04320_96* pair)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_96*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2PLAYERPVPCAREER___C__SYNCARENASTATISTICS_B__19_1_OFFSET))(this, pair);
		}
	};
}
