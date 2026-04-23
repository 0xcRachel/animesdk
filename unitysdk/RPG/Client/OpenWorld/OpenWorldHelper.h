#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GraphicQuality.h"
#include "unitysdk/Struct_2_8B48740F46FC53FC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_918;
class Class_1_56FF45D7B2C55655;
class Class_1_76597B0FC8DCAD88;
class Class_2_8443F308FD8840B9;
namespace RPG::Client::OpenWorld { class StreamingLayerSetting; }
namespace RPG::GameCore { class BlockConfig; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace RPG::GameCore { class EnvironmentDataInfo; }
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class MeshBound; }
namespace RPG::GameCore { class StageLodMapConfig; }
namespace RPG::GameCore { class StagePrefabInfo; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AnimatorControllerParameter; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RPGDensityMapGrassBlockData; }
namespace UnityEngine { class RPGPointCloudGrassBlockData; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class TextAsset; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADDTAMONOTICKENTRY_OFFSET UNITYSDK_OFFSET(0x162A4C40)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORMINWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x162A2BB0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0x162A1C80)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_2_OFFSET UNITYSDK_OFFSET(0x162A1FC0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_3_OFFSET UNITYSDK_OFFSET(0x162A2600)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_4_OFFSET UNITYSDK_OFFSET(0x162A2800)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_5_OFFSET UNITYSDK_OFFSET(0x162A2AD0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x162A0550)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_BOUNDSCONTAIN_OFFSET UNITYSDK_OFFSET(0x1629ED00)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_BOUNDSPROJECTTOXZPLANE_OFFSET UNITYSDK_OFFSET(0x1629EA60)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CALCBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x162A4D60)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CHECKSTREAMINGRECTSIMILAR_OFFSET UNITYSDK_OFFSET(0x14403970)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CLOSEIRIHIZTEST_OFFSET UNITYSDK_OFFSET(0x162A6B20)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_COPYANIMATOR_OFFSET UNITYSDK_OFFSET(0x1629FCB0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CREATERECTBYCENTERANDSIZE_OFFSET UNITYSDK_OFFSET(0x1629E9B0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ENABLEKEYWORD_OFFSET UNITYSDK_OFFSET(0x162A33D0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GAMEOBJECTHIERARCHYPATH_OFFSET UNITYSDK_OFFSET(0x162A3040)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETCELLFILTER_OFFSET UNITYSDK_OFFSET(0x162A6510)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETIRIBUILDINGRENDERERLISTWITHCONFIGDATAPOOL_OFFSET UNITYSDK_OFFSET(0x162A6620)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETIRIBUILDINGRENDERERLISTWITHTEXTASSET_OFFSET UNITYSDK_OFFSET(0x162A67C0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETLODLEVELBYDISTANCE_OFFSET UNITYSDK_OFFSET(0x162A4AD0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETMINLODLEVEL_OFFSET UNITYSDK_OFFSET(0x162A4880)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTAGEJSONPATH_OFFSET UNITYSDK_OFFSET(0x162A2F60)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_1_OFFSET UNITYSDK_OFFSET(0x162A0F80)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_2_OFFSET UNITYSDK_OFFSET(0x162A1600)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_OFFSET UNITYSDK_OFFSET(0x162A0970)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSUBSTAGEDIR_OFFSET UNITYSDK_OFFSET(0x162A2EA0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETVECTOR3S_OFFSET UNITYSDK_OFFSET(0x14403880)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ASYNCLOADPERSISTENTASSET_OFFSET UNITYSDK_OFFSET(0x162A6990)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLETAMONOTICKLOGERROR_OFFSET UNITYSDK_OFFSET(0x162A69A0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLEUSINGSYNCLOAD_OFFSET UNITYSDK_OFFSET(0x162A6930)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENTITYLODCONFIG_OFFSET UNITYSDK_OFFSET(0x162A69F0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENTITYLODQUALITYSETTING_OFFSET UNITYSDK_OFFSET(0x162A6350)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_GROUPLODCONFIG_OFFSET UNITYSDK_OFFSET(0x162A6A60)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_QUALITYSETTING_OFFSET UNITYSDK_OFFSET(0x162A5D40)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_REGIONOVERRIDEMAXPEROBJECTSHADOWCOUNT_OFFSET UNITYSDK_OFFSET(0x162A6B90)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGENABLE_OFFSET UNITYSDK_OFFSET(0x162A6820)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGLAYERSETTING_OFFSET UNITYSDK_OFFSET(0x1629E930)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGVISIBLEENABLE_OFFSET UNITYSDK_OFFSET(0x162A68B0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_TSCROOMCACHE_OFFSET UNITYSDK_OFFSET(0x162A41D0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_TSCSPROOMCACHE_OFFSET UNITYSDK_OFFSET(0x162A4160)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GIZMODRAWRECT_OFFSET UNITYSDK_OFFSET(0x1629EE50)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISADVANCEPLATFORMANDCANFORCECHOOSEPLATFORM_OFFSET UNITYSDK_OFFSET(0x162A6450)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISADVANCEPLATFORM_OFFSET UNITYSDK_OFFSET(0x162A6400)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISCOLLIDERGO_OFFSET UNITYSDK_OFFSET(0x162A58E0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_1_OFFSET UNITYSDK_OFFSET(0x14403D80)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_2_OFFSET UNITYSDK_OFFSET(0x14404AA0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_OFFSET UNITYSDK_OFFSET(0x14403A50)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_OPENHIZTEST_OFFSET UNITYSDK_OFFSET(0x162A6AD0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_PROJECTPOINT_OFFSET UNITYSDK_OFFSET(0x162A3260)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RECTCONTAIN_OFFSET UNITYSDK_OFFSET(0x1629EB00)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RECTOVERLAY_OFFSET UNITYSDK_OFFSET(0x1629EBD0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_REMOVETAMONOTICKENTRY_OFFSET UNITYSDK_OFFSET(0x1629F9B0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_REPLACELODCONFIGLAYER_OFFSET UNITYSDK_OFFSET(0x162A4050)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RETURNVECTOR3S_OFFSET UNITYSDK_OFFSET(0x14403900)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RUNTIMECALCBOUNDSIZE_OFFSET UNITYSDK_OFFSET(0x162A4E80)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETBLOCKGRASS_1_OFFSET UNITYSDK_OFFSET(0x162A5BA0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETBLOCKGRASS_OFFSET UNITYSDK_OFFSET(0x162A5A60)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETHEIGHTBLEND_OFFSET UNITYSDK_OFFSET(0x162A3450)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETSTREAMINGGRASSFASTMODE_OFFSET UNITYSDK_OFFSET(0x162A5CE0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETTERRAINTEX_OFFSET UNITYSDK_OFFSET(0x162A41E0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLETAMONOTICKLOGERROR_OFFSET UNITYSDK_OFFSET(0x162A69B0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLEUSINGSYNCLOAD_OFFSET UNITYSDK_OFFSET(0x162A6980)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_REGIONOVERRIDEMAXPEROBJECTSHADOWCOUNT_OFFSET UNITYSDK_OFFSET(0x162A6BE0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_STREAMINGENABLE_OFFSET UNITYSDK_OFFSET(0x162A6830)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_STREAMINGVISIBLEENABLE_OFFSET UNITYSDK_OFFSET(0x162A6920)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SHRINKOPENWORLDIRIBYTEARRAYCACHE_OFFSET UNITYSDK_OFFSET(0x162A65A0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_STREAMINGDESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0x1629F010)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_TRANSFORMMESHBOUND_OFFSET UNITYSDK_OFFSET(0x162A02F0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_TREEDEPTHTOCOLOR_OFFSET UNITYSDK_OFFSET(0x1629EDD0)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_UPDATEGRAPHICQUALITYSETTING_OFFSET UNITYSDK_OFFSET(0x162A5D90)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x162A6C00)
#define RPG_CLIENT_OPENWORLD_OPENWORLDHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x162A6BF0)

namespace RPG::Client::OpenWorld
{
	inline static constexpr unsigned int OpenWorldHelper_TypeDefinitionIndex = 67997;

	class OpenWorldHelper : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_HeightBlendTexSuffix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3DF0);
		}
		static ::UnityEngine::MaterialPropertyBlock** StaticGet__EmptyMatPropertyBlock()
		{
			return (::UnityEngine::MaterialPropertyBlock**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3DF8);
		}
		static ::RPG::GameCore::LodConfig** StaticGet__entityLodConfig()
		{
			return (::RPG::GameCore::LodConfig**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E00);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet__CachedRendererMats()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E08);
		}
		static ::System::String** StaticGet_TSCOverrideLayer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E10);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_OpenWorldByteArrayCache()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E18);
		}
		static ::System::String** StaticGet_StageCapturedPropCommonJson()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E20);
		}
		static ::System::String** StaticGet_GameplayLodSettingTemplate()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E28);
		}
		static ::System::String** StaticGet_TAMonoTickLodSettingTemplateAssetPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E30);
		}
		static ::RPG::GameCore::LodConfig** StaticGet__GroupLodConfig()
		{
			return (::RPG::GameCore::LodConfig**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E38);
		}
		static ::System::String** StaticGet_VariantMDVItemStreamingLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E40);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::AnimatorControllerParameter*>** StaticGet__AnimatorParaList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::AnimatorControllerParameter*>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E48);
		}
		static ::System::String** StaticGet_LodSettingTemplateAssetPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E50);
		}
		static ::UnityEngine::GameObject** StaticGet_TransformTool()
		{
			return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E58);
		}
		static ::System::String** StaticGet_StreamingLayerSettingAssetPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E60);
		}
		static ::System::String** StaticGet_EntityStreamingLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E68);
		}
		static ::System::Collections::Generic::Queue_1<::Il2CppArray<::UnityEngine::Vector3>*>** StaticGet__vectorsPool()
		{
			return (::System::Collections::Generic::Queue_1<::Il2CppArray<::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E70);
		}
		static ::System::String** StaticGet_NormDistanceLodSettingTemplateAssetPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E78);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet__RendererList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E80);
		}
		static ::System::String** StaticGet_GroupLodSettingTemplate()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E88);
		}
		static ::System::String** StaticGet_SceneItemHLODStreamingLayerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E90);
		}
		static ::System::String** StaticGet_SceneConstValueConfigAssetPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3E98);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Animator*>** StaticGet__AnimatorList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Animator*>**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3EA0);
		}
		static ::System::String** StaticGet_EntityLodSettingTemplate()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3EA8);
		}
		static ::System::String** StaticGet_MonoEffectLodSettingTemplate()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3EB0);
		}
		static ::RPG::Client::OpenWorld::StreamingLayerSetting** StaticGet__StreamingLayerSetting()
		{
			return (::RPG::Client::OpenWorld::StreamingLayerSetting**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3EB8);
		}
		static ::System::String** StaticGet_GroupDefaultStreamingTemplateName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3EC0);
		}
		static ::System::String** StaticGet_GroupNoStreamingTemplateName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x3EC8);
		}
		static ::System::Single* StaticGet_SchedulerFadingFramingLimit()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11B0);
		}
		static ::System::Boolean* StaticGet_IRI_FORCE_LOW_GRAPHIC()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11B4);
		}
		static ::System::Boolean* StaticGet_EnableRenderItemShadowCastingModeBugFix()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11B5);
		}
		static ::System::Boolean* StaticGet_EnableStreamingJobSystem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11B6);
		}
		static ::System::Boolean* StaticGet_InStageConfigV2Mode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11B7);
		}
		static ::System::Boolean* StaticGet_UsingStreamingGrass()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11B8);
		}
		static ::System::Boolean* StaticGet_IRI_USE_BINARY_DATA()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11B9);
		}
		static ::System::Single* StaticGet_OutvisiontToInvisioinLimitDist()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11BC);
		}
		static ::System::Int32* StaticGet_OVERRIDE_STREAMING_SOURCE_LOAD_DELTA_R()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11C0);
		}
		static ::System::Boolean* StaticGet_COLLIDER_STREAMING_DEBUG()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11C4);
		}
		static ::System::Boolean* StaticGet_GRASS_FORCE_REFRESH_CULLING_ON_PERFORMANCE()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11C5);
		}
		static ::System::Boolean* StaticGet__EnableUsingSyncLoad()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11C6);
		}
		static ::System::Boolean* StaticGet_RadicalCulling()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11C7);
		}
		static ::System::Nullable_1<::RPG::GameCore::GraphicQuality>* StaticGet_CustomEntityLodGraphicQuality()
		{
			return (::System::Nullable_1<::RPG::GameCore::GraphicQuality>*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11C8);
		}
		static ::System::Int32* StaticGet_OVERRIDE_STREAMING_SOURCE_UNLOAD_DELTA_R()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11D0);
		}
		static ::System::Boolean* StaticGet_RuntimeStreamingEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11D4);
		}
		static ::System::Boolean* StaticGet_UseStageConfigV2()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11D5);
		}
		static ::System::Boolean* StaticGet_STREAMING_CHECK_LOADING_TIMEOUT()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11D6);
		}
		static ::System::Boolean* StaticGet_StreamingDebugScriptOpen()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11D7);
		}
		static ::System::Int32* StaticGet__ES_BlockBboxRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11D8);
		}
		static ::System::Int32* StaticGet__Block_Albedo_Height_Map()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11DC);
		}
		static ::System::Int32* StaticGet__Block_Bbox_Base()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11E0);
		}
		static ::System::Int32* StaticGet__Blend_Base_Range()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11E4);
		}
		static ::System::Single* StaticGet_s_VisionSimilarValue()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11E8);
		}
		static ::System::Boolean* StaticGet_LevelEditorStageStreaming()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11EC);
		}
		static ::System::Boolean* StaticGet_IsBaselineMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11ED);
		}
		static ::System::Boolean* StaticGet_EnableSceneItemHLOD()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11EE);
		}
		static ::System::Boolean* StaticGet_SwitchQualityAndReloadPersistent()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11EF);
		}
		static ::System::Single* StaticGet_MainSourceAttachPlayerThresholdDist()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11F0);
		}
		static ::System::Boolean* StaticGet_ForbidCityAtmosphereStreaming()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11F4);
		}
		static ::System::Boolean* StaticGet_GraphicSettingDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11F5);
		}
		static ::System::Boolean* StaticGet_UseNewStageCaptureProp()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11F6);
		}
		static ::System::Boolean* StaticGet_EnableRegionOverrideMaxPerObjectShadowCount()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11F7);
		}
		static ::System::Single* StaticGet_s_CenterSimilarValue()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11F8);
		}
		static ::System::Int32* StaticGet_CLOSE_HIZ_TEST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x11FC);
		}
		static ::System::Boolean* StaticGet_IRI_CLOSE_UPDATE_HIZ()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1200);
		}
		static ::System::Boolean* StaticGet_PVS_USE_BINARY_DATA()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1201);
		}
		static ::System::Boolean* StaticGet__StreamingVisibleEnalbe()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1202);
		}
		static ::System::Boolean* StaticGet_EnableVolumeHLODHide()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1203);
		}
		static ::System::Int32* StaticGet__ES_HeightMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1204);
		}
		static ::System::Boolean* StaticGet_FORCE_DRAW_IRI()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1208);
		}
		static ::System::Boolean* StaticGet_UseLodShakeThreshold()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1209);
		}
		static ::System::Boolean* StaticGet_DEBUG_SKIP_ITEM()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x120A);
		}
		static ::System::Boolean* StaticGet_RegionUpdateBlockVisibleInDisableStreaming()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x120B);
		}
		static ::System::Nullable_1<::RPG::GameCore::GraphicQuality>* StaticGet_CustomLodGraphicQuality()
		{
			return (::System::Nullable_1<::RPG::GameCore::GraphicQuality>*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x120C);
		}
		static ::System::Int32* StaticGet__TerrainCoverageParamsId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1214);
		}
		static ::System::Boolean* StaticGet_UseLodCulling()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1218);
		}
		static ::System::Boolean* StaticGet_StreamingGrassFastMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1219);
		}
		static ::System::Boolean* StaticGet_EnableCameraOcculuder()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x121A);
		}
		static ::System::Boolean* StaticGet_EntityStreaming()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x121B);
		}
		static ::System::Boolean* StaticGet_ENABLE_ANIMATOR_URO()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x121C);
		}
		static ::System::Boolean* StaticGet_UsingStreamingInstanceStub()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x121D);
		}
		static ::System::Boolean* StaticGet_StreamingItemUsingObjectPool()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x121E);
		}
		static ::System::Boolean* StaticGet_EnableGrass()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x121F);
		}
		static ::RPG::GameCore::GraphicQuality* StaticGet_CacheLodGraphicQuality()
		{
			return (::RPG::GameCore::GraphicQuality*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1220);
		}
		static ::System::Boolean* StaticGet_RenderDebugLodEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1224);
		}
		static ::System::Boolean* StaticGet_EnableStreamingVolumeThreadTask()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1225);
		}
		static ::System::Boolean* StaticGet_SpaceFoldHideInvalidItem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1226);
		}
		static ::System::Boolean* StaticGet_UseBunchItem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1227);
		}
		static ::System::Single* StaticGet_SchedulerFadingFramingLimitStandard()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1228);
		}
		static ::System::Boolean* StaticGet__StreamingEnable()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x122C);
		}
		static ::System::Boolean* StaticGet_ForbidInstantiatePrefabWhenUseBunchItem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x122D);
		}
		static ::System::Boolean* StaticGet_LOW_IPHONE_STREAMING_FEATURE()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x122E);
		}
		static ::System::Boolean* StaticGet_IRI_FALLBACK()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x122F);
		}
		static ::System::Int32* StaticGet_RegionDecEntityLodQualityRef()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1230);
		}
		static ::System::Single* StaticGet_SchedulerFadingFramingLimitDelta()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1234);
		}
		static ::System::Int32* StaticGet__ES_BlockBboxBase()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1238);
		}
		static ::System::Int32* StaticGet__Block_Bbox_Range()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x123C);
		}
		static ::System::Int32* StaticGet__RegionOverrideMaxPerObjectShadowCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1240);
		}
		static ::System::Int32* StaticGet__Block_Normal_Detail_Map()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1244);
		}
		static ::System::Single* StaticGet_HLODSwitchDelay()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x1248);
		}
		static ::System::UInt32* StaticGet_SUB_STAGE_ISLAND_ID_OFFSET()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(OpenWorldHelper_TypeDefinitionIndex)->GetStaticField(0x124C);
		}
		// static const ::System::Int32 OpenWorldByteArrayIncreaseSize = 0x80000; // 0x0
		// static const ::System::String* DynamicItemLayer; // 0x0
		// static const ::System::String* DynamicLargeItemLayer; // 0x0
		// static const ::System::Single DefaultHLODSwitchDelay; // 0x0
		// static const ::System::Single TransitionLimitTime; // 0x0
		// static const ::System::Single LevelGridSize; // 0x0
		// static const ::System::Single BaselineModeTickInterval; // 0x0
		// static const ::System::String* TransformFindSelfStr; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* GetVector3s()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETVECTOR3S_OFFSET))();
		}

		static ::System::Void ReturnVector3s(::Il2CppArray<::UnityEngine::Vector3>* array)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RETURNVECTOR3S_OFFSET))(array);
		}

		static ::System::Boolean CheckStreamingRectSimilar(::UnityEngine::Rect pRC0, ::UnityEngine::Rect pRC1)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CHECKSTREAMINGRECTSIMILAR_OFFSET))(pRC0, pRC1);
		}

		static ::UnityEngine::Bounds LocalSpaceBoundToFieldSpaceBound(::UnityEngine::Transform* localTrans, ::UnityEngine::Bounds bound, ::UnityEngine::Vector3 localPos, ::UnityEngine::Vector3 localEuler, ::UnityEngine::Vector3 localScale)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Transform*, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_OFFSET))(localTrans, bound, localPos, localEuler, localScale);
		}

		static ::UnityEngine::Bounds LocalSpaceBoundToFieldSpaceBound_1(::UnityEngine::Transform* local_trans, ::UnityEngine::Bounds bound, ::UnityEngine::Transform* hang_tans)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Transform*, ::UnityEngine::Bounds, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_1_OFFSET))(local_trans, bound, hang_tans);
		}

		static ::UnityEngine::Bounds LocalSpaceBoundToFieldSpaceBound_2(::UnityEngine::Matrix4x4 localToParent, ::UnityEngine::Bounds bound)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_LOCALSPACEBOUNDTOFIELDSPACEBOUND_2_OFFSET))(localToParent, bound);
		}

		static ::RPG::Client::OpenWorld::StreamingLayerSetting* get_StreamingLayerSetting()
		{
			return ((::RPG::Client::OpenWorld::StreamingLayerSetting*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGLAYERSETTING_OFFSET))();
		}

		static ::UnityEngine::Rect CreateRectByCenterAndSize(::UnityEngine::Vector2 vCenter, ::UnityEngine::Vector2 vSize)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CREATERECTBYCENTERANDSIZE_OFFSET))(vCenter, vSize);
		}

		static ::UnityEngine::Rect BoundsProjectToXZPlane(::UnityEngine::Bounds pBounds)
		{
			return ((::UnityEngine::Rect(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_BOUNDSPROJECTTOXZPLANE_OFFSET))(pBounds);
		}

		static ::System::Boolean RectContain(::UnityEngine::Rect pRect, ::UnityEngine::Rect pTarget)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RECTCONTAIN_OFFSET))(pRect, pTarget);
		}

		static ::System::Boolean RectOverlay(::UnityEngine::Rect pRect, ::UnityEngine::Rect pTarget)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rect, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RECTOVERLAY_OFFSET))(pRect, pTarget);
		}

		static ::System::Boolean BoundsContain(::UnityEngine::Bounds pBounds, ::UnityEngine::Bounds pTarget)
		{
			return ((::System::Boolean(*)(::UnityEngine::Bounds, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_BOUNDSCONTAIN_OFFSET))(pBounds, pTarget);
		}

		static ::UnityEngine::Color TreeDepthToColor(::System::Int32 nTreeDepth)
		{
			return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_TREEDEPTHTOCOLOR_OFFSET))(nTreeDepth);
		}

		static ::System::Void GizmoDrawRect(::UnityEngine::Rect pRC)
		{
			return ((::System::Void(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GIZMODRAWRECT_OFFSET))(pRC);
		}

		static ::System::Void StreamingDestroyInstance(::UnityEngine::GameObject* obj, ::Class_2_8443F308FD8840B9* renderItem, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::UInt32>* renderingLayerMaskInitValue, ::System::Boolean resetShadowCastMode, ::System::Boolean keepParent)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::Class_2_8443F308FD8840B9*, ::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::System::UInt32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_STREAMINGDESTROYINSTANCE_OFFSET))(obj, renderItem, renderingLayerMaskInitValue, resetShadowCastMode, keepParent);
		}

		static ::System::Void CopyAnimator(::UnityEngine::Animator* target, ::UnityEngine::Animator* source, ::System::Boolean isRebind)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::UnityEngine::Animator*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_COPYANIMATOR_OFFSET))(target, source, isRebind);
		}

		static ::UnityEngine::Bounds TransformMeshBound(::RPG::GameCore::BlockNodeConfig* bnCfg, ::RPG::GameCore::MeshBound* meshbound)
		{
			return ((::UnityEngine::Bounds(*)(::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::MeshBound*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_TRANSFORMMESHBOUND_OFFSET))(bnCfg, meshbound);
		}

		static ::System::Void AdjustTransform(::RPG::GameCore::BlockNodeConfig* bnCfg, ::RPG::GameCore::StagePrefabInfo* prefabCfg, ::UnityEngine::GameObject* parent_go, ::UnityEngine::GameObject* instance_go)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::StagePrefabInfo*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_OFFSET))(bnCfg, prefabCfg, parent_go, instance_go);
		}

		static ::System::Void GetStreamingItemTransform(::RPG::GameCore::BlockNodeConfig* bnCfg, ::RPG::GameCore::StagePrefabInfo* prefabCfg, ::UnityEngine::Vector3& pos, ::UnityEngine::Vector3& eulerAngles)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::StagePrefabInfo*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_OFFSET))(bnCfg, prefabCfg, pos, eulerAngles);
		}

		static ::System::Void GetStreamingItemTransform_1(::RPG::GameCore::BlockNodeConfig* bnCfg, ::UnityEngine::Vector3 localPos, ::UnityEngine::Vector3 localEuler, ::UnityEngine::Vector3 localScale, ::UnityEngine::Vector3& pos, ::UnityEngine::Vector3& eulerAngles)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_1_OFFSET))(bnCfg, localPos, localEuler, localScale, pos, eulerAngles);
		}

		static ::System::Void GetStreamingItemTransform_2(::RPG::GameCore::StagePrefabInfo* parentInfo, ::UnityEngine::Vector3 localPos, ::UnityEngine::Vector3 localEuler, ::UnityEngine::Vector3 localScale, ::UnityEngine::Vector3& pos, ::UnityEngine::Vector3& eulerAngles)
		{
			return ((::System::Void(*)(::RPG::GameCore::StagePrefabInfo*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTREAMINGITEMTRANSFORM_2_OFFSET))(parentInfo, localPos, localEuler, localScale, pos, eulerAngles);
		}

		static ::UnityEngine::Matrix4x4 AdjustTransform_1(::RPG::GameCore::BlockNodeConfig* bnCfg, ::UnityEngine::Vector3 pos, ::UnityEngine::Vector3 rot, ::UnityEngine::Vector3 scale)
		{
			return ((::UnityEngine::Matrix4x4(*)(::RPG::GameCore::BlockNodeConfig*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_1_OFFSET))(bnCfg, pos, rot, scale);
		}

		static ::System::Void AdjustTransform_2(::RPG::GameCore::BlockNodeConfig* bnCfg, ::RPG::GameCore::EnvironmentDataInfo* envDataInfo, ::UnityEngine::GameObject* parent_go, ::UnityEngine::GameObject* instance_go)
		{
			return ((::System::Void(*)(::RPG::GameCore::BlockNodeConfig*, ::RPG::GameCore::EnvironmentDataInfo*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_2_OFFSET))(bnCfg, envDataInfo, parent_go, instance_go);
		}

		static ::System::Void AdjustTransform_3(::RPG::GameCore::StagePrefabInfo* prefabCfg, ::UnityEngine::GameObject* parent_go, ::UnityEngine::GameObject* instance_go, ::System::String* relativePath)
		{
			return ((::System::Void(*)(::RPG::GameCore::StagePrefabInfo*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_3_OFFSET))(prefabCfg, parent_go, instance_go, relativePath);
		}

		static ::System::Void AdjustTransform_4(::UnityEngine::Transform* parent_t, ::UnityEngine::Vector3 localPosition, ::UnityEngine::Vector3 localEulerAngles, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& euler)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_4_OFFSET))(parent_t, localPosition, localEulerAngles, position, euler);
		}

		static ::System::Void AdjustTransform_5(::UnityEngine::GameObject* parent_go, ::UnityEngine::Vector3 localPosition, ::UnityEngine::Vector3 localEulerAngles, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& euler)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORM_5_OFFSET))(parent_go, localPosition, localEulerAngles, position, euler);
		}

		static ::System::Void AdjustTransformInWorldSpace(::UnityEngine::GameObject* parent_go, ::UnityEngine::Vector3 localPosition, ::UnityEngine::Vector3 localEulerAngles, ::UnityEngine::Vector3& position, ::UnityEngine::Vector3& euler)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADJUSTTRANSFORMINWORLDSPACE_OFFSET))(parent_go, localPosition, localEulerAngles, position, euler);
		}

		static ::System::String* GetSubStageDir(::System::String* parentStageDir, ::System::String* stageName)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSUBSTAGEDIR_OFFSET))(parentStageDir, stageName);
		}

		static ::System::String* GetStageJsonPath(::System::String* stageDir, ::System::String* stageName)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETSTAGEJSONPATH_OFFSET))(stageDir, stageName);
		}

		static ::System::String* GameObjectHierarchyPath(::UnityEngine::Transform* pDestTrans, ::UnityEngine::Transform* pParentTrans)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GAMEOBJECTHIERARCHYPATH_OFFSET))(pDestTrans, pParentTrans);
		}

		static ::System::Single ProjectPoint(::UnityEngine::Vector3 point, ::UnityEngine::Vector3 axis)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_PROJECTPOINT_OFFSET))(point, axis);
		}

		static ::System::Void EnableKeyword(::UnityEngine::Renderer* renderer, ::System::String* keyword, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::UnityEngine::Renderer*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ENABLEKEYWORD_OFFSET))(renderer, keyword, enable);
		}

		static ::System::Void SetHeightBlend(::Class_1_56FF45D7B2C55655* openWorld, ::RPG::GameCore::BlockConfig* blockConfig, ::UnityEngine::MaterialPropertyBlock* matBlock, ::UnityEngine::GameObject* targetGo)
		{
			return ((::System::Void(*)(::Class_1_56FF45D7B2C55655*, ::RPG::GameCore::BlockConfig*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETHEIGHTBLEND_OFFSET))(openWorld, blockConfig, matBlock, targetGo);
		}

		static ::System::Boolean ReplaceLodConfigLayer(::System::String* templateName, ::System::String*& layerName)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_REPLACELODCONFIGLAYER_OFFSET))(templateName, layerName);
		}

		static ::System::Boolean get_TSCSPRoomCache()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_TSCSPROOMCACHE_OFFSET))();
		}

		static ::System::Boolean get_TSCRoomCache()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_TSCROOMCACHE_OFFSET))();
		}

		static ::System::Void SetTerrainTex(::Class_1_56FF45D7B2C55655* openWorldLogic, ::RPG::GameCore::BlockConfig* blockConfig, ::RPG::GameCore::StagePrefabInfo* prefabInfo, ::UnityEngine::GameObject* instGameObject)
		{
			return ((::System::Void(*)(::Class_1_56FF45D7B2C55655*, ::RPG::GameCore::BlockConfig*, ::RPG::GameCore::StagePrefabInfo*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETTERRAINTEX_OFFSET))(openWorldLogic, blockConfig, prefabInfo, instGameObject);
		}

		static ::System::Int32 GetMinLODLevel(::RPG::GameCore::LodTemplate* lodTemplate, ::System::Int32 maxLodLevel, ::RPG::GameCore::GraphicQuality quality)
		{
			return ((::System::Int32(*)(::RPG::GameCore::LodTemplate*, ::System::Int32, ::RPG::GameCore::GraphicQuality))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETMINLODLEVEL_OFFSET))(lodTemplate, maxLodLevel, quality);
		}

		static ::System::Int32 GetLODLevelByDistance(::System::Single distance, ::RPG::GameCore::LodTemplate* lodTemplate, ::System::Int32 maxLodLevel, ::RPG::GameCore::GraphicQuality quality)
		{
			return ((::System::Int32(*)(::System::Single, ::RPG::GameCore::LodTemplate*, ::System::Int32, ::RPG::GameCore::GraphicQuality))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETLODLEVELBYDISTANCE_OFFSET))(distance, lodTemplate, maxLodLevel, quality);
		}

		static ::System::Void AddTAMonoTickEntry(::Class_1_56FF45D7B2C55655* world, ::UnityEngine::GameObject* go, ::Class_0_16E4307DCC419505_918* rect, ::System::Single lodSize)
		{
			return ((::System::Void(*)(::Class_1_56FF45D7B2C55655*, ::UnityEngine::GameObject*, ::Class_0_16E4307DCC419505_918*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ADDTAMONOTICKENTRY_OFFSET))(world, go, rect, lodSize);
		}

		static ::System::Void RemoveTAMonoTickEntry(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_REMOVETAMONOTICKENTRY_OFFSET))(go);
		}

		static ::System::Single CalcBoundSize(::UnityEngine::Bounds bounds)
		{
			return ((::System::Single(*)(::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CALCBOUNDSIZE_OFFSET))(bounds);
		}

		static ::System::Single RuntimeCalcBoundSize(::UnityEngine::GameObject* go, ::System::Boolean isColliderGO)
		{
			return ((::System::Single(*)(::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_RUNTIMECALCBOUNDSIZE_OFFSET))(go, isColliderGO);
		}

		static ::System::Boolean IsColliderGO(::UnityEngine::GameObject* go, ::System::String* hieracyPath)
		{
			return ((::System::Boolean(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISCOLLIDERGO_OFFSET))(go, hieracyPath);
		}

		static ::Class_1_76597B0FC8DCAD88* SetBlockGrass(::UnityEngine::GameObject* blockParent, ::UnityEngine::RPGPointCloudGrassBlockData* pointCloudGrassBlockData, ::RPG::GameCore::LodConfig* lodConfig, ::RPG::GameCore::StageLodMapConfig* stageLodMap)
		{
			return ((::Class_1_76597B0FC8DCAD88*(*)(::UnityEngine::GameObject*, ::UnityEngine::RPGPointCloudGrassBlockData*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::StageLodMapConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETBLOCKGRASS_OFFSET))(blockParent, pointCloudGrassBlockData, lodConfig, stageLodMap);
		}

		static ::Class_1_76597B0FC8DCAD88* SetBlockGrass_1(::UnityEngine::GameObject* blockParent, ::UnityEngine::RPGDensityMapGrassBlockData* densityMapGrassBlockData, ::RPG::GameCore::LodConfig* lodConfig, ::RPG::GameCore::StageLodMapConfig* stageLodMap)
		{
			return ((::Class_1_76597B0FC8DCAD88*(*)(::UnityEngine::GameObject*, ::UnityEngine::RPGDensityMapGrassBlockData*, ::RPG::GameCore::LodConfig*, ::RPG::GameCore::StageLodMapConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETBLOCKGRASS_1_OFFSET))(blockParent, densityMapGrassBlockData, lodConfig, stageLodMap);
		}

		static ::System::Void SetStreamingGrassFastMode(::System::Boolean mode)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SETSTREAMINGGRASSFASTMODE_OFFSET))(mode);
		}

		static ::RPG::GameCore::GraphicQuality get_QualitySetting()
		{
			return ((::RPG::GameCore::GraphicQuality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_QUALITYSETTING_OFFSET))();
		}

		static ::RPG::GameCore::GraphicQuality get_EntityLodQualitySetting()
		{
			return ((::RPG::GameCore::GraphicQuality(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENTITYLODQUALITYSETTING_OFFSET))();
		}

		static ::System::Boolean IsAdvancePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISADVANCEPLATFORM_OFFSET))();
		}

		static ::System::Boolean IsAdvancePlatformAndCanForceChoosePlatform()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_ISADVANCEPLATFORMANDCANFORCECHOOSEPLATFORM_OFFSET))();
		}

		static ::System::Int32 GetCellFilter()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETCELLFILTER_OFFSET))();
		}

		static ::System::Void UpdateGraphicQualitySetting()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_UPDATEGRAPHICQUALITYSETTING_OFFSET))();
		}

		static ::System::Void ShrinkOpenWorldIRIByteArrayCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SHRINKOPENWORLDIRIBYTEARRAYCACHE_OFFSET))();
		}

		static ::Struct_2_8B48740F46FC53FC GetIRIBuildingRendererListWithConfigDataPool(::System::String* path, ::System::Action_2<::Struct_2_8B48740F46FC53FC, ::System::Object*>* cb, ::System::Object* userData)
		{
			return ((::Struct_2_8B48740F46FC53FC(*)(::System::String*, ::System::Action_2<::Struct_2_8B48740F46FC53FC, ::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETIRIBUILDINGRENDERERLISTWITHCONFIGDATAPOOL_OFFSET))(path, cb, userData);
		}

		static ::Struct_2_8B48740F46FC53FC GetIRIBuildingRendererListWithTextAsset(::UnityEngine::TextAsset* text)
		{
			return ((::Struct_2_8B48740F46FC53FC(*)(::UnityEngine::TextAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GETIRIBUILDINGRENDERERLISTWITHTEXTASSET_OFFSET))(text);
		}

		static ::System::Boolean get_StreamingEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGENABLE_OFFSET))();
		}

		static ::System::Void set_StreamingEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_STREAMINGENABLE_OFFSET))(value);
		}

		static ::System::Boolean get_StreamingVisibleEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_STREAMINGVISIBLEENABLE_OFFSET))();
		}

		static ::System::Void set_StreamingVisibleEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_STREAMINGVISIBLEENABLE_OFFSET))(value);
		}

		static ::System::Boolean get_EnableUsingSyncLoad()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLEUSINGSYNCLOAD_OFFSET))();
		}

		static ::System::Void set_EnableUsingSyncLoad(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLEUSINGSYNCLOAD_OFFSET))(value);
		}

		static ::System::Boolean get_AsyncLoadPersistentAsset()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ASYNCLOADPERSISTENTASSET_OFFSET))();
		}

		static ::System::Boolean get_EnableTAMonoTickLogError()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENABLETAMONOTICKLOGERROR_OFFSET))();
		}

		static ::System::Void set_EnableTAMonoTickLogError(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_ENABLETAMONOTICKLOGERROR_OFFSET))(value);
		}

		static ::RPG::GameCore::LodConfig* get_EntityLodConfig()
		{
			return ((::RPG::GameCore::LodConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_ENTITYLODCONFIG_OFFSET))();
		}

		static ::RPG::GameCore::LodConfig* get_GroupLodConfig()
		{
			return ((::RPG::GameCore::LodConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_GROUPLODCONFIG_OFFSET))();
		}

		static ::System::Void OpenHizTest()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_OPENHIZTEST_OFFSET))();
		}

		static ::System::Void CloseIRIHizTest()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_CLOSEIRIHIZTEST_OFFSET))();
		}

		static ::System::Int32 get_RegionOverrideMaxPerObjectShadowCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_GET_REGIONOVERRIDEMAXPEROBJECTSHADOWCOUNT_OFFSET))();
		}

		static ::System::Void set_RegionOverrideMaxPerObjectShadowCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPENWORLD_OPENWORLDHELPER_SET_REGIONOVERRIDEMAXPEROBJECTSHADOWCOUNT_OFFSET))(value);
		}
	};
}
