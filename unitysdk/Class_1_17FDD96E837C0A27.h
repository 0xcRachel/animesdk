#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_17FDD96E837C0A27_METHOD_1_8327FEEFBF3EC917_1_OFFSET UNITYSDK_OFFSET(0x1931C0A0)
#define CLASS_1_17FDD96E837C0A27_METHOD_1_8327FEEFBF3EC917_OFFSET UNITYSDK_OFFSET(0x1931BF10)
#define CLASS_1_17FDD96E837C0A27__CCTOR_OFFSET UNITYSDK_OFFSET(0x1931C230)

inline static constexpr unsigned int Class_1_17FDD96E837C0A27_TypeDefinitionIndex = 14695;

class Class_1_17FDD96E837C0A27 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17FDD96E837C0A27_TypeDefinitionIndex)->GetStaticField(0x42F30);
	}
	static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_17FDD96E837C0A27_TypeDefinitionIndex)->GetStaticField(0x42F38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17FDD96E837C0A27__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_8327FEEFBF3EC917()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17FDD96E837C0A27_METHOD_1_8327FEEFBF3EC917_OFFSET))();
	}

	static ::System::Void Method_1_8327FEEFBF3EC917_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_17FDD96E837C0A27_METHOD_1_8327FEEFBF3EC917_1_OFFSET))();
	}
};
