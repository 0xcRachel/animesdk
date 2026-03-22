#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5BE136E515AF9A61;
class Class_1_9545E010A01758DB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E0231B607CD65186_4__CTOR_OFFSET UNITYSDK_OFFSET(0x162E8710)

inline static constexpr unsigned int Class_1_E0231B607CD65186_4_TypeDefinitionIndex = 31752;

class Class_1_E0231B607CD65186_4 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_9545E010A01758DB*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5BE136E515AF9A61*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0231B607CD65186_4__CTOR_OFFSET))(this);
	}
};
