#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7DD7B4B4C16A5113_METHOD_1_35A1BA48D9ACC587_OFFSET UNITYSDK_OFFSET(0x920CE30)
#define CLASS_1_7DD7B4B4C16A5113_METHOD_1_B1936CE4DA97AA45_1_OFFSET UNITYSDK_OFFSET(0x920D2B0)
#define CLASS_1_7DD7B4B4C16A5113_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x920CEA0)
#define CLASS_1_7DD7B4B4C16A5113_METHOD_1_BA02A17B9B2764D6_OFFSET UNITYSDK_OFFSET(0x920CF30)
#define CLASS_1_7DD7B4B4C16A5113_METHOD_1_CF393B7A1A02D362_OFFSET UNITYSDK_OFFSET(0x920CDA0)
#define CLASS_1_7DD7B4B4C16A5113_METHOD_1_EA6A33D1CD6C4265_OFFSET UNITYSDK_OFFSET(0x920D3E0)
#define CLASS_1_7DD7B4B4C16A5113_TOSTRING_OFFSET UNITYSDK_OFFSET(0x920D340)
#define CLASS_1_7DD7B4B4C16A5113__CTOR_OFFSET UNITYSDK_OFFSET(0x920CCF0)
#define CLASS_1_7DD7B4B4C16A5113___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x920D430)

inline static constexpr unsigned int Class_1_7DD7B4B4C16A5113_TypeDefinitionIndex = 38344;

class Class_1_7DD7B4B4C16A5113 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DD7B4B4C16A5113__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CF393B7A1A02D362(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7DD7B4B4C16A5113_METHOD_1_CF393B7A1A02D362_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_35A1BA48D9ACC587(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7DD7B4B4C16A5113_METHOD_1_35A1BA48D9ACC587_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DD7B4B4C16A5113_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_BA02A17B9B2764D6(::System::Collections::Generic::IEnumerable_1<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_7DD7B4B4C16A5113_METHOD_1_BA02A17B9B2764D6_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DD7B4B4C16A5113_METHOD_1_B1936CE4DA97AA45_1_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DD7B4B4C16A5113_TOSTRING_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_EA6A33D1CD6C4265()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DD7B4B4C16A5113_METHOD_1_EA6A33D1CD6C4265_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DD7B4B4C16A5113___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
