#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION_METHOD_4_960E06B330D892BE_OFFSET UNITYSDK_OFFSET(0x16C4F1E0)
#define RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION_METHOD_4_B4FE7D638E78B59C_OFFSET UNITYSDK_OFFSET(0x16C4F060)
#define RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16C4F190)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int AddScoreByGemPouchAction_TypeDefinitionIndex = 22167;

	class AddScoreByGemPouchAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::UInt32 ScaleFactor; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B4FE7D638E78B59C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::AddScoreByGemPouchAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::AddScoreByGemPouchAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION_METHOD_4_B4FE7D638E78B59C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_960E06B330D892BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::AddScoreByGemPouchAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::AddScoreByGemPouchAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDSCOREBYGEMPOUCHACTION_METHOD_4_960E06B330D892BE_OFFSET))(a1, a2);
		}
	};
}
