#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Vector4.h"

class ICmdExecuteCb;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1638EA40)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1638EA30)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_INITLOWQUALITYSHADOW_OFFSET UNITYSDK_OFFSET(0x1638E650)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_INIT_OFFSET UNITYSDK_OFFSET(0x1638E1A0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1638E9C0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1638E4F0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1638E430)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1638E3A0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_SETMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1638E1B0)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_START_OFFSET UNITYSDK_OFFSET(0x1638E180)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1638F840)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1638F740)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE__DRAWSINGLECHARACTERRENDERERS_OFFSET UNITYSDK_OFFSET(0x1638EA50)
#define RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE__GETMATERIALSYNCEDPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1638EF70)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CharacterModelShadowCmdSimple_TypeDefinitionIndex = 28352;

	class CharacterModelShadowCmdSimple : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::ICmdExecuteCb** StaticGet_current()
		{
			return (::ICmdExecuteCb**)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0x37D80);
		}
		static ::System::Int32* StaticGet__DissolveUVSpeedShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0xDAF0);
		}
		static ::System::Int32* StaticGet__DissolveMapShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0xDAF4);
		}
		static ::System::Int32* StaticGet__ShadowAttenScaleShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0xDAF8);
		}
		static ::System::Int32* StaticGet__ModelShadowColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0xDAFC);
		}
		static ::System::Int32* StaticGet__DissolveMapAddShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0xDB00);
		}
		static ::System::Int32* StaticGet__OpacityShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0xDB04);
		}
		static ::System::Int32* StaticGet__DissolveOnShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0xDB08);
		}
		static ::System::Int32* StaticGet__DissolveRateShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0xDB0C);
		}
		static ::System::Int32* StaticGet__DissolveDistortionIntensityShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0xDB10);
		}
		static ::System::Int32* StaticGet__ShadowAttenStartPosShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0xDB14);
		}
		static ::System::Int32* StaticGet__DitherAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0xDB18);
		}
		static ::System::Int32* StaticGet__UseDitherAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0xDB1C);
		}
		static ::System::Int32* StaticGet__ShadowDirAttenShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0xDB20);
		}
		static ::System::Int32* StaticGet__ShadowGroundShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0xDB24);
		}
		static ::System::Int32* StaticGet__DissolveSTShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0xDB28);
		}
		static ::System::Int32* StaticGet__DissolveUVShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0xDB2C);
		}
		static ::System::Int32* StaticGet__DistortionSTShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CharacterModelShadowCmdSimple_TypeDefinitionIndex)->GetStaticField(0xDB30);
		}
		::UnityEngine::Shader* ModelShadowShader; // 0x18
		::UnityEngine::Color ModelShadowColorSingle; // 0x20
		::System::Single SingleCharacterShadowOpacity; // 0x30
		::System::Single ShadowGround; // 0x34
		::Il2CppArray<::UnityEngine::Vector4>* SingelCharacterShadowDirLowQuality; // 0x38
		::UnityEngine::GameObject* RendererRoot; // 0x40
		::Il2CppArray<::UnityEngine::Renderer*>* SingleCharacterRenderers; // 0x48
		::UnityEngine::GameObject* LastRendererRoot; // 0x50
		::System::Boolean _IsInited; // 0x58
		::Il2CppArray<::UnityEngine::Material*>* ShadowMats; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Material*>* _materialInstances; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_INIT_OFFSET))(this);
		}

		::System::Void InitLowQualityShadow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_INITLOWQUALITYSHADOW_OFFSET))(this);
		}

		::System::Void SetMaterialProperties()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_SETMATERIALPROPERTIES_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_LATEUPDATE_OFFSET))(this);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::CRPMainCameraDesc& mainCameraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE_EXECUTE_OFFSET))(this, cmd, mainCameraDesc);
		}

		::System::Void _DrawSingleCharacterRenderers(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Collections::Generic::IList_1<::UnityEngine::Renderer*>* renderers)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Collections::Generic::IList_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE__DRAWSINGLECHARACTERRENDERERS_OFFSET))(this, cmd, renderers);
		}

		::UnityEngine::Material* _GetMaterialSyncedProperties(::UnityEngine::Renderer* sourceRenderer, ::System::Int32 sourceRendererIndex, ::UnityEngine::Material* targetMaterial)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CHARACTERMODELSHADOWCMDSIMPLE__GETMATERIALSYNCEDPROPERTIES_OFFSET))(this, sourceRenderer, sourceRendererIndex, targetMaterial);
		}
	};
}
