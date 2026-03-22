#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_299;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_910212C026901FF5_CLEAR_OFFSET UNITYSDK_OFFSET(0x10A1A7E0)
#define CLASS_1_910212C026901FF5_METHOD_1_255811211D98CDCE_OFFSET UNITYSDK_OFFSET(0x10A1A8A0)
#define CLASS_1_910212C026901FF5_METHOD_1_4B1BC378103A8FD6_OFFSET UNITYSDK_OFFSET(0x10A1A840)
#define CLASS_1_910212C026901FF5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10A1AA80)
#define CLASS_1_910212C026901FF5_METHOD_1_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x10A1A950)
#define CLASS_1_910212C026901FF5_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x10A1AA40)
#define CLASS_1_910212C026901FF5_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x10A1AA00)
#define CLASS_1_910212C026901FF5__CTOR_OFFSET UNITYSDK_OFFSET(0x10A1AAC0)

inline static constexpr unsigned int Class_1_910212C026901FF5_TypeDefinitionIndex = 56665;

class Class_1_910212C026901FF5 : public ::System::Object
{
public:
	::System::Action_2<::Class_0_16E4307DCC419505_299*, ::System::Boolean>* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910212C026901FF5__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910212C026901FF5_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_4B1BC378103A8FD6(::System::Action_2<::Class_0_16E4307DCC419505_299*, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_0_16E4307DCC419505_299*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_910212C026901FF5_METHOD_1_4B1BC378103A8FD6_OFFSET))(this, a1);
	}

	::System::Void Method_1_255811211D98CDCE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_910212C026901FF5_METHOD_1_255811211D98CDCE_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910212C026901FF5_METHOD_1_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910212C026901FF5_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910212C026901FF5_ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_910212C026901FF5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
