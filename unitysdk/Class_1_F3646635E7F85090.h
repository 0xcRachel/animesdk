#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_46274A15749D2165;
namespace UnityEngine { class Transform; }

#define CLASS_1_F3646635E7F85090_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x109EF2E0)
#define CLASS_1_F3646635E7F85090_GET_ISMOVESTARTED_OFFSET UNITYSDK_OFFSET(0x109EF2C0)
#define CLASS_1_F3646635E7F85090_GET_NORMALIZEDSPEED_OFFSET UNITYSDK_OFFSET(0x109EF2A0)
#define CLASS_1_F3646635E7F85090_METHOD_1_82ABFE24D5168B0C_OFFSET UNITYSDK_OFFSET(0x109EF5F0)
#define CLASS_1_F3646635E7F85090_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x109EF370)
#define CLASS_1_F3646635E7F85090_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x109EF320)
#define CLASS_1_F3646635E7F85090_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x109EF5B0)
#define CLASS_1_F3646635E7F85090_METHOD_1_D1A805022B5BA614_OFFSET UNITYSDK_OFFSET(0x109EF3C0)
#define CLASS_1_F3646635E7F85090_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x109EF310)
#define CLASS_1_F3646635E7F85090_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x109EF300)
#define CLASS_1_F3646635E7F85090_SET_ISEND_OFFSET UNITYSDK_OFFSET(0x109EF2F0)
#define CLASS_1_F3646635E7F85090_SET_ISMOVESTARTED_OFFSET UNITYSDK_OFFSET(0x109EF2D0)
#define CLASS_1_F3646635E7F85090_SET_NORMALIZEDSPEED_OFFSET UNITYSDK_OFFSET(0x109EF2B0)
#define CLASS_1_F3646635E7F85090__CTOR_OFFSET UNITYSDK_OFFSET(0x109EF680)

inline static constexpr unsigned int Class_1_F3646635E7F85090_TypeDefinitionIndex = 45927;

class Class_1_F3646635E7F85090 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_13; // 0x0
	// static const ::System::Single Field_1_14; // 0x0
	::Class_1_46274A15749D2165* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_9; // 0x18
	::System::Boolean _IsEnd_k__BackingField; // 0x20
	::System::Boolean _IsMoveStarted_k__BackingField; // 0x21
	::System::Boolean Field_1_1; // 0x22
	::System::Single _NormalizedSpeed_k__BackingField; // 0x24
	::System::Single Field_1_3; // 0x28
	::System::Single Field_1_7; // 0x2C
	::System::Single Field_1_8; // 0x30
	::System::Single Field_1_5; // 0x34
	::System::Single Field_1_6; // 0x38
	::System::Single Field_1_2; // 0x3C
	::System::Single Field_1_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3646635E7F85090__CTOR_OFFSET))(this);
	}

	::System::Single get_NormalizedSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3646635E7F85090_GET_NORMALIZEDSPEED_OFFSET))(this);
	}

	::System::Void set_NormalizedSpeed(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F3646635E7F85090_SET_NORMALIZEDSPEED_OFFSET))(this, value);
	}

	::System::Boolean get_IsMoveStarted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3646635E7F85090_GET_ISMOVESTARTED_OFFSET))(this);
	}

	::System::Void set_IsMoveStarted(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F3646635E7F85090_SET_ISMOVESTARTED_OFFSET))(this, value);
	}

	::System::Boolean get_IsEnd()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3646635E7F85090_GET_ISEND_OFFSET))(this);
	}

	::System::Void set_IsEnd(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F3646635E7F85090_SET_ISEND_OFFSET))(this, value);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3646635E7F85090_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3646635E7F85090_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3646635E7F85090_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3646635E7F85090_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::System::Void Method_1_D1A805022B5BA614(::UnityEngine::Transform* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F3646635E7F85090_METHOD_1_D1A805022B5BA614_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3646635E7F85090_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::Class_1_F3646635E7F85090* Method_1_82ABFE24D5168B0C()
	{
		return ((::Class_1_F3646635E7F85090*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3646635E7F85090_METHOD_1_82ABFE24D5168B0C_OFFSET))(this);
	}
};
