#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_802;

#define CLASS_1_7D00BD1ECE7A4873_GET_NEEDRELOADOPERATIONS_OFFSET UNITYSDK_OFFSET(0xD205610)
#define CLASS_1_7D00BD1ECE7A4873_METHOD_1_270550E508A1D3CD_OFFSET UNITYSDK_OFFSET(0xD205630)
#define CLASS_1_7D00BD1ECE7A4873_SET_NEEDRELOADOPERATIONS_OFFSET UNITYSDK_OFFSET(0xD205620)
#define CLASS_1_7D00BD1ECE7A4873__CTOR_OFFSET UNITYSDK_OFFSET(0xD205750)

inline static constexpr unsigned int Class_1_7D00BD1ECE7A4873_TypeDefinitionIndex = 57723;

class Class_1_7D00BD1ECE7A4873 : public ::System::Object
{
public:
	::System::Boolean _NeedReloadOperations_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D00BD1ECE7A4873__CTOR_OFFSET))(this);
	}

	::System::Boolean get_NeedReloadOperations()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D00BD1ECE7A4873_GET_NEEDRELOADOPERATIONS_OFFSET))(this);
	}

	::System::Void set_NeedReloadOperations(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7D00BD1ECE7A4873_SET_NEEDRELOADOPERATIONS_OFFSET))(this, value);
	}

	::System::Void Method_1_270550E508A1D3CD(::Class_0_16E4307DCC419505_802* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_802*))((::PBYTE)hIl2Cpp + CLASS_1_7D00BD1ECE7A4873_METHOD_1_270550E508A1D3CD_OFFSET))(this, a1);
	}
};
