#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class SpritePresetRecord; }
namespace UnityEngine { class Component; }

#define CLASS_1_3C9AA5113FC2155B_METHOD_1_4F4FD572700C1D57_OFFSET UNITYSDK_OFFSET(0x10BBBE00)
#define CLASS_1_3C9AA5113FC2155B_METHOD_1_D24DAC3AA3BBF49F_OFFSET UNITYSDK_OFFSET(0x10BBBC20)
#define CLASS_1_3C9AA5113FC2155B__CTOR_OFFSET UNITYSDK_OFFSET(0x10BBC030)

inline static constexpr unsigned int Class_1_3C9AA5113FC2155B_TypeDefinitionIndex = 54829;

class Class_1_3C9AA5113FC2155B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C9AA5113FC2155B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D24DAC3AA3BBF49F(::UnityEngine::Component* a1, ::RPG::GameCore::SpritePresetRecord* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Component*, ::RPG::GameCore::SpritePresetRecord*))((::PBYTE)hIl2Cpp + CLASS_1_3C9AA5113FC2155B_METHOD_1_D24DAC3AA3BBF49F_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::SpritePresetRecord* Method_1_4F4FD572700C1D57(::UnityEngine::Component* a1)
	{
		return ((::RPG::GameCore::SpritePresetRecord*(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + CLASS_1_3C9AA5113FC2155B_METHOD_1_4F4FD572700C1D57_OFFSET))(this, a1);
	}
};
