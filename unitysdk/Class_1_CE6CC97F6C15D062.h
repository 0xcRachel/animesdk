#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
namespace RPG::Client { class AvatarData; }

#define CLASS_1_CE6CC97F6C15D062_METHOD_1_37C2B6D936093B30_OFFSET UNITYSDK_OFFSET(0x10F2FEA0)
#define CLASS_1_CE6CC97F6C15D062_METHOD_1_A0ECB0F7C0070115_OFFSET UNITYSDK_OFFSET(0x10F2FEF0)
#define CLASS_1_CE6CC97F6C15D062__CTOR_OFFSET UNITYSDK_OFFSET(0x10F30340)

inline static constexpr unsigned int Class_1_CE6CC97F6C15D062_TypeDefinitionIndex = 52101;

class Class_1_CE6CC97F6C15D062 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE6CC97F6C15D062__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_37C2B6D936093B30(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_CE6CC97F6C15D062_METHOD_1_37C2B6D936093B30_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_617* Method_1_A0ECB0F7C0070115(::RPG::Client::AvatarData* a1)
	{
		return ((::Class_0_16E4307DCC419505_617*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_CE6CC97F6C15D062_METHOD_1_A0ECB0F7C0070115_OFFSET))(this, a1);
	}
};
