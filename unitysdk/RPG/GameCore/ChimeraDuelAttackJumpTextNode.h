#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelNode.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE_METHOD_3_AA279FDCC7136976_OFFSET UNITYSDK_OFFSET(0x170A9F70)
#define RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE_METHOD_3_F8A2391CA34E853D_OFFSET UNITYSDK_OFFSET(0x170A9E30)
#define RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x170A9F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelAttackJumpTextNode_TypeDefinitionIndex = 14657;

	class ChimeraDuelAttackJumpTextNode : public ::RPG::GameCore::BaseChimeraDuelNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F8A2391CA34E853D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE_METHOD_3_F8A2391CA34E853D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AA279FDCC7136976(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelAttackJumpTextNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELATTACKJUMPTEXTNODE_METHOD_3_AA279FDCC7136976_OFFSET))(a1, a2);
		}
	};
}
