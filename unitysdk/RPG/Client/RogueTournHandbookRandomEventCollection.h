#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournHandbookDataCollection_2.h"

namespace RPG::Client { class RogueTournHandbookEventDataItem; }

#define RPG_CLIENT_ROGUETOURNHANDBOOKRANDOMEVENTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x9E74D20)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournHandbookRandomEventCollection_TypeDefinitionIndex = 53751;

	class RogueTournHandbookRandomEventCollection : public ::RPG::Client::RogueTournHandbookDataCollection_2<::System::UInt32, ::RPG::Client::RogueTournHandbookEventDataItem*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNHANDBOOKRANDOMEVENTCOLLECTION__CTOR_OFFSET))(this);
		}
	};
}
