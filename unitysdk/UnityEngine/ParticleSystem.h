#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"
#include "unitysdk/Unity/Jobs/LowLevel/Unsafe/JobsUtility_JobScheduleParameters.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/ParticleSystemCustomData.h"
#include "unitysdk/UnityEngine/ParticleSystemJobs/NativeParticleData.h"
#include "unitysdk/UnityEngine/ParticleSystemScalingMode.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"
#include "unitysdk/UnityEngine/ParticleSystemStopBehavior.h"
#include "unitysdk/UnityEngine/ParticleSystem_CollisionModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_ColorBySpeedModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_ColorOverLifetimeModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_CustomDataModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_EmissionModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_EmitParams.h"
#include "unitysdk/UnityEngine/ParticleSystem_ExternalForcesModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_ForceOverLifetimeModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_InheritVelocityModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_LightsModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_LimitVelocityOverLifetimeModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_MainModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_NoiseModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"
#include "unitysdk/UnityEngine/ParticleSystem_PlaybackState.h"
#include "unitysdk/UnityEngine/ParticleSystem_RotationBySpeedModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_RotationOverLifetimeModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_ShapeModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_SizeBySpeedModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_SizeOverLifetimeModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_SubEmittersModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_TextureSheetAnimationModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_TrailModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_Trails.h"
#include "unitysdk/UnityEngine/ParticleSystem_TriggerModule.h"
#include "unitysdk/UnityEngine/ParticleSystem_VelocityOverLifetimeModule.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class ParticleSystemRenderer; }
namespace UnityEngine { class ParticleSystem_OnNewParticleEmissionEvent; }
namespace UnityEngine { class ParticleSystem_OnParticleEmissionBeginEvent; }

#define UNITYENGINE_PARTICLESYSTEM_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x1A5D32C0)
#define UNITYENGINE_PARTICLESYSTEM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A5D32B0)
#define UNITYENGINE_PARTICLESYSTEM_COPYMANAGEDJOBDATA_OFFSET UNITYSDK_OFFSET(0x1A5D4100)
#define UNITYENGINE_PARTICLESYSTEM_DONEWPARTICLEEMISSIONEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A5D38A0)
#define UNITYENGINE_PARTICLESYSTEM_DOPARTICLEEMISSIONBEGINEVENT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A5D3330)
#define UNITYENGINE_PARTICLESYSTEM_DRAW_OFFSET UNITYSDK_OFFSET(0x1A5D4120)
#define UNITYENGINE_PARTICLESYSTEM_EMITOLD_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A5D22B0)
#define UNITYENGINE_PARTICLESYSTEM_EMIT_1_OFFSET UNITYSDK_OFFSET(0x1A5D22C0)
#define UNITYENGINE_PARTICLESYSTEM_EMIT_2_OFFSET UNITYSDK_OFFSET(0x1A5D32F0)
#define UNITYENGINE_PARTICLESYSTEM_EMIT_3_OFFSET UNITYSDK_OFFSET(0x1A5D3310)
#define UNITYENGINE_PARTICLESYSTEM_EMIT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D3320)
#define UNITYENGINE_PARTICLESYSTEM_EMIT_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1A5D3300)
#define UNITYENGINE_PARTICLESYSTEM_EMIT_OFFSET UNITYSDK_OFFSET(0x1A5D2150)
#define UNITYENGINE_PARTICLESYSTEM_FILLINSTIDTOVERTEXCOUNTMAPTONATIVEARRAY_OFFSET UNITYSDK_OFFSET(0x1A5D4020)
#define UNITYENGINE_PARTICLESYSTEM_FORCEUPDATEPARTICLESYSTEMLIGHTSMODULE_OFFSET UNITYSDK_OFFSET(0x1A5D3F30)
#define UNITYENGINE_PARTICLESYSTEM_GETCOMPONENTMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1A5D2F50)
#define UNITYENGINE_PARTICLESYSTEM_GETCURRENTPREMAPPEDBUFFERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5D3EE0)
#define UNITYENGINE_PARTICLESYSTEM_GETCURRENTPREMAPPEDBUFFEROCCUPANCY_OFFSET UNITYSDK_OFFSET(0x1A5D3F10)
#define UNITYENGINE_PARTICLESYSTEM_GETCURRENTPREMAPPEDBUFFERREQUIREDSIZE_OFFSET UNITYSDK_OFFSET(0x1A5D3F00)
#define UNITYENGINE_PARTICLESYSTEM_GETCURRENTPREMAPPEDBUFFERSIZE_OFFSET UNITYSDK_OFFSET(0x1A5D3EF0)
#define UNITYENGINE_PARTICLESYSTEM_GETCURVEDATAMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1A5D2F70)
#define UNITYENGINE_PARTICLESYSTEM_GETCUSTOMPARTICLEDATA_OFFSET UNITYSDK_OFFSET(0x1A5D2EA0)
#define UNITYENGINE_PARTICLESYSTEM_GETINSTANCEDPARTICLEVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5D3F50)
#define UNITYENGINE_PARTICLESYSTEM_GETINSTIDTOVERTEXCOUNTMAPSIZE_OFFSET UNITYSDK_OFFSET(0x1A5D4010)
#define UNITYENGINE_PARTICLESYSTEM_GETINSTIDTOVERTEXCOUNTMAPWITHNATIVEARRAY_OFFSET UNITYSDK_OFFSET(0x1A5D3F60)
#define UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBDATA_OFFSET UNITYSDK_OFFSET(0x1A5D4030)
#define UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D4080)
#define UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBHANDLE_OFFSET UNITYSDK_OFFSET(0x1A5D4040)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLECAPACITY_OFFSET UNITYSDK_OFFSET(0x1A5D2F90)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D2CB0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTCOLOR_OFFSET UNITYSDK_OFFSET(0x1A5D2C90)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE3D_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D2C80)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE3D_OFFSET UNITYSDK_OFFSET(0x1A5D2C30)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE_OFFSET UNITYSDK_OFFSET(0x1A5D2C20)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLEINITCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5D2FB0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLEMESHINDEX_OFFSET UNITYSDK_OFFSET(0x1A5D2CC0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLEREALCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5D2FA0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLESWITHNATIVEARRAY_OFFSET UNITYSDK_OFFSET(0x1A5D2DF0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_1_OFFSET UNITYSDK_OFFSET(0x1A5D2DC0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_2_OFFSET UNITYSDK_OFFSET(0x1A5D2DD0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_3_OFFSET UNITYSDK_OFFSET(0x1A5D2E00)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_4_OFFSET UNITYSDK_OFFSET(0x1A5D2E30)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_5_OFFSET UNITYSDK_OFFSET(0x1A5D2E60)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_OFFSET UNITYSDK_OFFSET(0x1A5D2DB0)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLEUNITMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1A5D2F80)
#define UNITYENGINE_PARTICLESYSTEM_GETPARTICLEVERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5D3F40)
#define UNITYENGINE_PARTICLESYSTEM_GETPLAYBACKSTATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D2F20)
#define UNITYENGINE_PARTICLESYSTEM_GETPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1A5D2ED0)
#define UNITYENGINE_PARTICLESYSTEM_GETPREMAPPEDBUFFERDEFAULTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5D3EC0)
#define UNITYENGINE_PARTICLESYSTEM_GETSTRUCTMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1A5D2F60)
#define UNITYENGINE_PARTICLESYSTEM_GETTRAILDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A5D2FC0)
#define UNITYENGINE_PARTICLESYSTEM_GETTRAILS_OFFSET UNITYSDK_OFFSET(0x1A5D2FD0)
#define UNITYENGINE_PARTICLESYSTEM_GET_AUTOMATICCULLINGENABLED_OFFSET UNITYSDK_OFFSET(0x1A5D2B50)
#define UNITYENGINE_PARTICLESYSTEM_GET_COLLISION_OFFSET UNITYSDK_OFFSET(0x1A5D4290)
#define UNITYENGINE_PARTICLESYSTEM_GET_COLORBYSPEED_OFFSET UNITYSDK_OFFSET(0x1A5D41F0)
#define UNITYENGINE_PARTICLESYSTEM_GET_COLOROVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1A5D41D0)
#define UNITYENGINE_PARTICLESYSTEM_GET_CUSTOMDATA_OFFSET UNITYSDK_OFFSET(0x1A5D4310)
#define UNITYENGINE_PARTICLESYSTEM_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1A5D2400)
#define UNITYENGINE_PARTICLESYSTEM_GET_EMISSIONRATE_OFFSET UNITYSDK_OFFSET(0x1A5D2500)
#define UNITYENGINE_PARTICLESYSTEM_GET_EMISSION_OFFSET UNITYSDK_OFFSET(0x1A5D24B0)
#define UNITYENGINE_PARTICLESYSTEM_GET_ENABLEEMISSION_OFFSET UNITYSDK_OFFSET(0x1A5D2490)
#define UNITYENGINE_PARTICLESYSTEM_GET_EXTERNALFORCES_OFFSET UNITYSDK_OFFSET(0x1A5D4250)
#define UNITYENGINE_PARTICLESYSTEM_GET_FORCEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1A5D41B0)
#define UNITYENGINE_PARTICLESYSTEM_GET_GRAVITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x1A5D29D0)
#define UNITYENGINE_PARTICLESYSTEM_GET_INHERITVELOCITY_OFFSET UNITYSDK_OFFSET(0x1A5D4190)
#define UNITYENGINE_PARTICLESYSTEM_GET_ISEMITTING_OFFSET UNITYSDK_OFFSET(0x1A5D2B80)
#define UNITYENGINE_PARTICLESYSTEM_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1A5D2BA0)
#define UNITYENGINE_PARTICLESYSTEM_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x1A5D2B70)
#define UNITYENGINE_PARTICLESYSTEM_GET_ISSTOPPED_OFFSET UNITYSDK_OFFSET(0x1A5D2B90)
#define UNITYENGINE_PARTICLESYSTEM_GET_LIGHTS_OFFSET UNITYSDK_OFFSET(0x1A5D42E0)
#define UNITYENGINE_PARTICLESYSTEM_GET_LIMITVELOCITYOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1A5D4170)
#define UNITYENGINE_PARTICLESYSTEM_GET_LOOP_OFFSET UNITYSDK_OFFSET(0x1A5D2340)
#define UNITYENGINE_PARTICLESYSTEM_GET_MAIN_OFFSET UNITYSDK_OFFSET(0x1A5D22F0)
#define UNITYENGINE_PARTICLESYSTEM_GET_MAXPARTICLES_OFFSET UNITYSDK_OFFSET(0x1A5D2A30)
#define UNITYENGINE_PARTICLESYSTEM_GET_NOISE_OFFSET UNITYSDK_OFFSET(0x1A5D4270)
#define UNITYENGINE_PARTICLESYSTEM_GET_PARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x1A5D2BB0)
#define UNITYENGINE_PARTICLESYSTEM_GET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1A5D2430)
#define UNITYENGINE_PARTICLESYSTEM_GET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A5D23A0)
#define UNITYENGINE_PARTICLESYSTEM_GET_PROCEDURALSIMULATIONSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1A5D2B60)
#define UNITYENGINE_PARTICLESYSTEM_GET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1A5D2BE0)
#define UNITYENGINE_PARTICLESYSTEM_GET_ROTATIONBYSPEED_OFFSET UNITYSDK_OFFSET(0x1A5D4240)
#define UNITYENGINE_PARTICLESYSTEM_GET_ROTATIONOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1A5D4230)
#define UNITYENGINE_PARTICLESYSTEM_GET_SCALINGMODE_OFFSET UNITYSDK_OFFSET(0x1A5D2AF0)
#define UNITYENGINE_PARTICLESYSTEM_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x1A5D4150)
#define UNITYENGINE_PARTICLESYSTEM_GET_SIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0x1A5D2A90)
#define UNITYENGINE_PARTICLESYSTEM_GET_SIZEBYSPEED_OFFSET UNITYSDK_OFFSET(0x1A5D4220)
#define UNITYENGINE_PARTICLESYSTEM_GET_SIZEOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1A5D4210)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1A5D2660)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0x1A5D22D0)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x1A5D2970)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTROTATION3D_OFFSET UNITYSDK_OFFSET(0x1A5D2850)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTROTATION_OFFSET UNITYSDK_OFFSET(0x1A5D27F0)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x1A5D2600)
#define UNITYENGINE_PARTICLESYSTEM_GET_STARTSPEED_OFFSET UNITYSDK_OFFSET(0x1A5D25A0)
#define UNITYENGINE_PARTICLESYSTEM_GET_SUBEMITTERS_OFFSET UNITYSDK_OFFSET(0x1A5D42C0)
#define UNITYENGINE_PARTICLESYSTEM_GET_TEXTURESHEETANIMATION_OFFSET UNITYSDK_OFFSET(0x1A5D42D0)
#define UNITYENGINE_PARTICLESYSTEM_GET_TIME_OFFSET UNITYSDK_OFFSET(0x1A5D2BC0)
#define UNITYENGINE_PARTICLESYSTEM_GET_TRAILS_OFFSET UNITYSDK_OFFSET(0x1A5D4300)
#define UNITYENGINE_PARTICLESYSTEM_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1A5D42B0)
#define UNITYENGINE_PARTICLESYSTEM_GET_USEAUTORANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1A5D2C00)
#define UNITYENGINE_PARTICLESYSTEM_GET_VELOCITYOVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x1A5D4160)
#define UNITYENGINE_PARTICLESYSTEM_INSTANCEIDTOPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1A5D3F20)
#define UNITYENGINE_PARTICLESYSTEM_INTERNAL_DRAW_OFFSET UNITYSDK_OFFSET(0x1A5D4110)
#define UNITYENGINE_PARTICLESYSTEM_ISALIVE_1_OFFSET UNITYSDK_OFFSET(0x1A5D32E0)
#define UNITYENGINE_PARTICLESYSTEM_ISALIVE_OFFSET UNITYSDK_OFFSET(0x1A5D32D0)
#define UNITYENGINE_PARTICLESYSTEM_MOVEPARTICLESYSTEM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D2EC0)
#define UNITYENGINE_PARTICLESYSTEM_MOVEPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1A5D2EB0)
#define UNITYENGINE_PARTICLESYSTEM_MOVETRAILS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D31B0)
#define UNITYENGINE_PARTICLESYSTEM_MOVETRAILS_OFFSET UNITYSDK_OFFSET(0x1A5D31A0)
#define UNITYENGINE_PARTICLESYSTEM_PAUSE_1_OFFSET UNITYSDK_OFFSET(0x1A5D3260)
#define UNITYENGINE_PARTICLESYSTEM_PAUSE_OFFSET UNITYSDK_OFFSET(0x1A5D3250)
#define UNITYENGINE_PARTICLESYSTEM_PLAY_1_OFFSET UNITYSDK_OFFSET(0x1A5D3240)
#define UNITYENGINE_PARTICLESYSTEM_PLAY_OFFSET UNITYSDK_OFFSET(0x1A5D3230)
#define UNITYENGINE_PARTICLESYSTEM_RESETPREMAPPEDBUFFERMEMORY_OFFSET UNITYSDK_OFFSET(0x1A5D3EA0)
#define UNITYENGINE_PARTICLESYSTEM_SCHEDULEMANAGEDJOB_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D40F0)
#define UNITYENGINE_PARTICLESYSTEM_SCHEDULEMANAGEDJOB_OFFSET UNITYSDK_OFFSET(0x1A5D40B0)
#define UNITYENGINE_PARTICLESYSTEM_SETCUSTOMPARTICLEDATA_OFFSET UNITYSDK_OFFSET(0x1A5D2E90)
#define UNITYENGINE_PARTICLESYSTEM_SETMANAGEDJOBHANDLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D40A0)
#define UNITYENGINE_PARTICLESYSTEM_SETMANAGEDJOBHANDLE_OFFSET UNITYSDK_OFFSET(0x1A5D4090)
#define UNITYENGINE_PARTICLESYSTEM_SETMAXIMUMPREMAPPEDBUFFERCOUNTS_OFFSET UNITYSDK_OFFSET(0x1A5D3EB0)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLESWITHNATIVEARRAY_OFFSET UNITYSDK_OFFSET(0x1A5D2D10)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_1_OFFSET UNITYSDK_OFFSET(0x1A5D2CE0)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_2_OFFSET UNITYSDK_OFFSET(0x1A5D2CF0)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_3_OFFSET UNITYSDK_OFFSET(0x1A5D2D20)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_4_OFFSET UNITYSDK_OFFSET(0x1A5D2D50)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_5_OFFSET UNITYSDK_OFFSET(0x1A5D2D80)
#define UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_OFFSET UNITYSDK_OFFSET(0x1A5D2CD0)
#define UNITYENGINE_PARTICLESYSTEM_SETPLAYBACKSTATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D2F40)
#define UNITYENGINE_PARTICLESYSTEM_SETPLAYBACKSTATE_OFFSET UNITYSDK_OFFSET(0x1A5D2F30)
#define UNITYENGINE_PARTICLESYSTEM_SETPREMAPPEDBUFFERDEFAULTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5D3ED0)
#define UNITYENGINE_PARTICLESYSTEM_SETTRAILS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D3190)
#define UNITYENGINE_PARTICLESYSTEM_SETTRAILS_OFFSET UNITYSDK_OFFSET(0x1A5D3180)
#define UNITYENGINE_PARTICLESYSTEM_SET_EMISSIONRATE_OFFSET UNITYSDK_OFFSET(0x1A5D2530)
#define UNITYENGINE_PARTICLESYSTEM_SET_ENABLEEMISSION_OFFSET UNITYSDK_OFFSET(0x1A5D24D0)
#define UNITYENGINE_PARTICLESYSTEM_SET_GRAVITYMODIFIER_OFFSET UNITYSDK_OFFSET(0x1A5D2A00)
#define UNITYENGINE_PARTICLESYSTEM_SET_LOOP_OFFSET UNITYSDK_OFFSET(0x1A5D2370)
#define UNITYENGINE_PARTICLESYSTEM_SET_MAXPARTICLES_OFFSET UNITYSDK_OFFSET(0x1A5D2A60)
#define UNITYENGINE_PARTICLESYSTEM_SET_PLAYBACKSPEED_OFFSET UNITYSDK_OFFSET(0x1A5D2460)
#define UNITYENGINE_PARTICLESYSTEM_SET_PLAYONAWAKE_OFFSET UNITYSDK_OFFSET(0x1A5D23D0)
#define UNITYENGINE_PARTICLESYSTEM_SET_RANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1A5D2BF0)
#define UNITYENGINE_PARTICLESYSTEM_SET_SCALINGMODE_OFFSET UNITYSDK_OFFSET(0x1A5D2B20)
#define UNITYENGINE_PARTICLESYSTEM_SET_SIMULATIONSPACE_OFFSET UNITYSDK_OFFSET(0x1A5D2AC0)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTCOLOR_OFFSET UNITYSDK_OFFSET(0x1A5D2760)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0x1A5D2310)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTLIFETIME_OFFSET UNITYSDK_OFFSET(0x1A5D29A0)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTROTATION3D_OFFSET UNITYSDK_OFFSET(0x1A5D28F0)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTROTATION_OFFSET UNITYSDK_OFFSET(0x1A5D2820)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTSIZE_OFFSET UNITYSDK_OFFSET(0x1A5D2630)
#define UNITYENGINE_PARTICLESYSTEM_SET_STARTSPEED_OFFSET UNITYSDK_OFFSET(0x1A5D25D0)
#define UNITYENGINE_PARTICLESYSTEM_SET_TIME_OFFSET UNITYSDK_OFFSET(0x1A5D2BD0)
#define UNITYENGINE_PARTICLESYSTEM_SET_USEAUTORANDOMSEED_OFFSET UNITYSDK_OFFSET(0x1A5D2C10)
#define UNITYENGINE_PARTICLESYSTEM_SIMULATE_1_OFFSET UNITYSDK_OFFSET(0x1A5D31D0)
#define UNITYENGINE_PARTICLESYSTEM_SIMULATE_2_OFFSET UNITYSDK_OFFSET(0x1A5D31F0)
#define UNITYENGINE_PARTICLESYSTEM_SIMULATE_3_OFFSET UNITYSDK_OFFSET(0x1A5D3210)
#define UNITYENGINE_PARTICLESYSTEM_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1A5D31C0)
#define UNITYENGINE_PARTICLESYSTEM_STOP_1_OFFSET UNITYSDK_OFFSET(0x1A5D3280)
#define UNITYENGINE_PARTICLESYSTEM_STOP_2_OFFSET UNITYSDK_OFFSET(0x1A5D3290)
#define UNITYENGINE_PARTICLESYSTEM_STOP_OFFSET UNITYSDK_OFFSET(0x1A5D3270)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTERFORPARTICLE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D3E90)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTERFORPARTICLE_OFFSET UNITYSDK_OFFSET(0x1A5D3E80)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_1_OFFSET UNITYSDK_OFFSET(0x1A5D3E30)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_2_OFFSET UNITYSDK_OFFSET(0x1A5D3E20)
#define UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_OFFSET UNITYSDK_OFFSET(0x1A5D3E10)
#define UNITYENGINE_PARTICLESYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5D4330)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_TypeDefinitionIndex = 5434;

	class ParticleSystem : public ::UnityEngine::Component
	{
	public:
		static ::UnityEngine::ParticleSystem_OnNewParticleEmissionEvent** StaticGet_psNewEmissionCb()
		{
			return (::UnityEngine::ParticleSystem_OnNewParticleEmissionEvent**)Il2CppClass::FromTypeDefinitionIndex(ParticleSystem_TypeDefinitionIndex)->GetStaticField(0x1B0A0);
		}
		static ::UnityEngine::ParticleSystem_OnParticleEmissionBeginEvent** StaticGet_psEmissionBeginCb()
		{
			return (::UnityEngine::ParticleSystem_OnParticleEmissionBeginEvent**)Il2CppClass::FromTypeDefinitionIndex(ParticleSystem_TypeDefinitionIndex)->GetStaticField(0x1B0A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void Emit(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 velocity, ::System::Single size, ::System::Single lifetime, ::UnityEngine::Color32 color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_OFFSET))(this, position, velocity, size, lifetime, color);
		}

		::System::Void Emit_1(::UnityEngine::ParticleSystem_Particle particle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_1_OFFSET))(this, particle);
		}

		::System::Single get_startDelay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTDELAY_OFFSET))(this);
		}

		::System::Void set_startDelay(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTDELAY_OFFSET))(this, value);
		}

		::System::Boolean get_loop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_LOOP_OFFSET))(this);
		}

		::System::Void set_loop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_LOOP_OFFSET))(this, value);
		}

		::System::Boolean get_playOnAwake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_PLAYONAWAKE_OFFSET))(this);
		}

		::System::Void set_playOnAwake(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_PLAYONAWAKE_OFFSET))(this, value);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_DURATION_OFFSET))(this);
		}

		::System::Single get_playbackSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_PLAYBACKSPEED_OFFSET))(this);
		}

		::System::Void set_playbackSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_PLAYBACKSPEED_OFFSET))(this, value);
		}

		::System::Boolean get_enableEmission()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ENABLEEMISSION_OFFSET))(this);
		}

		::System::Void set_enableEmission(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_ENABLEEMISSION_OFFSET))(this, value);
		}

		::System::Single get_emissionRate()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_EMISSIONRATE_OFFSET))(this);
		}

		::System::Void set_emissionRate(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_EMISSIONRATE_OFFSET))(this, value);
		}

		::System::Single get_startSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTSPEED_OFFSET))(this);
		}

		::System::Void set_startSpeed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTSPEED_OFFSET))(this, value);
		}

		::System::Single get_startSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTSIZE_OFFSET))(this);
		}

		::System::Void set_startSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTSIZE_OFFSET))(this, value);
		}

		::UnityEngine::Color get_startColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTCOLOR_OFFSET))(this);
		}

		::System::Void set_startColor(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTCOLOR_OFFSET))(this, value);
		}

		::System::Single get_startRotation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTROTATION_OFFSET))(this);
		}

		::System::Void set_startRotation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_startRotation3D()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTROTATION3D_OFFSET))(this);
		}

		::System::Void set_startRotation3D(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTROTATION3D_OFFSET))(this, value);
		}

		::System::Single get_startLifetime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_STARTLIFETIME_OFFSET))(this);
		}

		::System::Void set_startLifetime(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_STARTLIFETIME_OFFSET))(this, value);
		}

		::System::Single get_gravityModifier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_GRAVITYMODIFIER_OFFSET))(this);
		}

		::System::Void set_gravityModifier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_GRAVITYMODIFIER_OFFSET))(this, value);
		}

		::System::Int32 get_maxParticles()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_MAXPARTICLES_OFFSET))(this);
		}

		::System::Void set_maxParticles(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_MAXPARTICLES_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemSimulationSpace get_simulationSpace()
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SIMULATIONSPACE_OFFSET))(this);
		}

		::System::Void set_simulationSpace(::UnityEngine::ParticleSystemSimulationSpace value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_SIMULATIONSPACE_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemScalingMode get_scalingMode()
		{
			return ((::UnityEngine::ParticleSystemScalingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SCALINGMODE_OFFSET))(this);
		}

		::System::Void set_scalingMode(::UnityEngine::ParticleSystemScalingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemScalingMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_SCALINGMODE_OFFSET))(this, value);
		}

		::System::Boolean get_automaticCullingEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_AUTOMATICCULLINGENABLED_OFFSET))(this);
		}

		::System::Boolean get_isPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_isEmitting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ISEMITTING_OFFSET))(this);
		}

		::System::Boolean get_isStopped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ISSTOPPED_OFFSET))(this);
		}

		::System::Boolean get_isPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Int32 get_particleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_PARTICLECOUNT_OFFSET))(this);
		}

		::System::Single get_time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_TIME_OFFSET))(this, value);
		}

		::System::UInt32 get_randomSeed()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_RANDOMSEED_OFFSET))(this);
		}

		::System::Void set_randomSeed(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_RANDOMSEED_OFFSET))(this, value);
		}

		::System::Boolean get_useAutoRandomSeed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_USEAUTORANDOMSEED_OFFSET))(this);
		}

		::System::Void set_useAutoRandomSeed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SET_USEAUTORANDOMSEED_OFFSET))(this, value);
		}

		::System::Boolean get_proceduralSimulationSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_PROCEDURALSIMULATIONSUPPORTED_OFFSET))(this);
		}

		::System::Single GetParticleCurrentSize(::UnityEngine::ParticleSystem_Particle& particle)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE_OFFSET))(this, particle);
		}

		::UnityEngine::Vector3 GetParticleCurrentSize3D(::UnityEngine::ParticleSystem_Particle& particle)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE3D_OFFSET))(this, particle);
		}

		::UnityEngine::Color32 GetParticleCurrentColor(::UnityEngine::ParticleSystem_Particle& particle)
		{
			return ((::UnityEngine::Color32(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTCOLOR_OFFSET))(this, particle);
		}

		::System::Int32 GetParticleMeshIndex(::UnityEngine::ParticleSystem_Particle& particle)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLEMESHINDEX_OFFSET))(this, particle);
		}

		::System::Void SetParticles(::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* particles, ::System::Int32 size, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_OFFSET))(this, particles, size, offset);
		}

		::System::Void SetParticles_1(::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* particles, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_1_OFFSET))(this, particles, size);
		}

		::System::Void SetParticles_2(::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* particles)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_2_OFFSET))(this, particles);
		}

		::System::Void SetParticlesWithNativeArray(::System::IntPtr particles, ::System::Int32 particlesLength, ::System::Int32 size, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLESWITHNATIVEARRAY_OFFSET))(this, particles, particlesLength, size, offset);
		}

		::System::Void SetParticles_3(::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle> particles, ::System::Int32 size, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_3_OFFSET))(this, particles, size, offset);
		}

		::System::Void SetParticles_4(::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle> particles, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_4_OFFSET))(this, particles, size);
		}

		::System::Void SetParticles_5(::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle> particles)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPARTICLES_5_OFFSET))(this, particles);
		}

		::System::Int32 GetParticles(::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* particles, ::System::Int32 size, ::System::Int32 offset)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_OFFSET))(this, particles, size, offset);
		}

		::System::Int32 GetParticles_1(::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* particles, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_1_OFFSET))(this, particles, size);
		}

		::System::Int32 GetParticles_2(::Il2CppArray<::UnityEngine::ParticleSystem_Particle>* particles)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_2_OFFSET))(this, particles);
		}

		::System::Int32 GetParticlesWithNativeArray(::System::IntPtr particles, ::System::Int32 particlesLength, ::System::Int32 size, ::System::Int32 offset)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLESWITHNATIVEARRAY_OFFSET))(this, particles, particlesLength, size, offset);
		}

		::System::Int32 GetParticles_3(::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle> particles, ::System::Int32 size, ::System::Int32 offset)
		{
			return ((::System::Int32(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_3_OFFSET))(this, particles, size, offset);
		}

		::System::Int32 GetParticles_4(::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle> particles, ::System::Int32 size)
		{
			return ((::System::Int32(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_4_OFFSET))(this, particles, size);
		}

		::System::Int32 GetParticles_5(::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle> particles)
		{
			return ((::System::Int32(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::ParticleSystem_Particle>))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLES_5_OFFSET))(this, particles);
		}

		::System::Void SetCustomParticleData(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* customData, ::UnityEngine::ParticleSystemCustomData streamIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::UnityEngine::ParticleSystemCustomData))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETCUSTOMPARTICLEDATA_OFFSET))(this, customData, streamIndex);
		}

		::System::Int32 GetCustomParticleData(::System::Collections::Generic::List_1<::UnityEngine::Vector4>* customData, ::UnityEngine::ParticleSystemCustomData streamIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*, ::UnityEngine::ParticleSystemCustomData))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETCUSTOMPARTICLEDATA_OFFSET))(this, customData, streamIndex);
		}

		::System::Void MoveParticleSystem(::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MOVEPARTICLESYSTEM_OFFSET))(this, offset);
		}

		::UnityEngine::ParticleSystem_PlaybackState GetPlaybackState()
		{
			return ((::UnityEngine::ParticleSystem_PlaybackState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPLAYBACKSTATE_OFFSET))(this);
		}

		::System::Void SetPlaybackState(::UnityEngine::ParticleSystem_PlaybackState playbackState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_PlaybackState))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPLAYBACKSTATE_OFFSET))(this, playbackState);
		}

		::System::Int64 GetComponentMemorySize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETCOMPONENTMEMORYSIZE_OFFSET))(this);
		}

		::System::Int64 GetStructMemorySize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETSTRUCTMEMORYSIZE_OFFSET))(this);
		}

		::System::Int64 GetCurveDataMemorySize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETCURVEDATAMEMORYSIZE_OFFSET))(this);
		}

		::System::Int64 GetParticleUnitMemorySize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLEUNITMEMORYSIZE_OFFSET))(this);
		}

		::System::Int64 GetParticleCapacity()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLECAPACITY_OFFSET))(this);
		}

		::System::Int64 GetParticleRealCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLEREALCOUNT_OFFSET))(this);
		}

		::System::Int64 GetParticleInitCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLEINITCOUNT_OFFSET))(this);
		}

		::System::Void GetTrailDataInternal(::UnityEngine::ParticleSystem_Trails& trailData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_Trails&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETTRAILDATAINTERNAL_OFFSET))(this, trailData);
		}

		::UnityEngine::ParticleSystem_Trails GetTrails()
		{
			return ((::UnityEngine::ParticleSystem_Trails(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETTRAILS_OFFSET))(this);
		}

		::System::Void SetTrails(::UnityEngine::ParticleSystem_Trails trailData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_Trails))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETTRAILS_OFFSET))(this, trailData);
		}

		::System::Void MoveTrails(::UnityEngine::Vector3 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MOVETRAILS_OFFSET))(this, offset);
		}

		::System::Void Simulate(::System::Single t, ::System::Boolean withChildren, ::System::Boolean restart, ::System::Boolean fixedTimeStep)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIMULATE_OFFSET))(this, t, withChildren, restart, fixedTimeStep);
		}

		::System::Void Simulate_1(::System::Single t, ::System::Boolean withChildren, ::System::Boolean restart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIMULATE_1_OFFSET))(this, t, withChildren, restart);
		}

		::System::Void Simulate_2(::System::Single t, ::System::Boolean withChildren)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIMULATE_2_OFFSET))(this, t, withChildren);
		}

		::System::Void Simulate_3(::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SIMULATE_3_OFFSET))(this, t);
		}

		::System::Void Play(::System::Boolean withChildren)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PLAY_OFFSET))(this, withChildren);
		}

		::System::Void Play_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PLAY_1_OFFSET))(this);
		}

		::System::Void Pause(::System::Boolean withChildren)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PAUSE_OFFSET))(this, withChildren);
		}

		::System::Void Pause_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_PAUSE_1_OFFSET))(this);
		}

		::System::Void Stop(::System::Boolean withChildren, ::UnityEngine::ParticleSystemStopBehavior stopBehavior)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::ParticleSystemStopBehavior))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_STOP_OFFSET))(this, withChildren, stopBehavior);
		}

		::System::Void Stop_1(::System::Boolean withChildren)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_STOP_1_OFFSET))(this, withChildren);
		}

		::System::Void Stop_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_STOP_2_OFFSET))(this);
		}

		::System::Void Clear(::System::Boolean withChildren)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CLEAR_OFFSET))(this, withChildren);
		}

		::System::Void Clear_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_CLEAR_1_OFFSET))(this);
		}

		::System::Boolean IsAlive(::System::Boolean withChildren)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ISALIVE_OFFSET))(this, withChildren);
		}

		::System::Boolean IsAlive_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_ISALIVE_1_OFFSET))(this);
		}

		::System::Void Emit_2(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_2_OFFSET))(this, count);
		}

		::System::Void Emit_Internal(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_INTERNAL_OFFSET))(this, count);
		}

		::System::Void Emit_3(::UnityEngine::ParticleSystem_EmitParams emitParams, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_EmitParams, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_3_OFFSET))(this, emitParams, count);
		}

		::System::Void EmitOld_Internal(::UnityEngine::ParticleSystem_Particle& particle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMITOLD_INTERNAL_OFFSET))(this, particle);
		}

		static ::System::Void DoParticleEmissionBeginEvent_Internal(::UnityEngine::ParticleSystem* ps)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_DOPARTICLEEMISSIONBEGINEVENT_INTERNAL_OFFSET))(ps);
		}

		static ::System::Void DoNewParticleEmissionEvent_Internal(::UnityEngine::ParticleSystem* ps)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_DONEWPARTICLEEMISSIONEVENT_INTERNAL_OFFSET))(ps);
		}

		::System::Void TriggerSubEmitter(::System::Int32 subEmitterIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_OFFSET))(this, subEmitterIndex);
		}

		::System::Void TriggerSubEmitter_1(::System::Int32 subEmitterIndex, ::UnityEngine::ParticleSystem_Particle& particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ParticleSystem_Particle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_1_OFFSET))(this, subEmitterIndex, particle);
		}

		::System::Void TriggerSubEmitterForParticle(::System::Int32 subEmitterIndex, ::UnityEngine::ParticleSystem_Particle particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ParticleSystem_Particle))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTERFORPARTICLE_OFFSET))(this, subEmitterIndex, particle);
		}

		::System::Void TriggerSubEmitter_2(::System::Int32 subEmitterIndex, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>* particles)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem_Particle>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTER_2_OFFSET))(this, subEmitterIndex, particles);
		}

		static ::System::Void ResetPreMappedBufferMemory()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_RESETPREMAPPEDBUFFERMEMORY_OFFSET))();
		}

		static ::System::Void SetMaximumPreMappedBufferCounts(::System::Int32 vertexBuffersCount, ::System::Int32 indexBuffersCount)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETMAXIMUMPREMAPPEDBUFFERCOUNTS_OFFSET))(vertexBuffersCount, indexBuffersCount);
		}

		static ::System::Int32 GetPremappedBufferDefaultCount(::System::Int32 bufferType)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPREMAPPEDBUFFERDEFAULTCOUNT_OFFSET))(bufferType);
		}

		static ::System::Void SetPremappedBufferDefaultCount(::System::Int32 bufferType, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPREMAPPEDBUFFERDEFAULTCOUNT_OFFSET))(bufferType, count);
		}

		static ::System::Int32 GetCurrentPremappedBufferCount(::System::Int32 bufferType)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETCURRENTPREMAPPEDBUFFERCOUNT_OFFSET))(bufferType);
		}

		static ::System::Int32 GetCurrentPremappedBufferSize(::System::Int32 bufferType)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETCURRENTPREMAPPEDBUFFERSIZE_OFFSET))(bufferType);
		}

		static ::System::Int32 GetCurrentPremappedBufferRequiredSize(::System::Int32 bufferType)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETCURRENTPREMAPPEDBUFFERREQUIREDSIZE_OFFSET))(bufferType);
		}

		static ::System::Single GetCurrentPremappedBufferOccupancy(::System::Int32 bufferType)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETCURRENTPREMAPPEDBUFFEROCCUPANCY_OFFSET))(bufferType);
		}

		static ::UnityEngine::ParticleSystem* InstanceIDToParticleSystem(::System::Int32 instanceID)
		{
			return ((::UnityEngine::ParticleSystem*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INSTANCEIDTOPARTICLESYSTEM_OFFSET))(instanceID);
		}

		::System::Void ForceUpdateParticleSystemLightsModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FORCEUPDATEPARTICLESYSTEMLIGHTSMODULE_OFFSET))(this);
		}

		static ::System::UInt32 GetParticleVertexCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLEVERTEXCOUNT_OFFSET))();
		}

		static ::System::UInt32 GetInstancedParticleVertexCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETINSTANCEDPARTICLEVERTEXCOUNT_OFFSET))();
		}

		static ::System::Int32 GetInstIdToVertexCountMapWithNativeArray(::Unity::Collections::NativeArray_1<::System::Int32>& instIdToVertexCountMapInArray)
		{
			return ((::System::Int32(*)(::Unity::Collections::NativeArray_1<::System::Int32>&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETINSTIDTOVERTEXCOUNTMAPWITHNATIVEARRAY_OFFSET))(instIdToVertexCountMapInArray);
		}

		static ::System::Int32 GetInstIdToVertexCountMapSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETINSTIDTOVERTEXCOUNTMAPSIZE_OFFSET))();
		}

		static ::System::Boolean FillInstIdToVertexCountMapToNativeArray(::System::Void* ptr, ::System::Int32 size)
		{
			return ((::System::Boolean(*)(::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_FILLINSTIDTOVERTEXCOUNTMAPTONATIVEARRAY_OFFSET))(ptr, size);
		}

		::System::Void* GetManagedJobData()
		{
			return ((::System::Void*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBDATA_OFFSET))(this);
		}

		::Unity::Jobs::JobHandle GetManagedJobHandle()
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBHANDLE_OFFSET))(this);
		}

		::System::Void SetManagedJobHandle(::Unity::Jobs::JobHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETMANAGEDJOBHANDLE_OFFSET))(this, handle);
		}

		static ::Unity::Jobs::JobHandle ScheduleManagedJob(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters, ::System::Void* additionalData)
		{
			return ((::Unity::Jobs::JobHandle(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SCHEDULEMANAGEDJOB_OFFSET))(parameters, additionalData);
		}

		static ::System::Void CopyManagedJobData(::System::Void* systemPtr, ::UnityEngine::ParticleSystemJobs::NativeParticleData& particleData)
		{
			return ((::System::Void(*)(::System::Void*, ::UnityEngine::ParticleSystemJobs::NativeParticleData&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_COPYMANAGEDJOBDATA_OFFSET))(systemPtr, particleData);
		}

		static ::System::Void Internal_Draw(::UnityEngine::ParticleSystemRenderer* renderer, ::UnityEngine::Material* material, ::UnityEngine::Material* trailMaterial, ::UnityEngine::Camera* camera, ::System::UInt32 renderingLayerMask)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystemRenderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::UnityEngine::Camera*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_INTERNAL_DRAW_OFFSET))(renderer, material, trailMaterial, camera, renderingLayerMask);
		}

		static ::System::Void Draw(::UnityEngine::ParticleSystemRenderer* renderer, ::UnityEngine::Material* material, ::UnityEngine::Material* trailMaterial, ::UnityEngine::Camera* camera, ::System::UInt32 renderingLayerMask)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystemRenderer*, ::UnityEngine::Material*, ::UnityEngine::Material*, ::UnityEngine::Camera*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_DRAW_OFFSET))(renderer, material, trailMaterial, camera, renderingLayerMask);
		}

		::UnityEngine::ParticleSystem_MainModule get_main()
		{
			return ((::UnityEngine::ParticleSystem_MainModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_MAIN_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_EmissionModule get_emission()
		{
			return ((::UnityEngine::ParticleSystem_EmissionModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_EMISSION_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_ShapeModule get_shape()
		{
			return ((::UnityEngine::ParticleSystem_ShapeModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SHAPE_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_VelocityOverLifetimeModule get_velocityOverLifetime()
		{
			return ((::UnityEngine::ParticleSystem_VelocityOverLifetimeModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_VELOCITYOVERLIFETIME_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule get_limitVelocityOverLifetime()
		{
			return ((::UnityEngine::ParticleSystem_LimitVelocityOverLifetimeModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_LIMITVELOCITYOVERLIFETIME_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_InheritVelocityModule get_inheritVelocity()
		{
			return ((::UnityEngine::ParticleSystem_InheritVelocityModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_INHERITVELOCITY_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_ForceOverLifetimeModule get_forceOverLifetime()
		{
			return ((::UnityEngine::ParticleSystem_ForceOverLifetimeModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_FORCEOVERLIFETIME_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_ColorOverLifetimeModule get_colorOverLifetime()
		{
			return ((::UnityEngine::ParticleSystem_ColorOverLifetimeModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_COLOROVERLIFETIME_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_ColorBySpeedModule get_colorBySpeed()
		{
			return ((::UnityEngine::ParticleSystem_ColorBySpeedModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_COLORBYSPEED_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_SizeOverLifetimeModule get_sizeOverLifetime()
		{
			return ((::UnityEngine::ParticleSystem_SizeOverLifetimeModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SIZEOVERLIFETIME_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_SizeBySpeedModule get_sizeBySpeed()
		{
			return ((::UnityEngine::ParticleSystem_SizeBySpeedModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SIZEBYSPEED_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_RotationOverLifetimeModule get_rotationOverLifetime()
		{
			return ((::UnityEngine::ParticleSystem_RotationOverLifetimeModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ROTATIONOVERLIFETIME_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_RotationBySpeedModule get_rotationBySpeed()
		{
			return ((::UnityEngine::ParticleSystem_RotationBySpeedModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_ROTATIONBYSPEED_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_ExternalForcesModule get_externalForces()
		{
			return ((::UnityEngine::ParticleSystem_ExternalForcesModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_EXTERNALFORCES_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_NoiseModule get_noise()
		{
			return ((::UnityEngine::ParticleSystem_NoiseModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_NOISE_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_CollisionModule get_collision()
		{
			return ((::UnityEngine::ParticleSystem_CollisionModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_COLLISION_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_TriggerModule get_trigger()
		{
			return ((::UnityEngine::ParticleSystem_TriggerModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_TRIGGER_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_SubEmittersModule get_subEmitters()
		{
			return ((::UnityEngine::ParticleSystem_SubEmittersModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_SUBEMITTERS_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_TextureSheetAnimationModule get_textureSheetAnimation()
		{
			return ((::UnityEngine::ParticleSystem_TextureSheetAnimationModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_TEXTURESHEETANIMATION_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_LightsModule get_lights()
		{
			return ((::UnityEngine::ParticleSystem_LightsModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_LIGHTS_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_TrailModule get_trails()
		{
			return ((::UnityEngine::ParticleSystem_TrailModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_TRAILS_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem_CustomDataModule get_customData()
		{
			return ((::UnityEngine::ParticleSystem_CustomDataModule(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GET_CUSTOMDATA_OFFSET))(this);
		}

		::System::Void GetParticleCurrentSize3D_Injected(::UnityEngine::ParticleSystem_Particle& particle, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTSIZE3D_INJECTED_OFFSET))(this, particle, ret);
		}

		::System::Void GetParticleCurrentColor_Injected(::UnityEngine::ParticleSystem_Particle& particle, ::UnityEngine::Color32& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_Particle&, ::UnityEngine::Color32&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPARTICLECURRENTCOLOR_INJECTED_OFFSET))(this, particle, ret);
		}

		::System::Void MoveParticleSystem_Injected(::UnityEngine::Vector3& offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MOVEPARTICLESYSTEM_INJECTED_OFFSET))(this, offset);
		}

		::System::Void GetPlaybackState_Injected(::UnityEngine::ParticleSystem_PlaybackState& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_PlaybackState&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETPLAYBACKSTATE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void SetPlaybackState_Injected(::UnityEngine::ParticleSystem_PlaybackState& playbackState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_PlaybackState&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETPLAYBACKSTATE_INJECTED_OFFSET))(this, playbackState);
		}

		::System::Void SetTrails_Injected(::UnityEngine::ParticleSystem_Trails& trailData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_Trails&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETTRAILS_INJECTED_OFFSET))(this, trailData);
		}

		::System::Void MoveTrails_Injected(::UnityEngine::Vector3& offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_MOVETRAILS_INJECTED_OFFSET))(this, offset);
		}

		::System::Void Emit_Injected(::UnityEngine::ParticleSystem_EmitParams& emitParams, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_EmitParams&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMIT_INJECTED_OFFSET))(this, emitParams, count);
		}

		::System::Void TriggerSubEmitterForParticle_Injected(::System::Int32 subEmitterIndex, ::UnityEngine::ParticleSystem_Particle& particle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ParticleSystem_Particle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRIGGERSUBEMITTERFORPARTICLE_INJECTED_OFFSET))(this, subEmitterIndex, particle);
		}

		::System::Void GetManagedJobHandle_Injected(::Unity::Jobs::JobHandle& ret)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_GETMANAGEDJOBHANDLE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void SetManagedJobHandle_Injected(::Unity::Jobs::JobHandle& handle)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SETMANAGEDJOBHANDLE_INJECTED_OFFSET))(this, handle);
		}

		static ::System::Void ScheduleManagedJob_Injected(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters& parameters, ::System::Void* additionalData, ::Unity::Jobs::JobHandle& ret)
		{
			return ((::System::Void(*)(::Unity::Jobs::LowLevel::Unsafe::JobsUtility_JobScheduleParameters&, ::System::Void*, ::Unity::Jobs::JobHandle&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_SCHEDULEMANAGEDJOB_INJECTED_OFFSET))(parameters, additionalData, ret);
		}
	};
}
