#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentProfile_Struct_2_4A5861BA045B4A85.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/CustomRP/GameCameraType.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_299;
class Class_1_303D5A33D1401D59;
class SceneLightVolume;
namespace EnviromentSystem { class EnviroBlockDataTransProperty; }
namespace EnviromentSystem { class EnviroBoolProperty; }
namespace EnviromentSystem { class EnviroEffectLightProperty; }
namespace EnviromentSystem { class EnviroEnumProperty; }
namespace EnviromentSystem { class EnviroFloatProperty; }
namespace EnviromentSystem { class EnviroGpuParticleProperty; }
namespace EnviromentSystem { class EnviroGradientProperty; }
namespace EnviromentSystem { class EnviroLocalLightGroupProperty; }
namespace EnviromentSystem { class EnviroParticleProperty; }
namespace EnviromentSystem { class EnviroPointLightProperty; }
namespace EnviromentSystem { class EnviroPostProcessVolumeProperty; }
namespace EnviromentSystem { class EnviroPrefabProperty; }
namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviroReflectionProbeProperty; }
namespace EnviromentSystem { class EnviroTextureProperty; }
namespace EnviromentSystem { class EnviroVectorProperty; }
namespace EnviromentSystem { class EnviroWindZoneProperty; }
namespace EnviromentSystem { class EnviromentClip; }
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_ACTIVEPROFILETRANSITIONTARGET_OFFSET UNITYSDK_OFFSET(0x12552F80)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_NAMEEX_OFFSET UNITYSDK_OFFSET(0x12553060)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_PROFILEPATHEX_OFFSET UNITYSDK_OFFSET(0x12553040)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_0C42DDDF06BF692D_OFFSET UNITYSDK_OFFSET(0x125530D0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_0CD37E1A46BB4FCC_OFFSET UNITYSDK_OFFSET(0x1255C1C0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1290EA767C459179_1_OFFSET UNITYSDK_OFFSET(0x12559510)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1290EA767C459179_2_OFFSET UNITYSDK_OFFSET(0x125597D0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12553C40)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_16596F395C2C3A4A_OFFSET UNITYSDK_OFFSET(0x1255AD10)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1255BFC0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1B214D9710BB7534_OFFSET UNITYSDK_OFFSET(0x1255CE90)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1B217C219DE4E4D3_OFFSET UNITYSDK_OFFSET(0x125592C0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0x12559710)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2092EACB383790AB_OFFSET UNITYSDK_OFFSET(0x12553D00)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_256303B15A3BB162_OFFSET UNITYSDK_OFFSET(0x12558110)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1255CA10)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x12553320)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2BB7E72A7E700799_OFFSET UNITYSDK_OFFSET(0x125534E0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2D3246FB8DBA00A2_OFFSET UNITYSDK_OFFSET(0x1255B230)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2DA5E14835AEFAD5_1_OFFSET UNITYSDK_OFFSET(0x1255C4E0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2DA5E14835AEFAD5_OFFSET UNITYSDK_OFFSET(0x1255C460)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_31B71B6D307F7F0C_1_OFFSET UNITYSDK_OFFSET(0x1255C130)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_31B71B6D307F7F0C_OFFSET UNITYSDK_OFFSET(0x1255C0A0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_3F89D6D0CF352DCB_OFFSET UNITYSDK_OFFSET(0x1255A600)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_4133699FD543EF18_OFFSET UNITYSDK_OFFSET(0x1255C560)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_4369EE669C507F5C_OFFSET UNITYSDK_OFFSET(0x1255AB70)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_483AE288ACA59A28_OFFSET UNITYSDK_OFFSET(0x12555820)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_4A9B90F6BDA98CC3_OFFSET UNITYSDK_OFFSET(0x1255CAB0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_511BD23D89CDE949_OFFSET UNITYSDK_OFFSET(0x125580C0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_5A0DB1B7B9BE25BD_OFFSET UNITYSDK_OFFSET(0x12552F30)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_5D0554B490BC6FF6_OFFSET UNITYSDK_OFFSET(0x12555340)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_5D22ABED9373C2B3_OFFSET UNITYSDK_OFFSET(0x1255C910)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_6236233B0854D237_OFFSET UNITYSDK_OFFSET(0x1255BBA0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_645B476F801026A7_OFFSET UNITYSDK_OFFSET(0x1255B7A0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_67E299A3526254D2_OFFSET UNITYSDK_OFFSET(0x12555120)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x12553810)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_71BB36629F6C4A15_OFFSET UNITYSDK_OFFSET(0x12559890)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_722196BE0640FA62_OFFSET UNITYSDK_OFFSET(0x12553460)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0x125551F0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_79B90490025ABC83_OFFSET UNITYSDK_OFFSET(0x1255CEE0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_7C70D627BA6F6091_OFFSET UNITYSDK_OFFSET(0x1255CB30)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_803856DB6C5D9DB5_OFFSET UNITYSDK_OFFSET(0x1255DD00)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x125541F0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_8761657B32BF0480_OFFSET UNITYSDK_OFFSET(0x125547B0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_8B37A17B7A3F06D8_OFFSET UNITYSDK_OFFSET(0x1255CC20)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_90F05812FB1D34BE_OFFSET UNITYSDK_OFFSET(0x1255BE60)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_9314BCB9CF01326C_OFFSET UNITYSDK_OFFSET(0x1255BD00)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_9B1F2653496E5C47_OFFSET UNITYSDK_OFFSET(0x12555A70)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_9E466DEA0B216BA9_OFFSET UNITYSDK_OFFSET(0x1255A9D0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_9FE9E59BEF999D1D_OFFSET UNITYSDK_OFFSET(0x1255B030)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_A738D0DFE2533F04_OFFSET UNITYSDK_OFFSET(0x1255C320)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_A79B4A90655C12CD_OFFSET UNITYSDK_OFFSET(0x12558210)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_AEDF24558C1E3059_OFFSET UNITYSDK_OFFSET(0x1255A710)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_AFF7609F18B1F51B_OFFSET UNITYSDK_OFFSET(0x1255A870)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_B69ABBBCD36242AB_OFFSET UNITYSDK_OFFSET(0x12551620)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_B71CEDD370D1BF83_1_OFFSET UNITYSDK_OFFSET(0x1255C840)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_B71CEDD370D1BF83_OFFSET UNITYSDK_OFFSET(0x1255A490)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_B8988AFA2C9F74D0_OFFSET UNITYSDK_OFFSET(0x12553E60)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_C137F5CD6FDEBE03_OFFSET UNITYSDK_OFFSET(0x12552EE0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_C17DDF50E9F40898_OFFSET UNITYSDK_OFFSET(0x1255C030)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_CC71F10E35F0F1C2_1_OFFSET UNITYSDK_OFFSET(0x12559E20)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_CC71F10E35F0F1C2_OFFSET UNITYSDK_OFFSET(0x12559C60)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_CEEBAE1B999F370D_OFFSET UNITYSDK_OFFSET(0x12556600)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_D87A7D8243E04FD7_OFFSET UNITYSDK_OFFSET(0x125595D0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_DA42B87A2F252530_OFFSET UNITYSDK_OFFSET(0x12558190)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_DB915699370309DA_OFFSET UNITYSDK_OFFSET(0x1255CFD0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_DBA44A18873D9728_OFFSET UNITYSDK_OFFSET(0x1255B5A0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_DCEDA9CA86F04212_OFFSET UNITYSDK_OFFSET(0x12559FE0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_DEBCE28D42BF738B_OFFSET UNITYSDK_OFFSET(0x12559980)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_E06E94B84B302469_OFFSET UNITYSDK_OFFSET(0x12555A10)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_E3ADA5CA2C064E44_OFFSET UNITYSDK_OFFSET(0x12559390)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_F226A06C0CBED3A7_OFFSET UNITYSDK_OFFSET(0x1255C6F0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_F40B7BA720D3CFD0_OFFSET UNITYSDK_OFFSET(0x12559B30)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_FD3047E2A8A3FB19_OFFSET UNITYSDK_OFFSET(0x1255B900)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1255D420)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1255D3E0)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_ACTIVEPROFILETRANSITIONTARGET_OFFSET UNITYSDK_OFFSET(0x12552F90)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_NAMEEX_OFFSET UNITYSDK_OFFSET(0x12553070)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_PROFILEPATHEX_OFFSET UNITYSDK_OFFSET(0x12553050)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1255DE30)
#define ENVIROMENTSYSTEM_ENVIROMENTPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1255DD80)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviromentProfile_TypeDefinitionIndex = 46182;

	class EnviromentProfile : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::EnviromentSystem::EnviromentProfile** StaticGet__DefaultProfileTemplate()
		{
			return (::EnviromentSystem::EnviromentProfile**)Il2CppClass::FromTypeDefinitionIndex(EnviromentProfile_TypeDefinitionIndex)->GetStaticField(0x15570);
		}
		static ::System::Collections::Generic::Stack_1<::EnviromentSystem::EnviromentProfile*>** StaticGet__DefaultProfilePool()
		{
			return (::System::Collections::Generic::Stack_1<::EnviromentSystem::EnviromentProfile*>**)Il2CppClass::FromTypeDefinitionIndex(EnviromentProfile_TypeDefinitionIndex)->GetStaticField(0x15578);
		}
		static ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>** StaticGet__LoadResources()
		{
			return (::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>**)Il2CppClass::FromTypeDefinitionIndex(EnviromentProfile_TypeDefinitionIndex)->GetStaticField(0x15580);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>** StaticGet__EnvPropShaderIDToIndex()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(EnviromentProfile_TypeDefinitionIndex)->GetStaticField(0x15588);
		}
		static ::System::Int32* StaticGet_ShadowDirID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviromentProfile_TypeDefinitionIndex)->GetStaticField(0x5FC0);
		}
		static ::System::Int32* StaticGet_GlobalRotMatrixID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviromentProfile_TypeDefinitionIndex)->GetStaticField(0x5FC4);
		}
		static ::System::Int32* StaticGet_TransitionRateID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviromentProfile_TypeDefinitionIndex)->GetStaticField(0x5FC8);
		}
		::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* OnLoadFinish; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* PropertiesTable; // 0x20
		::System::Boolean _isFullProfile; // 0x28
		::EnviromentSystem::EnviromentProfile* activeProfileTransitionTarget; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* _ClipTypes; // 0x38
		::System::String* ProfilePath; // 0x40
		::System::String* ProfilePathNext; // 0x48
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* AsyncLoadResources; // 0x50
		::System::Boolean IsAsyncLoadFinished; // 0x58
		::System::Boolean IsInited; // 0x59
		::System::Int32 loadResourcesCount; // 0x5C
		::System::Int32 iTaskDoneCount; // 0x60
		::EnviromentSystem::EnviroBlockDataTransProperty* _EnviroBlockDataTransProperty; // 0x68
		::System::Boolean IsSubClip; // 0x70
		::System::Boolean IsKeepEnviroBlockData; // 0x71
		::System::Boolean NeedUpdateEnvPrefab; // 0x72
		::System::Boolean OriIsSubClip; // 0x73
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviromentClip*>* EnviroProfileClips; // 0x78
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroBoolProperty*>* EnviroBoolProperties; // 0x80
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroFloatProperty*>* EnviroFloatProperties; // 0x88
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroLocalLightGroupProperty*>* EnviroLocalLightGroupProperties; // 0x90
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroVectorProperty*>* EnviroVectorProperties; // 0x98
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroEnumProperty*>* EnviroEnumProperties; // 0xA0
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroTextureProperty*>* EnviroTextureProperties; // 0xA8
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroPrefabProperty*>* EnviroPrefabProperties; // 0xB0
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroGradientProperty*>* EnviroGradientProperties; // 0xB8
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroGpuParticleProperty*>* EnviroGpuParticleProperties; // 0xC0
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroReflectionProbeProperty*>* EnviroReflectionProbeProperties; // 0xC8
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroPointLightProperty*>* EnviroPointLightProperties; // 0xD0
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroParticleProperty*>* EnviroParticleProperties; // 0xD8
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroEffectLightProperty*>* EnviroEffectLightingProperties; // 0xE0
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroPostProcessVolumeProperty*>* EnviroPPVolumeProperties; // 0xE8
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroWindZoneProperty*>* EnviroWindZoneProperties; // 0xF0
		::System::Boolean IsCancelAsyncLoad; // 0xF8
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* TempProperties; // 0x100
		::Il2CppArray<::System::Int32>* TempPropertiesArray; // 0x108
		::EnviromentSystem::EnviromentProfile_Struct_2_4A5861BA045B4A85 _CopyTexCmd; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE__CCTOR_OFFSET))();
		}

		::System::Int32 Method_3_C137F5CD6FDEBE03(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_C137F5CD6FDEBE03_OFFSET))(this, a1);
		}

		::System::Void Method_3_5A0DB1B7B9BE25BD(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_5A0DB1B7B9BE25BD_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_299* get_ActiveProfileTransitionTarget()
		{
			return ((::Class_0_16E4307DCC419505_299*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_ACTIVEPROFILETRANSITIONTARGET_OFFSET))(this);
		}

		::System::Void set_ActiveProfileTransitionTarget(::Class_0_16E4307DCC419505_299* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_299*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_ACTIVEPROFILETRANSITIONTARGET_OFFSET))(this, a1);
		}

		::System::String* get_ProfilePathEx()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_PROFILEPATHEX_OFFSET))(this);
		}

		::System::Void set_ProfilePathEx(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_PROFILEPATHEX_OFFSET))(this, a1);
		}

		::System::String* get_NameEx()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_GET_NAMEEX_OFFSET))(this);
		}

		::System::Void set_NameEx(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_SET_NAMEEX_OFFSET))(this, a1);
		}

		static ::System::Void Method_3_0C42DDDF06BF692D()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_0C42DDDF06BF692D_OFFSET))();
		}

		static ::EnviromentSystem::EnviromentProfile* Method_3_722196BE0640FA62()
		{
			return ((::EnviromentSystem::EnviromentProfile*(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_722196BE0640FA62_OFFSET))();
		}

		static ::EnviromentSystem::EnviromentProfile* Method_3_2092EACB383790AB()
		{
			return ((::EnviromentSystem::EnviromentProfile*(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2092EACB383790AB_OFFSET))();
		}

		static ::EnviromentSystem::EnviromentProfile* Method_3_2BB7E72A7E700799()
		{
			return ((::EnviromentSystem::EnviromentProfile*(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2BB7E72A7E700799_OFFSET))();
		}

		::System::Void Method_3_B8988AFA2C9F74D0(::Il2CppArray<::System::String*>*& a1, ::Il2CppArray<::System::Type*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*&, ::Il2CppArray<::System::Type*>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_B8988AFA2C9F74D0_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_704FAC4600717444()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_704FAC4600717444_OFFSET))(this);
		}

		::System::Void Method_3_283228DCA08F69C7(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_283228DCA08F69C7_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_67E299A3526254D2(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_67E299A3526254D2_OFFSET))(this, a1);
		}

		::System::Void Method_3_7998F8CA1E002410(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_7998F8CA1E002410_OFFSET))(this, a1);
		}

		::System::Void Method_3_5D0554B490BC6FF6(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_5D0554B490BC6FF6_OFFSET))(this, a1);
		}

		::System::Void Method_3_E06E94B84B302469(::RPG::CustomRP::GameCameraType a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::GameCameraType, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_E06E94B84B302469_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_3_9B1F2653496E5C47()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_9B1F2653496E5C47_OFFSET))(this);
		}

		::System::Void Method_3_8761657B32BF0480(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_8761657B32BF0480_OFFSET))(this, a1);
		}

		::System::Void Method_3_CEEBAE1B999F370D(::Class_0_16E4307DCC419505_299* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_299*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_CEEBAE1B999F370D_OFFSET))(this, a1);
		}

		::SceneLightVolume* Method_3_511BD23D89CDE949()
		{
			return ((::SceneLightVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_511BD23D89CDE949_OFFSET))(this);
		}

		::System::Void Method_3_256303B15A3BB162(::Class_1_303D5A33D1401D59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_256303B15A3BB162_OFFSET))(this, a1);
		}

		::System::Void Method_3_DA42B87A2F252530(::Class_1_303D5A33D1401D59* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_DA42B87A2F252530_OFFSET))(this, a1);
		}

		::System::Void Method_3_A79B4A90655C12CD(::Class_0_16E4307DCC419505_299* a1, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_299*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_A79B4A90655C12CD_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_E3ADA5CA2C064E44(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_E3ADA5CA2C064E44_OFFSET))(this, a1);
		}

		::System::Void Method_3_1290EA767C459179_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1290EA767C459179_1_OFFSET))(this);
		}

		::System::Void Method_3_1B217C219DE4E4D3(::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1B217C219DE4E4D3_OFFSET))(this, a1);
		}

		::System::Void Method_3_D87A7D8243E04FD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_D87A7D8243E04FD7_OFFSET))(this);
		}

		::System::Void Method_3_1CD1133DC003C11C(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1CD1133DC003C11C_OFFSET))(this, a1);
		}

		::System::Void Method_3_1290EA767C459179_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1290EA767C459179_2_OFFSET))(this);
		}

		::System::Void Method_3_71BB36629F6C4A15()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_71BB36629F6C4A15_OFFSET))(this);
		}

		::System::Void Method_3_DEBCE28D42BF738B(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_DEBCE28D42BF738B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_F40B7BA720D3CFD0(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_F40B7BA720D3CFD0_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Light* Method_3_CC71F10E35F0F1C2(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_CC71F10E35F0F1C2_OFFSET))(this, a1);
		}

		::UnityEngine::Light* Method_3_CC71F10E35F0F1C2_1(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_CC71F10E35F0F1C2_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_DCEDA9CA86F04212(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_DCEDA9CA86F04212_OFFSET))(this, a1);
		}

		::EnviromentSystem::EnviroProperty* Method_3_B71CEDD370D1BF83(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::EnviromentSystem::EnviroProperty*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_B71CEDD370D1BF83_OFFSET))(this, a1);
		}

		::System::Int32 Method_3_3F89D6D0CF352DCB(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_3F89D6D0CF352DCB_OFFSET))(this, a1);
		}

		::UnityEngine::Texture* Method_3_AEDF24558C1E3059(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_AEDF24558C1E3059_OFFSET))(this, a1);
		}

		::UnityEngine::Gradient* Method_3_AFF7609F18B1F51B(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_AFF7609F18B1F51B_OFFSET))(this, a1);
		}

		::System::Void Method_3_9E466DEA0B216BA9(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Gradient* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_9E466DEA0B216BA9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_4369EE669C507F5C(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_4369EE669C507F5C_OFFSET))(this, a1, a2);
		}

		::System::Single Method_3_483AE288ACA59A28(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Single(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_483AE288ACA59A28_OFFSET))(this, a1);
		}

		::System::Void Method_3_16596F395C2C3A4A(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_16596F395C2C3A4A_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 Method_3_9FE9E59BEF999D1D(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_9FE9E59BEF999D1D_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 Method_3_B69ABBBCD36242AB(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_B69ABBBCD36242AB_OFFSET))(this, a1);
		}

		::System::Void Method_3_2D3246FB8DBA00A2(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2D3246FB8DBA00A2_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_3_DBA44A18873D9728(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_DBA44A18873D9728_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_645B476F801026A7(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_645B476F801026A7_OFFSET))(this, a1);
		}

		::System::Void Method_3_FD3047E2A8A3FB19(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_FD3047E2A8A3FB19_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* Method_3_6236233B0854D237(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_6236233B0854D237_OFFSET))(this, a1);
		}

		::EnviromentSystem::EnviroGpuParticleProperty* Method_3_9314BCB9CF01326C()
		{
			return ((::EnviromentSystem::EnviroGpuParticleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_9314BCB9CF01326C_OFFSET))(this);
		}

		::EnviromentSystem::EnviroWindZoneProperty* Method_3_90F05812FB1D34BE()
		{
			return ((::EnviromentSystem::EnviroWindZoneProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_90F05812FB1D34BE_OFFSET))(this);
		}

		::System::Boolean Method_3_1808E1CF7A125519()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1808E1CF7A125519_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* Method_3_C17DDF50E9F40898()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_C17DDF50E9F40898_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_3_31B71B6D307F7F0C()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_31B71B6D307F7F0C_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_3_31B71B6D307F7F0C_1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_31B71B6D307F7F0C_1_OFFSET))(this);
		}

		::EnviromentSystem::EnviroParticleProperty* Method_3_0CD37E1A46BB4FCC()
		{
			return ((::EnviromentSystem::EnviroParticleProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_0CD37E1A46BB4FCC_OFFSET))(this);
		}

		::EnviromentSystem::EnviroEffectLightProperty* Method_3_A738D0DFE2533F04()
		{
			return ((::EnviromentSystem::EnviroEffectLightProperty*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_A738D0DFE2533F04_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_3_2DA5E14835AEFAD5()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2DA5E14835AEFAD5_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_3_2DA5E14835AEFAD5_1()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_2DA5E14835AEFAD5_1_OFFSET))(this);
		}

		::System::Void Method_3_4133699FD543EF18(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_4133699FD543EF18_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Rendering::VolumeProfile* Method_3_F226A06C0CBED3A7()
		{
			return ((::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_F226A06C0CBED3A7_OFFSET))(this);
		}

		::EnviromentSystem::EnviroProperty* Method_3_B71CEDD370D1BF83_1(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::EnviromentSystem::EnviroProperty*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_B71CEDD370D1BF83_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_5D22ABED9373C2B3(::EnviromentSystem::EnviromentPropertiesID a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_5D22ABED9373C2B3_OFFSET))(this, a1);
		}

		::System::Void Method_3_25DEA5C65A602671()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_25DEA5C65A602671_OFFSET))(this);
		}

		::System::Void Method_3_4A9B90F6BDA98CC3(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_4A9B90F6BDA98CC3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_7C70D627BA6F6091(::UnityEngine::Rendering::AmbientVolumneData& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AmbientVolumneData&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_7C70D627BA6F6091_OFFSET))(this, a1);
		}

		::System::Void Method_3_8542E37E74FDE1B5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_8542E37E74FDE1B5_OFFSET))(this);
		}

		::System::Void Method_3_8B37A17B7A3F06D8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_8B37A17B7A3F06D8_OFFSET))(this);
		}

		::System::Void Method_3_1B214D9710BB7534(::RPG::CustomRP::GameCameraType a1, ::UnityEngine::Rendering::CommandBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::GameCameraType, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_1B214D9710BB7534_OFFSET))(this, a1, a2);
		}

		::System::Int32 Method_3_79B90490025ABC83(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_79B90490025ABC83_OFFSET))(this, a1);
		}

		::System::Void Method_3_DB915699370309DA(::Class_0_16E4307DCC419505_299* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_299*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_DB915699370309DA_OFFSET))(this, a1);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Int32>* Method_3_803856DB6C5D9DB5()
		{
			return ((::Il2CppArray<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROMENTPROFILE_METHOD_3_803856DB6C5D9DB5_OFFSET))();
		}
	};
}
