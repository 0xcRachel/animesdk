#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_823;
class Class_0_16E4307DCC419505_833;
class Class_2_E55AE8831AAE79EB_1;
namespace System::Reflection { class MethodInfo; }

#define CLASS_1_96755BD61CBCF580_1_METHOD_1_058118AF650F11B7_OFFSET UNITYSDK_OFFSET(0xAC978F0)
#define CLASS_1_96755BD61CBCF580_1__CTOR_OFFSET UNITYSDK_OFFSET(0xAC978E0)

inline static constexpr unsigned int Class_1_96755BD61CBCF580_1_TypeDefinitionIndex = 58312;

class Class_1_96755BD61CBCF580_1 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_833* Field_1_2; // 0x10
	::Class_2_E55AE8831AAE79EB_1* Field_1_1; // 0x18
	::System::Reflection::MethodInfo* Field_1_0; // 0x20

	::System::Void _ctor(::System::Reflection::MethodInfo* a1, ::Class_2_E55AE8831AAE79EB_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*, ::Class_2_E55AE8831AAE79EB_1*))((::PBYTE)hIl2Cpp + CLASS_1_96755BD61CBCF580_1__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_823* Method_1_058118AF650F11B7(::System::Object* a1)
	{
		return ((::Class_0_16E4307DCC419505_823*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_96755BD61CBCF580_1_METHOD_1_058118AF650F11B7_OFFSET))(this, a1);
	}
};
