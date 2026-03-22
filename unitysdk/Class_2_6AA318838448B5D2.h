#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePlanetFesBuff.h"

class Class_0_16E4307DCC419505_639;
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class PlanetFesAvatarData; }

#define CLASS_2_6AA318838448B5D2_COMBINE_OFFSET UNITYSDK_OFFSET(0x110D5380)
#define CLASS_2_6AA318838448B5D2_GETCOMBINEKEY_OFFSET UNITYSDK_OFFSET(0x110D54C0)
#define CLASS_2_6AA318838448B5D2_GET_PERCENTINCREASE_OFFSET UNITYSDK_OFFSET(0x110D5270)
#define CLASS_2_6AA318838448B5D2_ISEFFECTIVEONAVATAR_OFFSET UNITYSDK_OFFSET(0x110D52F0)
#define CLASS_2_6AA318838448B5D2_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x110D5340)
#define CLASS_2_6AA318838448B5D2__CTOR_OFFSET UNITYSDK_OFFSET(0x110D5520)
#define CLASS_2_6AA318838448B5D2__ONINITPARAM_OFFSET UNITYSDK_OFFSET(0x110D5280)

inline static constexpr unsigned int Class_2_6AA318838448B5D2_TypeDefinitionIndex = 52996;

class Class_2_6AA318838448B5D2 : public ::RPG::Client::BasePlanetFesBuff
{
public:
	::System::UInt32 Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AA318838448B5D2__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_PercentIncrease()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AA318838448B5D2_GET_PERCENTINCREASE_OFFSET))(this);
	}

	::System::Void _OnInitParam(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_6AA318838448B5D2__ONINITPARAM_OFFSET))(this, a1);
	}

	::System::Boolean IsEffectiveOnAvatar(::RPG::Client::PlanetFesAvatarData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_6AA318838448B5D2_ISEFFECTIVEONAVATAR_OFFSET))(this, a1);
	}

	::System::Boolean IsTriggered()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AA318838448B5D2_ISTRIGGERED_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_639* Combine(::RPG::Client::IPlanetFesBuff* a1)
	{
		return ((::Class_0_16E4307DCC419505_639*(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + CLASS_2_6AA318838448B5D2_COMBINE_OFFSET))(this, a1);
	}

	::System::Int32 GetCombineKey()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AA318838448B5D2_GETCOMBINEKEY_OFFSET))(this);
	}
};
