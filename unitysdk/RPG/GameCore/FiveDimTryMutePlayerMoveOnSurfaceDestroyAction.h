#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION_METHOD_3_8B388485ABAEC4E6_OFFSET UNITYSDK_OFFSET(0x16AD9B30)
#define RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION_METHOD_3_BC7D2BA320F55A24_OFFSET UNITYSDK_OFFSET(0x16AD9C10)
#define RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16AD9BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTryMutePlayerMoveOnSurfaceDestroyAction_TypeDefinitionIndex = 16766;

	class FiveDimTryMutePlayerMoveOnSurfaceDestroyAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8B388485ABAEC4E6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION_METHOD_3_8B388485ABAEC4E6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BC7D2BA320F55A24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTryMutePlayerMoveOnSurfaceDestroyAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRYMUTEPLAYERMOVEONSURFACEDESTROYACTION_METHOD_3_BC7D2BA320F55A24_OFFSET))(a1, a2);
		}
	};
}
