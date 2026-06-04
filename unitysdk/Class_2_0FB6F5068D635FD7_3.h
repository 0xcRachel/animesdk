#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginInitStateByTargetNormalizedTime; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_0FB6F5068D635FD7_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143B4050)
#define CLASS_2_0FB6F5068D635FD7_3_METHOD_2_783E8AADB8EE0369_OFFSET UNITYSDK_OFFSET(0x143B4430)
#define CLASS_2_0FB6F5068D635FD7_3_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x143B3FE0)
#define CLASS_2_0FB6F5068D635FD7_3_METHOD_2_B79CCBAA275AEA4D_OFFSET UNITYSDK_OFFSET(0x143B40C0)
#define CLASS_2_0FB6F5068D635FD7_3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x143B44A0)
#define CLASS_2_0FB6F5068D635FD7_3_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0x143B44F0)
#define CLASS_2_0FB6F5068D635FD7_3__CTOR_OFFSET UNITYSDK_OFFSET(0x143B44E0)
#define CLASS_2_0FB6F5068D635FD7_3___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x143B4550)

inline static constexpr unsigned int Class_2_0FB6F5068D635FD7_3_TypeDefinitionIndex = 65336;

class Class_2_0FB6F5068D635FD7_3 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_3_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B79CCBAA275AEA4D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_3_METHOD_2_B79CCBAA275AEA4D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginInitStateByTargetNormalizedTime* Method_2_783E8AADB8EE0369()
	{
		return ((::RPG::Client::MonoEffectPluginInitStateByTargetNormalizedTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_3_METHOD_2_783E8AADB8EE0369_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_3_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0FB6F5068D635FD7_3___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
