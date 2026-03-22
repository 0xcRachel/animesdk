#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONODIRECTIONDISSOLVE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x97988F0)
#define RPG_CLIENT_MONODIRECTIONDISSOLVE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9796CF0)
#define RPG_CLIENT_MONODIRECTIONDISSOLVE_UPDATEMATERIAL_OFFSET UNITYSDK_OFFSET(0x9798250)
#define RPG_CLIENT_MONODIRECTIONDISSOLVE_UPDATE_OFFSET UNITYSDK_OFFSET(0x97978E0)
#define RPG_CLIENT_MONODIRECTIONDISSOLVE__CCTOR_OFFSET UNITYSDK_OFFSET(0x9798AF0)
#define RPG_CLIENT_MONODIRECTIONDISSOLVE__CHECKTICK_OFFSET UNITYSDK_OFFSET(0x9797F60)
#define RPG_CLIENT_MONODIRECTIONDISSOLVE__CLOSEDISSOLVE_OFFSET UNITYSDK_OFFSET(0x9797CA0)
#define RPG_CLIENT_MONODIRECTIONDISSOLVE__CTOR_OFFSET UNITYSDK_OFFSET(0x9798AE0)
#define RPG_CLIENT_MONODIRECTIONDISSOLVE__INCAMERA_OFFSET UNITYSDK_OFFSET(0x9797EF0)
#define RPG_CLIENT_MONODIRECTIONDISSOLVE__OPENDISSOLVE_OFFSET UNITYSDK_OFFSET(0x9797970)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDirectionDissolve_TypeDefinitionIndex = 55566;

	class MonoDirectionDissolve : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__DirectionDissolveParamsShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoDirectionDissolve_TypeDefinitionIndex)->GetStaticField(0xD200);
		}
		static ::System::Int32* StaticGet__DirectionDissolveDirectionShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoDirectionDissolve_TypeDefinitionIndex)->GetStaticField(0xD204);
		}
		static ::System::Int32* StaticGet__UseDirectionDissolveShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoDirectionDissolve_TypeDefinitionIndex)->GetStaticField(0xD208);
		}
		static ::System::Int32* StaticGet__DirectionDissolveCenterShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoDirectionDissolve_TypeDefinitionIndex)->GetStaticField(0xD20C);
		}
		static ::System::Int32* StaticGet__DissoveOnShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoDirectionDissolve_TypeDefinitionIndex)->GetStaticField(0xD210);
		}
		static ::System::Int32* StaticGet__SimpEmissionOnShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoDirectionDissolve_TypeDefinitionIndex)->GetStaticField(0xD214);
		}
		static ::System::Int32* StaticGet__DissolveOnShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoDirectionDissolve_TypeDefinitionIndex)->GetStaticField(0xD218);
		}
		::System::Single _TickCount; // 0x18
		::System::Boolean EnableDissolve; // 0x1C
		::System::Boolean DissolveInited; // 0x1D
		::UnityEngine::Transform* DissolveTargetPlanet; // 0x20
		::System::Boolean UpdateAlways; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _InstancedMaterialsList; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _NewInstancedMaterialsList; // 0x38
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Renderer*, ::Il2CppArray<::UnityEngine::Material*>*>* _SharedMaterialsList; // 0x40
		::System::Collections::Generic::List_1<::System::Single>* _EnableDissolve; // 0x48
		::System::Collections::Generic::List_1<::System::Boolean>* _KeywordEnabled; // 0x50
		::UnityEngine::Bounds _Bounds; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODIRECTIONDISSOLVE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODIRECTIONDISSOLVE__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODIRECTIONDISSOLVE_ONENABLE_OFFSET))(this);
		}

		::System::Void _OpenDissolve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODIRECTIONDISSOLVE__OPENDISSOLVE_OFFSET))(this);
		}

		::System::Void _CloseDissolve()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODIRECTIONDISSOLVE__CLOSEDISSOLVE_OFFSET))(this);
		}

		::System::Boolean _InCamera(::UnityEngine::Camera* camera)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODIRECTIONDISSOLVE__INCAMERA_OFFSET))(this, camera);
		}

		::System::Boolean _CheckTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODIRECTIONDISSOLVE__CHECKTICK_OFFSET))(this);
		}

		::System::Void UpdateMaterial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODIRECTIONDISSOLVE_UPDATEMATERIAL_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODIRECTIONDISSOLVE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONODIRECTIONDISSOLVE_ONDISABLE_OFFSET))(this);
		}
	};
}
