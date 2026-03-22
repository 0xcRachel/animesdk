#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_156;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EBA8C9C89C53F81F_11__CTOR_OFFSET UNITYSDK_OFFSET(0x16300FB0)

inline static constexpr unsigned int Class_1_EBA8C9C89C53F81F_11_TypeDefinitionIndex = 31570;

class Class_1_EBA8C9C89C53F81F_11 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_156*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBA8C9C89C53F81F_11__CTOR_OFFSET))(this);
	}
};
