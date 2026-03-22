#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SRMATH_TWEENFUNCTIONS_BACKEASEINOUT_OFFSET UNITYSDK_OFFSET(0x17C776D0)
#define SRMATH_TWEENFUNCTIONS_BACKEASEIN_OFFSET UNITYSDK_OFFSET(0x17C776A0)
#define SRMATH_TWEENFUNCTIONS_BACKEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x17C77750)
#define SRMATH_TWEENFUNCTIONS_BACKEASEOUT_OFFSET UNITYSDK_OFFSET(0x17C77660)
#define SRMATH_TWEENFUNCTIONS_BOUNCEEASEINOUT_OFFSET UNITYSDK_OFFSET(0x17C772C0)
#define SRMATH_TWEENFUNCTIONS_BOUNCEEASEIN_OFFSET UNITYSDK_OFFSET(0x17C771F0)
#define SRMATH_TWEENFUNCTIONS_BOUNCEEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x17C77490)
#define SRMATH_TWEENFUNCTIONS_BOUNCEEASEOUT_OFFSET UNITYSDK_OFFSET(0x17C77110)
#define SRMATH_TWEENFUNCTIONS_CIRCEASEINOUT_OFFSET UNITYSDK_OFFSET(0x17C768B0)
#define SRMATH_TWEENFUNCTIONS_CIRCEASEIN_OFFSET UNITYSDK_OFFSET(0x17C76850)
#define SRMATH_TWEENFUNCTIONS_CIRCEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x17C76960)
#define SRMATH_TWEENFUNCTIONS_CIRCEASEOUT_OFFSET UNITYSDK_OFFSET(0x17C767F0)
#define SRMATH_TWEENFUNCTIONS_CUBICEASEINOUT_OFFSET UNITYSDK_OFFSET(0x17C76480)
#define SRMATH_TWEENFUNCTIONS_CUBICEASEIN_OFFSET UNITYSDK_OFFSET(0x17C76460)
#define SRMATH_TWEENFUNCTIONS_CUBICEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x17C764F0)
#define SRMATH_TWEENFUNCTIONS_CUBICEASEOUT_OFFSET UNITYSDK_OFFSET(0x17C76430)
#define SRMATH_TWEENFUNCTIONS_ELASTICEASEINOUT_OFFSET UNITYSDK_OFFSET(0x17C76DF0)
#define SRMATH_TWEENFUNCTIONS_ELASTICEASEIN_OFFSET UNITYSDK_OFFSET(0x17C76CF0)
#define SRMATH_TWEENFUNCTIONS_ELASTICEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x17C76F60)
#define SRMATH_TWEENFUNCTIONS_ELASTICEASEOUT_OFFSET UNITYSDK_OFFSET(0x17C76C00)
#define SRMATH_TWEENFUNCTIONS_EXPOEASEINOUT_OFFSET UNITYSDK_OFFSET(0x17C762E0)
#define SRMATH_TWEENFUNCTIONS_EXPOEASEIN_OFFSET UNITYSDK_OFFSET(0x17C76280)
#define SRMATH_TWEENFUNCTIONS_EXPOEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x17C76380)
#define SRMATH_TWEENFUNCTIONS_EXPOEASEOUT_OFFSET UNITYSDK_OFFSET(0x17C76220)
#define SRMATH_TWEENFUNCTIONS_LINEAR_OFFSET UNITYSDK_OFFSET(0x17C760F0)
#define SRMATH_TWEENFUNCTIONS_QUADEASEINOUT_OFFSET UNITYSDK_OFFSET(0x17C76140)
#define SRMATH_TWEENFUNCTIONS_QUADEASEIN_OFFSET UNITYSDK_OFFSET(0x17C76120)
#define SRMATH_TWEENFUNCTIONS_QUADEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x17C761B0)
#define SRMATH_TWEENFUNCTIONS_QUADEASEOUT_OFFSET UNITYSDK_OFFSET(0x17C76100)
#define SRMATH_TWEENFUNCTIONS_QUARTEASEINOUT_OFFSET UNITYSDK_OFFSET(0x17C765B0)
#define SRMATH_TWEENFUNCTIONS_QUARTEASEIN_OFFSET UNITYSDK_OFFSET(0x17C76590)
#define SRMATH_TWEENFUNCTIONS_QUARTEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x17C76620)
#define SRMATH_TWEENFUNCTIONS_QUARTEASEOUT_OFFSET UNITYSDK_OFFSET(0x17C76560)
#define SRMATH_TWEENFUNCTIONS_QUINTEASEINOUT_OFFSET UNITYSDK_OFFSET(0x17C766F0)
#define SRMATH_TWEENFUNCTIONS_QUINTEASEIN_OFFSET UNITYSDK_OFFSET(0x17C766D0)
#define SRMATH_TWEENFUNCTIONS_QUINTEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x17C76770)
#define SRMATH_TWEENFUNCTIONS_QUINTEASEOUT_OFFSET UNITYSDK_OFFSET(0x17C766A0)
#define SRMATH_TWEENFUNCTIONS_SINEEASEINOUT_OFFSET UNITYSDK_OFFSET(0x17C76AC0)
#define SRMATH_TWEENFUNCTIONS_SINEEASEIN_OFFSET UNITYSDK_OFFSET(0x17C76A70)
#define SRMATH_TWEENFUNCTIONS_SINEEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x17C76B70)
#define SRMATH_TWEENFUNCTIONS_SINEEASEOUT_OFFSET UNITYSDK_OFFSET(0x17C76A30)

inline static constexpr unsigned int SRMath_TweenFunctions_TypeDefinitionIndex = 26904;

class SRMath_TweenFunctions : public ::System::Object
{
public:
	static ::System::Single Linear(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_LINEAR_OFFSET))(t, b, c, d);
	}

	static ::System::Single ExpoEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_EXPOEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single ExpoEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_EXPOEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single ExpoEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_EXPOEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single ExpoEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_EXPOEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single CircEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CIRCEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single CircEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CIRCEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single CircEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CIRCEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single CircEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CIRCEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuadEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUADEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuadEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUADEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuadEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUADEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuadEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUADEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single SineEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_SINEEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single SineEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_SINEEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single SineEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_SINEEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single SineEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_SINEEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single CubicEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CUBICEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single CubicEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CUBICEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single CubicEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CUBICEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single CubicEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_CUBICEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuartEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUARTEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuartEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUARTEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuartEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUARTEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuartEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUARTEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuintEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUINTEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuintEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUINTEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuintEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUINTEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single QuintEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_QUINTEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single ElasticEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_ELASTICEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single ElasticEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_ELASTICEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single ElasticEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_ELASTICEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single ElasticEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_ELASTICEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single BounceEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BOUNCEEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single BounceEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BOUNCEEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single BounceEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BOUNCEEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single BounceEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BOUNCEEASEOUTIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single BackEaseOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BACKEASEOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single BackEaseIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BACKEASEIN_OFFSET))(t, b, c, d);
	}

	static ::System::Single BackEaseInOut(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BACKEASEINOUT_OFFSET))(t, b, c, d);
	}

	static ::System::Single BackEaseOutIn(::System::Single t, ::System::Single b, ::System::Single c, ::System::Single d)
	{
		return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SRMATH_TWEENFUNCTIONS_BACKEASEOUTIN_OFFSET))(t, b, c, d);
	}
};
