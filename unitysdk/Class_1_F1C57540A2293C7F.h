#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class CameraBlendCurve; }

#define CLASS_1_F1C57540A2293C7F_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x163DCAB0)
#define CLASS_1_F1C57540A2293C7F__CTOR_OFFSET UNITYSDK_OFFSET(0x163DCB20)

inline static constexpr unsigned int Class_1_F1C57540A2293C7F_TypeDefinitionIndex = 53289;

class Class_1_F1C57540A2293C7F : public ::System::Object
{
public:
	::RPG::Client::CameraBlendCurve* Field_1_0; // 0x10
	::Class_3_07C3C4D2990C49EE* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x28
	::System::Boolean Field_1_5; // 0x2C
	::UnityEngine::Vector3 Field_1_6; // 0x30
	::System::UInt32 Field_1_7; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1C57540A2293C7F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1C57540A2293C7F_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}
};
