#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A23B44DF4FED5F66__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF8D30)

inline static constexpr unsigned int Class_1_A23B44DF4FED5F66_TypeDefinitionIndex = 27823;

class Class_1_A23B44DF4FED5F66 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A23B44DF4FED5F66__CTOR_OFFSET))(this);
	}
};
