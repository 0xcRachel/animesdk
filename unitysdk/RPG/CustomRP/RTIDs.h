#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CUSTOMRP_RTIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A99120)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RTIDs_TypeDefinitionIndex = 35149;

	class RTIDs : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__RadialBlurTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x10730);
		}
		static ::System::Int32* StaticGet__HalfSceneColorTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x10734);
		}
		static ::System::Int32* StaticGet__DirBlurTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x10738);
		}
		static ::System::Int32* StaticGet__FinalBuffer()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x1073C);
		}
		static ::System::Int32* StaticGet__ChromaticAberrationTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x10740);
		}
		static ::System::Int32* StaticGet__DOFHalfSceneColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x10744);
		}
		static ::System::Int32* StaticGet__SkillRadialMaskBlur1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x10748);
		}
		static ::System::Int32* StaticGet__SkillRadialColorBlur1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x1074C);
		}
		static ::System::Int32* StaticGet__FxaaInputTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x10750);
		}
		static ::System::Int32* StaticGet__SkillRadialMaskBlur0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x10754);
		}
		static ::System::Int32* StaticGet__MBReconstuctSceneColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x10758);
		}
		static ::System::Int32* StaticGet__SkillRadialColorBlur0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RTIDs_TypeDefinitionIndex)->GetStaticField(0x1075C);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RTIDS__CCTOR_OFFSET))();
		}
	};
}
