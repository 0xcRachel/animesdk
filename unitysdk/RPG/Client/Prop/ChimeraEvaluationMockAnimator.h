#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_LIKECHIMERA_OFFSET UNITYSDK_OFFSET(0x14FD9060)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_UNLIKECHIMERA_OFFSET UNITYSDK_OFFSET(0x14FD91C0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x14FD92A0)
#define RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x14FD9290)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraEvaluationMockAnimator_TypeDefinitionIndex = 71943;

	class ChimeraEvaluationMockAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraEvaluationMockAnimator_TypeDefinitionIndex)->GetStaticField(0x3E50);
		}
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ChimeraEvaluationMockAnimator_TypeDefinitionIndex)->GetStaticField(0x3E54);
		}
		::UnityEngine::Animator* ChimeraAnimator; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR__CCTOR_OFFSET))();
		}

		::System::Void LikeChimera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_LIKECHIMERA_OFFSET))(this);
		}

		::System::Void UnlikeChimera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAEVALUATIONMOCKANIMATOR_UNLIKECHIMERA_OFFSET))(this);
		}
	};
}
