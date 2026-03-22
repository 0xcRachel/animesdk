#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_22C7857A78B81591_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8740890)
#define CLASS_1_22C7857A78B81591_METHOD_1_0E023B688E2A5CBD_OFFSET UNITYSDK_OFFSET(0x87408A0)
#define CLASS_1_22C7857A78B81591_METHOD_1_605966AC8FE576A8_OFFSET UNITYSDK_OFFSET(0x8740820)
#define CLASS_1_22C7857A78B81591__CTOR_OFFSET UNITYSDK_OFFSET(0x87407B0)

inline static constexpr unsigned int Class_1_22C7857A78B81591_TypeDefinitionIndex = 49293;

class Class_1_22C7857A78B81591 : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* Field_1_1; // 0x10
	::System::String* _Name_k__BackingField; // 0x18
	::System::Int16 Field_1_2; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Int16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_22C7857A78B81591__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22C7857A78B81591_GET_NAME_OFFSET))(this);
	}

	::System::Int16 Method_1_0E023B688E2A5CBD()
	{
		return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22C7857A78B81591_METHOD_1_0E023B688E2A5CBD_OFFSET))(this);
	}

	::System::Void Method_1_605966AC8FE576A8(::System::Int16 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + CLASS_1_22C7857A78B81591_METHOD_1_605966AC8FE576A8_OFFSET))(this, a1);
	}
};
