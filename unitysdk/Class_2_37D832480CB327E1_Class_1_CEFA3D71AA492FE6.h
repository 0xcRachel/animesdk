#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_CD04D3296DF4C842_8;
class Class_3_CD04D3296DF4C842_9;
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define CLASS_2_37D832480CB327E1_CLASS_1_CEFA3D71AA492FE6_CLEAR_OFFSET UNITYSDK_OFFSET(0x11566480)
#define CLASS_2_37D832480CB327E1_CLASS_1_CEFA3D71AA492FE6__CTOR_OFFSET UNITYSDK_OFFSET(0x115663A0)

inline static constexpr unsigned int Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6_TypeDefinitionIndex = 46246;

class Class_2_37D832480CB327E1_Class_1_CEFA3D71AA492FE6 : public ::System::Object
{
public:
	::Class_3_CD04D3296DF4C842_8* Field_1_8; // 0x10
	::UnityEngine::Transform* Field_1_0; // 0x18
	::UnityEngine::AnimationCurve* Field_1_10; // 0x20
	::Class_3_CD04D3296DF4C842_9* Field_1_9; // 0x28
	::UnityEngine::Vector3 Field_1_3; // 0x30
	::System::Single Field_1_5; // 0x3C
	::System::Boolean Field_1_7; // 0x40
	::UnityEngine::Vector3 Field_1_1; // 0x44
	::System::Single Field_1_6; // 0x50
	::UnityEngine::Quaternion Field_1_4; // 0x54
	::UnityEngine::Quaternion Field_1_2; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_CLASS_1_CEFA3D71AA492FE6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37D832480CB327E1_CLASS_1_CEFA3D71AA492FE6_CLEAR_OFFSET))(this);
	}
};
