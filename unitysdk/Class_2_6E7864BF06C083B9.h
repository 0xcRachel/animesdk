#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class Effect_LiquidPerInsData;
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_6E7864BF06C083B9_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF2169A0)
#define CLASS_2_6E7864BF06C083B9_METHOD_2_211F5EF719F3693A_OFFSET UNITYSDK_OFFSET(0xF216930)
#define CLASS_2_6E7864BF06C083B9_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0xF216A20)
#define CLASS_2_6E7864BF06C083B9_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0xF216160)
#define CLASS_2_6E7864BF06C083B9_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0xF2161D0)
#define CLASS_2_6E7864BF06C083B9__CTOR_OFFSET UNITYSDK_OFFSET(0xF216A10)
#define CLASS_2_6E7864BF06C083B9___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF216A90)

inline static constexpr unsigned int Class_2_6E7864BF06C083B9_TypeDefinitionIndex = 44193;

class Class_2_6E7864BF06C083B9 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_METHOD_2_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_DISPOSE_OFFSET))(this);
	}

	::Effect_LiquidPerInsData* Method_2_211F5EF719F3693A()
	{
		return ((::Effect_LiquidPerInsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_METHOD_2_211F5EF719F3693A_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
