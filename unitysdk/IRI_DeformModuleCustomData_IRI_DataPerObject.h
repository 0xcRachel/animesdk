#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9F894095DD9D92C8_ModuleCustomData.h"
#include "unitysdk/System/ValueType.h"

class IRI_DeformModuleCustomData;
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }

#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MAT_OFFSET UNITYSDK_OFFSET(0x145D4D0)
#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MESH_OFFSET UNITYSDK_OFFSET(0x145D4C0)
#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MODULESIZE_OFFSET UNITYSDK_OFFSET(0x145D530)
#define IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_METHOD_2_65F4D176AD70D378_OFFSET UNITYSDK_OFFSET(0x145D550)

inline static constexpr unsigned int IRI_DeformModuleCustomData_IRI_DataPerObject_TypeDefinitionIndex = 37123;

struct alignas(8) IRI_DeformModuleCustomData_IRI_DataPerObject
{
	::UnityEngine::MeshRenderer* Target; // 0x10
	::Class_1_9F894095DD9D92C8_ModuleCustomData ModuleCustomData; // 0x18
	::IRI_DeformModuleCustomData* Parent; // 0x78

	::UnityEngine::Mesh* get_Mesh()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MESH_OFFSET))(this);
	}

	::UnityEngine::Material* get_Mat()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MAT_OFFSET))(this);
	}

	/*
	::UnityEngine::Vector3 get_ModuleSize()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_GET_MODULESIZE_OFFSET))(this);
	}
	*/

	::System::Void Method_2_65F4D176AD70D378()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_DEFORMMODULECUSTOMDATA_IRI_DATAPEROBJECT_METHOD_2_65F4D176AD70D378_OFFSET))(this);
	}
};
