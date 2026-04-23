#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_EBD9A77671154634;

#define CLASS_2_85BE16C337B2BFD0_1_GET_SOLOSTANUID_OFFSET UNITYSDK_OFFSET(0xC655CD0)
#define CLASS_2_85BE16C337B2BFD0_1_SET_SOLOSTANUID_OFFSET UNITYSDK_OFFSET(0xC655CE0)
#define CLASS_2_85BE16C337B2BFD0_1_UPDATE_OFFSET UNITYSDK_OFFSET(0xC655C30)
#define CLASS_2_85BE16C337B2BFD0_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC655BB0)
#define CLASS_2_85BE16C337B2BFD0_1___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0xC655CF0)

inline static constexpr unsigned int Class_2_85BE16C337B2BFD0_1_TypeDefinitionIndex = 59872;

class Class_2_85BE16C337B2BFD0_1 : public ::RPG::Client::GridFightGameModifier
{
public:
	::System::UInt32 _SoloStanUID_k__BackingField; // 0x28

	::System::Void _ctor(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_85BE16C337B2BFD0_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Update(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_85BE16C337B2BFD0_1_UPDATE_OFFSET))(this, a1);
	}

	::System::UInt32 get_SoloStanUID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_85BE16C337B2BFD0_1_GET_SOLOSTANUID_OFFSET))(this);
	}

	::System::Void set_SoloStanUID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_85BE16C337B2BFD0_1_SET_SOLOSTANUID_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Update(::Class_1_EBD9A77671154634* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_85BE16C337B2BFD0_1___IFIXBASEPROXY_UPDATE_OFFSET))(this, P0);
	}
};
