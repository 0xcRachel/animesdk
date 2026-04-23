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

#define RPG_CLIENT_CAMERADECALRAYCAST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E237D0)
#define RPG_CLIENT_CAMERADECALRAYCAST_GETDEPTHSAMPLE_OFFSET UNITYSDK_OFFSET(0x15E26160)
#define RPG_CLIENT_CAMERADECALRAYCAST_GETHITGAMEOBJECTARRAYCOPY_OFFSET UNITYSDK_OFFSET(0x15E25750)
#define RPG_CLIENT_CAMERADECALRAYCAST_GETREFPOINTS_OFFSET UNITYSDK_OFFSET(0x15E25840)
#define RPG_CLIENT_CAMERADECALRAYCAST_GETSAMPLEUVS_OFFSET UNITYSDK_OFFSET(0x15E25880)
#define RPG_CLIENT_CAMERADECALRAYCAST_RESET_OFFSET UNITYSDK_OFFSET(0x15E235D0)
#define RPG_CLIENT_CAMERADECALRAYCAST_TRYGETDECALPOSANDDIR_OFFSET UNITYSDK_OFFSET(0x15E23880)
#define RPG_CLIENT_CAMERADECALRAYCAST__CALDEPTHVARSUM_OFFSET UNITYSDK_OFFSET(0x15E24540)
#define RPG_CLIENT_CAMERADECALRAYCAST__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E26560)
#define RPG_CLIENT_CAMERADECALRAYCAST__CTOR_OFFSET UNITYSDK_OFFSET(0x15E26510)
#define RPG_CLIENT_CAMERADECALRAYCAST__GETEVGCENTERPOS_OFFSET UNITYSDK_OFFSET(0x15E261A0)
#define RPG_CLIENT_CAMERADECALRAYCAST__GETEVGDECALFORWARD_OFFSET UNITYSDK_OFFSET(0x15E25520)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDecalRaycast_TypeDefinitionIndex = 58103;

	class CameraDecalRaycast : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_DECAL_CENTER_DEPTH_SAMPLE_COUNT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CameraDecalRaycast_TypeDefinitionIndex)->GetStaticField(0xFA00);
		}
		static ::System::Int32* StaticGet_DECAL_CAST_RAY_SAMPLE_SPLIT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CameraDecalRaycast_TypeDefinitionIndex)->GetStaticField(0xFA04);
		}
		::Il2CppArray<::UnityEngine::Vector3>* _HitPoints; // 0x10
		::Il2CppArray<::System::Single>* _DepthVars; // 0x18
		::UnityEngine::Collider* HitCollider; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* _SampleUVs; // 0x28
		::Il2CppArray<::UnityEngine::Vector3>* _RefPoints; // 0x30
		::Class_1_977C244C3A57E250* _DepthSampleModule; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _HitGameObjectList; // 0x40
		::Il2CppArray<::UnityEngine::Ray>* _DecalRayArray; // 0x48
		::UnityEngine::Transform* _CameraTargetTrans; // 0x50
		::UnityEngine::Camera* _TargetCamera; // 0x58
		::Il2CppArray<::UnityEngine::Vector3>* _HitNormals; // 0x60
		::System::Boolean CanRayCast; // 0x68
		::System::Single MaxRaycastLength; // 0x6C
		::UnityEngine::RaycastHit _CenterHit; // 0x70
		::System::Single DepthBufferSampleRadiusRatio; // 0xA0
		::System::Int32 _DecalCastRayCount; // 0xA4
		::System::Single PI4; // 0xA8
		::UnityEngine::Vector3 DecalRight; // 0xAC
		::UnityEngine::Vector3 DecalForward; // 0xB8
		::System::Single DecalWidth; // 0xC4
		::System::Single MaxDepthVariance; // 0xC8
		::RPG::Client::CameraDecalRaycast_DecalResultState ResultState; // 0xCC
		::System::Single MaxDepthTestVariance; // 0xD0
		::UnityEngine::Vector3 DecalCenterPos; // 0xD4
		::System::Single _Sin45; // 0xE0
		::System::Single DecalHeight; // 0xE4

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
