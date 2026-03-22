#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_METHOD_3_6445E9E6455A662C_OFFSET UNITYSDK_OFFSET(0x16AC6430)
#define RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_METHOD_3_8EA00D9F4F5D4775_OFFSET UNITYSDK_OFFSET(0x16AC6370)
#define RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16AC6410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMinionDestroySelfAction_TypeDefinitionIndex = 16810;

	class FiveDimMinionDestroySelfAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8EA00D9F4F5D4775(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMinionDestroySelfAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMinionDestroySelfAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_METHOD_3_8EA00D9F4F5D4775_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6445E9E6455A662C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimMinionDestroySelfAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimMinionDestroySelfAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIONDESTROYSELFACTION_METHOD_3_6445E9E6455A662C_OFFSET))(a1, a2);
		}
	};
}
