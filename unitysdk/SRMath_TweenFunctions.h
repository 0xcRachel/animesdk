#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SRMATH_TWEENFUNCTIONS_BACKEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1A324F00)
#define SRMATH_TWEENFUNCTIONS_BACKEASEIN_OFFSET UNITYSDK_OFFSET(0x1A324ED0)
#define SRMATH_TWEENFUNCTIONS_BACKEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1A324F80)
#define SRMATH_TWEENFUNCTIONS_BACKEASEOUT_OFFSET UNITYSDK_OFFSET(0x1A324E90)
#define SRMATH_TWEENFUNCTIONS_BOUNCEEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1A324AF0)
#define SRMATH_TWEENFUNCTIONS_BOUNCEEASEIN_OFFSET UNITYSDK_OFFSET(0x1A324A20)
#define SRMATH_TWEENFUNCTIONS_BOUNCEEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1A324CC0)
#define SRMATH_TWEENFUNCTIONS_BOUNCEEASEOUT_OFFSET UNITYSDK_OFFSET(0x1A324940)
#define SRMATH_TWEENFUNCTIONS_CIRCEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1A3240E0)
#define SRMATH_TWEENFUNCTIONS_CIRCEASEIN_OFFSET UNITYSDK_OFFSET(0x1A324080)
#define SRMATH_TWEENFUNCTIONS_CIRCEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1A324190)
#define SRMATH_TWEENFUNCTIONS_CIRCEASEOUT_OFFSET UNITYSDK_OFFSET(0x1A324020)
#define SRMATH_TWEENFUNCTIONS_CUBICEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1A323CB0)
#define SRMATH_TWEENFUNCTIONS_CUBICEASEIN_OFFSET UNITYSDK_OFFSET(0x1A323C90)
#define SRMATH_TWEENFUNCTIONS_CUBICEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1A323D20)
#define SRMATH_TWEENFUNCTIONS_CUBICEASEOUT_OFFSET UNITYSDK_OFFSET(0x1A323C60)
#define SRMATH_TWEENFUNCTIONS_ELASTICEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1A324620)
#define SRMATH_TWEENFUNCTIONS_ELASTICEASEIN_OFFSET UNITYSDK_OFFSET(0x1A324520)
#define SRMATH_TWEENFUNCTIONS_ELASTICEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1A324790)
#define SRMATH_TWEENFUNCTIONS_ELASTICEASEOUT_OFFSET UNITYSDK_OFFSET(0x1A324430)
#define SRMATH_TWEENFUNCTIONS_EXPOEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1A323B10)
#define SRMATH_TWEENFUNCTIONS_EXPOEASEIN_OFFSET UNITYSDK_OFFSET(0x1A323AB0)
#define SRMATH_TWEENFUNCTIONS_EXPOEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1A323BB0)
#define SRMATH_TWEENFUNCTIONS_EXPOEASEOUT_OFFSET UNITYSDK_OFFSET(0x1A323A50)
#define SRMATH_TWEENFUNCTIONS_LINEAR_OFFSET UNITYSDK_OFFSET(0x1A323920)
#define SRMATH_TWEENFUNCTIONS_QUADEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1A323970)
#define SRMATH_TWEENFUNCTIONS_QUADEASEIN_OFFSET UNITYSDK_OFFSET(0x1A323950)
#define SRMATH_TWEENFUNCTIONS_QUADEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1A3239E0)
#define SRMATH_TWEENFUNCTIONS_QUADEASEOUT_OFFSET UNITYSDK_OFFSET(0x1A323930)
#define SRMATH_TWEENFUNCTIONS_QUARTEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1A323DE0)
#define SRMATH_TWEENFUNCTIONS_QUARTEASEIN_OFFSET UNITYSDK_OFFSET(0x1A323DC0)
#define SRMATH_TWEENFUNCTIONS_QUARTEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1A323E50)
#define SRMATH_TWEENFUNCTIONS_QUARTEASEOUT_OFFSET UNITYSDK_OFFSET(0x1A323D90)
#define SRMATH_TWEENFUNCTIONS_QUINTEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1A323F20)
#define SRMATH_TWEENFUNCTIONS_QUINTEASEIN_OFFSET UNITYSDK_OFFSET(0x1A323F00)
#define SRMATH_TWEENFUNCTIONS_QUINTEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1A323FA0)
#define SRMATH_TWEENFUNCTIONS_QUINTEASEOUT_OFFSET UNITYSDK_OFFSET(0x1A323ED0)
#define SRMATH_TWEENFUNCTIONS_SINEEASEINOUT_OFFSET UNITYSDK_OFFSET(0x1A3242F0)
#define SRMATH_TWEENFUNCTIONS_SINEEASEIN_OFFSET UNITYSDK_OFFSET(0x1A3242A0)
#define SRMATH_TWEENFUNCTIONS_SINEEASEOUTIN_OFFSET UNITYSDK_OFFSET(0x1A3243A0)
#define SRMATH_TWEENFUNCTIONS_SINEEASEOUT_OFFSET UNITYSDK_OFFSET(0x1A324260)

inline static constexpr unsigned int SRMath_TweenFunctions_TypeDefinitionIndex = 33264;

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
