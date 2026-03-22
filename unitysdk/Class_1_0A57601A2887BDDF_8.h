#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BB26F815351C865F;

#define CLASS_1_0A57601A2887BDDF_8_CLEAR_OFFSET UNITYSDK_OFFSET(0x16196C20)
#define CLASS_1_0A57601A2887BDDF_8__CTOR_OFFSET UNITYSDK_OFFSET(0x16196C80)

inline static constexpr unsigned int Class_1_0A57601A2887BDDF_8_TypeDefinitionIndex = 32460;

class Class_1_0A57601A2887BDDF_8 : public ::System::Object
{
public:
	::Class_1_BB26F815351C865F* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_8__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A57601A2887BDDF_8_CLEAR_OFFSET))(this);
	}
};
