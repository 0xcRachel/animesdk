#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define EZYSLICE_SLICEDHULL_CREATEEMPTYOBJECT_OFFSET UNITYSDK_OFFSET(0x83EA0A0)
#define EZYSLICE_SLICEDHULL_CREATELOWERHULL_1_OFFSET UNITYSDK_OFFSET(0x83E9AA0)
#define EZYSLICE_SLICEDHULL_CREATELOWERHULL_2_OFFSET UNITYSDK_OFFSET(0x83E9FF0)
#define EZYSLICE_SLICEDHULL_CREATELOWERHULL_OFFSET UNITYSDK_OFFSET(0x83E9A90)
#define EZYSLICE_SLICEDHULL_CREATEUPPERHULL_1_OFFSET UNITYSDK_OFFSET(0x83E9490)
#define EZYSLICE_SLICEDHULL_CREATEUPPERHULL_2_OFFSET UNITYSDK_OFFSET(0x83E99E0)
#define EZYSLICE_SLICEDHULL_CREATEUPPERHULL_OFFSET UNITYSDK_OFFSET(0x83E9480)
#define EZYSLICE_SLICEDHULL_GET_LOWERHULL_OFFSET UNITYSDK_OFFSET(0x83EA140)
#define EZYSLICE_SLICEDHULL_GET_UPPERHULL_OFFSET UNITYSDK_OFFSET(0x83EA130)
#define EZYSLICE_SLICEDHULL__CTOR_OFFSET UNITYSDK_OFFSET(0x83E9470)

namespace EzySlice
{
	inline static constexpr unsigned int SlicedHull_TypeDefinitionIndex = 37940;

	class SlicedHull : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* upper_hull; // 0x10
		::UnityEngine::Mesh* lower_hull; // 0x18

		::System::Void _ctor(::UnityEngine::Mesh* upperHull, ::UnityEngine::Mesh* lowerHull)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL__CTOR_OFFSET))(this, upperHull, lowerHull);
		}

		::UnityEngine::GameObject* CreateUpperHull(::UnityEngine::GameObject* original)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_CREATEUPPERHULL_OFFSET))(this, original);
		}

		::UnityEngine::GameObject* CreateUpperHull_1(::UnityEngine::GameObject* original, ::UnityEngine::Material* crossSectionMat)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_CREATEUPPERHULL_1_OFFSET))(this, original, crossSectionMat);
		}

		::UnityEngine::GameObject* CreateLowerHull(::UnityEngine::GameObject* original)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_CREATELOWERHULL_OFFSET))(this, original);
		}

		::UnityEngine::GameObject* CreateLowerHull_1(::UnityEngine::GameObject* original, ::UnityEngine::Material* crossSectionMat)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_CREATELOWERHULL_1_OFFSET))(this, original, crossSectionMat);
		}

		::UnityEngine::GameObject* CreateUpperHull_2()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_CREATEUPPERHULL_2_OFFSET))(this);
		}

		::UnityEngine::GameObject* CreateLowerHull_2()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_CREATELOWERHULL_2_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_upperHull()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_GET_UPPERHULL_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_lowerHull()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_GET_LOWERHULL_OFFSET))(this);
		}

		static ::UnityEngine::GameObject* CreateEmptyObject(::System::String* name, ::UnityEngine::Mesh* hull)
		{
			return ((::UnityEngine::GameObject*(*)(::System::String*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + EZYSLICE_SLICEDHULL_CREATEEMPTYOBJECT_OFFSET))(name, hull);
		}
	};
}
