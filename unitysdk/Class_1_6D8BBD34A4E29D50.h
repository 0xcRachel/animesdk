#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F9FBCC956DFCF137_13;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_6D8BBD34A4E29D50_EXECUTE_OFFSET UNITYSDK_OFFSET(0x111C8260)
#define CLASS_1_6D8BBD34A4E29D50_TICK_OFFSET UNITYSDK_OFFSET(0x111C82D0)
#define CLASS_1_6D8BBD34A4E29D50__CTOR_OFFSET UNITYSDK_OFFSET(0x111C8250)

inline static constexpr unsigned int Class_1_6D8BBD34A4E29D50_TypeDefinitionIndex = 61608;

class Class_1_6D8BBD34A4E29D50 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D8BBD34A4E29D50__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute(::Class_1_F9FBCC956DFCF137_13* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F9FBCC956DFCF137_13*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6D8BBD34A4E29D50_EXECUTE_OFFSET))(this, a1, a2);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6D8BBD34A4E29D50_TICK_OFFSET))(this, a1);
	}
};
