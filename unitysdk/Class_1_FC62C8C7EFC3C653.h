#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_497467513E80D141;
class Class_1_6AE08EF87FF0FFCC;
namespace System { class Type; }

#define CLASS_1_FC62C8C7EFC3C653_METHOD_1_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x10DCA320)
#define CLASS_1_FC62C8C7EFC3C653_METHOD_1_BC9F83DBB4E359FE_OFFSET UNITYSDK_OFFSET(0x10DCA390)
#define CLASS_1_FC62C8C7EFC3C653_METHOD_1_DC388DC6F82177FE_OFFSET UNITYSDK_OFFSET(0x10DCA4E0)
#define CLASS_1_FC62C8C7EFC3C653__CTOR_OFFSET UNITYSDK_OFFSET(0x10DCA490)

inline static constexpr unsigned int Class_1_FC62C8C7EFC3C653_TypeDefinitionIndex = 49752;

class Class_1_FC62C8C7EFC3C653 : public ::System::Object
{
public:
	::Class_1_497467513E80D141* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_497467513E80D141* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_497467513E80D141*))((::PBYTE)hIl2Cpp + CLASS_1_FC62C8C7EFC3C653__CTOR_OFFSET))(this, a1);
	}

	::System::Type* Method_1_4FB5F56430673EA6()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC62C8C7EFC3C653_METHOD_1_4FB5F56430673EA6_OFFSET))(this);
	}

	::Il2CppArray<::System::Type*>* Method_1_BC9F83DBB4E359FE()
	{
		return ((::Il2CppArray<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FC62C8C7EFC3C653_METHOD_1_BC9F83DBB4E359FE_OFFSET))(this);
	}

	::System::Void Method_1_DC388DC6F82177FE(::Class_1_6AE08EF87FF0FFCC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6AE08EF87FF0FFCC*))((::PBYTE)hIl2Cpp + CLASS_1_FC62C8C7EFC3C653_METHOD_1_DC388DC6F82177FE_OFFSET))(this, a1);
	}
};
