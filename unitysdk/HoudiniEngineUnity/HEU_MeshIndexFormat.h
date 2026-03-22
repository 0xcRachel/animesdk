#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/IndexFormat.h"

namespace UnityEngine { class Mesh; }

#define HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT_CALCULATEINDEXFORMAT_OFFSET UNITYSDK_OFFSET(0x8121250)
#define HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT_SETFORMATFORMESH_OFFSET UNITYSDK_OFFSET(0x81212D0)
#define HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT__CTOR_OFFSET UNITYSDK_OFFSET(0x8121300)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_MeshIndexFormat_TypeDefinitionIndex = 36895;

	class HEU_MeshIndexFormat : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::IndexFormat _indexFormat; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT__CTOR_OFFSET))(this);
		}

		::System::Void CalculateIndexFormat(::System::Int32 numVertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT_CALCULATEINDEXFORMAT_OFFSET))(this, numVertices);
		}

		::System::Void SetFormatForMesh(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_MESHINDEXFORMAT_SETFORMATFORMESH_OFFSET))(this, mesh);
		}
	};
}
