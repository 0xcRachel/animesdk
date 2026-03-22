#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8A1B169B056DC41A;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E0231B607CD65186_6__CTOR_OFFSET UNITYSDK_OFFSET(0x110D5530)

inline static constexpr unsigned int Class_1_E0231B607CD65186_6_TypeDefinitionIndex = 58705;

class Class_1_E0231B607CD65186_6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_8A1B169B056DC41A*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0231B607CD65186_6__CTOR_OFFSET))(this);
	}
};
