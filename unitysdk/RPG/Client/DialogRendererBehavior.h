#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"

class Class_0_16E4307DCC419505_749;
namespace RPG::Client { class DialogRenderer; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x90073F0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x900A4C0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_0898E1EA323553C5_OFFSET UNITYSDK_OFFSET(0x9007A00)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_096C7F7C8EC87129_OFFSET UNITYSDK_OFFSET(0x90055C0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0x9007080)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x9009E70)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x9005A30)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9005550)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_549E6EFF8C7F104E_1_OFFSET UNITYSDK_OFFSET(0x9007910)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_549E6EFF8C7F104E_OFFSET UNITYSDK_OFFSET(0x9007450)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_55AF424C73EE0E01_OFFSET UNITYSDK_OFFSET(0x9007D70)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x900AF00)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x900AF60)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x900AFC0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x900AEA0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_63210DB6627C9581_OFFSET UNITYSDK_OFFSET(0x900A5A0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_64C8CF167B1D4401_OFFSET UNITYSDK_OFFSET(0x9009960)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_652DACD9CAD3B9B4_OFFSET UNITYSDK_OFFSET(0x90074E0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x90056A0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x9007030)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_821BBDC04720A2EB_OFFSET UNITYSDK_OFFSET(0x90069C0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_BD0C65BC532E9330_OFFSET UNITYSDK_OFFSET(0x9008970)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x90073B0)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_CED8FFFA44B1EEE3_OFFSET UNITYSDK_OFFSET(0x9009630)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x900A500)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_D61E937BA820948F_OFFSET UNITYSDK_OFFSET(0x9009C00)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x900A960)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x900A950)
#define RPG_CLIENT_DIALOGRENDERERBEHAVIOR___IFIXBASEPROXY_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x900B020)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogRendererBehavior_TypeDefinitionIndex = 55965;

	class DialogRendererBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet__DialogShaders()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0x43A00);
		}
		static ::System::Int32* StaticGet__DialogCameraMatrixVPShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xFBE0);
		}
		static ::System::Int32* StaticGet__DialogMatrixMShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xFBE4);
		}
		static ::System::Int32* StaticGet__DialogDitherShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xFBE8);
		}
		static ::System::Int32* StaticGet__DialogClipRectShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xFBEC);
		}
		static ::System::Int32* StaticGet__DialogClipMaskThresholdShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xFBF0);
		}
		static ::System::Int32* StaticGet__DialogClipMaskShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xFBF4);
		}
		static ::System::Int32* StaticGet__DialogCameraMatrixPShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xFBF8);
		}
		static ::System::Int32* StaticGet__DialogCameraMatrixVShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xFBFC);
		}
		static ::System::Int32* StaticGet__DialogCameraPositionWSShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xFC00);
		}
		static ::System::Int32* StaticGet__DialogCameraMatrixInvVShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xFC04);
		}
		static ::System::Int32* StaticGet__DialogCullShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xFC08);
		}
		static ::System::Int32* StaticGet__DialogDitherAlphaShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xFC0C);
		}
		static ::System::Int32* StaticGet__DialogDepthOffsetShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xFC10);
		}
		static ::System::Int32* StaticGet__DialogClipMaskTexShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DialogRendererBehavior_TypeDefinitionIndex)->GetStaticField(0xFC14);
		}
		::UnityEngine::Transform* _OwnerTransform; // 0x38
		::UnityEngine::Transform* _DialogCameraTransform; // 0x40
		::UnityEngine::Camera* _MainCamera; // 0x48
		::UnityEngine::Transform* _MainCameraTransform; // 0x50
		::Il2CppArray<::UnityEngine::Renderer*>* _DialogTargetRenderers; // 0x58
		::Il2CppArray<::Class_0_16E4307DCC419505_749*>* _DialogTargetRenderables; // 0x60
		::UnityEngine::Bounds _DialogTargetBounds; // 0x68
		::System::Boolean _NeedUpdateRenderer; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_096C7F7C8EC87129()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_096C7F7C8EC87129_OFFSET))(this);
		}

		::System::Void Method_3_777C630B90A28EF1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_777C630B90A28EF1_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_67D41ACFEF39E84E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_67D41ACFEF39E84E_OFFSET))(this);
		}

		::System::Void Method_3_3CCA0B8A31B650A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_3CCA0B8A31B650A8_OFFSET))(this);
		}

		::System::Void Method_3_821BBDC04720A2EB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_821BBDC04720A2EB_OFFSET))(this);
		}

		::System::Void Method_3_1283EC0876EAAACF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_1283EC0876EAAACF_OFFSET))(this);
		}

		::System::Void Method_3_652DACD9CAD3B9B4(::Class_0_16E4307DCC419505_749* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_749*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_652DACD9CAD3B9B4_OFFSET))(this, a1);
		}

		::System::Void Method_3_0898E1EA323553C5(::Class_0_16E4307DCC419505_749* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_749*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_0898E1EA323553C5_OFFSET))(this, a1);
		}

		::System::Void Method_3_549E6EFF8C7F104E(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_549E6EFF8C7F104E_OFFSET))(this, a1);
		}

		::System::Void Method_3_BD0C65BC532E9330(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_BD0C65BC532E9330_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_55AF424C73EE0E01(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_55AF424C73EE0E01_OFFSET))(this, a1);
		}

		::System::Void Method_3_549E6EFF8C7F104E_1(::UnityEngine::Renderer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_549E6EFF8C7F104E_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_CED8FFFA44B1EEE3(::UnityEngine::Renderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_CED8FFFA44B1EEE3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_64C8CF167B1D4401(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_64C8CF167B1D4401_OFFSET))(this, a1);
		}

		::System::Void Method_3_D61E937BA820948F(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_D61E937BA820948F_OFFSET))(this, a1);
		}

		::System::Void Method_3_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_3_D0BD1377F2594D33()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
		}

		::RPG::Client::DialogRenderer* get__Owner()
		{
			return ((::RPG::Client::DialogRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

		static ::System::Void Method_3_63210DB6627C9581(::System::Collections::Generic::List_1<::UnityEngine::Material*>*& a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*& a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Material*>*&, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_63210DB6627C9581_OFFSET))(a1, a2);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EndOfLateTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGRENDERERBEHAVIOR___IFIXBASEPROXY_ENDOFLATETICK_OFFSET))(this, P0);
		}
	};
}
