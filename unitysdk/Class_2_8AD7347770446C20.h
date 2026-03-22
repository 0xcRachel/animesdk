#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Object; }

#define CLASS_2_8AD7347770446C20_GET_SENDER_OFFSET UNITYSDK_OFFSET(0x17B86300)
#define CLASS_2_8AD7347770446C20_SET_SENDER_OFFSET UNITYSDK_OFFSET(0x17B86310)
#define CLASS_2_8AD7347770446C20__CTOR_OFFSET UNITYSDK_OFFSET(0x17B862D0)

inline static constexpr unsigned int Class_2_8AD7347770446C20_TypeDefinitionIndex = 33019;

class Class_2_8AD7347770446C20 : public ::System::EventArgs
{
public:
	::System::Object* _Sender_k__BackingField; // 0x10

	::System::Void _ctor(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8AD7347770446C20__CTOR_OFFSET))(this, a1);
	}

	::System::Object* get_Sender()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8AD7347770446C20_GET_SENDER_OFFSET))(this);
	}

	::System::Void set_Sender(::System::Object* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8AD7347770446C20_SET_SENDER_OFFSET))(this, value);
	}
};
