#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FB32407D2CB425FF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2E8EC767B50871B4_METHOD_1_4BE695D29AF18952_OFFSET UNITYSDK_OFFSET(0x10C499D0)
#define CLASS_1_2E8EC767B50871B4_METHOD_1_BD6E3C2B0CF2A8D5_OFFSET UNITYSDK_OFFSET(0x10C49B50)
#define CLASS_1_2E8EC767B50871B4__CTOR_OFFSET UNITYSDK_OFFSET(0x10C49D50)

inline static constexpr unsigned int Class_1_2E8EC767B50871B4_TypeDefinitionIndex = 44006;

class Class_1_2E8EC767B50871B4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_FB32407D2CB425FF*>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E8EC767B50871B4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4BE695D29AF18952(::System::Single a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2E8EC767B50871B4_METHOD_1_4BE695D29AF18952_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_BD6E3C2B0CF2A8D5(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2E8EC767B50871B4_METHOD_1_BD6E3C2B0CF2A8D5_OFFSET))(this, a1);
	}
};
