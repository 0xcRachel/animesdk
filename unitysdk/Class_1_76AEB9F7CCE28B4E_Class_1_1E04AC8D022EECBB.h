#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_76AEB9F7CCE28B4E_Class_1_8F063601BC8471E7;

#define CLASS_1_76AEB9F7CCE28B4E_CLASS_1_1E04AC8D022EECBB_METHOD_1_BC062F1D4054D29E_OFFSET UNITYSDK_OFFSET(0x10C764D0)
#define CLASS_1_76AEB9F7CCE28B4E_CLASS_1_1E04AC8D022EECBB__CTOR_OFFSET UNITYSDK_OFFSET(0x10C76600)

inline static constexpr unsigned int Class_1_76AEB9F7CCE28B4E_Class_1_1E04AC8D022EECBB_TypeDefinitionIndex = 51449;

class Class_1_76AEB9F7CCE28B4E_Class_1_1E04AC8D022EECBB : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_76AEB9F7CCE28B4E_Class_1_8F063601BC8471E7*>* BackRoles; // 0x10
	::Il2CppArray<::Class_1_76AEB9F7CCE28B4E_Class_1_8F063601BC8471E7*>* FrontRoles; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76AEB9F7CCE28B4E_CLASS_1_1E04AC8D022EECBB__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_BC062F1D4054D29E(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_76AEB9F7CCE28B4E_CLASS_1_1E04AC8D022EECBB_METHOD_1_BC062F1D4054D29E_OFFSET))(this, a1);
	}
};
