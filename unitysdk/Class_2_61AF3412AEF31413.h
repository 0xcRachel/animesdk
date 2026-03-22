#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

class Class_1_9100C4ECB2108214;
namespace System { class String; }

#define CLASS_2_61AF3412AEF31413_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0xFE90EE0)
#define CLASS_2_61AF3412AEF31413__CTOR_OFFSET UNITYSDK_OFFSET(0xFE90E70)

inline static constexpr unsigned int Class_2_61AF3412AEF31413_TypeDefinitionIndex = 55110;

class Class_2_61AF3412AEF31413 : public ::System::Exception
{
public:
	::Class_1_9100C4ECB2108214* _Request_k__BackingField; // 0x88

	::System::Void _ctor(::Class_1_9100C4ECB2108214* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9100C4ECB2108214*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_61AF3412AEF31413__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_9100C4ECB2108214* get_Request()
	{
		return ((::Class_1_9100C4ECB2108214*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_61AF3412AEF31413_GET_REQUEST_OFFSET))(this);
	}
};
