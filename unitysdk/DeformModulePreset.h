#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class Renderer; }

#define DEFORMMODULEPRESET_GET_IFDISABLEAUTOADJUST_OFFSET UNITYSDK_OFFSET(0xB2BD600)
#define DEFORMMODULEPRESET_SET_IFDISABLEAUTOADJUST_OFFSET UNITYSDK_OFFSET(0xB2BD610)
#define DEFORMMODULEPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0xB2BD620)

inline static constexpr unsigned int DeformModulePreset_TypeDefinitionIndex = 37113;

class DeformModulePreset : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Vector3 ModuleSize; // 0x18
	::UnityEngine::MaterialPropertyBlock* Field_5_1; // 0x28
	::UnityEngine::Renderer* Field_5_2; // 0x30
	::UnityEngine::MeshFilter* Field_5_3; // 0x38
	::System::String* InfoText; // 0x40
	::System::Boolean _IfDisableAutoAdjust_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFORMMODULEPRESET__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IfDisableAutoAdjust()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DEFORMMODULEPRESET_GET_IFDISABLEAUTOADJUST_OFFSET))(this);
	}

	::System::Void set_IfDisableAutoAdjust(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DEFORMMODULEPRESET_SET_IFDISABLEAUTOADJUST_OFFSET))(this, value);
	}
};
