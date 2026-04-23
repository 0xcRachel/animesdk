#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/ComponentInvisibleReason.h"
#include "unitysdk/Struct_2_BF35D09998D831A7.h"
#include "unitysdk/System/Object.h"

class Class_1_69C7B9DFD5B449A1;
class Class_1_FE61D40DC1548892;

#define CLASS_1_5BF08261B797AA64_CLEAR_OFFSET UNITYSDK_OFFSET(0x184C2410)
#define CLASS_1_5BF08261B797AA64_ONALLOC_OFFSET UNITYSDK_OFFSET(0x184C2510)
#define CLASS_1_5BF08261B797AA64_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x184C2580)
#define CLASS_1_5BF08261B797AA64__CTOR_OFFSET UNITYSDK_OFFSET(0x184C25C0)

inline static constexpr unsigned int Class_1_5BF08261B797AA64_TypeDefinitionIndex = 39123;

class Class_1_5BF08261B797AA64 : public ::System::Object
{
public:
	::Struct_2_BF35D09998D831A7 Field_1_3; // 0x10
	::Class_1_69C7B9DFD5B449A1* Field_1_0; // 0x20
	::Class_1_69C7B9DFD5B449A1* Field_1_1; // 0x28
	::Class_1_FE61D40DC1548892* Field_1_4; // 0x30
	::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BF08261B797AA64__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BF08261B797AA64_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BF08261B797AA64_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5BF08261B797AA64_ONRECYCLE_OFFSET))(this);
	}
};
