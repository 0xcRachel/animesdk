#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A8D9B9F0D6AFDEDA.h"

namespace RPG::Client { class IAvatarInfoProvider; }

#define CLASS_2_5B5B3A34C7B782BA_GET_ISLEVELFIRST_OFFSET UNITYSDK_OFFSET(0x8790D70)
#define CLASS_2_5B5B3A34C7B782BA_METHOD_2_29CDD8C3D1007FD1_OFFSET UNITYSDK_OFFSET(0x8790E20)
#define CLASS_2_5B5B3A34C7B782BA_METHOD_2_84E3E55CC5D48994_OFFSET UNITYSDK_OFFSET(0x8790EB0)
#define CLASS_2_5B5B3A34C7B782BA_METHOD_2_EEEACB2DC038FC41_OFFSET UNITYSDK_OFFSET(0x8790D80)
#define CLASS_2_5B5B3A34C7B782BA_SET_ISLEVELFIRST_OFFSET UNITYSDK_OFFSET(0x8790D60)
#define CLASS_2_5B5B3A34C7B782BA__CTOR_OFFSET UNITYSDK_OFFSET(0x8790F50)

inline static constexpr unsigned int Class_2_5B5B3A34C7B782BA_TypeDefinitionIndex = 49856;

class Class_2_5B5B3A34C7B782BA : public ::Class_1_A8D9B9F0D6AFDEDA
{
public:
	::System::Boolean _IsLevelFirst_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B5B3A34C7B782BA__CTOR_OFFSET))(this);
	}

	::System::Void set_IsLevelFirst(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5B5B3A34C7B782BA_SET_ISLEVELFIRST_OFFSET))(this, value);
	}

	::System::Boolean get_IsLevelFirst()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5B5B3A34C7B782BA_GET_ISLEVELFIRST_OFFSET))(this);
	}

	::System::Int32 Method_2_EEEACB2DC038FC41(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::IAvatarInfoProvider* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_2_5B5B3A34C7B782BA_METHOD_2_EEEACB2DC038FC41_OFFSET))(this, a1, a2);
	}

	static ::System::Int32 Method_2_29CDD8C3D1007FD1(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::IAvatarInfoProvider* a2)
	{
		return ((::System::Int32(*)(::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_2_5B5B3A34C7B782BA_METHOD_2_29CDD8C3D1007FD1_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_2_84E3E55CC5D48994(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::IAvatarInfoProvider* a2)
	{
		return ((::System::Int32(*)(::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_2_5B5B3A34C7B782BA_METHOD_2_84E3E55CC5D48994_OFFSET))(a1, a2);
	}
};
