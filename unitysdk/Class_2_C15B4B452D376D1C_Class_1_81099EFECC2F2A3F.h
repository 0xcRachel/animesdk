#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C15B4B452D376D1C;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_C15B4B452D376D1C_CLASS_1_81099EFECC2F2A3F__CTOR_OFFSET UNITYSDK_OFFSET(0xD1F4150)

inline static constexpr unsigned int Class_2_C15B4B452D376D1C_Class_1_81099EFECC2F2A3F_TypeDefinitionIndex = 57405;

class Class_2_C15B4B452D376D1C_Class_1_81099EFECC2F2A3F : public ::System::Object
{
public:
	::System::Action_1<::Class_2_C15B4B452D376D1C*>* Field_1_1; // 0x10
	::System::Func_1<::System::Boolean>* Field_1_0; // 0x18

	::System::Void _ctor(::System::Func_1<::System::Boolean>* a1, ::System::Action_1<::Class_2_C15B4B452D376D1C*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::Class_2_C15B4B452D376D1C*>*))((::PBYTE)hIl2Cpp + CLASS_2_C15B4B452D376D1C_CLASS_1_81099EFECC2F2A3F__CTOR_OFFSET))(this, a1, a2);
	}
};
