#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BasePlanetFesBuff.h"

class Class_0_16E4307DCC419505_770;
namespace RPG::Client { class IPlanetFesBuff; }
namespace RPG::Client { class PlanetFesAvatarData; }

#define RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_COMBINE_OFFSET UNITYSDK_OFFSET(0xF6E6250)
#define RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_GETCOMBINEKEY_OFFSET UNITYSDK_OFFSET(0xF6E6390)
#define RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_GET_PERCENTINCREASE_OFFSET UNITYSDK_OFFSET(0xF6E6140)
#define RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_ISEFFECTIVEONAVATAR_OFFSET UNITYSDK_OFFSET(0xF6E61C0)
#define RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_ISTRIGGERED_OFFSET UNITYSDK_OFFSET(0xF6E6210)
#define RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0xF6E63F0)
#define RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF__ONINITPARAM_OFFSET UNITYSDK_OFFSET(0xF6E6150)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAllLandIncomeBuff_TypeDefinitionIndex = 61294;

	class PlanetFesAllLandIncomeBuff : public ::RPG::Client::BasePlanetFesBuff
	{
	public:
		::System::UInt32 _PercentIncrease; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PercentIncrease()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_GET_PERCENTINCREASE_OFFSET))(this);
		}

		::System::Void _OnInitParam(::Il2CppArray<::System::UInt32>* param)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF__ONINITPARAM_OFFSET))(this, param);
		}

		::System::Boolean IsEffectiveOnAvatar(::RPG::Client::PlanetFesAvatarData* avatar)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_ISEFFECTIVEONAVATAR_OFFSET))(this, avatar);
		}

		::System::Boolean IsTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_ISTRIGGERED_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_770* Combine(::RPG::Client::IPlanetFesBuff* other)
		{
			return ((::Class_0_16E4307DCC419505_770*(*)(::PVOID, ::RPG::Client::IPlanetFesBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_COMBINE_OFFSET))(this, other);
		}

		::System::Int32 GetCombineKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESALLLANDINCOMEBUFF_GETCOMBINEKEY_OFFSET))(this);
		}
	};
}
