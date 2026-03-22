#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FateGameMasterInfoPlayerItem; }
namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameMasterInfoMirrorItem; }
namespace RPG::Client { class IFateGameMasterInfoRealItem; }
namespace RPG::Client { class IFateGameMasterInfoRivalItem; }

#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASMIRROR_OFFSET UNITYSDK_OFFSET(0x91E24D0)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASPLAYER_OFFSET UNITYSDK_OFFSET(0x91E2350)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASREAL_OFFSET UNITYSDK_OFFSET(0x91E2460)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASRIVAL_OFFSET UNITYSDK_OFFSET(0x91E23F0)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISDEAD_OFFSET UNITYSDK_OFFSET(0x91E14B0)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISMIRROR_OFFSET UNITYSDK_OFFSET(0x91E21D0)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISPLAYER_OFFSET UNITYSDK_OFFSET(0x91E1920)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISREAL_OFFSET UNITYSDK_OFFSET(0x91E22D0)
#define RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISRIVAL_OFFSET UNITYSDK_OFFSET(0x91E2250)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterInfoItemExt_TypeDefinitionIndex = 50873;

	class FateGameMasterInfoItemExt : public ::System::Object
	{
	public:
		static ::System::Boolean IsDead(::RPG::Client::IFateGameMasterInfoRealItem* master)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameMasterInfoRealItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISDEAD_OFFSET))(master);
		}

		static ::System::Boolean IsPlayer(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISPLAYER_OFFSET))(master);
		}

		static ::System::Boolean IsRival(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISRIVAL_OFFSET))(master);
		}

		static ::System::Boolean IsReal(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISREAL_OFFSET))(master);
		}

		static ::System::Boolean IsMirror(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::System::Boolean(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ISMIRROR_OFFSET))(master);
		}

		static ::RPG::Client::FateGameMasterInfoPlayerItem* AsPlayer(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::RPG::Client::FateGameMasterInfoPlayerItem*(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASPLAYER_OFFSET))(master);
		}

		static ::RPG::Client::IFateGameMasterInfoRivalItem* AsRival(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::RPG::Client::IFateGameMasterInfoRivalItem*(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASRIVAL_OFFSET))(master);
		}

		static ::RPG::Client::IFateGameMasterInfoRealItem* AsReal(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::RPG::Client::IFateGameMasterInfoRealItem*(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASREAL_OFFSET))(master);
		}

		static ::RPG::Client::IFateGameMasterInfoMirrorItem* AsMirror(::RPG::Client::IFateGameMasterInfoItem* master)
		{
			return ((::RPG::Client::IFateGameMasterInfoMirrorItem*(*)(::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFOITEMEXT_ASMIRROR_OFFSET))(master);
		}
	};
}
