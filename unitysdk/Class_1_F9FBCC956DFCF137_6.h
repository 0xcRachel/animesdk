#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2B4C9D5EFCB958DD;
namespace System { class String; }

#define CLASS_1_F9FBCC956DFCF137_6_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x140AAD90)
#define CLASS_1_F9FBCC956DFCF137_6_METHOD_1_838C5A5961309B55_OFFSET UNITYSDK_OFFSET(0x140AADD0)
#define CLASS_1_F9FBCC956DFCF137_6_TOSTRING_OFFSET UNITYSDK_OFFSET(0x140AAE30)
#define CLASS_1_F9FBCC956DFCF137_6__CTOR_OFFSET UNITYSDK_OFFSET(0x140AAD80)
#define CLASS_1_F9FBCC956DFCF137_6___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x140AAEE0)

inline static constexpr unsigned int Class_1_F9FBCC956DFCF137_6_TypeDefinitionIndex = 55515;

class Class_1_F9FBCC956DFCF137_6 : public ::System::Object
{
public:
	::Class_1_2B4C9D5EFCB958DD* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_2B4C9D5EFCB958DD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B4C9D5EFCB958DD*))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_6__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_6_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_838C5A5961309B55()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_6_METHOD_1_838C5A5961309B55_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_6_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F9FBCC956DFCF137_6___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
