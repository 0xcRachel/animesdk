#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
namespace RPG::Client { class AvatarData; }

#define CLASS_1_1A1687CD5C9FC2CD_METHOD_1_78D6E28330609121_OFFSET UNITYSDK_OFFSET(0x8A88270)
#define CLASS_1_1A1687CD5C9FC2CD_METHOD_1_B786D35BDA35790D_OFFSET UNITYSDK_OFFSET(0x8A88440)
#define CLASS_1_1A1687CD5C9FC2CD__CTOR_OFFSET UNITYSDK_OFFSET(0x8A88640)

inline static constexpr unsigned int Class_1_1A1687CD5C9FC2CD_TypeDefinitionIndex = 52109;

class Class_1_1A1687CD5C9FC2CD : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1A1687CD5C9FC2CD__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_78D6E28330609121(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_1A1687CD5C9FC2CD_METHOD_1_78D6E28330609121_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_617* Method_1_B786D35BDA35790D(::RPG::Client::AvatarData* a1)
	{
		return ((::Class_0_16E4307DCC419505_617*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_1A1687CD5C9FC2CD_METHOD_1_B786D35BDA35790D_OFFSET))(this, a1);
	}
};
