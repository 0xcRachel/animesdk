#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9F894095DD9D92C8_ModuleCustomData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define CLASS_1_9F894095DD9D92C8_MODULEDATA_GET_MAT_OFFSET UNITYSDK_OFFSET(0x145C810)
#define CLASS_1_9F894095DD9D92C8_MODULEDATA_GET_MESH_OFFSET UNITYSDK_OFFSET(0x145C7E0)
#define CLASS_1_9F894095DD9D92C8_MODULEDATA_GET_SUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0x145C7F0)
#define CLASS_1_9F894095DD9D92C8_MODULEDATA_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x145C820)
#define CLASS_1_9F894095DD9D92C8_MODULEDATA_SET_SUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0x145C800)

inline static constexpr unsigned int Class_1_9F894095DD9D92C8_ModuleData_TypeDefinitionIndex = 38638;

struct alignas(8) Class_1_9F894095DD9D92C8_ModuleData
{
	::UnityEngine::GameObject* TargetModule; // 0x10
	::UnityEngine::Vector3 ModuleSize; // 0x18
	::Class_1_9F894095DD9D92C8_ModuleCustomData ModuleCustomData; // 0x24
	::System::Boolean IfNeedStartModule; // 0x80
	::UnityEngine::GameObject* StartModule; // 0x88
	::System::Boolean IfNeedEndModule; // 0x90
	::UnityEngine::GameObject* EndModule; // 0x98
	::System::Int32 _SubMeshIndex_k__BackingField; // 0xA0

	::UnityEngine::Mesh* get_Mesh()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F894095DD9D92C8_MODULEDATA_GET_MESH_OFFSET))(this);
	}

	::System::Int32 get_SubMeshIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F894095DD9D92C8_MODULEDATA_GET_SUBMESHINDEX_OFFSET))(this);
	}

	::System::Void set_SubMeshIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9F894095DD9D92C8_MODULEDATA_SET_SUBMESHINDEX_OFFSET))(this, value);
	}

	::UnityEngine::Material* get_Mat()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F894095DD9D92C8_MODULEDATA_GET_MAT_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F894095DD9D92C8_MODULEDATA_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}
};
