#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/VolumetricCloudLayerData.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1A54A070)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_GET_CLOUDMAT_OFFSET UNITYSDK_OFFSET(0x1A5498F0)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_GET_HEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1A5499E0)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_GET_VALID_OFFSET UNITYSDK_OFFSET(0x1A549910)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_GET_WEATHERTEX_OFFSET UNITYSDK_OFFSET(0x1A549930)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_GET_WINDDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A549B10)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_GET_WINDSPEED_OFFSET UNITYSDK_OFFSET(0x1A549B90)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A54A010)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1A549F10)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A549F00)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A549FB0)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A549FC0)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_SET_CLOUDMAT_OFFSET UNITYSDK_OFFSET(0x1A549900)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_SET_HEIGHTMAP_OFFSET UNITYSDK_OFFSET(0x1A549A70)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_SET_WEATHERTEX_OFFSET UNITYSDK_OFFSET(0x1A549980)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1A54A060)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_START_OFFSET UNITYSDK_OFFSET(0x1A549BE0)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_UPDATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1A5498E0)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A549EF0)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER__ADDCLOUDLAYER_OFFSET UNITYSDK_OFFSET(0x1A549BF0)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A54A1B0)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER__GETINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1A54A0C0)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER__REMOVE_OFFSET UNITYSDK_OFFSET(0x1A549F60)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int VolumetricCloudLayer_TypeDefinitionIndex = 35124;

	class VolumetricCloudLayer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector3 Scale; // 0x18
		::UnityEngine::Vector3 ScaleForTrace; // 0x24
		::UnityEngine::Vector3 CenterForTrace; // 0x30
		::UnityEngine::Material* _cloudMat; // 0x40
		::UnityEngine::Transform* _Trans; // 0x48
		::UnityEngine::GameObject* _go; // 0x50
		::UnityEngine::Rendering::VolumetricCloudLayerData _crpData; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_UPDATEPARAMETERS_OFFSET))(this);
		}

		::UnityEngine::Material* get_CloudMat()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_GET_CLOUDMAT_OFFSET))(this);
		}

		::System::Void set_CloudMat(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_SET_CLOUDMAT_OFFSET))(this, value);
		}

		::System::Boolean get_Valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_GET_VALID_OFFSET))(this);
		}

		::UnityEngine::Texture* get_WeatherTex()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_GET_WEATHERTEX_OFFSET))(this);
		}

		::System::Void set_WeatherTex(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_SET_WEATHERTEX_OFFSET))(this, value);
		}

		::UnityEngine::Texture* get_Heightmap()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_GET_HEIGHTMAP_OFFSET))(this);
		}

		::System::Void set_Heightmap(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_SET_HEIGHTMAP_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_WindDirection()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_GET_WINDDIRECTION_OFFSET))(this);
		}

		::System::Single get_WindSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_GET_WINDSPEED_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_UPDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER_DESPAWNED_OFFSET))(this);
		}

		::System::Void _AddCloudLayer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER__ADDCLOUDLAYER_OFFSET))(this);
		}

		::System::Int32 _GetInstanceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER__GETINSTANCEID_OFFSET))(this);
		}

		::System::Void _Remove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDLAYER__REMOVE_OFFSET))(this);
		}
	};
}
