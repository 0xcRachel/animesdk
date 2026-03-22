#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1CE9F2AFE4D748E3_GET_ISGETCRITICALCHANCEPENALTY_OFFSET UNITYSDK_OFFSET(0x111C36B0)
#define CLASS_1_1CE9F2AFE4D748E3_GET_ISGETPROPERTYBONUS_OFFSET UNITYSDK_OFFSET(0x111C3690)
#define CLASS_1_1CE9F2AFE4D748E3_GET_ISHASPROPERTYBONUS_OFFSET UNITYSDK_OFFSET(0x111C3670)
#define CLASS_1_1CE9F2AFE4D748E3_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x111C3650)
#define CLASS_1_1CE9F2AFE4D748E3_METHOD_1_BB7A1049F84E8127_OFFSET UNITYSDK_OFFSET(0x111C36D0)
#define CLASS_1_1CE9F2AFE4D748E3_SET_ISGETCRITICALCHANCEPENALTY_OFFSET UNITYSDK_OFFSET(0x111C36C0)
#define CLASS_1_1CE9F2AFE4D748E3_SET_ISGETPROPERTYBONUS_OFFSET UNITYSDK_OFFSET(0x111C36A0)
#define CLASS_1_1CE9F2AFE4D748E3_SET_ISHASPROPERTYBONUS_OFFSET UNITYSDK_OFFSET(0x111C3680)
#define CLASS_1_1CE9F2AFE4D748E3_SET_SCORE_OFFSET UNITYSDK_OFFSET(0x111C3660)
#define CLASS_1_1CE9F2AFE4D748E3__CTOR_OFFSET UNITYSDK_OFFSET(0x111C3740)

inline static constexpr unsigned int Class_1_1CE9F2AFE4D748E3_TypeDefinitionIndex = 59430;

class Class_1_1CE9F2AFE4D748E3 : public ::System::Object
{
public:
	::System::Single _Score_k__BackingField; // 0x10
	::System::Boolean _IsGetPropertyBonus_k__BackingField; // 0x14
	::System::Boolean _IsGetCriticalChancePenalty_k__BackingField; // 0x15
	::System::Boolean _IsHasPropertyBonus_k__BackingField; // 0x16

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CE9F2AFE4D748E3__CTOR_OFFSET))(this);
	}

	::System::Single get_Score()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CE9F2AFE4D748E3_GET_SCORE_OFFSET))(this);
	}

	::System::Void set_Score(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1CE9F2AFE4D748E3_SET_SCORE_OFFSET))(this, value);
	}

	::System::Boolean get_IsHasPropertyBonus()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CE9F2AFE4D748E3_GET_ISHASPROPERTYBONUS_OFFSET))(this);
	}

	::System::Void set_IsHasPropertyBonus(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1CE9F2AFE4D748E3_SET_ISHASPROPERTYBONUS_OFFSET))(this, value);
	}

	::System::Boolean get_IsGetPropertyBonus()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CE9F2AFE4D748E3_GET_ISGETPROPERTYBONUS_OFFSET))(this);
	}

	::System::Void set_IsGetPropertyBonus(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1CE9F2AFE4D748E3_SET_ISGETPROPERTYBONUS_OFFSET))(this, value);
	}

	::System::Boolean get_IsGetCriticalChancePenalty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1CE9F2AFE4D748E3_GET_ISGETCRITICALCHANCEPENALTY_OFFSET))(this);
	}

	::System::Void set_IsGetCriticalChancePenalty(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1CE9F2AFE4D748E3_SET_ISGETCRITICALCHANCEPENALTY_OFFSET))(this, value);
	}

	static ::Class_1_1CE9F2AFE4D748E3* Method_1_BB7A1049F84E8127()
	{
		return ((::Class_1_1CE9F2AFE4D748E3*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CE9F2AFE4D748E3_METHOD_1_BB7A1049F84E8127_OFFSET))();
	}
};
