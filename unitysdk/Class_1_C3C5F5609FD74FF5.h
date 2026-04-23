#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class DeployPuzzleBoard; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C3C5F5609FD74FF5_GET_FINISH_OFFSET UNITYSDK_OFFSET(0xF24E7B0)
#define CLASS_1_C3C5F5609FD74FF5_METHOD_1_AF53AC45ED2466EB_OFFSET UNITYSDK_OFFSET(0xF24E480)
#define CLASS_1_C3C5F5609FD74FF5_SET_FINISH_OFFSET UNITYSDK_OFFSET(0xF24E7C0)
#define CLASS_1_C3C5F5609FD74FF5__CTOR_OFFSET UNITYSDK_OFFSET(0xF24E7D0)

inline static constexpr unsigned int Class_1_C3C5F5609FD74FF5_TypeDefinitionIndex = 72024;

class Class_1_C3C5F5609FD74FF5 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* Field_1_5; // 0x10
	::UnityEngine::Transform* Field_1_0; // 0x18
	::RPG::Client::Prop::DeployPuzzleBoard* Field_1_8; // 0x20
	::UnityEngine::AnimationCurve* Field_1_4; // 0x28
	::System::Action* Field_1_7; // 0x30
	::System::Single Field_1_9; // 0x38
	::System::Single Field_1_3; // 0x3C
	::System::UInt32 Field_1_1; // 0x40
	::System::Boolean Field_1_2; // 0x44
	::System::Boolean _Finish_k__BackingField; // 0x45
	::System::Boolean Field_1_6; // 0x46

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5F5609FD74FF5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AF53AC45ED2466EB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C3C5F5609FD74FF5_METHOD_1_AF53AC45ED2466EB_OFFSET))(this, a1);
	}

	::System::Boolean get_Finish()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3C5F5609FD74FF5_GET_FINISH_OFFSET))(this);
	}

	::System::Void set_Finish(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C3C5F5609FD74FF5_SET_FINISH_OFFSET))(this, value);
	}
};
