#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraDecalRaycast_DecalResultState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_977C244C3A57E250;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CAMERADECALRAYCAST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E5A1D0)
#define RPG_CLIENT_CAMERADECALRAYCAST_GETDEPTHSAMPLE_OFFSET UNITYSDK_OFFSET(0x8E5CAC0)
#define RPG_CLIENT_CAMERADECALRAYCAST_GETHITGAMEOBJECTARRAYCOPY_OFFSET UNITYSDK_OFFSET(0x8E5C0A0)
#define RPG_CLIENT_CAMERADECALRAYCAST_GETREFPOINTS_OFFSET UNITYSDK_OFFSET(0x8E5C190)
#define RPG_CLIENT_CAMERADECALRAYCAST_GETSAMPLEUVS_OFFSET UNITYSDK_OFFSET(0x8E5C1D0)
#define RPG_CLIENT_CAMERADECALRAYCAST_RESET_OFFSET UNITYSDK_OFFSET(0x8E59FD0)
#define RPG_CLIENT_CAMERADECALRAYCAST_TRYGETDECALPOSANDDIR_OFFSET UNITYSDK_OFFSET(0x8E5A270)
#define RPG_CLIENT_CAMERADECALRAYCAST__CALDEPTHVARSUM_OFFSET UNITYSDK_OFFSET(0x8E5AEF0)
#define RPG_CLIENT_CAMERADECALRAYCAST__CCTOR_OFFSET UNITYSDK_OFFSET(0x8E5CEC0)
#define RPG_CLIENT_CAMERADECALRAYCAST__CTOR_OFFSET UNITYSDK_OFFSET(0x8E5CE70)
#define RPG_CLIENT_CAMERADECALRAYCAST__GETEVGCENTERPOS_OFFSET UNITYSDK_OFFSET(0x8E5CB00)
#define RPG_CLIENT_CAMERADECALRAYCAST__GETEVGDECALFORWARD_OFFSET UNITYSDK_OFFSET(0x8E5BE70)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDecalRaycast_TypeDefinitionIndex = 50050;

	class CameraDecalRaycast : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_DECAL_CAST_RAY_SAMPLE_SPLIT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CameraDecalRaycast_TypeDefinitionIndex)->GetStaticField(0xE890);
		}
		static ::System::Int32* StaticGet_DECAL_CENTER_DEPTH_SAMPLE_COUNT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CameraDecalRaycast_TypeDefinitionIndex)->GetStaticField(0xE894);
		}
		::UnityEngine::Transform* _CameraTargetTrans; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* _RefPoints; // 0x18
		::UnityEngine::Camera* _TargetCamera; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* _HitNormals; // 0x28
		::Il2CppArray<::UnityEngine::Ray>* _DecalRayArray; // 0x30
		::Class_1_977C244C3A57E250* _DepthSampleModule; // 0x38
		::UnityEngine::Collider* HitCollider; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _HitGameObjectList; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* _SampleUVs; // 0x50
		::Il2CppArray<::UnityEngine::Vector3>* _HitPoints; // 0x58
		::Il2CppArray<::System::Single>* _DepthVars; // 0x60
		::UnityEngine::Vector3 DecalCenterPos; // 0x68
		::System::Single PI4; // 0x74
		::System::Single DecalHeight; // 0x78
		::System::Single MaxDepthVariance; // 0x7C
		::UnityEngine::Vector3 DecalForward; // 0x80
		::System::Single DepthBufferSampleRadiusRatio; // 0x8C
		::System::Single MaxDepthTestVariance; // 0x90
		::RPG::Client::CameraDecalRaycast_DecalResultState ResultState; // 0x94
		::System::Single _Sin45; // 0x98
		::UnityEngine::RaycastHit _CenterHit; // 0x9C
		::System::Single DecalWidth; // 0xCC
		::UnityEngine::Vector3 DecalRight; // 0xD0
		::System::Single MaxRaycastLength; // 0xDC
		::System::Boolean CanRayCast; // 0xE0
		::System::Int32 _DecalCastRayCount; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST__CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST_DISPOSE_OFFSET))(this);
		}

		::System::Boolean TryGetDecalPosAndDir()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST_TRYGETDECALPOSANDDIR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::GameObject*>* GetHitGameObjectArrayCopy()
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST_GETHITGAMEOBJECTARRAYCOPY_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetRefPoints()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST_GETREFPOINTS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetSampleUVs()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST_GETSAMPLEUVS_OFFSET))(this);
		}

		::Class_1_977C244C3A57E250* GetDepthSample()
		{
			return ((::Class_1_977C244C3A57E250*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST_GETDEPTHSAMPLE_OFFSET))(this);
		}

		::System::Single _CalDepthVarSum(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 normal)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST__CALDEPTHVARSUM_OFFSET))(this, center, normal);
		}

		::UnityEngine::Vector3 _GetEvgCenterPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST__GETEVGCENTERPOS_OFFSET))(this);
		}

		::System::Void _GetEvgDecalForward(::UnityEngine::Vector3& center)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST__GETEVGDECALFORWARD_OFFSET))(this, center);
		}
	};
}
