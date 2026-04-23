#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"

namespace RPG { class OutlinePostFXBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E92B03EF54C2343_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1558AA90)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E92B03EF54C2343_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1558A8B0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E92B03EF54C2343__CTOR_OFFSET UNITYSDK_OFFSET(0x15589890)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXBehavior_Class_1_0E92B03EF54C2343_TypeDefinitionIndex = 47780;

	class OutlinePostFXBehavior_Class_1_0E92B03EF54C2343 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_3; // 0x10
		::RPG::OutlinePostFXBehavior* Field_1_0; // 0x18
		::UnityEngine::Material* Field_1_1; // 0x20
		::UnityEngine::Material* Field_1_2; // 0x28

		::System::Void _ctor(::RPG::OutlinePostFXBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::OutlinePostFXBehavior*))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E92B03EF54C2343__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E92B03EF54C2343_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E92B03EF54C2343_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
