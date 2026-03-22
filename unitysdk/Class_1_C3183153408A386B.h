#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FreeStyleController; }

#define CLASS_1_C3183153408A386B_METHOD_1_08BF357C7D9CD613_OFFSET UNITYSDK_OFFSET(0x8A3F940)
#define CLASS_1_C3183153408A386B__CTOR_OFFSET UNITYSDK_OFFSET(0x8A3F990)

inline static constexpr unsigned int Class_1_C3183153408A386B_TypeDefinitionIndex = 45061;

class Class_1_C3183153408A386B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C3183153408A386B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_08BF357C7D9CD613(::RPG::GameCore::FreeStyleController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleController*))((::PBYTE)hIl2Cpp + CLASS_1_C3183153408A386B_METHOD_1_08BF357C7D9CD613_OFFSET))(this, a1);
	}
};
