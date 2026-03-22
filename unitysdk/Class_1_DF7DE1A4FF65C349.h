#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_79CBDAE7F30B6481;
namespace RPG::GameCore { class FiveDimSplineMoveConfig; }

#define CLASS_1_DF7DE1A4FF65C349_CLEAR_OFFSET UNITYSDK_OFFSET(0x162A1B40)
#define CLASS_1_DF7DE1A4FF65C349__CTOR_OFFSET UNITYSDK_OFFSET(0x162A1BE0)

inline static constexpr unsigned int Class_1_DF7DE1A4FF65C349_TypeDefinitionIndex = 32642;

class Class_1_DF7DE1A4FF65C349 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimSplineMoveConfig* Field_1_0; // 0x10
	::Class_1_79CBDAE7F30B6481* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7DE1A4FF65C349__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DF7DE1A4FF65C349_CLEAR_OFFSET))(this);
	}
};
