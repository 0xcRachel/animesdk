#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E9FFD01658A48D5B;
namespace RPG::Client { class ActivityModule; }

#define CLASS_1_377C8596CD0B5FD6_METHOD_1_633B14F19DB86E4A_OFFSET UNITYSDK_OFFSET(0x86878F0)
#define CLASS_1_377C8596CD0B5FD6_METHOD_1_9F9E89394F08FFBE_OFFSET UNITYSDK_OFFSET(0x8687940)
#define CLASS_1_377C8596CD0B5FD6__CTOR_OFFSET UNITYSDK_OFFSET(0x8687880)

inline static constexpr unsigned int Class_1_377C8596CD0B5FD6_TypeDefinitionIndex = 48928;

class Class_1_377C8596CD0B5FD6 : public ::System::Object
{
public:
	::RPG::Client::ActivityModule* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::ActivityModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityModule*))((::PBYTE)hIl2Cpp + CLASS_1_377C8596CD0B5FD6__CTOR_OFFSET))(this, a1);
	}

	::Class_1_E9FFD01658A48D5B* Method_1_633B14F19DB86E4A(::System::UInt32 a1)
	{
		return ((::Class_1_E9FFD01658A48D5B*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_377C8596CD0B5FD6_METHOD_1_633B14F19DB86E4A_OFFSET))(this, a1);
	}

	::Class_1_E9FFD01658A48D5B* Method_1_9F9E89394F08FFBE(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_E9FFD01658A48D5B*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_377C8596CD0B5FD6_METHOD_1_9F9E89394F08FFBE_OFFSET))(this, a1, a2);
	}
};
