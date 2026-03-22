#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

class Class_2_90153E8BD5DB57E2_Class_1_EF5C6DDB2E06D631;
namespace RPG::Client { class Effect_GPUCrowdAnimationBatcher; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_90153E8BD5DB57E2_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x10ED6080)
#define CLASS_2_90153E8BD5DB57E2_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x10ED7DF0)
#define CLASS_2_90153E8BD5DB57E2_METHOD_2_93BEF0C7438E4DEF_OFFSET UNITYSDK_OFFSET(0x10ED7860)
#define CLASS_2_90153E8BD5DB57E2_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x10ED6010)
#define CLASS_2_90153E8BD5DB57E2_METHOD_2_B832BD75B98C1971_OFFSET UNITYSDK_OFFSET(0x10ED61B0)
#define CLASS_2_90153E8BD5DB57E2_METHOD_2_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x10ED6220)
#define CLASS_2_90153E8BD5DB57E2__CTOR_OFFSET UNITYSDK_OFFSET(0x10ED7DE0)

inline static constexpr unsigned int Class_2_90153E8BD5DB57E2_TypeDefinitionIndex = 56039;

class Class_2_90153E8BD5DB57E2 : public ::RPG::Client::BehaviorBase
{
public:
	::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Class_2_90153E8BD5DB57E2_Class_1_EF5C6DDB2E06D631*>* Field_2_1; // 0x18
	::System::Boolean Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90153E8BD5DB57E2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_90153E8BD5DB57E2_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90153E8BD5DB57E2_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90153E8BD5DB57E2_METHOD_2_EAD10B3E55E2C4C5_OFFSET))(this);
	}

	::System::Void Method_2_93BEF0C7438E4DEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90153E8BD5DB57E2_METHOD_2_93BEF0C7438E4DEF_OFFSET))(this);
	}

	::RPG::Client::Effect_GPUCrowdAnimationBatcher* Method_2_B832BD75B98C1971()
	{
		return ((::RPG::Client::Effect_GPUCrowdAnimationBatcher*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_90153E8BD5DB57E2_METHOD_2_B832BD75B98C1971_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_90153E8BD5DB57E2_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
