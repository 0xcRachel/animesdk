#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class CustomButton; }
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlTip; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }

#define CLASS_2_9E8CD0C1037EB98E_1_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x115F6100)
#define CLASS_2_9E8CD0C1037EB98E_1_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x115F6340)
#define CLASS_2_9E8CD0C1037EB98E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x115F63B0)

inline static constexpr unsigned int Class_2_9E8CD0C1037EB98E_1_TypeDefinitionIndex = 59595;

class Class_2_9E8CD0C1037EB98E_1 : public ::Class_1_89D8044AB73F8F6D
{
public:
	::RPG::Client::CustomButton* Field_2_5; // 0x18
	::UnityEngine::Transform* Field_2_0; // 0x20
	::RPG::Client::CustomButton* Field_2_4; // 0x28
	::UnityEngine::Transform* Field_2_13; // 0x30
	::RPG::Client::LocalizedText* Field_2_1; // 0x38
	::UnityEngine::Transform* Field_2_12; // 0x40
	::UnityEngine::Transform* Field_2_11; // 0x48
	::RPG::Client::CustomButton* Field_2_3; // 0x50
	::RPG::Client::AnimatorButton* Field_2_14; // 0x58
	::RPG::Client::LocalizedText* Field_2_7; // 0x60
	::RPG::Client::LocalizedText* Field_2_8; // 0x68
	::RPG::Client::LocalizedText* Field_2_2; // 0x70
	::RPG::Client::CustomButton* Field_2_6; // 0x78
	::RPG::Client::LocalizedText* Field_2_15; // 0x80
	::RPG::Client::MonoInControlTip* Field_2_10; // 0x88
	::UnityEngine::UI::HorizontalLayoutGroup* Field_2_9; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_1_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E8CD0C1037EB98E_1_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
