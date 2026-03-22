#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DiceCombatCommunicateType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_1_42149014BA1EB208_METHOD_1_0131B28D046A5D7C_OFFSET UNITYSDK_OFFSET(0x17178FF0)
#define CLASS_1_42149014BA1EB208__CTOR_OFFSET UNITYSDK_OFFSET(0x171791D0)

inline static constexpr unsigned int Class_1_42149014BA1EB208_TypeDefinitionIndex = 10496;

class Class_1_42149014BA1EB208 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::RPG::GameCore::DiceCombatCommunicateType Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::RPG::Client::TextID Field_1_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42149014BA1EB208__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0131B28D046A5D7C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_42149014BA1EB208*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_42149014BA1EB208*&))((::PBYTE)hIl2Cpp + CLASS_1_42149014BA1EB208_METHOD_1_0131B28D046A5D7C_OFFSET))(a1, a2);
	}
};
