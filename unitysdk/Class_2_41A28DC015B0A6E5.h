#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A170EEF84D06CBD4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_52DCEE691286F89A_1;
class Class_2_15E317187C4E8254;

#define CLASS_2_41A28DC015B0A6E5_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x10BBB670)
#define CLASS_2_41A28DC015B0A6E5_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x10BBB640)
#define CLASS_2_41A28DC015B0A6E5_GET_VY_OFFSET UNITYSDK_OFFSET(0x10BBB6A0)
#define CLASS_2_41A28DC015B0A6E5_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10BBBB90)
#define CLASS_2_41A28DC015B0A6E5_METHOD_2_BC838CA6F90409DB_OFFSET UNITYSDK_OFFSET(0x10BBB6C0)
#define CLASS_2_41A28DC015B0A6E5_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x10BBB8C0)
#define CLASS_2_41A28DC015B0A6E5_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x10BBB690)
#define CLASS_2_41A28DC015B0A6E5_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x10BBB660)
#define CLASS_2_41A28DC015B0A6E5_SET_VY_OFFSET UNITYSDK_OFFSET(0x10BBB6B0)
#define CLASS_2_41A28DC015B0A6E5__CTOR_OFFSET UNITYSDK_OFFSET(0x10BBBB80)

inline static constexpr unsigned int Class_2_41A28DC015B0A6E5_TypeDefinitionIndex = 61259;

class Class_2_41A28DC015B0A6E5 : public ::Class_1_A170EEF84D06CBD4
{
public:
	::UnityEngine::Vector3 _StartPos_k__BackingField; // 0x28
	::System::Single _Vy_k__BackingField; // 0x34
	::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_StartPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_GET_STARTPOS_OFFSET))(this);
	}

	::System::Void set_StartPos(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_SET_STARTPOS_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_EndPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_GET_ENDPOS_OFFSET))(this);
	}

	::System::Void set_EndPos(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_SET_ENDPOS_OFFSET))(this, value);
	}

	::System::Single get_Vy()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_GET_VY_OFFSET))(this);
	}

	::System::Void set_Vy(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_SET_VY_OFFSET))(this, value);
	}

	static ::Class_2_41A28DC015B0A6E5* Method_2_BC838CA6F90409DB(::Class_2_15E317187C4E8254* a1, ::Class_1_52DCEE691286F89A_1* a2)
	{
		return ((::Class_2_41A28DC015B0A6E5*(*)(::Class_2_15E317187C4E8254*, ::Class_1_52DCEE691286F89A_1*))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_METHOD_2_BC838CA6F90409DB_OFFSET))(a1, a2);
	}

	::System::Void Method_2_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_METHOD_2_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_41A28DC015B0A6E5_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
