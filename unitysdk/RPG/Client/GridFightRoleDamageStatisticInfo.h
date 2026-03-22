#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightDamageStatisticInfo.h"
#include "unitysdk/System/Nullable_1.h"

class Class_1_12B8DCC04CBEB49F;
namespace RPG::Client { class GridFightSeasonRole; }

#define RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO_GET_ROLE_OFFSET UNITYSDK_OFFSET(0x93E3A00)
#define RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x93E34F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleDamageStatisticInfo_TypeDefinitionIndex = 51182;

	class GridFightRoleDamageStatisticInfo : public ::RPG::Client::GridFightDamageStatisticInfo
	{
	public:
		::System::Void _ctor(::Class_1_12B8DCC04CBEB49F* damageInfo, ::System::Double maxDamage, ::System::Nullable_1<::System::UInt32> seasonUID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_12B8DCC04CBEB49F*, ::System::Double, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO__CTOR_OFFSET))(this, damageInfo, maxDamage, seasonUID);
		}

		::RPG::Client::GridFightSeasonRole* get_Role()
		{
			return ((::RPG::Client::GridFightSeasonRole*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEDAMAGESTATISTICINFO_GET_ROLE_OFFSET))(this);
		}
	};
}
