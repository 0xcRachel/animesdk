#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_053DD8E4EC1165EB;
namespace RPG::GameCore { class DiceCombatTaskConfig_ChallengerRevival; }

#define CLASS_2_82F1AAE4E1A8FC84_METHOD_2_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0x15F198F0)
#define CLASS_2_82F1AAE4E1A8FC84__CTOR_OFFSET UNITYSDK_OFFSET(0x15F198E0)

inline static constexpr unsigned int Class_2_82F1AAE4E1A8FC84_TypeDefinitionIndex = 27698;

class Class_2_82F1AAE4E1A8FC84 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival* Field_2_0; // 0x18
	::Class_2_053DD8E4EC1165EB* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival* a1, ::Class_2_053DD8E4EC1165EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ChallengerRevival*, ::Class_2_053DD8E4EC1165EB*))((::PBYTE)hIl2Cpp + CLASS_2_82F1AAE4E1A8FC84__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3BFE3B9EF8374F61()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82F1AAE4E1A8FC84_METHOD_2_3BFE3B9EF8374F61_OFFSET))(this);
	}
};
