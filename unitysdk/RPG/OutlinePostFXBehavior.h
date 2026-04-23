#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG { class OutlinePostFXBehavior_Class_1_091DF277A357D723; }
namespace RPG { class OutlinePostFXBehavior_Class_1_0E92B03EF54C2343; }
namespace RPG { class OutlinePostFXMonoPlugin; }
namespace UnityEngine { class RenderTexture; }

#define RPG_OUTLINEPOSTFXBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x155893D0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x15589020)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x15589E20)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15589DC0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_52C18C0DA8AC23E5_OFFSET UNITYSDK_OFFSET(0x155898E0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1558A010)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x1558A070)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x1558A0D0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x1558A130)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x1558A1A0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x15589FB0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_A1AA9EB80A93616B_OFFSET UNITYSDK_OFFSET(0x15589440)
#define RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15589D30)
#define RPG_OUTLINEPOSTFXBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x15589E80)
#define RPG_OUTLINEPOSTFXBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x15589F10)
#define RPG_OUTLINEPOSTFXBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15589EF0)
#define RPG_OUTLINEPOSTFXBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1558A210)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXBehavior_TypeDefinitionIndex = 47779;

	class OutlinePostFXBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::RPG::OutlinePostFXBehavior_Class_1_0E92B03EF54C2343** StaticGet__outlineCmdCb()
		{
			return (::RPG::OutlinePostFXBehavior_Class_1_0E92B03EF54C2343**)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x6A500);
		}
		static ::RPG::OutlinePostFXBehavior_Class_1_091DF277A357D723** StaticGet__outlineFinalCmdCb()
		{
			return (::RPG::OutlinePostFXBehavior_Class_1_091DF277A357D723**)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x6A508);
		}
		static ::System::Int32* StaticGet__HideNPCPartsID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x11980);
		}
		static ::System::Int32* StaticGet__OutlineColorID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x11984);
		}
		static ::System::Int32* StaticGet__ObjectIdID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x11988);
		}
		static ::System::Int32* StaticGet__ShowPartID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x1198C);
		}
		static ::System::Int32* StaticGet__DepthRTID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x11990);
		}
		static ::System::Int32* StaticGet__BlurDirectionID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OutlinePostFXBehavior_TypeDefinitionIndex)->GetStaticField(0x11994);
		}
		::System::Int32 _RTWidth; // 0x38
		::System::Int32 _RTHeight; // 0x3C
		::UnityEngine::RenderTexture* _blurredRT; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_25EC451C0EA68F53()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_25EC451C0EA68F53_OFFSET))(this);
		}

		::System::Void Method_3_A1AA9EB80A93616B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_A1AA9EB80A93616B_OFFSET))(this);
		}

		::System::Void Method_3_52C18C0DA8AC23E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_52C18C0DA8AC23E5_OFFSET))(this);
		}

		::System::Void Method_3_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::RPG::OutlinePostFXMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::OutlinePostFXMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
