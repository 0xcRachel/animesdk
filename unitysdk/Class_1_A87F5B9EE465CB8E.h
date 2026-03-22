#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
namespace RPG::Client { class AvatarData; }

#define CLASS_1_A87F5B9EE465CB8E_METHOD_1_3F6B5B1012601EB6_OFFSET UNITYSDK_OFFSET(0x10C69680)
#define CLASS_1_A87F5B9EE465CB8E_METHOD_1_BB04A425E7BE0EC1_OFFSET UNITYSDK_OFFSET(0x10C69620)
#define CLASS_1_A87F5B9EE465CB8E__CTOR_OFFSET UNITYSDK_OFFSET(0x10C69830)

inline static constexpr unsigned int Class_1_A87F5B9EE465CB8E_TypeDefinitionIndex = 52113;

class Class_1_A87F5B9EE465CB8E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A87F5B9EE465CB8E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_BB04A425E7BE0EC1(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_A87F5B9EE465CB8E_METHOD_1_BB04A425E7BE0EC1_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_617* Method_1_3F6B5B1012601EB6(::RPG::Client::AvatarData* a1)
	{
		return ((::Class_0_16E4307DCC419505_617*(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_A87F5B9EE465CB8E_METHOD_1_3F6B5B1012601EB6_OFFSET))(this, a1);
	}
};
