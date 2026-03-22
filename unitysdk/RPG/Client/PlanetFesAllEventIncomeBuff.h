#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePlanetFesBuff.h"

class Class_0_16E4307DCC419505_639;
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class PlanetFesAvatarData; }

#define RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_COMBINE_OFFSET UNITYSDK_OFFSET(0x9AB4D50)
#define RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_GETCOMBINEKEY_OFFSET UNITYSDK_OFFSET(0x9AB4E90)
#define RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_GET_PERCENTINCREASE_OFFSET UNITYSDK_OFFSET(0x9AB4C40)
#define RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_ISEFFECTIVEONAVATAR_OFFSET UNITYSDK_OFFSET(0x9AB4CC0)
#define RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0x9AB4D10)
#define RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x9AB4EF0)
#define RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF__ONINITPARAM_OFFSET UNITYSDK_OFFSET(0x9AB4C50)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAllEventIncomeBuff_TypeDefinitionIndex = 52995;

	class PlanetFesAllEventIncomeBuff : public ::RPG::Client::BasePlanetFesBuff
	{
	public:
		::System::UInt32 _PercentIncrease; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PercentIncrease()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_GET_PERCENTINCREASE_OFFSET))(this);
		}

		::System::Void _OnInitParam(::Il2CppArray<::System::UInt32>* param)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF__ONINITPARAM_OFFSET))(this, param);
		}

		::System::Boolean IsEffectiveOnAvatar(::RPG::Client::PlanetFesAvatarData* avatar)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_ISEFFECTIVEONAVATAR_OFFSET))(this, avatar);
		}

		::System::Boolean IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_ISTRIGGERED_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_639* Combine(::RPG::Client::IPlanetFesBuff* other)
		{
			return ((::Class_0_16E4307DCC419505_639*(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_COMBINE_OFFSET))(this, other);
		}

		::System::Int32 GetCombineKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLEVENTINCOMEBUFF_GETCOMBINEKEY_OFFSET))(this);
		}
	};
}
