#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIFloatingTextType.h"
#include "unitysdk/System/Object.h"

class Class_2_FDE932543F78327B_Class_0_16E7307DCC43CB2C_19;

#define CLASS_2_FDE932543F78327B___C__DISPLAYCLASS148_0__CTOR_OFFSET UNITYSDK_OFFSET(0x896D9C0)
#define CLASS_2_FDE932543F78327B___C__DISPLAYCLASS148_0___TRYSETUPMARKPANEL_B__0_OFFSET UNITYSDK_OFFSET(0x896EA00)

inline static constexpr unsigned int Class_2_FDE932543F78327B___c__DisplayClass148_0_TypeDefinitionIndex = 59281;

class Class_2_FDE932543F78327B___c__DisplayClass148_0 : public ::System::Object
{
public:
	::RPG::Client::UIFloatingTextType textType; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B___C__DISPLAYCLASS148_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TrySetupMarkPanel_b__0(::Class_2_FDE932543F78327B_Class_0_16E7307DCC43CB2C_19* config)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_FDE932543F78327B_Class_0_16E7307DCC43CB2C_19*))((::PBYTE)hIl2Cpp + CLASS_2_FDE932543F78327B___C__DISPLAYCLASS148_0___TRYSETUPMARKPANEL_B__0_OFFSET))(this, config);
	}
};
