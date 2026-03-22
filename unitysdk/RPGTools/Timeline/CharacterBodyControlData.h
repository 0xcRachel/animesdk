#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_CHARACTERBODYCONTROLDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA5FB880)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterBodyControlData_TypeDefinitionIndex = 37830;

	class CharacterBodyControlData : public ::System::Object
	{
	public:
		::System::String* CharacterUniqueName; // 0x10
		::UnityEngine::Vector3 LocalPosition; // 0x18
		::UnityEngine::Quaternion LocalRotation; // 0x24
		::System::Boolean OverrideConfig; // 0x34
		::System::String* OverrideTipBoneAttachPoint; // 0x38
		::System::Int32 OverrideSpineNum; // 0x40
		::System::Boolean OverrideUseEffectorRotation; // 0x44
		::System::Single Duration; // 0x48
		::System::String* CurveName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERBODYCONTROLDATA__CTOR_OFFSET))(this);
		}
	};
}
