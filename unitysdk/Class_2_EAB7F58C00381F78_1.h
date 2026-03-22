#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A170EEF84D06CBD4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_52DCEE691286F89A_1;
class Class_2_15E317187C4E8254;

#define CLASS_2_EAB7F58C00381F78_1_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1008B930)
#define CLASS_2_EAB7F58C00381F78_1_METHOD_2_2539C280729340FB_OFFSET UNITYSDK_OFFSET(0x1008B960)
#define CLASS_2_EAB7F58C00381F78_1_METHOD_2_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x1008BAC0)
#define CLASS_2_EAB7F58C00381F78_1_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1008BCD0)
#define CLASS_2_EAB7F58C00381F78_1_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1008B950)
#define CLASS_2_EAB7F58C00381F78_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1008BCC0)

inline static constexpr unsigned int Class_2_EAB7F58C00381F78_1_TypeDefinitionIndex = 61263;

class Class_2_EAB7F58C00381F78_1 : public ::Class_1_A170EEF84D06CBD4
{
public:
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAB7F58C00381F78_1__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAB7F58C00381F78_1_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_EAB7F58C00381F78_1_SET_POSITION_OFFSET))(this, value);
	}

	static ::Class_2_EAB7F58C00381F78_1* Method_2_2539C280729340FB(::Class_2_15E317187C4E8254* a1, ::Class_1_52DCEE691286F89A_1* a2)
	{
		return ((::Class_2_EAB7F58C00381F78_1*(*)(::Class_2_15E317187C4E8254*, ::Class_1_52DCEE691286F89A_1*))((::PBYTE)hIl2Cpp + CLASS_2_EAB7F58C00381F78_1_METHOD_2_2539C280729340FB_OFFSET))(a1, a2);
	}

	::System::Void Method_2_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAB7F58C00381F78_1_METHOD_2_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAB7F58C00381F78_1_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
