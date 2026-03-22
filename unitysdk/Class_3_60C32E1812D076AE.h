#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1839CBD9000EAF30.h"

class Class_0_16E4307DCC419505_42;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_3_60C32E1812D076AE_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x10C9BE00)
#define CLASS_3_60C32E1812D076AE_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x10C9BE70)
#define CLASS_3_60C32E1812D076AE__CTOR_OFFSET UNITYSDK_OFFSET(0x10C9BF20)
#define CLASS_3_60C32E1812D076AE___IFIXBASEPROXY_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x10C9BFE0)
#define CLASS_3_60C32E1812D076AE___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x10C9C050)
#define CLASS_3_60C32E1812D076AE___N__0_OFFSET UNITYSDK_OFFSET(0x10C9BF50)

inline static constexpr unsigned int Class_3_60C32E1812D076AE_TypeDefinitionIndex = 47056;

class Class_3_60C32E1812D076AE : public ::Class_2_1839CBD9000EAF30
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60C32E1812D076AE__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60C32E1812D076AE_GETTYPENAME_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_42*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_42*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60C32E1812D076AE_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_42*>* __n__0()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_42*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60C32E1812D076AE___N__0_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60C32E1812D076AE___IFIXBASEPROXY_GETTYPENAME_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_42*>* __iFixBaseProxy_OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_42*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60C32E1812D076AE___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET))(this);
	}
};
