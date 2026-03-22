#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5B239AF8CDCBD731_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x10C4CBE0)
#define CLASS_1_5B239AF8CDCBD731_METHOD_1_9E9615ED35F4AD70_OFFSET UNITYSDK_OFFSET(0x10C4CA90)
#define CLASS_1_5B239AF8CDCBD731__CTOR_OFFSET UNITYSDK_OFFSET(0x10C4CC80)

inline static constexpr unsigned int Class_1_5B239AF8CDCBD731_TypeDefinitionIndex = 38970;

class Class_1_5B239AF8CDCBD731 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B239AF8CDCBD731__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9E9615ED35F4AD70(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5B239AF8CDCBD731_METHOD_1_9E9615ED35F4AD70_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5B239AF8CDCBD731_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
