#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1839CBD9000EAF30.h"

class Class_0_16E4307DCC419505_69;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_3_6A84DB777CB2DE7F_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x10906250)
#define CLASS_3_6A84DB777CB2DE7F_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x109062C0)
#define CLASS_3_6A84DB777CB2DE7F__CTOR_OFFSET UNITYSDK_OFFSET(0x10906370)
#define CLASS_3_6A84DB777CB2DE7F___IFIXBASEPROXY_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x10906430)
#define CLASS_3_6A84DB777CB2DE7F___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x109064A0)
#define CLASS_3_6A84DB777CB2DE7F___N__0_OFFSET UNITYSDK_OFFSET(0x109063A0)

inline static constexpr unsigned int Class_3_6A84DB777CB2DE7F_TypeDefinitionIndex = 48137;

class Class_3_6A84DB777CB2DE7F : public ::Class_2_1839CBD9000EAF30
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A84DB777CB2DE7F__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A84DB777CB2DE7F_GETTYPENAME_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A84DB777CB2DE7F_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>* __n__0()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A84DB777CB2DE7F___N__0_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A84DB777CB2DE7F___IFIXBASEPROXY_GETTYPENAME_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>* __iFixBaseProxy_OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6A84DB777CB2DE7F___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET))(this);
	}
};
