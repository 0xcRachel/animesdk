#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoEffectPluginSyncTargetNormalizedTime; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_EBD2E97EDDC48B89_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13570C60)
#define CLASS_2_EBD2E97EDDC48B89_METHOD_2_1266718F168A426C_OFFSET UNITYSDK_OFFSET(0x13571710)
#define CLASS_2_EBD2E97EDDC48B89_METHOD_2_8B73A4B695AF2EBA_OFFSET UNITYSDK_OFFSET(0x13570EF0)
#define CLASS_2_EBD2E97EDDC48B89_METHOD_2_921C3C3E09D59CD4_OFFSET UNITYSDK_OFFSET(0x13570D30)
#define CLASS_2_EBD2E97EDDC48B89_METHOD_2_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x13570CD0)
#define CLASS_2_EBD2E97EDDC48B89_METHOD_2_AF93A280AD1D3043_OFFSET UNITYSDK_OFFSET(0x13571760)
#define CLASS_2_EBD2E97EDDC48B89_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x13570BF0)
#define CLASS_2_EBD2E97EDDC48B89_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13570EA0)
#define CLASS_2_EBD2E97EDDC48B89_METHOD_2_D8767955799CFD63_OFFSET UNITYSDK_OFFSET(0x13570F40)
#define CLASS_2_EBD2E97EDDC48B89_METHOD_2_DEDB6D705D6319DA_OFFSET UNITYSDK_OFFSET(0x13571830)
#define CLASS_2_EBD2E97EDDC48B89__CTOR_OFFSET UNITYSDK_OFFSET(0x13571820)
#define CLASS_2_EBD2E97EDDC48B89___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13571890)

inline static constexpr unsigned int Class_2_EBD2E97EDDC48B89_TypeDefinitionIndex = 65354;

class Class_2_EBD2E97EDDC48B89 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Animator* Field_2_0; // 0x18
	::UnityEngine::Animator* Field_2_1; // 0x20
	::System::Int32 Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_METHOD_2_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8B73A4B695AF2EBA(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_METHOD_2_8B73A4B695AF2EBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_D8767955799CFD63(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_METHOD_2_D8767955799CFD63_OFFSET))(this, a1);
	}

	::System::Void Method_2_921C3C3E09D59CD4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_METHOD_2_921C3C3E09D59CD4_OFFSET))(this);
	}

	::UnityEngine::Animator* Method_2_AF93A280AD1D3043(::RPG::GameCore::GameEntity* a1)
	{
		return ((::UnityEngine::Animator*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_METHOD_2_AF93A280AD1D3043_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime* Method_2_1266718F168A426C()
	{
		return ((::RPG::Client::MonoEffectPluginSyncTargetNormalizedTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_METHOD_2_1266718F168A426C_OFFSET))(this);
	}

	::System::Void Method_2_DEDB6D705D6319DA(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89_METHOD_2_DEDB6D705D6319DA_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBD2E97EDDC48B89___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
