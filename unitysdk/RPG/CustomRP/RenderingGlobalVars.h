#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/BlurParam.h"
#include "unitysdk/RPG/CustomRP/EObjectFeature.h"
#include "unitysdk/RPG/CustomRP/EPlaneReflectionMode.h"
#include "unitysdk/RPG/CustomRP/EProbeResOverride.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/PassTagID.h"
#include "unitysdk/UnityEngine/Rendering/CRPActor.h"
#include "unitysdk/UnityEngine/Rendering/CRPRenderObjectFlag.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::CustomRP { class AvatarEffectInfo; }
namespace RPG::CustomRP { class BlackboardMgr; }
namespace RPG::CustomRP { class IAmbientVolumne; }
namespace RPG::CustomRP { class IEngineEnvSystem; }
namespace RPG::CustomRP { class IPlaneReflection; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Behaviour; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class IRPData; }

#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDACTOR_OFFSET UNITYSDK_OFFSET(0x16AE9050)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDAMBIENTVOLUMNE_OFFSET UNITYSDK_OFFSET(0x16AE9460)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDFLAG_OFFSET UNITYSDK_OFFSET(0x16AE9230)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ATTACHRENDERS_OFFSET UNITYSDK_OFFSET(0x16AE9310)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_CHECKSPRBATCHOPT_OFFSET UNITYSDK_OFFSET(0x16AE8490)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_CLEANUPSHADOWCACHE_OFFSET UNITYSDK_OFFSET(0x16AE9740)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_DECDITHER_OFFSET UNITYSDK_OFFSET(0x16AE9640)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ENDUIPP_OFFSET UNITYSDK_OFFSET(0x16AE9A60)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_FORCEUPDATESCENESHADOW_OFFSET UNITYSDK_OFFSET(0x16AE9750)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GETCAMERAVERISON_OFFSET UNITYSDK_OFFSET(0x16AE96B0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_SHADOWCENTERGO_OFFSET UNITYSDK_OFFSET(0x16AE9AB0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_USESRPBATCH_OFFSET UNITYSDK_OFFSET(0x16AE9BA0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_VALIDLOCALREFLECTION_OFFSET UNITYSDK_OFFSET(0x16AE9BB0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_HIDEACTOR_OFFSET UNITYSDK_OFFSET(0x16AE91E0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_INCDITHER_OFFSET UNITYSDK_OFFSET(0x16AE9610)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_INCREASECAMERAVERSION_OFFSET UNITYSDK_OFFSET(0x16AE96E0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ISFORCECSMPERFRAME_OFFSET UNITYSDK_OFFSET(0x16AE9B40)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONCHANGEENV_OFFSET UNITYSDK_OFFSET(0x16AE8FC0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONENTERSCENE_OFFSET UNITYSDK_OFFSET(0x16AE8BC0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONLEAVESCENE_OFFSET UNITYSDK_OFFSET(0x16AE8C20)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONQUIT_OFFSET UNITYSDK_OFFSET(0x16AE9020)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_QUERYACTOR_OFFSET UNITYSDK_OFFSET(0x16AE9450)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REFRESHACTORRENDER_OFFSET UNITYSDK_OFFSET(0x16AE9280)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REFRESHACTOR_OFFSET UNITYSDK_OFFSET(0x16AE9250)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REGISTERCRPDATA_OFFSET UNITYSDK_OFFSET(0x16AE9CD0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEABOVEOFFSET_OFFSET UNITYSDK_OFFSET(0x16AE93F0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEACTOR_OFFSET UNITYSDK_OFFSET(0x16AE9170)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEAMBIENTVOLUMNE_OFFSET UNITYSDK_OFFSET(0x16AE9560)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEFLAG_OFFSET UNITYSDK_OFFSET(0x16AE9240)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETABOVEOFFSET_OFFSET UNITYSDK_OFFSET(0x16AE9120)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETCACHEPOSITION_OFFSET UNITYSDK_OFFSET(0x16AE93A0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETENABLEINDOORCHARACTERSHADOW_OFFSET UNITYSDK_OFFSET(0x16AE9810)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETOBJLOCALLIGHT_OFFSET UNITYSDK_OFFSET(0x16AE9430)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETSHADOWPROBEBLEND_OFFSET UNITYSDK_OFFSET(0x16AE9710)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_SET_SHADOWCENTERGO_OFFSET UNITYSDK_OFFSET(0x16AE9AE0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_STARTUIPP_OFFSET UNITYSDK_OFFSET(0x16AE9840)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_UNREGISTERCRPDATA_OFFSET UNITYSDK_OFFSET(0x16AE9EB0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS_UPDATEALLCRPDATA_OFFSET UNITYSDK_OFFSET(0x16AE9F20)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AE84B0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__CLEARCRPDATA_OFFSET UNITYSDK_OFFSET(0x16AE8E70)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__INIT_OFFSET UNITYSDK_OFFSET(0x16AE8480)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONLEAVESCENE_OFFSET UNITYSDK_OFFSET(0x16AE84A0)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONSCENELOADED_OFFSET UNITYSDK_OFFSET(0x16AEA170)
#define RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONSCENEUNLOADED_OFFSET UNITYSDK_OFFSET(0x16AEA200)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RenderingGlobalVars_TypeDefinitionIndex = 29265;

	class RenderingGlobalVars : public ::System::Object
	{
	public:
		static ::UnityEngine::PassTagID* StaticGet__Scene_Lux_Emission_()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x51F0);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*>** StaticGet__CRPDataCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*>**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x5200);
		}
		static ::UnityEngine::PassTagID* StaticGet_CustomRPTransparent()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x5208);
		}
		static ::UnityEngine::PassTagID* StaticGet_CustomForwardOpaque()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x5218);
		}
		static ::System::Collections::Generic::List_1<::RPG::CustomRP::IPlaneReflection*>** StaticGet_localReflection()
		{
			return (::System::Collections::Generic::List_1<::RPG::CustomRP::IPlaneReflection*>**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x5228);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*>** StaticGet__CRPDisableDataCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*>**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x5230);
		}
		static ::UnityEngine::PassTagID* StaticGet_CustomRPTransparent2()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x5238);
		}
		static ::RPG::CustomRP::AvatarEffectInfo** StaticGet_AvatarEffects()
		{
			return (::RPG::CustomRP::AvatarEffectInfo**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x5248);
		}
		static ::Il2CppArray<::UnityEngine::Matrix4x4>** StaticGet_capsules()
		{
			return (::Il2CppArray<::UnityEngine::Matrix4x4>**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x5250);
		}
		static ::RPG::CustomRP::IEngineEnvSystem** StaticGet_engienEnvSystem()
		{
			return (::RPG::CustomRP::IEngineEnvSystem**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x5258);
		}
		static ::UnityEngine::PassTagID* StaticGet_ForwardEmission()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x5260);
		}
		static ::UnityEngine::RenderTexture** StaticGet__UIPPRT()
		{
			return (::UnityEngine::RenderTexture**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x5270);
		}
		static ::RPG::CustomRP::BlackboardMgr** StaticGet_blackboardMgr()
		{
			return (::RPG::CustomRP::BlackboardMgr**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x5278);
		}
		static ::UnityEngine::PassTagID* StaticGet_LightingGBufferEyeHair()
		{
			return (::UnityEngine::PassTagID*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x5280);
		}
		static ::RPG::CustomRP::AvatarEffectInfo** StaticGet_AvatarEffectsHalfRes()
		{
			return (::RPG::CustomRP::AvatarEffectInfo**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x5290);
		}
		static ::UnityEngine::GameObject** StaticGet__shadowCenterGo()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x5298);
		}
		static ::System::Boolean* StaticGet_EnablePostProcessing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C40);
		}
		static ::System::Boolean* StaticGet_DrawRefectorPass()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C41);
		}
		static ::System::Boolean* StaticGet_RTSupported_R10G10B10A2()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C42);
		}
		static ::System::Boolean* StaticGet_FlushEnvCmdNoMainCamera()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C43);
		}
		static ::System::Int32* StaticGet_capsuleCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C44);
		}
		static ::System::Int32* StaticGet_Bounds_Upd_Frequecy()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C48);
		}
		static ::System::Boolean* StaticGet_EnableShadowProbeBlend()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C4C);
		}
		static ::System::Boolean* StaticGet_DisablePOSMOpt()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C4D);
		}
		static ::System::Boolean* StaticGet_DeferProbe()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C4E);
		}
		static ::System::Boolean* StaticGet_DebugNewResolutionConfig()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C4F);
		}
		static ::System::Int32* StaticGet_StencilMonsterStart()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C50);
		}
		static ::System::Boolean* StaticGet_LockShadowCenterGo()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C54);
		}
		static ::System::Boolean* StaticGet_RenderAddLight()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C55);
		}
		static ::System::Boolean* StaticGet_DrawOpaqueObjects()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C56);
		}
		static ::System::Boolean* StaticGet_WaterMarkEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C57);
		}
		static ::System::Int32* StaticGet_StoryCharacterCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C58);
		}
		static ::System::Int32* StaticGet_DisableLocalMainLight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C5C);
		}
		static ::System::Boolean* StaticGet_AlwaysUpdateReflection()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C60);
		}
		static ::System::Boolean* StaticGet_MaskCSMBlend()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C61);
		}
		static ::System::Boolean* StaticGet_DisableMainCamera()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C62);
		}
		static ::RPG::CustomRP::EProbeResOverride* StaticGet_ProbeResOverride()
		{
			return (::RPG::CustomRP::EProbeResOverride*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C64);
		}
		static ::System::Int32* StaticGet_AdvCharaStencilFace()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C68);
		}
		static ::System::Boolean* StaticGet_ForceNoCSMBlend()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C6C);
		}
		static ::System::Boolean* StaticGet_EnableViewportMask()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C6D);
		}
		static ::System::Boolean* StaticGet_EnableIndoorCharacterShadow()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C6E);
		}
		static ::System::Boolean* StaticGet_DisableLowQualityEyeHairStencil()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C6F);
		}
		static ::UnityEngine::Vector4* StaticGet_capsuleColor()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C70);
		}
		static ::System::Int32* StaticGet_StencilCharacterStart()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C80);
		}
		static ::System::Int32* StaticGet__LastLightLevel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C84);
		}
		static ::System::UInt32* StaticGet_AddtionalDepthRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C88);
		}
		static ::RPG::CustomRP::EPlaneReflectionMode* StaticGet_PlaneReflectionMode()
		{
			return (::RPG::CustomRP::EPlaneReflectionMode*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C8C);
		}
		static ::System::Boolean* StaticGet_EnableDetachable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C90);
		}
		static ::System::Boolean* StaticGet_DebugForceCSMPerFrame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C91);
		}
		static ::System::Boolean* StaticGet_EnableSSR()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C92);
		}
		static ::System::Boolean* StaticGet_needForceUpdateEnv()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C93);
		}
		static ::System::UInt32* StaticGet_AvatarEffectPropExRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C94);
		}
		static ::UnityEngine::Color* StaticGet_IndoorSceneLightColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2C98);
		}
		static ::System::UInt32* StaticGet_LocalShadowCasterRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CA8);
		}
		static ::System::UInt32* StaticGet_DynamicShadowRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CAC);
		}
		static ::System::Single* StaticGet_ignoreMainLightLimit()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CB0);
		}
		static ::System::Single* StaticGet_PlanarReflectionRTScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CB4);
		}
		static ::System::UInt32* StaticGet_AdditionalReflectionCasterRLM()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CB8);
		}
		static ::System::Boolean* StaticGet_CSMBlend()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CBC);
		}
		static ::System::Boolean* StaticGet_DebugDisableVSM()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CBD);
		}
		static ::System::Boolean* StaticGet_OnePassShadowOnlyResolve()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CBE);
		}
		static ::System::Boolean* StaticGet_capsuleAOUseHizMip()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CBF);
		}
		static ::System::UInt32* StaticGet_ReflectorRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CC0);
		}
		static ::System::UInt32* StaticGet_ExclusiveShadowCasterRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CC4);
		}
		static ::System::UInt32* StaticGet_ShadowReceiverRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CC8);
		}
		static ::System::UInt32* StaticGet_SSRReflactorRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CCC);
		}
		static ::System::Int32* StaticGet_CameraChangedVersion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CD0);
		}
		static ::System::UInt32* StaticGet_ReflectorCasterRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CD4);
		}
		static ::System::Boolean* StaticGet_IsUnLimitShadowCount()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CD8);
		}
		static ::System::Boolean* StaticGet_RTSupported_R10G11B11UF()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CD9);
		}
		static ::System::Boolean* StaticGet_DrawTransparentObjects()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CDA);
		}
		static ::System::Boolean* StaticGet_RTSupported_ARGBHalf()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CDB);
		}
		static ::System::Single* StaticGet_PerObjectShadowHighQulityRange()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CDC);
		}
		static ::System::UInt32* StaticGet_DefaultRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CE0);
		}
		static ::System::UInt32* StaticGet_DisableCullingRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CE4);
		}
		static ::System::UInt32* StaticGet_TransparentPreDapthLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CE8);
		}
		static ::System::Int32* StaticGet_CharacterDitherCounter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CEC);
		}
		static ::System::Boolean* StaticGet_RTSupported_ARGBFloat()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CF0);
		}
		static ::System::Boolean* StaticGet_DrawOutline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CF1);
		}
		static ::System::Boolean* StaticGet_IsStoryMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CF2);
		}
		static ::System::Boolean* StaticGet_EnableSkillRadial()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CF3);
		}
		static ::System::UInt32* StaticGet_ShadowCasterRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CF4);
		}
		static ::System::Boolean* StaticGet_Enable_Update_Bounds()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CF8);
		}
		static ::System::Boolean* StaticGet_EnableSkipDraw()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CF9);
		}
		static ::System::Boolean* StaticGet_ForwardUpdateShadow()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CFA);
		}
		static ::System::Boolean* StaticGet_DisableLocalLightLerp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CFB);
		}
		static ::System::Int32* StaticGet_DisableUpdate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2CFC);
		}
		static ::System::Single* StaticGet_GaussBlurScale()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2D00);
		}
		static ::System::UInt32* StaticGet_PreDepthAlphaTestLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2D04);
		}
		static ::System::UInt32* StaticGet_MotionVectorsRenderingLayerMask()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2D08);
		}
		static ::RPG::CustomRP::BlurParam* StaticGet_PlaneBlurParam()
		{
			return (::RPG::CustomRP::BlurParam*)Il2CppClass::FromTypeDefinitionIndex(RenderingGlobalVars_TypeDefinitionIndex)->GetStaticField(0x2D0C);
		}
		// static const ::System::Single PROBE_OFFSET_Y; // 0x0
		// static const ::System::Single BattleShadowHightQulityRange; // 0x0
		// static const ::System::Single AdventureShadowHightQulityRange; // 0x0
		// static const ::System::Single StoryShadowHightQulityRange; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS__CCTOR_OFFSET))();
		}

		static ::System::Void _Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS__INIT_OFFSET))();
		}

		static ::System::Void CheckSPRBatchOpt()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_CHECKSPRBATCHOPT_OFFSET))();
		}

		static ::System::Void _OnLeaveScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONLEAVESCENE_OFFSET))();
		}

		static ::System::Void OnEnterScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONENTERSCENE_OFFSET))();
		}

		static ::System::Void OnLeaveScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONLEAVESCENE_OFFSET))();
		}

		static ::System::Void OnChangeEnv()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONCHANGEENV_OFFSET))();
		}

		static ::System::Void OnQuit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ONQUIT_OFFSET))();
		}

		static ::System::Void AddActor(::UnityEngine::GameObject* go, ::RPG::CustomRP::EObjectFeature feature, ::System::Single offsetY)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::CustomRP::EObjectFeature, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDACTOR_OFFSET))(go, feature, offsetY);
		}

		static ::System::Void RemoveActor(::UnityEngine::GameObject* go, ::RPG::CustomRP::EObjectFeature feature)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::RPG::CustomRP::EObjectFeature))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEACTOR_OFFSET))(go, feature);
		}

		static ::System::Void HideActor(::UnityEngine::GameObject* go, ::System::Boolean hide)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_HIDEACTOR_OFFSET))(go, hide);
		}

		static ::System::Void RefreshActor(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REFRESHACTOR_OFFSET))(go);
		}

		static ::System::Void RefreshActorRender(::UnityEngine::GameObject* go, ::UnityEngine::Renderer* renderer)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REFRESHACTORRENDER_OFFSET))(go, renderer);
		}

		static ::System::Void AttachRenders(::UnityEngine::GameObject* parent, ::UnityEngine::GameObject* subGO, ::System::Boolean attach)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ATTACHRENDERS_OFFSET))(parent, subGO, attach);
		}

		static ::System::Void SetCachePosition(::UnityEngine::GameObject* go, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETCACHEPOSITION_OFFSET))(go, position);
		}

		static ::System::Void SetAboveOffset(::UnityEngine::GameObject* go, ::System::Single offsetY)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETABOVEOFFSET_OFFSET))(go, offsetY);
		}

		static ::System::Void RemoveAboveOffset(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEABOVEOFFSET_OFFSET))(go);
		}

		static ::System::Void AddFlag(::UnityEngine::GameObject* go, ::UnityEngine::Rendering::CRPRenderObjectFlag flag)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Rendering::CRPRenderObjectFlag))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDFLAG_OFFSET))(go, flag);
		}

		static ::System::Void RemoveFlag(::UnityEngine::GameObject* go, ::UnityEngine::Rendering::CRPRenderObjectFlag flag)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Rendering::CRPRenderObjectFlag))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEFLAG_OFFSET))(go, flag);
		}

		static ::System::Void SetObjLocalLight(::UnityEngine::GameObject* go, ::UnityEngine::Light* light)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Light*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETOBJLOCALLIGHT_OFFSET))(go, light);
		}

		static ::System::Boolean QueryActor(::UnityEngine::GameObject* go, ::UnityEngine::Rendering::CRPActor& actor)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::UnityEngine::Rendering::CRPActor&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_QUERYACTOR_OFFSET))(go, actor);
		}

		static ::System::Void AddAmbientVolumne(::RPG::CustomRP::IAmbientVolumne* volumne)
		{
			return ((::System::Void(*)(::RPG::CustomRP::IAmbientVolumne*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ADDAMBIENTVOLUMNE_OFFSET))(volumne);
		}

		static ::System::Void RemoveAmbientVolumne(::RPG::CustomRP::IAmbientVolumne* volumne)
		{
			return ((::System::Void(*)(::RPG::CustomRP::IAmbientVolumne*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REMOVEAMBIENTVOLUMNE_OFFSET))(volumne);
		}

		static ::System::Void IncDither()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_INCDITHER_OFFSET))();
		}

		static ::System::Void DecDither()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_DECDITHER_OFFSET))();
		}

		static ::System::Int32 GetCameraVerison()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_GETCAMERAVERISON_OFFSET))();
		}

		static ::System::Void IncreaseCameraVersion()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_INCREASECAMERAVERSION_OFFSET))();
		}

		static ::System::Void SetShadowProbeBlend(::System::Boolean enableBlend)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETSHADOWPROBEBLEND_OFFSET))(enableBlend);
		}

		static ::System::Void CleanupShadowCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_CLEANUPSHADOWCACHE_OFFSET))();
		}

		static ::System::Void ForceUpdateSceneShadow()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_FORCEUPDATESCENESHADOW_OFFSET))();
		}

		static ::System::Void SetEnableIndoorCharacterShadow(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SETENABLEINDOORCHARACTERSHADOW_OFFSET))(enable);
		}

		static ::UnityEngine::RenderTexture* StartUIPP()
		{
			return ((::UnityEngine::RenderTexture*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_STARTUIPP_OFFSET))();
		}

		static ::System::Void EndUIPP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ENDUIPP_OFFSET))();
		}

		static ::UnityEngine::GameObject* get_ShadowCenterGo()
		{
			return ((::UnityEngine::GameObject*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_SHADOWCENTERGO_OFFSET))();
		}

		static ::System::Void set_ShadowCenterGo(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_SET_SHADOWCENTERGO_OFFSET))(value);
		}

		static ::System::Boolean IsForceCSMPerFrame()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_ISFORCECSMPERFRAME_OFFSET))();
		}

		static ::System::Boolean get_UseSRPBatch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_USESRPBATCH_OFFSET))();
		}

		static ::RPG::CustomRP::IPlaneReflection* get_validLocalReflection()
		{
			return ((::RPG::CustomRP::IPlaneReflection*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_GET_VALIDLOCALREFLECTION_OFFSET))();
		}

		static ::System::Void RegisterCRPData(::UnityEngine::Behaviour* mono, ::UnityEngine::Rendering::IRPData* data)
		{
			return ((::System::Void(*)(::UnityEngine::Behaviour*, ::UnityEngine::Rendering::IRPData*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_REGISTERCRPDATA_OFFSET))(mono, data);
		}

		static ::System::Void UnRegisterCRPData(::UnityEngine::Behaviour* mono)
		{
			return ((::System::Void(*)(::UnityEngine::Behaviour*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_UNREGISTERCRPDATA_OFFSET))(mono);
		}

		static ::System::Void UpdateAllCRPData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS_UPDATEALLCRPDATA_OFFSET))();
		}

		static ::System::Void _ClearCRPData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS__CLEARCRPDATA_OFFSET))();
		}

		static ::System::Void _OnSceneLoaded(::UnityEngine::SceneManagement::Scene arg0, ::UnityEngine::SceneManagement::LoadSceneMode arg1)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONSCENELOADED_OFFSET))(arg0, arg1);
		}

		static ::System::Void _OnSceneUnloaded(::UnityEngine::SceneManagement::Scene scene)
		{
			return ((::System::Void(*)(::UnityEngine::SceneManagement::Scene))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RENDERINGGLOBALVARS__ONSCENEUNLOADED_OFFSET))(scene);
		}
	};
}
