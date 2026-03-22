#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_PROJECTOR_GET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x18218580)
#define UNITYENGINE_PROJECTOR_GET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x18218540)
#define UNITYENGINE_PROJECTOR_GET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x18218560)
#define UNITYENGINE_PROJECTOR_GET_IGNORELAYERS_OFFSET UNITYSDK_OFFSET(0x182185E0)
#define UNITYENGINE_PROJECTOR_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x18218600)
#define UNITYENGINE_PROJECTOR_GET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x18218520)
#define UNITYENGINE_PROJECTOR_GET_ORTHOGRAPHICSIZE_OFFSET UNITYSDK_OFFSET(0x182185C0)
#define UNITYENGINE_PROJECTOR_GET_ORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0x182185A0)
#define UNITYENGINE_PROJECTOR_SET_ASPECTRATIO_OFFSET UNITYSDK_OFFSET(0x18218590)
#define UNITYENGINE_PROJECTOR_SET_FARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x18218550)
#define UNITYENGINE_PROJECTOR_SET_FIELDOFVIEW_OFFSET UNITYSDK_OFFSET(0x18218570)
#define UNITYENGINE_PROJECTOR_SET_IGNORELAYERS_OFFSET UNITYSDK_OFFSET(0x182185F0)
#define UNITYENGINE_PROJECTOR_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x18218610)
#define UNITYENGINE_PROJECTOR_SET_NEARCLIPPLANE_OFFSET UNITYSDK_OFFSET(0x18218530)
#define UNITYENGINE_PROJECTOR_SET_ORTHOGRAPHICSIZE_OFFSET UNITYSDK_OFFSET(0x182185D0)
#define UNITYENGINE_PROJECTOR_SET_ORTHOGRAPHIC_OFFSET UNITYSDK_OFFSET(0x182185B0)
#define UNITYENGINE_PROJECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18218620)

namespace UnityEngine
{
	inline static constexpr unsigned int Projector_TypeDefinitionIndex = 3929;

	class Projector : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR__CTOR_OFFSET))(this);
		}

		::System::Single get_nearClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_NEARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_nearClipPlane(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_SET_NEARCLIPPLANE_OFFSET))(this, value);
		}

		::System::Single get_farClipPlane()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_FARCLIPPLANE_OFFSET))(this);
		}

		::System::Void set_farClipPlane(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_SET_FARCLIPPLANE_OFFSET))(this, value);
		}

		::System::Single get_fieldOfView()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_FIELDOFVIEW_OFFSET))(this);
		}

		::System::Void set_fieldOfView(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_SET_FIELDOFVIEW_OFFSET))(this, value);
		}

		::System::Single get_aspectRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_ASPECTRATIO_OFFSET))(this);
		}

		::System::Void set_aspectRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_SET_ASPECTRATIO_OFFSET))(this, value);
		}

		::System::Boolean get_orthographic()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_ORTHOGRAPHIC_OFFSET))(this);
		}

		::System::Void set_orthographic(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_SET_ORTHOGRAPHIC_OFFSET))(this, value);
		}

		::System::Single get_orthographicSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_ORTHOGRAPHICSIZE_OFFSET))(this);
		}

		::System::Void set_orthographicSize(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_SET_ORTHOGRAPHICSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_ignoreLayers()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_IGNORELAYERS_OFFSET))(this);
		}

		::System::Void set_ignoreLayers(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_SET_IGNORELAYERS_OFFSET))(this, value);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROJECTOR_SET_MATERIAL_OFFSET))(this, value);
		}
	};
}
