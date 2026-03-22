#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_13;
namespace System { class Action; }

#define CLASS_1_32E5E72A371B7AA3_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10E03A30)
#define CLASS_1_32E5E72A371B7AA3_TICK_OFFSET UNITYSDK_OFFSET(0x10E03BB0)
#define CLASS_1_32E5E72A371B7AA3__CTOR_OFFSET UNITYSDK_OFFSET(0x10E03A20)

inline static constexpr unsigned int Class_1_32E5E72A371B7AA3_TypeDefinitionIndex = 61200;

class Class_1_32E5E72A371B7AA3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32E5E72A371B7AA3__CTOR_OFFSET))(this);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_13* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_13*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_32E5E72A371B7AA3_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_32E5E72A371B7AA3_TICK_OFFSET))(this, a1);
	}
};
