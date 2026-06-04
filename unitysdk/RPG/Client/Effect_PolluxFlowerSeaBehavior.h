#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client { class Effect_PolluxFlowerSeaMonoPlugin; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x156B61B0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0x156B6020)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_04F02FC65FAA2E0C_OFFSET UNITYSDK_OFFSET(0x156B6230)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x156B5E20)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_178812F674E8B05A_OFFSET UNITYSDK_OFFSET(0x156B7BE0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_2ED6C3773AA1E488_OFFSET UNITYSDK_OFFSET(0x156B5DB0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x156B7B40)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x156B5D50)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x156B5F60)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x156B5FC0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0x156B7B80)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x156B5BB0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x156B8750)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x156B87B0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x156B8810)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x156B8870)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x156B88D0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0x156B89F0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x156B86F0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x156B79A0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x156B7EE0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x156B5C10)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_CC99BBFAC9417CA7_OFFSET UNITYSDK_OFFSET(0x156B6730)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_D20FD81754C01453_OFFSET UNITYSDK_OFFSET(0x156B5CF0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_E041300CFBBD9160_OFFSET UNITYSDK_OFFSET(0x156B7CF0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x156B8990)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_FAADEE08E4E52BA5_OFFSET UNITYSDK_OFFSET(0x156B80A0)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x156B8510)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x156B8500)
#define RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR___IFIXBASEPROXY_LATETICK_OFFSET UNITYSDK_OFFSET(0x156B8930)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex = 65953;

	class Effect_PolluxFlowerSeaBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::String** StaticGet__KeywordInstancedFlowerSea()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0xD600);
		}
		static ::System::Int32* StaticGet__PropLineStartPositon()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x4870);
		}
		static ::System::Int32* StaticGet__PropWindNoiseTile()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x4874);
		}
		static ::System::Int32* StaticGet__PropLineGrowDebug()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x4878);
		}
		static ::System::Int32* StaticGet__PropWindDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x487C);
		}
		static ::System::Int32* StaticGet__PropLineSideFallOffDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x4880);
		}
		static ::System::Int32* StaticGet__PropCustomLightingOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x4884);
		}
		static ::System::Int32* StaticGet__PropCustomLightingSmoothness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x4888);
		}
		static ::System::Int32* StaticGet__AnimationTexResolution()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x488C);
		}
		static ::System::Int32* StaticGet__PropWindNoiseFrequency()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x4890);
		}
		static ::System::Int32* StaticGet__PropLineDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x4894);
		}
		static ::System::Int32* StaticGet__PropDisappearFrame()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x4898);
		}
		static ::System::Int32* StaticGet__PropLifeTimeAnimation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x489C);
		}
		static ::System::Int32* StaticGet__PropCustomBrightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x48A0);
		}
		static ::System::Int32* StaticGet__PropLineGrowDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x48A4);
		}
		static ::System::Int32* StaticGet__PropCustomLighting()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x48A8);
		}
		static ::System::Int32* StaticGet__PropLineSideFallOffSmooth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x48AC);
		}
		static ::System::Int32* StaticGet__PropCustomDarkColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x48B0);
		}
		static ::System::Int32* StaticGet__PropWindNoiseIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x48B4);
		}
		static ::System::Int32* StaticGet__PropLineSideLineSideFallOff()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x48B8);
		}
		static ::System::Int32* StaticGet__PropCustomLightingDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x48BC);
		}
		static ::System::Int32* StaticGet__PropLineGrowRandom()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x48C0);
		}
		static ::System::Int32* StaticGet__PropLineGrowSmooth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_PolluxFlowerSeaBehavior_TypeDefinitionIndex)->GetStaticField(0x48C4);
		}
		::UnityEngine::Material* _MaterialInstance; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _WorldMatrixList; // 0x40
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x48
		::UnityEngine::Texture2D* _LifeTimeAnimation; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_2ED6C3773AA1E488()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_2ED6C3773AA1E488_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
		}

		::System::Void Method_3_D20FD81754C01453()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_D20FD81754C01453_OFFSET))(this);
		}

		::System::Void Method_3_CC99BBFAC9417CA7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_CC99BBFAC9417CA7_OFFSET))(this);
		}

		::System::Void Method_3_8714CF4AE9195CA2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_8714CF4AE9195CA2_OFFSET))(this);
		}

		::System::Void Method_3_178812F674E8B05A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_178812F674E8B05A_OFFSET))(this);
		}

		::System::Void Method_3_A6544B958241856F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_A6544B958241856F_OFFSET))(this);
		}

		::System::Void Method_3_04F02FC65FAA2E0C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_04F02FC65FAA2E0C_OFFSET))(this);
		}

		::System::Void Method_3_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_0BDFAC56E6B704CB_OFFSET))(this);
		}

		::System::Void Method_3_E041300CFBBD9160()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_E041300CFBBD9160_OFFSET))(this);
		}

		::System::Void Method_3_FAADEE08E4E52BA5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_FAADEE08E4E52BA5_OFFSET))(this);
		}

		::RPG::Client::Effect_PolluxFlowerSeaMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::Effect_PolluxFlowerSeaMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_GET__OWNER_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR___IFIXBASEPROXY_LATETICK_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_POLLUXFLOWERSEABEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
		}
	};
}
