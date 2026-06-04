#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/WrapMode.h"

namespace UnityEngine { class AnimationCurve; }

#define ROOTMOTION_NATIVECURVE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3832CE0)
#define ROOTMOTION_NATIVECURVE_EVALUATE_OFFSET UNITYSDK_OFFSET(0x3832CD0)
#define ROOTMOTION_NATIVECURVE_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0xBC76D0)
#define ROOTMOTION_NATIVECURVE_INITIALIZEVALUES_OFFSET UNITYSDK_OFFSET(0x3832C60)
#define ROOTMOTION_NATIVECURVE_PINGPONG_OFFSET UNITYSDK_OFFSET(0x3832D60)
#define ROOTMOTION_NATIVECURVE_REPEAT_OFFSET UNITYSDK_OFFSET(0x3832D10)
#define ROOTMOTION_NATIVECURVE_UPDATE_OFFSET UNITYSDK_OFFSET(0x3832CC0)

namespace RootMotion
{
	inline static constexpr unsigned int NativeCurve_TypeDefinitionIndex = 41795;

	struct alignas(8) NativeCurve
	{
		::Unity::Collections::NativeArray_1<::System::Single> values; // 0x10
		::UnityEngine::WrapMode preWrapMode; // 0x20
		::UnityEngine::WrapMode postWrapMode; // 0x24

		::System::Boolean get_IsCreated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_NATIVECURVE_GET_ISCREATED_OFFSET))(this);
		}

		::System::Void InitializeValues(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_NATIVECURVE_INITIALIZEVALUES_OFFSET))(this, a1);
		}

		::System::Void Update(::UnityEngine::AnimationCurve* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_NATIVECURVE_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Single Evaluate(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_NATIVECURVE_EVALUATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_NATIVECURVE_DISPOSE_OFFSET))(this);
		}

		::System::Single Repeat(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_NATIVECURVE_REPEAT_OFFSET))(this, a1, a2);
		}

		::System::Single Pingpong(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_NATIVECURVE_PINGPONG_OFFSET))(this, a1, a2);
		}
	};
}
