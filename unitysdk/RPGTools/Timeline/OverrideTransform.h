#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/OverrideTransform_ControlType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPGTools::Timeline { class OverrideTransform_Controller; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_CLEAR_OFFSET UNITYSDK_OFFSET(0x17E33220)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_CONTROL_OFFSET UNITYSDK_OFFSET(0x17E32E20)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_DOSYNC_OFFSET UNITYSDK_OFFSET(0x17E332F0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_GET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x17E32DE0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_GET_TIMELINESYNC_OFFSET UNITYSDK_OFFSET(0x17E32E00)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x17E332B0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_METHOD_5_276036CDF4BFF5A6_OFFSET UNITYSDK_OFFSET(0x17E33350)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_METHOD_5_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x17E32F50)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_SET_CHARACTERUNIQUENAME_OFFSET UNITYSDK_OFFSET(0x17E32DF0)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_SET_TIMELINESYNC_OFFSET UNITYSDK_OFFSET(0x17E32E10)
#define RPGTOOLS_TIMELINE_OVERRIDETRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x17E33590)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int OverrideTransform_TypeDefinitionIndex = 45237;

	class OverrideTransform : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsOverride; // 0x18
		::System::Boolean _IsClear; // 0x19
		::Il2CppArray<::RPGTools::Timeline::OverrideTransform_Controller*>* _Controllers; // 0x20
		::System::String* _CharacterUniqueName_k__BackingField; // 0x28
		::System::Boolean _TimelineSync_k__BackingField; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORM__CTOR_OFFSET))(this);
		}

		::System::String* get_CharacterUniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_GET_CHARACTERUNIQUENAME_OFFSET))(this);
		}

		::System::Void set_CharacterUniqueName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_SET_CHARACTERUNIQUENAME_OFFSET))(this, value);
		}

		::System::Boolean get_TimelineSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_GET_TIMELINESYNC_OFFSET))(this);
		}

		::System::Void set_TimelineSync(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_SET_TIMELINESYNC_OFFSET))(this, value);
		}

		::System::Void Control(::RPGTools::Timeline::OverrideTransform_ControlType a1, ::System::Double a2, ::System::Nullable_1<::UnityEngine::Vector3> a3, ::System::Nullable_1<::UnityEngine::Quaternion> a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::OverrideTransform_ControlType, ::System::Double, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_CONTROL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_CLEAR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_LATEUPDATE_OFFSET))(this);
		}

		::System::Void DoSync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_DOSYNC_OFFSET))(this);
		}

		::System::Void Method_5_276036CDF4BFF5A6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_METHOD_5_276036CDF4BFF5A6_OFFSET))(this);
		}

		::System::Void Method_5_8D61BE16C9463302()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_OVERRIDETRANSFORM_METHOD_5_8D61BE16C9463302_OFFSET))(this);
		}
	};
}
