#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class Effect_FlareOcclusion; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class ParticleSystem; }

#define CLASS_2_E9AF3B207BAC03C2_METHOD_2_637DBA7901C3991A_OFFSET UNITYSDK_OFFSET(0x91EF7B0)
#define CLASS_2_E9AF3B207BAC03C2_METHOD_2_7ED485F184B9E7CC_OFFSET UNITYSDK_OFFSET(0x91EFDB0)
#define CLASS_2_E9AF3B207BAC03C2_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x91EFE70)
#define CLASS_2_E9AF3B207BAC03C2_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x91EF740)
#define CLASS_2_E9AF3B207BAC03C2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x91EFE20)
#define CLASS_2_E9AF3B207BAC03C2__CTOR_OFFSET UNITYSDK_OFFSET(0x91EFE60)

inline static constexpr unsigned int Class_2_E9AF3B207BAC03C2_TypeDefinitionIndex = 56139;

class Class_2_E9AF3B207BAC03C2 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Camera* Field_2_1; // 0x18
	::UnityEngine::ParticleSystem* Field_2_0; // 0x20
	::System::Boolean Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9AF3B207BAC03C2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_E9AF3B207BAC03C2_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_637DBA7901C3991A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9AF3B207BAC03C2_METHOD_2_637DBA7901C3991A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9AF3B207BAC03C2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::Effect_FlareOcclusion* Method_2_7ED485F184B9E7CC()
	{
		return ((::RPG::Client::Effect_FlareOcclusion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9AF3B207BAC03C2_METHOD_2_7ED485F184B9E7CC_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_E9AF3B207BAC03C2_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
