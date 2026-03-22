#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89D8044AB73F8F6D.h"
#include "unitysdk/RPG/GameCore/FrameCaptureFadeoutType.h"

namespace RPG::Client { class UIValueChangeAnimation; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_2_F7F0779E98338315_METHOD_2_647D54B8817C986E_OFFSET UNITYSDK_OFFSET(0x109AEE30)
#define CLASS_2_F7F0779E98338315_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x109AED70)
#define CLASS_2_F7F0779E98338315_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x109AED10)
#define CLASS_2_F7F0779E98338315__CTOR_OFFSET UNITYSDK_OFFSET(0x109AED60)

inline static constexpr unsigned int Class_2_F7F0779E98338315_TypeDefinitionIndex = 58035;

class Class_2_F7F0779E98338315 : public ::Class_1_89D8044AB73F8F6D
{
public:
	::RPG::Client::UIValueChangeAnimation* Field_2_2; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20
	::RPG::Client::UIValueChangeAnimation* Field_2_3; // 0x28
	::UnityEngine::UI::RawImage* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7F0779E98338315__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7F0779E98338315_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7F0779E98338315_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::Client::UIValueChangeAnimation* Method_2_647D54B8817C986E(::RPG::GameCore::FrameCaptureFadeoutType a1)
	{
		return ((::RPG::Client::UIValueChangeAnimation*(*)(::PVOID, ::RPG::GameCore::FrameCaptureFadeoutType))((::PBYTE)hIl2Cpp + CLASS_2_F7F0779E98338315_METHOD_2_647D54B8817C986E_OFFSET))(this, a1);
	}
};
