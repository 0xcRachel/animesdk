#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_318;
class Class_0_16E4307DCC419505_319;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_484149DA56D65FCE_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x10D54990)
#define CLASS_1_484149DA56D65FCE_METHOD_1_4D9E1AC61B60D577_OFFSET UNITYSDK_OFFSET(0x10D54A20)
#define CLASS_1_484149DA56D65FCE_METHOD_1_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0x10D549B0)
#define CLASS_1_484149DA56D65FCE_METHOD_1_689727C214663B27_OFFSET UNITYSDK_OFFSET(0x10D54C10)
#define CLASS_1_484149DA56D65FCE_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x10D549A0)
#define CLASS_1_484149DA56D65FCE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D54DA0)

inline static constexpr unsigned int Class_1_484149DA56D65FCE_TypeDefinitionIndex = 40989;

class Class_1_484149DA56D65FCE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Class_0_16E4307DCC419505_319*, ::Class_0_16E4307DCC419505_318*>* Field_1_0; // 0x10
	::System::Boolean _IsDirty_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_484149DA56D65FCE__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsDirty()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_484149DA56D65FCE_GET_ISDIRTY_OFFSET))(this);
	}

	::System::Void set_IsDirty(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_484149DA56D65FCE_SET_ISDIRTY_OFFSET))(this, value);
	}

	::System::Boolean Method_1_5E72916301E347E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_484149DA56D65FCE_METHOD_1_5E72916301E347E2_OFFSET))(this);
	}

	::System::Void Method_1_4D9E1AC61B60D577()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_484149DA56D65FCE_METHOD_1_4D9E1AC61B60D577_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_318* Method_1_689727C214663B27(::Class_0_16E4307DCC419505_319* a1)
	{
		return ((::Class_0_16E4307DCC419505_318*(*)(::PVOID, ::Class_0_16E4307DCC419505_319*))((::PBYTE)hIl2Cpp + CLASS_1_484149DA56D65FCE_METHOD_1_689727C214663B27_OFFSET))(this, a1);
	}
};
