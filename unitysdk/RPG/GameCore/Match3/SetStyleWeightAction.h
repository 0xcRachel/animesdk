#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore::Match3 { class BirdStyleWeightConfig; }

#define RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION_METHOD_4_8D49BB1E72CEFA7D_OFFSET UNITYSDK_OFFSET(0x16C54D00)
#define RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION_METHOD_4_D62D335AC77392D8_OFFSET UNITYSDK_OFFSET(0x16C5B5B0)
#define RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C54CB0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int SetStyleWeightAction_TypeDefinitionIndex = 22174;

	class SetStyleWeightAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::BirdStyleWeightConfig*>* StyleWeights; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D62D335AC77392D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetStyleWeightAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetStyleWeightAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION_METHOD_4_D62D335AC77392D8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8D49BB1E72CEFA7D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::SetStyleWeightAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::SetStyleWeightAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_SETSTYLEWEIGHTACTION_METHOD_4_8D49BB1E72CEFA7D_OFFSET))(a1, a2);
		}
	};
}
