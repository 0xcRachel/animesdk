#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_RTIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AE6C90)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RTIDs_TypeDefinitionIndex = 29382;

	class RTIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__DirBlurTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xBEE0);
		}
		static ::System::Int32* StaticGet__MBReconstuctSceneColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xBEE4);
		}
		static ::System::Int32* StaticGet__FxaaInputTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xBEE8);
		}
		static ::System::Int32* StaticGet__FinalBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xBEEC);
		}
		static ::System::Int32* StaticGet__SkillRadialColorBlur1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xBEF0);
		}
		static ::System::Int32* StaticGet__SkillRadialColorBlur0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xBEF4);
		}
		static ::System::Int32* StaticGet__DOFHalfSceneColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xBEF8);
		}
		static ::System::Int32* StaticGet__HalfSceneColorTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xBEFC);
		}
		static ::System::Int32* StaticGet__ChromaticAberrationTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xBF00);
		}
		static ::System::Int32* StaticGet__SkillRadialMaskBlur1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xBF04);
		}
		static ::System::Int32* StaticGet__RadialBlurTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xBF08);
		}
		static ::System::Int32* StaticGet__SkillRadialMaskBlur0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0xBF0C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RTIDS__CCTOR_OFFSET))();
		}
	};
}
