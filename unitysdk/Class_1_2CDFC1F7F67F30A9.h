#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2CDFC1F7F67F30A9_METHOD_1_7206DC8F66A4D2A8_1_OFFSET UNITYSDK_OFFSET(0x176FB5D0)
#define CLASS_1_2CDFC1F7F67F30A9_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x176FB480)
#define CLASS_1_2CDFC1F7F67F30A9__CCTOR_OFFSET UNITYSDK_OFFSET(0x176FB720)

inline static constexpr unsigned int Class_1_2CDFC1F7F67F30A9_TypeDefinitionIndex = 23602;

class Class_1_2CDFC1F7F67F30A9 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDFC1F7F67F30A9_TypeDefinitionIndex)->GetStaticField(0x49D50);
	}
	static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2CDFC1F7F67F30A9_TypeDefinitionIndex)->GetStaticField(0x49D58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2CDFC1F7F67F30A9__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2CDFC1F7F67F30A9_METHOD_1_7206DC8F66A4D2A8_OFFSET))();
	}

	static ::System::Void Method_1_7206DC8F66A4D2A8_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2CDFC1F7F67F30A9_METHOD_1_7206DC8F66A4D2A8_1_OFFSET))();
	}
};
