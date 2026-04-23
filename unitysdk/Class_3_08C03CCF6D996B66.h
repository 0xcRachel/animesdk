#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_59664D23FCBEAD63.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_3_08C03CCF6D996B66_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xD4C3240)
#define CLASS_3_08C03CCF6D996B66_METHOD_3_442FB31BA698F929_OFFSET UNITYSDK_OFFSET(0xD4C3520)
#define CLASS_3_08C03CCF6D996B66_METHOD_3_BCB4D064C23934F3_OFFSET UNITYSDK_OFFSET(0xD4C3600)
#define CLASS_3_08C03CCF6D996B66_METHOD_3_CA1744CA167C6AAE_OFFSET UNITYSDK_OFFSET(0xD4C32B0)
#define CLASS_3_08C03CCF6D996B66__CTOR_OFFSET UNITYSDK_OFFSET(0xD4C35E0)
#define CLASS_3_08C03CCF6D996B66___IFIXBASEPROXY_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xD4C35F0)

inline static constexpr unsigned int Class_3_08C03CCF6D996B66_TypeDefinitionIndex = 54877;

class Class_3_08C03CCF6D996B66 : public ::Class_2_59664D23FCBEAD63
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08C03CCF6D996B66__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08C03CCF6D996B66_GETTYPENAME_OFFSET))(this);
	}

	::System::Boolean Method_3_CA1744CA167C6AAE(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_08C03CCF6D996B66_METHOD_3_CA1744CA167C6AAE_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_3_442FB31BA698F929(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_08C03CCF6D996B66_METHOD_3_442FB31BA698F929_OFFSET))(this, a1);
	}

	::System::String* __iFixBaseProxy_GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_08C03CCF6D996B66___IFIXBASEPROXY_GETTYPENAME_OFFSET))(this);
	}

	::System::Boolean Method_3_BCB4D064C23934F3(::System::String* P0, ::System::String* P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_08C03CCF6D996B66_METHOD_3_BCB4D064C23934F3_OFFSET))(this, P0, P1);
	}
};
