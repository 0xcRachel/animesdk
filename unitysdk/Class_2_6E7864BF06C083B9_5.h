#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginSyncTargetShaderProperty; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_6E7864BF06C083B9_5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1035FB30)
#define CLASS_2_6E7864BF06C083B9_5_METHOD_2_68B917C30315246F_OFFSET UNITYSDK_OFFSET(0x1035FE00)
#define CLASS_2_6E7864BF06C083B9_5_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x1035FE60)
#define CLASS_2_6E7864BF06C083B9_5_METHOD_2_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1035FBA0)
#define CLASS_2_6E7864BF06C083B9_5_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x1035FAC0)
#define CLASS_2_6E7864BF06C083B9_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1035FE50)
#define CLASS_2_6E7864BF06C083B9_5___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1035FED0)

inline static constexpr unsigned int Class_2_6E7864BF06C083B9_5_TypeDefinitionIndex = 55617;

class Class_2_6E7864BF06C083B9_5 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_5_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_5_METHOD_2_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginSyncTargetShaderProperty* Method_2_68B917C30315246F()
	{
		return ((::RPG::Client::MonoEffectPluginSyncTargetShaderProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_5_METHOD_2_68B917C30315246F_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_5_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E7864BF06C083B9_5___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
