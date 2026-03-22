#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4E2D6CD6C3C9866A_METHOD_1_6BB86695870EFBD1_1_OFFSET UNITYSDK_OFFSET(0x17170C90)
#define CLASS_1_4E2D6CD6C3C9866A_METHOD_1_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x17170B00)
#define CLASS_1_4E2D6CD6C3C9866A__CCTOR_OFFSET UNITYSDK_OFFSET(0x17170E20)

inline static constexpr unsigned int Class_1_4E2D6CD6C3C9866A_TypeDefinitionIndex = 22064;

class Class_1_4E2D6CD6C3C9866A : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4E2D6CD6C3C9866A_TypeDefinitionIndex)->GetStaticField(0x2E490);
	}
	static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4E2D6CD6C3C9866A_TypeDefinitionIndex)->GetStaticField(0x2E498);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4E2D6CD6C3C9866A__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_6BB86695870EFBD1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4E2D6CD6C3C9866A_METHOD_1_6BB86695870EFBD1_OFFSET))();
	}

	static ::System::Void Method_1_6BB86695870EFBD1_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4E2D6CD6C3C9866A_METHOD_1_6BB86695870EFBD1_1_OFFSET))();
	}
};
