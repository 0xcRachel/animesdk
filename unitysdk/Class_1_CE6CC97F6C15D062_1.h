#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
namespace RPG::Client { class AvatarData; }

#define CLASS_1_CE6CC97F6C15D062_1_METHOD_1_37C2B6D936093B30_OFFSET UNITYSDK_OFFSET(0x8A420C0)
#define CLASS_1_CE6CC97F6C15D062_1_METHOD_1_55D05C0B5C1FD660_OFFSET UNITYSDK_OFFSET(0x8A42110)
#define CLASS_1_CE6CC97F6C15D062_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8A426A0)

inline static constexpr unsigned int Class_1_CE6CC97F6C15D062_1_TypeDefinitionIndex = 52103;

class Class_1_CE6CC97F6C15D062_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE6CC97F6C15D062_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_37C2B6D936093B30(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_CE6CC97F6C15D062_1_METHOD_1_37C2B6D936093B30_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_617* Method_1_55D05C0B5C1FD660(::RPG::Client::AvatarData* a1)
	{
		return ((::Class_0_16E4307DCC419505_617*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_CE6CC97F6C15D062_1_METHOD_1_55D05C0B5C1FD660_OFFSET))(this, a1);
	}
};
