#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F;
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_ESATMOSPHERETEST_AWAKE_OFFSET UNITYSDK_OFFSET(0x9085620)
#define RPG_CLIENT_ESATMOSPHERETEST_CONVERTCOORD_OFFSET UNITYSDK_OFFSET(0x90841D0)
#define RPG_CLIENT_ESATMOSPHERETEST_DISPATCHSIZEDPASS_OFFSET UNITYSDK_OFFSET(0x9084100)
#define RPG_CLIENT_ESATMOSPHERETEST_EXECUTE_OFFSET UNITYSDK_OFFSET(0x9087600)
#define RPG_CLIENT_ESATMOSPHERETEST_GET_KEY_OFFSET UNITYSDK_OFFSET(0x9088630)
#define RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x9085530)
#define RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_4C6A485322DE374D_OFFSET UNITYSDK_OFFSET(0x90855D0)
#define RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_5739CCCE693D1FCB_OFFSET UNITYSDK_OFFSET(0x9084C70)
#define RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_60451B2DE9D371C9_OFFSET UNITYSDK_OFFSET(0x90884C0)
#define RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x9085770)
#define RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9085730)
#define RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_CBC2443440B894D4_OFFSET UNITYSDK_OFFSET(0x90860D0)
#define RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_F629B26C5D2B092E_OFFSET UNITYSDK_OFFSET(0x9084250)
#define RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_FAC1E4DEB02B3801_OFFSET UNITYSDK_OFFSET(0x9084B60)
#define RPG_CLIENT_ESATMOSPHERETEST_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9088640)
#define RPG_CLIENT_ESATMOSPHERETEST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x90885C0)
#define RPG_CLIENT_ESATMOSPHERETEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x9086230)
#define RPG_CLIENT_ESATMOSPHERETEST__CCTOR_OFFSET UNITYSDK_OFFSET(0x9088810)
#define RPG_CLIENT_ESATMOSPHERETEST__CTOR_OFFSET UNITYSDK_OFFSET(0x90886A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ESAtmosphereTest_TypeDefinitionIndex = 55522;

	class ESAtmosphereTest : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_TransmittanceLutSizeAndInvSizeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ESAtmosphereTest_TypeDefinitionIndex)->GetStaticField(0xFFC0);
		}
		// static const ::System::Single Field_5_74; // 0x0
		// static const ::System::Single Field_5_75; // 0x0
		::UnityEngine::ComputeShader* Field_5_0; // 0x18
		::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_5_1; // 0x20
		::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_5_2; // 0x28
		::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_5_3; // 0x30
		::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_5_4; // 0x38
		::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_5_5; // 0x40
		::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* Field_5_6; // 0x48
		::UnityEngine::RenderTexture* Field_5_7; // 0x50
		::System::Int32 TransmittanceLutWidth; // 0x58
		::System::Int32 TransmittanceLutHeight; // 0x5C
		::UnityEngine::RenderTexture* Field_5_10; // 0x60
		::System::Int32 SkyViewLutWidth; // 0x68
		::System::Int32 SkyViewLutHeight; // 0x6C
		::UnityEngine::RenderTexture* Field_5_13; // 0x70
		::System::Single AsBottomRadiusKm; // 0x78
		::System::Single AsAtmosphereHeightKm; // 0x7C
		::System::Single Field_5_16; // 0x80
		::System::Single AsMiePhaseG; // 0x84
		::UnityEngine::Color AsGroundAlbedo; // 0x88
		::UnityEngine::Color AsRayleighScattering; // 0x98
		::System::Single AsRayleighScatteringScale; // 0xA8
		::System::Single Field_5_21; // 0xAC
		::UnityEngine::Color Field_5_22; // 0xB0
		::System::Single AsRayleighExponentialDistribution; // 0xC0
		::UnityEngine::Color AsMieScattering; // 0xC4
		::System::Single AsMieScatteringScale; // 0xD4
		::UnityEngine::Color Field_5_26; // 0xD8
		::UnityEngine::Color AsMieAbsorption; // 0xE8
		::System::Single AsMieAbsorptionScale; // 0xF8
		::UnityEngine::Color Field_5_29; // 0xFC
		::UnityEngine::Color Field_5_30; // 0x10C
		::System::Single AsMieExponentialDistribution; // 0x11C
		::System::Single Field_5_32; // 0x120
		::System::Single AsTentTipAltitude; // 0x124
		::System::Single AsTentTipValue; // 0x128
		::System::Single AsTentWidth; // 0x12C
		::System::Single Field_5_36; // 0x130
		::System::Single Field_5_37; // 0x134
		::System::Single Field_5_38; // 0x138
		::System::Single Field_5_39; // 0x13C
		::System::Single Field_5_40; // 0x140
		::UnityEngine::Color AsOtherAbsorption; // 0x144
		::System::Single AsOtherAbsorptionScale; // 0x154
		::UnityEngine::Color Field_5_43; // 0x158
		::System::Single AsTransmittanceSampleCount; // 0x168
		::UnityEngine::Color AsOutputPreExposure; // 0x16C
		::System::Single AsMultiScatteringFactor; // 0x17C
		::System::Single AsGlobalScale; // 0x180
		::System::Single AsGlobalScale1; // 0x184
		::UnityEngine::Vector3 AtmosphereLightDirection01; // 0x188
		::UnityEngine::Color AtmosphereLightIlluminanceOuterSpace0; // 0x194
		::UnityEngine::Vector3 AtmosphereLightDirection11; // 0x1A4
		::UnityEngine::Color AtmosphereLightIlluminanceOuterSpace1; // 0x1B0
		::UnityEngine::Color SkyAndAerialPerspectiveLuminanceFactor; // 0x1C0
		::System::Single AerialPespectiveViewDistanceScale; // 0x1D0
		::System::Single AsFastSkySampleCountMin; // 0x1D4
		::System::Single AsFastSkySampleCountMax; // 0x1D8
		::System::Int32 APVolumeWidth; // 0x1DC
		::System::Int32 APVolumeHeight; // 0x1E0
		::System::Int32 APVolumeDepth; // 0x1E4
		::System::Single CameraAerialPerspectiveVolumeDepthSliceLengthKm; // 0x1E8
		::System::Single AerialPerspectiveStartDepthKm; // 0x1EC
		::System::Single CameraAerialPerspectiveSampleCountPerSlice; // 0x1F0
		::UnityEngine::Vector4 Field_5_63; // 0x1F4
		::System::Single SkyAtmosphereDistanceToSampleCountMax; // 0x204
		::System::Single Field_5_65; // 0x208
		::System::Single cameraOffset; // 0x20C
		::UnityEngine::RenderTexture* Field_5_67; // 0x210
		::System::Int32 MultiScatteredLuminanceLutSizeWidth; // 0x218
		::System::Int32 MultiScatteredLuminanceLutSizeHeight; // 0x21C
		::System::Int32 MultiScatteringSampleCount; // 0x220
		::System::Single MultiScatteringFactor; // 0x224
		::UnityEngine::Vector3 Field_5_72; // 0x228
		::UnityEngine::Vector3 Field_5_73; // 0x234
		::System::Boolean useSceneViewCamera; // 0x240
		::System::Boolean enableMutiSattering; // 0x241
		::UnityEngine::Vector3 Field_5_78; // 0x244
		::UnityEngine::Vector4 Field_5_79; // 0x250
		::UnityEngine::Matrix4x4 Field_5_80; // 0x260
		::UnityEngine::MeshRenderer* Field_5_81; // 0x2A0
		::UnityEngine::MeshRenderer* Field_5_82; // 0x2A8
		::UnityEngine::MeshRenderer* Field_5_83; // 0x2B0
		::UnityEngine::Texture2D* transmitanceTexture; // 0x2B8
		::System::Boolean enableDebug; // 0x2C0
		::System::Boolean Field_5_87; // 0x2C1
		::UnityEngine::Material* Field_5_88; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST__CCTOR_OFFSET))();
		}

		static ::System::Void DispatchSizedPass(::UnityEngine::ComputeShader* a1, ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F* a2, ::UnityEngine::RenderTexture* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeShader*, ::Class_1_2F95775169BD5203_Class_1_5AA8656D6075F04F*, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST_DISPATCHSIZEDPASS_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 ConvertCoord(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST_CONVERTCOORD_OFFSET))(a1);
		}

		::System::Void Method_5_F629B26C5D2B092E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_F629B26C5D2B092E_OFFSET))(this);
		}

		::System::Single Method_5_3422201382CE593B()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_3422201382CE593B_OFFSET))(this);
		}

		::UnityEngine::Camera* Method_5_4C6A485322DE374D()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_4C6A485322DE374D_OFFSET))(this);
		}

		::System::Void Method_5_5739CCCE693D1FCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_5739CCCE693D1FCB_OFFSET))(this);
		}

		::UnityEngine::Color Method_5_FAC1E4DEB02B3801(::UnityEngine::Color a1, ::System::Single a2)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_FAC1E4DEB02B3801_OFFSET))(this, a1, a2);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST_AWAKE_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_A1C7122184516C18()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_A1C7122184516C18_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* Method_5_CBC2443440B894D4(::UnityEngine::RenderTexture* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::UnityEngine::RenderTextureFormat a5)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_CBC2443440B894D4_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST_UPDATE_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_60451B2DE9D371C9(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST_METHOD_5_60451B2DE9D371C9_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST_ONENABLE_OFFSET))(this);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST_GET_KEY_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ESATMOSPHERETEST_ONDISABLE_OFFSET))(this);
		}
	};
}
