#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginShape; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_6E7864BF06C083B9_4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B2CED0)
#define CLASS_2_6E7864BF06C083B9_4_METHOD_2_307F2A71BD13D1FE_OFFSET UNITYSDK_OFFSET(0x10B2CF40)
#define CLASS_2_6E7864BF06C083B9_4_METHOD_2_774841800338D166_OFFSET UNITYSDK_OFFSET(0x10B2D010)
#define CLASS_2_6E7864BF06C083B9_4_METHOD_2_866D0979717F6B36_OFFSET UNITYSDK_OFFSET(0x10B2D7E0)
#define CLASS_2_6E7864BF06C083B9_4_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x10B2DF00)
#define CLASS_2_6E7864BF06C083B9_4_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x10B2CE60)
#define CLASS_2_6E7864BF06C083B9_4_METHOD_2_D545E2F706415F81_OFFSET UNITYSDK_OFFSET(0x10B2D080)
#define CLASS_2_6E7864BF06C083B9_4__CTOR_OFFSET UNITYSDK_OFFSET(0x10B2DEF0)
#define CLASS_2_6E7864BF06C083B9_4___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B2DF70)

inline static constexpr unsigned int Class_2_6E7864BF06C083B9_4_TypeDefinitionIndex = 55615;

class Class_2_6E7864BF06C083B9_4 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_4_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_307F2A71BD13D1FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_4_METHOD_2_307F2A71BD13D1FE_OFFSET))(this);
	}

	::System::Void Method_2_D545E2F706415F81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_4_METHOD_2_D545E2F706415F81_OFFSET))(this);
	}

	::System::Void Method_2_866D0979717F6B36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_4_METHOD_2_866D0979717F6B36_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginShape* Method_2_774841800338D166()
	{
		return ((::RPG::Client::MonoEffectPluginShape*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_4_METHOD_2_774841800338D166_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_4_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_4___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
