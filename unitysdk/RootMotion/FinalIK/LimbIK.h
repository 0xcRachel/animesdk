#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GrounderIKThreadSolver_Limb.h"
#include "unitysdk/RootMotion/FinalIK/IK.h"

namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverLimb; }
namespace System { class String; }

#define ROOTMOTION_FINALIK_LIMBIK_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x82AA6C0)
#define ROOTMOTION_FINALIK_LIMBIK_COPYFROM_OFFSET UNITYSDK_OFFSET(0x828FC10)
#define ROOTMOTION_FINALIK_LIMBIK_COPYTO_OFFSET UNITYSDK_OFFSET(0x828F240)
#define ROOTMOTION_FINALIK_LIMBIK_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0x82AA710)
#define ROOTMOTION_FINALIK_LIMBIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x82AA620)
#define ROOTMOTION_FINALIK_LIMBIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x82AA5D0)
#define ROOTMOTION_FINALIK_LIMBIK_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x82AA670)
#define ROOTMOTION_FINALIK_LIMBIK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x82AA720)
#define ROOTMOTION_FINALIK_LIMBIK__CTOR_OFFSET UNITYSDK_OFFSET(0x82AA7C0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int LimbIK_TypeDefinitionIndex = 34267;

	class LimbIK : public ::RootMotion::FinalIK::IK
	{
	public:
		::RootMotion::FinalIK::IKSolverLimb* solver; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_ASTHREAD_OFFSET))(this);
		}

		::System::Void CopyTo(::RootMotion::FinalIK::GrounderIKThreadSolver_Limb& data)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GrounderIKThreadSolver_Limb&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_COPYTO_OFFSET))(this, data);
		}

		::System::Void CopyFrom(::RootMotion::FinalIK::GrounderIKThreadSolver_Limb& data)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GrounderIKThreadSolver_Limb&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_COPYFROM_OFFSET))(this, data);
		}

		::RootMotion::FinalIK::IKSolver* GetIKSolver()
		{
			return ((::RootMotion::FinalIK::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_GETIKSOLVER_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_LIMBIK_TOSTRING_OFFSET))(this);
		}
	};
}
