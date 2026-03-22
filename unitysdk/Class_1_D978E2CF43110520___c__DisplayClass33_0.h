#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap::FiveDim { class Face; }

#define CLASS_1_D978E2CF43110520___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0xFEEEF70)
#define CLASS_1_D978E2CF43110520___C__DISPLAYCLASS33_0__GETFACE_B__0_OFFSET UNITYSDK_OFFSET(0xFEEF0C0)

inline static constexpr unsigned int Class_1_D978E2CF43110520___c__DisplayClass33_0_TypeDefinitionIndex = 59642;

class Class_1_D978E2CF43110520___c__DisplayClass33_0 : public ::System::Object
{
public:
	::System::UInt32 faceIndex; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetFace_b__0(::RPG::Client::NavMap::FiveDim::Face* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::Face*))((::PBYTE)hIl2Cpp + CLASS_1_D978E2CF43110520___C__DISPLAYCLASS33_0__GETFACE_B__0_OFFSET))(this, x);
	}
};
