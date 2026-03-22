#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E0B2943A83765539.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriority.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterPriorityGroup.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::CustomRP { class PPFilterStack; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_2_F9868A24C60208C0_METHOD_2_0ADE6075E68BECB1_OFFSET UNITYSDK_OFFSET(0x10A6C030)
#define CLASS_2_F9868A24C60208C0_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10A6B600)
#define CLASS_2_F9868A24C60208C0_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x10A6B480)
#define CLASS_2_F9868A24C60208C0_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x10A6B8F0)
#define CLASS_2_F9868A24C60208C0_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10A6B510)
#define CLASS_2_F9868A24C60208C0_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x10A6BD30)
#define CLASS_2_F9868A24C60208C0_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10A6C0A0)
#define CLASS_2_F9868A24C60208C0_METHOD_2_5A07052D114516CB_OFFSET UNITYSDK_OFFSET(0x10A6BA50)
#define CLASS_2_F9868A24C60208C0_METHOD_2_5B48DCA42B80B50C_OFFSET UNITYSDK_OFFSET(0x10A6B440)
#define CLASS_2_F9868A24C60208C0_METHOD_2_8CDE48544BC4070F_OFFSET UNITYSDK_OFFSET(0x10A6B6F0)
#define CLASS_2_F9868A24C60208C0_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10A6B9E0)
#define CLASS_2_F9868A24C60208C0_METHOD_2_B07554F28042D3EB_OFFSET UNITYSDK_OFFSET(0x10A6BDD0)
#define CLASS_2_F9868A24C60208C0_METHOD_2_F06CC410DF01A5B6_OFFSET UNITYSDK_OFFSET(0x10A6C110)
#define CLASS_2_F9868A24C60208C0__CTOR_OFFSET UNITYSDK_OFFSET(0x10A6B420)

inline static constexpr unsigned int Class_2_F9868A24C60208C0_TypeDefinitionIndex = 55857;

class Class_2_F9868A24C60208C0 : public ::Class_1_E0B2943A83765539
{
public:
	::RPG::GameCore::GameEntity* Field_2_8; // 0x20
	::RPG::CustomRP::PPFilterStack* Field_2_5; // 0x28
	::System::String* Field_2_0; // 0x30
	::Struct_2_0B84ADD7815498A2 Field_2_14; // 0x38
	::System::Single Field_2_10; // 0x48
	::System::Single Field_2_9; // 0x4C
	::System::Single Field_2_11; // 0x50
	::System::Single Field_2_3; // 0x54
	::System::Single Field_2_4; // 0x58
	::System::Single Field_2_13; // 0x5C
	::System::Boolean Field_2_7; // 0x60
	::System::Boolean Field_2_6; // 0x61
	::System::Boolean Field_2_12; // 0x62
	::System::Single Field_2_1; // 0x64
	::System::Single Field_2_2; // 0x68

	::System::Void _ctor(::RPG::GameCore::PPEffectFilterPriorityGroup a1, ::RPG::GameCore::PPEffectFilterPriority a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PPEffectFilterPriorityGroup, ::RPG::GameCore::PPEffectFilterPriority))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::PPEffectFilterType Method_2_5B48DCA42B80B50C()
	{
		return ((::RPG::GameCore::PPEffectFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_5B48DCA42B80B50C_OFFSET))(this);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::Boolean Method_2_8CDE48544BC4070F(::RPG::GameCore::PPEffectFilterType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_8CDE48544BC4070F_OFFSET))(this, a1);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_5A07052D114516CB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_5A07052D114516CB_OFFSET))(this, a1);
	}

	::System::Single Method_2_B07554F28042D3EB(::UnityEngine::Vector3 a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_B07554F28042D3EB_OFFSET))(this, a1);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::RPG::GameCore::PPEffectFilterType Method_2_0ADE6075E68BECB1()
	{
		return ((::RPG::GameCore::PPEffectFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_0ADE6075E68BECB1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Boolean Method_2_F06CC410DF01A5B6(::RPG::GameCore::PPEffectFilterType P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PPEffectFilterType))((::PBYTE)hIl2Cpp + CLASS_2_F9868A24C60208C0_METHOD_2_F06CC410DF01A5B6_OFFSET))(this, P0);
	}
};
