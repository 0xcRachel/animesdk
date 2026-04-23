#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EasingFunction_Ease.h"
#include "unitysdk/System/Object.h"

class EasingFunction_Function;
class EasingFunction_FunctionValue;

#define EASINGFUNCTION_EASEINBACKD_OFFSET UNITYSDK_OFFSET(0x194317D0)
#define EASINGFUNCTION_EASEINBACK_1_OFFSET UNITYSDK_OFFSET(0x19430BB0)
#define EASINGFUNCTION_EASEINBACK_OFFSET UNITYSDK_OFFSET(0x19430B80)
#define EASINGFUNCTION_EASEINBOUNCED_OFFSET UNITYSDK_OFFSET(0x19431560)
#define EASINGFUNCTION_EASEINBOUNCE_1_OFFSET UNITYSDK_OFFSET(0x19430640)
#define EASINGFUNCTION_EASEINBOUNCE_OFFSET UNITYSDK_OFFSET(0x194304B0)
#define EASINGFUNCTION_EASEINCIRCD_OFFSET UNITYSDK_OFFSET(0x194313E0)
#define EASINGFUNCTION_EASEINCIRC_1_OFFSET UNITYSDK_OFFSET(0x194302B0)
#define EASINGFUNCTION_EASEINCIRC_OFFSET UNITYSDK_OFFSET(0x19430250)
#define EASINGFUNCTION_EASEINCUBICD_OFFSET UNITYSDK_OFFSET(0x19431050)
#define EASINGFUNCTION_EASEINCUBIC_1_OFFSET UNITYSDK_OFFSET(0x1942FB40)
#define EASINGFUNCTION_EASEINCUBIC_OFFSET UNITYSDK_OFFSET(0x1942FB20)
#define EASINGFUNCTION_EASEINELASTICD_OFFSET UNITYSDK_OFFSET(0x194318D0)
#define EASINGFUNCTION_EASEINELASTIC_OFFSET UNITYSDK_OFFSET(0x19430D30)
#define EASINGFUNCTION_EASEINEXPOD_OFFSET UNITYSDK_OFFSET(0x194312E0)
#define EASINGFUNCTION_EASEINEXPO_1_OFFSET UNITYSDK_OFFSET(0x194300C0)
#define EASINGFUNCTION_EASEINEXPO_OFFSET UNITYSDK_OFFSET(0x19430070)
#define EASINGFUNCTION_EASEINOUTBACKD_OFFSET UNITYSDK_OFFSET(0x19431840)
#define EASINGFUNCTION_EASEINOUTBACK_1_OFFSET UNITYSDK_OFFSET(0x19430CC0)
#define EASINGFUNCTION_EASEINOUTBACK_OFFSET UNITYSDK_OFFSET(0x19430C40)
#define EASINGFUNCTION_EASEINOUTBOUNCED_OFFSET UNITYSDK_OFFSET(0x19431680)
#define EASINGFUNCTION_EASEINOUTBOUNCE_1_OFFSET UNITYSDK_OFFSET(0x19430990)
#define EASINGFUNCTION_EASEINOUTBOUNCE_OFFSET UNITYSDK_OFFSET(0x194307C0)
#define EASINGFUNCTION_EASEINOUTCIRCD_OFFSET UNITYSDK_OFFSET(0x194314C0)
#define EASINGFUNCTION_EASEINOUTCIRC_1_OFFSET UNITYSDK_OFFSET(0x19430430)
#define EASINGFUNCTION_EASEINOUTCIRC_OFFSET UNITYSDK_OFFSET(0x19430380)
#define EASINGFUNCTION_EASEINOUTCUBICD_OFFSET UNITYSDK_OFFSET(0x19431090)
#define EASINGFUNCTION_EASEINOUTCUBIC_1_OFFSET UNITYSDK_OFFSET(0x1942FC00)
#define EASINGFUNCTION_EASEINOUTCUBIC_OFFSET UNITYSDK_OFFSET(0x1942FBA0)
#define EASINGFUNCTION_EASEINOUTELASTICD_OFFSET UNITYSDK_OFFSET(0x19431AC0)
#define EASINGFUNCTION_EASEINOUTELASTIC_OFFSET UNITYSDK_OFFSET(0x19430E90)
#define EASINGFUNCTION_EASEINOUTEXPOD_OFFSET UNITYSDK_OFFSET(0x19431370)
#define EASINGFUNCTION_EASEINOUTEXPO_1_OFFSET UNITYSDK_OFFSET(0x194301F0)
#define EASINGFUNCTION_EASEINOUTEXPO_OFFSET UNITYSDK_OFFSET(0x19430160)
#define EASINGFUNCTION_EASEINOUTQUADD_OFFSET UNITYSDK_OFFSET(0x19431010)
#define EASINGFUNCTION_EASEINOUTQUAD_1_OFFSET UNITYSDK_OFFSET(0x1942FAC0)
#define EASINGFUNCTION_EASEINOUTQUAD_OFFSET UNITYSDK_OFFSET(0x1942FA50)
#define EASINGFUNCTION_EASEINOUTQUARTD_OFFSET UNITYSDK_OFFSET(0x19431120)
#define EASINGFUNCTION_EASEINOUTQUART_1_OFFSET UNITYSDK_OFFSET(0x1942FD50)
#define EASINGFUNCTION_EASEINOUTQUART_OFFSET UNITYSDK_OFFSET(0x1942FCE0)
#define EASINGFUNCTION_EASEINOUTQUINTD_OFFSET UNITYSDK_OFFSET(0x194311B0)
#define EASINGFUNCTION_EASEINOUTQUINT_1_OFFSET UNITYSDK_OFFSET(0x1942FEC0)
#define EASINGFUNCTION_EASEINOUTQUINT_OFFSET UNITYSDK_OFFSET(0x1942FE50)
#define EASINGFUNCTION_EASEINOUTSINED_OFFSET UNITYSDK_OFFSET(0x19431290)
#define EASINGFUNCTION_EASEINOUTSINE_1_OFFSET UNITYSDK_OFFSET(0x19430040)
#define EASINGFUNCTION_EASEINOUTSINE_OFFSET UNITYSDK_OFFSET(0x1942FFF0)
#define EASINGFUNCTION_EASEINQUADD_OFFSET UNITYSDK_OFFSET(0x19430FD0)
#define EASINGFUNCTION_EASEINQUAD_1_OFFSET UNITYSDK_OFFSET(0x1942FA00)
#define EASINGFUNCTION_EASEINQUAD_OFFSET UNITYSDK_OFFSET(0x1942F9E0)
#define EASINGFUNCTION_EASEINQUARTD_OFFSET UNITYSDK_OFFSET(0x194310D0)
#define EASINGFUNCTION_EASEINQUART_1_OFFSET UNITYSDK_OFFSET(0x1942FC70)
#define EASINGFUNCTION_EASEINQUART_OFFSET UNITYSDK_OFFSET(0x1942FC50)
#define EASINGFUNCTION_EASEINQUINTD_OFFSET UNITYSDK_OFFSET(0x19431160)
#define EASINGFUNCTION_EASEINQUINT_1_OFFSET UNITYSDK_OFFSET(0x1942FDD0)
#define EASINGFUNCTION_EASEINQUINT_OFFSET UNITYSDK_OFFSET(0x1942FDB0)
#define EASINGFUNCTION_EASEINSINED_OFFSET UNITYSDK_OFFSET(0x19431200)
#define EASINGFUNCTION_EASEINSINE_1_OFFSET UNITYSDK_OFFSET(0x1942FF70)
#define EASINGFUNCTION_EASEINSINE_OFFSET UNITYSDK_OFFSET(0x1942FF20)
#define EASINGFUNCTION_EASEOUTBACKD_OFFSET UNITYSDK_OFFSET(0x19431800)
#define EASINGFUNCTION_EASEOUTBACK_1_OFFSET UNITYSDK_OFFSET(0x19430C10)
#define EASINGFUNCTION_EASEOUTBACK_OFFSET UNITYSDK_OFFSET(0x19430BD0)
#define EASINGFUNCTION_EASEOUTBOUNCED_OFFSET UNITYSDK_OFFSET(0x194315F0)
#define EASINGFUNCTION_EASEOUTBOUNCE_1_OFFSET UNITYSDK_OFFSET(0x19430710)
#define EASINGFUNCTION_EASEOUTBOUNCE_OFFSET UNITYSDK_OFFSET(0x19430580)
#define EASINGFUNCTION_EASEOUTCIRCD_OFFSET UNITYSDK_OFFSET(0x19431450)
#define EASINGFUNCTION_EASEOUTCIRC_1_OFFSET UNITYSDK_OFFSET(0x19430350)
#define EASINGFUNCTION_EASEOUTCIRC_OFFSET UNITYSDK_OFFSET(0x194302F0)
#define EASINGFUNCTION_EASEOUTCUBICD_OFFSET UNITYSDK_OFFSET(0x19431070)
#define EASINGFUNCTION_EASEOUTCUBIC_1_OFFSET UNITYSDK_OFFSET(0x1942FB80)
#define EASINGFUNCTION_EASEOUTCUBIC_OFFSET UNITYSDK_OFFSET(0x1942FB50)
#define EASINGFUNCTION_EASEOUTELASTICD_OFFSET UNITYSDK_OFFSET(0x194319D0)
#define EASINGFUNCTION_EASEOUTELASTIC_OFFSET UNITYSDK_OFFSET(0x19430DE0)
#define EASINGFUNCTION_EASEOUTEXPOD_OFFSET UNITYSDK_OFFSET(0x19431330)
#define EASINGFUNCTION_EASEOUTEXPO_1_OFFSET UNITYSDK_OFFSET(0x19430130)
#define EASINGFUNCTION_EASEOUTEXPO_OFFSET UNITYSDK_OFFSET(0x194300E0)
#define EASINGFUNCTION_EASEOUTQUADD_OFFSET UNITYSDK_OFFSET(0x19430FE0)
#define EASINGFUNCTION_EASEOUTQUAD_1_OFFSET UNITYSDK_OFFSET(0x1942FA30)
#define EASINGFUNCTION_EASEOUTQUAD_OFFSET UNITYSDK_OFFSET(0x1942FA10)
#define EASINGFUNCTION_EASEOUTQUARTD_OFFSET UNITYSDK_OFFSET(0x194310F0)
#define EASINGFUNCTION_EASEOUTQUART_1_OFFSET UNITYSDK_OFFSET(0x1942FCB0)
#define EASINGFUNCTION_EASEOUTQUART_OFFSET UNITYSDK_OFFSET(0x1942FC80)
#define EASINGFUNCTION_EASEOUTQUINTD_OFFSET UNITYSDK_OFFSET(0x19431180)
#define EASINGFUNCTION_EASEOUTQUINT_1_OFFSET UNITYSDK_OFFSET(0x1942FE20)
#define EASINGFUNCTION_EASEOUTQUINT_OFFSET UNITYSDK_OFFSET(0x1942FDF0)
#define EASINGFUNCTION_EASEOUTSINED_OFFSET UNITYSDK_OFFSET(0x19431250)
#define EASINGFUNCTION_EASEOUTSINE_1_OFFSET UNITYSDK_OFFSET(0x1942FFE0)
#define EASINGFUNCTION_EASEOUTSINE_OFFSET UNITYSDK_OFFSET(0x1942FFA0)
#define EASINGFUNCTION_GETEASINGFUNCTIONDERIVATIVE_OFFSET UNITYSDK_OFFSET(0x194329F0)
#define EASINGFUNCTION_GETEASINGFUNCTIONVALUE_OFFSET UNITYSDK_OFFSET(0x19432490)
#define EASINGFUNCTION_GETEASINGFUNCTION_OFFSET UNITYSDK_OFFSET(0x19431E80)
#define EASINGFUNCTION_LINEARD_OFFSET UNITYSDK_OFFSET(0x19430FC0)
#define EASINGFUNCTION_LINEAR_1_OFFSET UNITYSDK_OFFSET(0x1942F820)
#define EASINGFUNCTION_LINEAR_OFFSET UNITYSDK_OFFSET(0x1942F7F0)
#define EASINGFUNCTION_SPRINGD_OFFSET UNITYSDK_OFFSET(0x19431C80)
#define EASINGFUNCTION_SPRING_1_OFFSET UNITYSDK_OFFSET(0x1942F920)
#define EASINGFUNCTION_SPRING_OFFSET UNITYSDK_OFFSET(0x1942F830)

inline static constexpr unsigned int EasingFunction_TypeDefinitionIndex = 40929;

class EasingFunction : public ::System::Object
{
public:
	// static const ::System::Single NATURAL_LOG_OF_2; // 0x0

	static ::System::Single Linear(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_LINEAR_OFFSET))(start, end, value);
	}

	static ::System::Single Linear_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_LINEAR_1_OFFSET))(value);
	}

	static ::System::Single Spring(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_SPRING_OFFSET))(start, end, value);
	}

	static ::System::Single Spring_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_SPRING_1_OFFSET))(value);
	}

	static ::System::Single EaseInQuad(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUAD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInQuad_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUAD_1_OFFSET))(value);
	}

	static ::System::Single EaseOutQuad(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUAD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutQuad_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUAD_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutQuad(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUAD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutQuad_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUAD_1_OFFSET))(value);
	}

	static ::System::Single EaseInCubic(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCUBIC_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInCubic_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCUBIC_1_OFFSET))(value);
	}

	static ::System::Single EaseOutCubic(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCUBIC_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutCubic_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCUBIC_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutCubic(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCUBIC_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutCubic_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCUBIC_1_OFFSET))(value);
	}

	static ::System::Single EaseInQuart(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUART_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInQuart_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUART_1_OFFSET))(value);
	}

	static ::System::Single EaseOutQuart(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUART_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutQuart_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUART_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutQuart(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUART_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutQuart_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUART_1_OFFSET))(value);
	}

	static ::System::Single EaseInQuint(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUINT_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInQuint_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUINT_1_OFFSET))(value);
	}

	static ::System::Single EaseOutQuint(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUINT_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutQuint_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUINT_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutQuint(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUINT_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutQuint_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUINT_1_OFFSET))(value);
	}

	static ::System::Single EaseInSine(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINSINE_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInSine_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINSINE_1_OFFSET))(value);
	}

	static ::System::Single EaseOutSine(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTSINE_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutSine_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTSINE_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutSine(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTSINE_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutSine_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTSINE_1_OFFSET))(value);
	}

	static ::System::Single EaseInExpo(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINEXPO_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInExpo_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINEXPO_1_OFFSET))(value);
	}

	static ::System::Single EaseOutExpo(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTEXPO_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutExpo_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTEXPO_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutExpo(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTEXPO_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutExpo_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTEXPO_1_OFFSET))(value);
	}

	static ::System::Single EaseInCirc(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCIRC_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInCirc_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCIRC_1_OFFSET))(value);
	}

	static ::System::Single EaseOutCirc(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCIRC_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutCirc_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCIRC_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutCirc(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCIRC_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutCirc_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCIRC_1_OFFSET))(value);
	}

	static ::System::Single EaseInBounce(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBOUNCE_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInBounce_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBOUNCE_1_OFFSET))(value);
	}

	static ::System::Single EaseOutBounce(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBOUNCE_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutBounce_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBOUNCE_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutBounce(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBOUNCE_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutBounce_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBOUNCE_1_OFFSET))(value);
	}

	static ::System::Single EaseInBack(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBACK_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInBack_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBACK_1_OFFSET))(value);
	}

	static ::System::Single EaseOutBack(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBACK_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutBack_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBACK_1_OFFSET))(value);
	}

	static ::System::Single EaseInOutBack(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBACK_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutBack_1(::System::Single value)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBACK_1_OFFSET))(value);
	}

	static ::System::Single EaseInElastic(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINELASTIC_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutElastic(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTELASTIC_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutElastic(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTELASTIC_OFFSET))(start, end, value);
	}

	static ::System::Single LinearD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_LINEARD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInQuadD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUADD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutQuadD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUADD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutQuadD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUADD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInCubicD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCUBICD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutCubicD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCUBICD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutCubicD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCUBICD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInQuartD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUARTD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutQuartD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUARTD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutQuartD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUARTD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInQuintD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINQUINTD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutQuintD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTQUINTD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutQuintD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTQUINTD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInSineD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINSINED_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutSineD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTSINED_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutSineD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTSINED_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInExpoD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINEXPOD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutExpoD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTEXPOD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutExpoD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTEXPOD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInCircD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINCIRCD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutCircD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTCIRCD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutCircD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTCIRCD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInBounceD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBOUNCED_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutBounceD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBOUNCED_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutBounceD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBOUNCED_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInBackD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINBACKD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutBackD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTBACKD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutBackD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTBACKD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInElasticD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINELASTICD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseOutElasticD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEOUTELASTICD_OFFSET))(start, end, value);
	}

	static ::System::Single EaseInOutElasticD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_EASEINOUTELASTICD_OFFSET))(start, end, value);
	}

	static ::System::Single SpringD(::System::Single start, ::System::Single end, ::System::Single value)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASINGFUNCTION_SPRINGD_OFFSET))(start, end, value);
	}

	static ::EasingFunction_Function* GetEasingFunction(::EasingFunction_Ease easingFunction)
	{
		return ((::EasingFunction_Function*(*)(::EasingFunction_Ease))((::PBYTE)hIl2Cpp + EASINGFUNCTION_GETEASINGFUNCTION_OFFSET))(easingFunction);
	}

	static ::EasingFunction_FunctionValue* GetEasingFunctionValue(::EasingFunction_Ease easingFunction)
	{
		return ((::EasingFunction_FunctionValue*(*)(::EasingFunction_Ease))((::PBYTE)hIl2Cpp + EASINGFUNCTION_GETEASINGFUNCTIONVALUE_OFFSET))(easingFunction);
	}

	static ::EasingFunction_Function* GetEasingFunctionDerivative(::EasingFunction_Ease easingFunction)
	{
		return ((::EasingFunction_Function*(*)(::EasingFunction_Ease))((::PBYTE)hIl2Cpp + EASINGFUNCTION_GETEASINGFUNCTIONDERIVATIVE_OFFSET))(easingFunction);
	}
};
