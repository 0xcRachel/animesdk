#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class CanvasRenderer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LONGTEXT_SUBTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16940230)

namespace RPG::Client
{
	inline static constexpr unsigned int LongText_SubText_TypeDefinitionIndex = 66864;

	class LongText_SubText : public ::System::Object
	{
	public:
		::UnityEngine::CanvasRenderer* renderer; // 0x10
		::UnityEngine::GameObject* go; // 0x18

		::System::Void _ctor(::UnityEngine::Transform* parent, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGTEXT_SUBTEXT__CTOR_OFFSET))(this, parent, index);
		}
	};
}
