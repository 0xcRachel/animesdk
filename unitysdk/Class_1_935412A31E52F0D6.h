#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraEntranceAnchorConfig; }
namespace RPG::Client::Prop { class ChimeraGameObjectBuilder; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_935412A31E52F0D6_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x1051CCA0)
#define CLASS_1_935412A31E52F0D6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1051D4E0)
#define CLASS_1_935412A31E52F0D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1051CC40)

inline static constexpr unsigned int Class_1_935412A31E52F0D6_TypeDefinitionIndex = 63936;

class Class_1_935412A31E52F0D6 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_6; // 0x0
	::UnityEngine::Transform* Field_1_3; // 0x10
	::RPG::Client::Prop::ChimeraGameObjectBuilder* Field_1_5; // 0x18
	::RPG::Client::Prop::ChimeraEntranceAnchorConfig* Field_1_2; // 0x20
	::UnityEngine::GameObject* Field_1_0; // 0x28
	::UnityEngine::GameObject* Field_1_1; // 0x30
	::UnityEngine::Animator* Field_1_4; // 0x38

	::System::Void _ctor(::RPG::Client::Prop::ChimeraEntranceAnchorConfig* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraEntranceAnchorConfig*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_935412A31E52F0D6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_935412A31E52F0D6_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_935412A31E52F0D6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
