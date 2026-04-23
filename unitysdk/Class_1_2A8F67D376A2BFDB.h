#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FrameCaptureFadeoutType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIMeta; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace System { class Action; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_1_2A8F67D376A2BFDB_CLEAR_OFFSET UNITYSDK_OFFSET(0x1050B4A0)
#define CLASS_1_2A8F67D376A2BFDB_GET_CAPTURETEXTURE_OFFSET UNITYSDK_OFFSET(0x1050B670)
#define CLASS_1_2A8F67D376A2BFDB_METHOD_1_3844928E9495F691_OFFSET UNITYSDK_OFFSET(0x1050B5E0)
#define CLASS_1_2A8F67D376A2BFDB_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1050B580)
#define CLASS_1_2A8F67D376A2BFDB_SET_CAPTURETEXTURE_OFFSET UNITYSDK_OFFSET(0x1050B680)
#define CLASS_1_2A8F67D376A2BFDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1050B690)

inline static constexpr unsigned int Class_1_2A8F67D376A2BFDB_TypeDefinitionIndex = 67057;

class Class_1_2A8F67D376A2BFDB : public ::System::Object
{
public:
	::System::Action* Field_1_6; // 0x10
	::RPG::Client::UIValueChangeAnimation* Field_1_3; // 0x18
	::UnityEngine::UI::RawImage* Field_1_4; // 0x20
	::UnityEngine::RenderTexture* _CaptureTexture_k__BackingField; // 0x28
	::RPG::Client::UIMeta* Field_1_7; // 0x30
	::System::Single Field_1_2; // 0x38
	::RPG::GameCore::FrameCaptureFadeoutType Field_1_0; // 0x3C
	::System::Single Field_1_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A8F67D376A2BFDB__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A8F67D376A2BFDB_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_3844928E9495F691(::UnityEngine::RenderTexture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_2A8F67D376A2BFDB_METHOD_1_3844928E9495F691_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A8F67D376A2BFDB_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* get_CaptureTexture()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A8F67D376A2BFDB_GET_CAPTURETEXTURE_OFFSET))(this);
	}

	::System::Void set_CaptureTexture(::UnityEngine::RenderTexture* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + CLASS_1_2A8F67D376A2BFDB_SET_CAPTURETEXTURE_OFFSET))(this, value);
	}
};
