#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_67A10E08E000C7BB;
namespace RPG::Client { class BattleAlertParam; }

#define CLASS_2_67A10E08E000C7BB___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x86EB9C0)
#define CLASS_2_67A10E08E000C7BB___C__DISPLAYCLASS21_0__TRYSHOWALERTMARK_B__0_OFFSET UNITYSDK_OFFSET(0x86ECD10)

inline static constexpr unsigned int Class_2_67A10E08E000C7BB___c__DisplayClass21_0_TypeDefinitionIndex = 57286;

class Class_2_67A10E08E000C7BB___c__DisplayClass21_0 : public ::System::Object
{
public:
	::Class_2_67A10E08E000C7BB* __4__this; // 0x10
	::RPG::Client::BattleAlertParam* alertParam; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67A10E08E000C7BB___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
	}

	::System::Void _TryShowAlertMark_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_67A10E08E000C7BB___C__DISPLAYCLASS21_0__TRYSHOWALERTMARK_B__0_OFFSET))(this);
	}
};
