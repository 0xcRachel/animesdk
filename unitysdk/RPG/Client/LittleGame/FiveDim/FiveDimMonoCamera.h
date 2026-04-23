#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoCamera.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_47EE63CB5C4DC8FC_5;
class Class_2_0A005A6B9D1208E3_Class_1_04D5EA2AB17D71E6;
class Class_2_A037C38274F8726A_Class_1_DDD37C71842B400C;
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETASPECT_OFFSET UNITYSDK_OFFSET(0x158FA790)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETENTITY_OFFSET UNITYSDK_OFFSET(0x158FA0E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETFOLLOW_OFFSET UNITYSDK_OFFSET(0x158FA120)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETFOV_OFFSET UNITYSDK_OFFSET(0x158EE380)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETLENSSETTINGS_OFFSET UNITYSDK_OFFSET(0x158FA6A0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETLOOKAT_OFFSET UNITYSDK_OFFSET(0x158FA1B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETVIRTUALCAMERATRANSFORM_OFFSET UNITYSDK_OFFSET(0x158FA8E0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x158EE4B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x158F9A40)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x158FA4B0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISINBLEND_OFFSET UNITYSDK_OFFSET(0x158FA240)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISLIVE_OFFSET UNITYSDK_OFFSET(0x158FA3D0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_METHOD_7_43A478BA01FE29B7_OFFSET UNITYSDK_OFFSET(0x158F9C30)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_RELEASE_OFFSET UNITYSDK_OFFSET(0x158EDDD0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_SETFOV_OFFSET UNITYSDK_OFFSET(0x158FA820)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x158E85E0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimMonoCamera_TypeDefinitionIndex = 70573;

	class FiveDimMonoCamera : public ::RPG::Client::LittleGame::BaseMonoCamera
	{
	public:
		::Cinemachine::CinemachineVirtualCameraBase* VirtualCamera; // 0x20
		::Class_2_A037C38274F8726A_Class_1_DDD37C71842B400C* Field_7_1; // 0x28
		::Class_2_0A005A6B9D1208E3_Class_1_04D5EA2AB17D71E6* Field_7_2; // 0x30
		::Entitas::IEntity* Field_7_3; // 0x38
		::UnityEngine::Quaternion Field_7_4; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Entitas::IContext* a1, ::Class_1_47EE63CB5C4DC8FC_5* a2, ::Entitas::IEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Class_1_47EE63CB5C4DC8FC_5*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Release(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_RELEASE_OFFSET))(this, a1);
		}

		::Entitas::IEntity* GetEntity()
		{
			return ((::Entitas::IEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETENTITY_OFFSET))(this);
		}

		::UnityEngine::Transform* GetFollow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETFOLLOW_OFFSET))(this);
		}

		::UnityEngine::Transform* GetLookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETLOOKAT_OFFSET))(this);
		}

		::System::Boolean IsInBlend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISINBLEND_OFFSET))(this);
		}

		::System::Boolean IsLive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISLIVE_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_ISACTIVE_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCameraBase* GetVirtualCamera()
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETVIRTUALCAMERA_OFFSET))(this);
		}

		::Cinemachine::LensSettings GetLensSettings()
		{
			return ((::Cinemachine::LensSettings(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETLENSSETTINGS_OFFSET))(this);
		}

		::System::Single GetFov()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETFOV_OFFSET))(this);
		}

		::System::Single GetAspect()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETASPECT_OFFSET))(this);
		}

		::System::Void SetFov(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_SETFOV_OFFSET))(this, a1);
		}

		::Struct_2_EAC1BB0F093534A5 GetVirtualCameraTransform()
		{
			return ((::Struct_2_EAC1BB0F093534A5(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_GETVIRTUALCAMERATRANSFORM_OFFSET))(this);
		}

		::System::Void Method_7_43A478BA01FE29B7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMMONOCAMERA_METHOD_7_43A478BA01FE29B7_OFFSET))(this);
		}
	};
}
