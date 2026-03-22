#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"

namespace RPGTools::Timeline { class CharacterBodyControlData; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_3_7EB1E590D70CF358_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x85EF7B0)
#define CLASS_3_7EB1E590D70CF358_METHOD_3_E971987D3EE22EF7_OFFSET UNITYSDK_OFFSET(0x85EF5F0)
#define CLASS_3_7EB1E590D70CF358_METHOD_3_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0x85EF280)
#define CLASS_3_7EB1E590D70CF358__CTOR_OFFSET UNITYSDK_OFFSET(0x85EF7A0)

inline static constexpr unsigned int Class_3_7EB1E590D70CF358_TypeDefinitionIndex = 37828;

class Class_3_7EB1E590D70CF358 : public ::RPGTools::Timeline::CustomEventBehaviour
{
public:
	::RPGTools::Timeline::CharacterBodyControlData* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7EB1E590D70CF358__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_F53BAAE38A584428()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7EB1E590D70CF358_METHOD_3_F53BAAE38A584428_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_3_E971987D3EE22EF7(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_7EB1E590D70CF358_METHOD_3_E971987D3EE22EF7_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7EB1E590D70CF358_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}
};
