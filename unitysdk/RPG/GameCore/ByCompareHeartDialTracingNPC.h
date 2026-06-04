#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_1EFB68D2C6838912_OFFSET UNITYSDK_OFFSET(0x18FD7790)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_6DCDAE2A9EF5097B_OFFSET UNITYSDK_OFFSET(0x18FD79A0)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_C0510934E8C4FBA8_OFFSET UNITYSDK_OFFSET(0x18FD7860)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_E177E93D3D971937_OFFSET UNITYSDK_OFFSET(0x18FD7A20)
#define RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x18FD7810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareHeartDialTracingNPC_TypeDefinitionIndex = 20677;

	class ByCompareHeartDialTracingNPC : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1EFB68D2C6838912(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_1EFB68D2C6838912_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C0510934E8C4FBA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_C0510934E8C4FBA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6DCDAE2A9EF5097B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_6DCDAE2A9EF5097B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E177E93D3D971937(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareHeartDialTracingNPC* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareHeartDialTracingNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREHEARTDIALTRACINGNPC_METHOD_4_E177E93D3D971937_OFFSET))(a1, a2);
		}
	};
}
