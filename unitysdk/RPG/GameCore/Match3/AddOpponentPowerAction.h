#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION_METHOD_4_10356CB700F622B7_OFFSET UNITYSDK_OFFSET(0x16C4EDE0)
#define RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION_METHOD_4_DE2D97221C86E1C5_OFFSET UNITYSDK_OFFSET(0x16C4EF90)
#define RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C4EF40)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int AddOpponentPowerAction_TypeDefinitionIndex = 22165;

	class AddOpponentPowerAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Int32 Power; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_10356CB700F622B7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::AddOpponentPowerAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::AddOpponentPowerAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION_METHOD_4_10356CB700F622B7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DE2D97221C86E1C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::AddOpponentPowerAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::AddOpponentPowerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION_METHOD_4_DE2D97221C86E1C5_OFFSET))(a1, a2);
		}
	};
}
