#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_307;
class Class_1_06CDCC6A0A66BA0A;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_2B38BF65A115C2B9_1_METHOD_1_03FB712EC45BEB06_OFFSET UNITYSDK_OFFSET(0x859BA80)
#define CLASS_1_2B38BF65A115C2B9_1_METHOD_1_45527DA9D4E558FD_OFFSET UNITYSDK_OFFSET(0x859BA10)
#define CLASS_1_2B38BF65A115C2B9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x859BB70)

inline static constexpr unsigned int Class_1_2B38BF65A115C2B9_1_TypeDefinitionIndex = 49881;

class Class_1_2B38BF65A115C2B9_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B38BF65A115C2B9_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_45527DA9D4E558FD(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_06CDCC6A0A66BA0A* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_2B38BF65A115C2B9_1_METHOD_1_45527DA9D4E558FD_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_307* Method_1_03FB712EC45BEB06(::Class_0_16E4307DCC419505_307* a1, ::RPG::AvatarSystem::IAvatar* a2, ::Class_1_06CDCC6A0A66BA0A* a3)
	{
		return ((::Class_0_16E4307DCC419505_307*(*)(::PVOID, ::Class_0_16E4307DCC419505_307*, ::RPG::AvatarSystem::IAvatar*, ::Class_1_06CDCC6A0A66BA0A*))((::PBYTE)hIl2Cpp + CLASS_1_2B38BF65A115C2B9_1_METHOD_1_03FB712EC45BEB06_OFFSET))(this, a1, a2, a3);
	}
};
