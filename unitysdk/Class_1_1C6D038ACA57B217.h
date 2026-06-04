#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_1C6D038ACA57B217_GET_DAMAGEFP_OFFSET UNITYSDK_OFFSET(0x178196A0)
#define CLASS_1_1C6D038ACA57B217_GET_TOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0x17819680)
#define CLASS_1_1C6D038ACA57B217_METHOD_1_BB33BB07CA0090E0_OFFSET UNITYSDK_OFFSET(0x178196C0)
#define CLASS_1_1C6D038ACA57B217_METHOD_1_EA672F77F1086A27_OFFSET UNITYSDK_OFFSET(0x17819760)
#define CLASS_1_1C6D038ACA57B217_SET_DAMAGEFP_OFFSET UNITYSDK_OFFSET(0x178196B0)
#define CLASS_1_1C6D038ACA57B217_SET_TOTALDAMAGE_OFFSET UNITYSDK_OFFSET(0x17819690)
#define CLASS_1_1C6D038ACA57B217__CTOR_OFFSET UNITYSDK_OFFSET(0x178197E0)

inline static constexpr unsigned int Class_1_1C6D038ACA57B217_TypeDefinitionIndex = 53820;

class Class_1_1C6D038ACA57B217 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::Double Field_1_3; // 0x20
	::System::UInt32 Field_1_4; // 0x28
	::System::UInt32 Field_1_5; // 0x2C
	::System::Double _TotalDamage_k__BackingField; // 0x30
	::RPG::GameCore::FixPoint _DamageFP_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C6D038ACA57B217__CTOR_OFFSET))(this);
	}

	::System::Double get_TotalDamage()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C6D038ACA57B217_GET_TOTALDAMAGE_OFFSET))(this);
	}

	::System::Void set_TotalDamage(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + CLASS_1_1C6D038ACA57B217_SET_TOTALDAMAGE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_DamageFP()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C6D038ACA57B217_GET_DAMAGEFP_OFFSET))(this);
	}

	::System::Void set_DamageFP(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_1C6D038ACA57B217_SET_DAMAGEFP_OFFSET))(this, a1);
	}

	::System::Double Method_1_BB33BB07CA0090E0()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1C6D038ACA57B217_METHOD_1_BB33BB07CA0090E0_OFFSET))(this);
	}

	::System::Void Method_1_EA672F77F1086A27(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_1C6D038ACA57B217_METHOD_1_EA672F77F1086A27_OFFSET))(this, a1);
	}
};
