#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ElfWaiterState.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_9EC7A3949007E029__CTOR_OFFSET UNITYSDK_OFFSET(0x16A23B30)

inline static constexpr unsigned int Class_1_9EC7A3949007E029_TypeDefinitionIndex = 32375;

class Class_1_9EC7A3949007E029 : public ::System::Object
{
public:
	::RPG::GameCore::ElfWaiterState Field_1_1; // 0x10
	::System::Int32 Field_1_6; // 0x14
	::System::Int32 Field_1_7; // 0x18
	::System::Boolean Field_1_5; // 0x1C
	::System::UInt32 Field_1_4; // 0x20
	::System::UInt32 Field_1_2; // 0x24
	::RPG::GameCore::RestaurantEmployeeType Field_1_0; // 0x28
	::System::UInt32 Field_1_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9EC7A3949007E029__CTOR_OFFSET))(this);
	}
};
