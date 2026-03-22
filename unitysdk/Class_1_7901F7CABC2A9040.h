#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimBorderPlatConfig; }
namespace System { class String; }

#define CLASS_1_7901F7CABC2A9040_CLEAR_OFFSET UNITYSDK_OFFSET(0x162EEDE0)
#define CLASS_1_7901F7CABC2A9040__CTOR_OFFSET UNITYSDK_OFFSET(0x162EEE30)

inline static constexpr unsigned int Class_1_7901F7CABC2A9040_TypeDefinitionIndex = 32597;

class Class_1_7901F7CABC2A9040 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::RPG::GameCore::FiveDimBorderPlatConfig* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7901F7CABC2A9040__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7901F7CABC2A9040_CLEAR_OFFSET))(this);
	}
};
