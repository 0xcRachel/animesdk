#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }

#define CLASS_1_AA62C297965FBC87_CLEAR_OFFSET UNITYSDK_OFFSET(0x10360290)
#define CLASS_1_AA62C297965FBC87_METHOD_1_115AB266A722E835_1_OFFSET UNITYSDK_OFFSET(0x10360330)
#define CLASS_1_AA62C297965FBC87_METHOD_1_115AB266A722E835_2_OFFSET UNITYSDK_OFFSET(0x10360380)
#define CLASS_1_AA62C297965FBC87_METHOD_1_115AB266A722E835_OFFSET UNITYSDK_OFFSET(0x103602E0)
#define CLASS_1_AA62C297965FBC87__CTOR_OFFSET UNITYSDK_OFFSET(0x103603D0)

inline static constexpr unsigned int Class_1_AA62C297965FBC87_TypeDefinitionIndex = 48149;

class Class_1_AA62C297965FBC87 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Action* Field_1_4; // 0x18
	::System::Action* Field_1_3; // 0x20
	::System::Action* Field_1_5; // 0x28
	::RPG::GameCore::GameEntity* Field_1_1; // 0x30
	::System::Boolean Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA62C297965FBC87__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA62C297965FBC87_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_115AB266A722E835()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA62C297965FBC87_METHOD_1_115AB266A722E835_OFFSET))(this);
	}

	::System::Void Method_1_115AB266A722E835_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA62C297965FBC87_METHOD_1_115AB266A722E835_1_OFFSET))(this);
	}

	::System::Void Method_1_115AB266A722E835_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA62C297965FBC87_METHOD_1_115AB266A722E835_2_OFFSET))(this);
	}
};
