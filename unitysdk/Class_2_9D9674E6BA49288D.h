#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A170EEF84D06CBD4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_52DCEE691286F89A_1;
class Class_2_15E317187C4E8254;

#define CLASS_2_9D9674E6BA49288D_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x110B7EB0)
#define CLASS_2_9D9674E6BA49288D_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x110B7E80)
#define CLASS_2_9D9674E6BA49288D_METHOD_2_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x110B8070)
#define CLASS_2_9D9674E6BA49288D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x110B82C0)
#define CLASS_2_9D9674E6BA49288D_METHOD_2_99AED502C9DC686D_OFFSET UNITYSDK_OFFSET(0x110B7EE0)
#define CLASS_2_9D9674E6BA49288D_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x110B7ED0)
#define CLASS_2_9D9674E6BA49288D_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x110B7EA0)
#define CLASS_2_9D9674E6BA49288D__CTOR_OFFSET UNITYSDK_OFFSET(0x110B82B0)

inline static constexpr unsigned int Class_2_9D9674E6BA49288D_TypeDefinitionIndex = 61260;

class Class_2_9D9674E6BA49288D : public ::Class_1_A170EEF84D06CBD4
{
public:
	::UnityEngine::Vector3 _StartPos_k__BackingField; // 0x28
	::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_StartPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_GET_STARTPOS_OFFSET))(this);
	}

	::System::Void set_StartPos(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_SET_STARTPOS_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_EndPos()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_GET_ENDPOS_OFFSET))(this);
	}

	::System::Void set_EndPos(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_SET_ENDPOS_OFFSET))(this, value);
	}

	static ::Class_2_9D9674E6BA49288D* Method_2_99AED502C9DC686D(::Class_2_15E317187C4E8254* a1, ::Class_1_52DCEE691286F89A_1* a2)
	{
		return ((::Class_2_9D9674E6BA49288D*(*)(::Class_2_15E317187C4E8254*, ::Class_1_52DCEE691286F89A_1*))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_METHOD_2_99AED502C9DC686D_OFFSET))(a1, a2);
	}

	::System::Void Method_2_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_METHOD_2_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D9674E6BA49288D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
