#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityModule; }
namespace RPG::Client { class ActivityPanelData; }

#define CLASS_1_E9FFD01658A48D5B_METHOD_1_D26B0B3EF75C93C4_OFFSET UNITYSDK_OFFSET(0x10AAC9D0)
#define CLASS_1_E9FFD01658A48D5B_METHOD_1_FD0EEDF537D58107_OFFSET UNITYSDK_OFFSET(0x10AAC870)
#define CLASS_1_E9FFD01658A48D5B__CTOR_OFFSET UNITYSDK_OFFSET(0x10AAC800)

inline static constexpr unsigned int Class_1_E9FFD01658A48D5B_TypeDefinitionIndex = 48925;

class Class_1_E9FFD01658A48D5B : public ::System::Object
{
public:
	::RPG::Client::ActivityModule* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::ActivityModule* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityModule*))((::PBYTE)hIl2Cpp + CLASS_1_E9FFD01658A48D5B__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_E9FFD01658A48D5B* Method_1_FD0EEDF537D58107(::RPG::Client::ActivityModule* a1, ::System::UInt32 a2)
	{
		return ((::Class_1_E9FFD01658A48D5B*(*)(::RPG::Client::ActivityModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E9FFD01658A48D5B_METHOD_1_FD0EEDF537D58107_OFFSET))(a1, a2);
	}

	static ::Class_1_E9FFD01658A48D5B* Method_1_D26B0B3EF75C93C4(::RPG::Client::ActivityModule* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::Class_1_E9FFD01658A48D5B*(*)(::RPG::Client::ActivityModule*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E9FFD01658A48D5B_METHOD_1_D26B0B3EF75C93C4_OFFSET))(a1, a2, a3);
	}
};
