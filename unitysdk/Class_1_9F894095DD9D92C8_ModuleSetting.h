#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9F894095DD9D92C8_LinearModuleType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

inline static constexpr unsigned int Class_1_9F894095DD9D92C8_ModuleSetting_TypeDefinitionIndex = 38636;

struct alignas(8) Class_1_9F894095DD9D92C8_ModuleSetting
{
	::System::String* Name; // 0x10
	::UnityEngine::Mesh* Mesh; // 0x18
	::System::Int32 SubMeshIndex; // 0x20
	::UnityEngine::Material* Mat; // 0x28
	::UnityEngine::Vector3 ModuleSize; // 0x30
	::System::Single SideOffset; // 0x3C
	::System::Single StartOffset; // 0x40
	::System::Single EndOffset; // 0x44
	::System::Single NormalOffset; // 0x48
	::UnityEngine::Bounds Bounds; // 0x4C
	::Class_1_9F894095DD9D92C8_LinearModuleType ModuleType; // 0x64
	::System::Boolean IfReverse; // 0x68
	::System::Boolean IfDoubleSide; // 0x69
	::System::Boolean IfNeedStartModule; // 0x6A
	::UnityEngine::GameObject* StartModule; // 0x70
	::System::Boolean IfNeedEndModule; // 0x78
	::UnityEngine::GameObject* EndModule; // 0x80
	::System::Boolean IfInterruptByPedestrian; // 0x88
};
