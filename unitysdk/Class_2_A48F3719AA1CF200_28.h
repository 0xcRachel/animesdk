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

#define CLASS_2_A48F3719AA1CF200_28_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x94478B0)
#define CLASS_2_A48F3719AA1CF200_28_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x9447AC0)
#define CLASS_2_A48F3719AA1CF200_28__CTOR_OFFSET UNITYSDK_OFFSET(0x9447B10)

inline static constexpr unsigned int Class_2_A48F3719AA1CF200_28_TypeDefinitionIndex = 57968;

class Class_2_A48F3719AA1CF200_28 : public ::Class_1_89D8044AB73F8F6D
{
public:
	::RPG::Client::AnimatorButton* Field_2_14; // 0x18
	::UnityEngine::Transform* Field_2_0; // 0x20
	::RPG::Client::CustomButton* Field_2_5; // 0x28
	::RPG::Client::MonoInControlTip* Field_2_10; // 0x30
	::RPG::Client::CustomButton* Field_2_3; // 0x38
	::RPG::Client::CustomButton* Field_2_6; // 0x40
	::RPG::Client::CustomButton* Field_2_4; // 0x48
	::RPG::Client::LocalizedText* Field_2_1; // 0x50
	::UnityEngine::Transform* Field_2_13; // 0x58
	::RPG::Client::LocalizedText* Field_2_2; // 0x60
	::RPG::Client::LocalizedText* Field_2_8; // 0x68
	::RPG::Client::LocalizedText* Field_2_7; // 0x70
	::UnityEngine::Transform* Field_2_12; // 0x78
	::UnityEngine::Transform* Field_2_11; // 0x80
	::RPG::Client::LocalizedText* Field_2_15; // 0x88
	::UnityEngine::UI::HorizontalLayoutGroup* Field_2_9; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_28__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_28_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_28_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
