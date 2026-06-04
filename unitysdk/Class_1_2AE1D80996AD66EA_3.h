#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2AE1D80996AD66EA_3_GET_ACTUALVALUE_OFFSET UNITYSDK_OFFSET(0x179B95A0)
#define CLASS_1_2AE1D80996AD66EA_3_GET_EXPECTEDVALUE_OFFSET UNITYSDK_OFFSET(0x179B95C0)
#define CLASS_1_2AE1D80996AD66EA_3_GET_INITIALVALUE_OFFSET UNITYSDK_OFFSET(0x179B9580)
#define CLASS_1_2AE1D80996AD66EA_3_SET_ACTUALVALUE_OFFSET UNITYSDK_OFFSET(0x179B95B0)
#define CLASS_1_2AE1D80996AD66EA_3_SET_EXPECTEDVALUE_OFFSET UNITYSDK_OFFSET(0x179B95D0)
#define CLASS_1_2AE1D80996AD66EA_3_SET_INITIALVALUE_OFFSET UNITYSDK_OFFSET(0x179B9590)
#define CLASS_1_2AE1D80996AD66EA_3__CTOR_OFFSET UNITYSDK_OFFSET(0x179B95E0)

inline static constexpr unsigned int Class_1_2AE1D80996AD66EA_3_TypeDefinitionIndex = 72373;

class Class_1_2AE1D80996AD66EA_3 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint _InitialValue_k__BackingField; // 0x10
	::RPG::GameCore::FixPoint _ActualValue_k__BackingField; // 0x18
	::RPG::GameCore::FixPoint _ExpectedValue_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_2AE1D80996AD66EA_3__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_InitialValue()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE1D80996AD66EA_3_GET_INITIALVALUE_OFFSET))(this);
	}

	::System::Void set_InitialValue(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_2AE1D80996AD66EA_3_SET_INITIALVALUE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_ActualValue()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE1D80996AD66EA_3_GET_ACTUALVALUE_OFFSET))(this);
	}

	::System::Void set_ActualValue(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_2AE1D80996AD66EA_3_SET_ACTUALVALUE_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_ExpectedValue()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE1D80996AD66EA_3_GET_EXPECTEDVALUE_OFFSET))(this);
	}

	::System::Void set_ExpectedValue(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_2AE1D80996AD66EA_3_SET_EXPECTEDVALUE_OFFSET))(this, a1);
	}
};
