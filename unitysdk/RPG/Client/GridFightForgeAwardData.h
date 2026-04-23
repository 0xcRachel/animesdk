#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightForgeAwardType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_GRIDFIGHTFORGEAWARDDATA_GET_AWARDINDEX_OFFSET UNITYSDK_OFFSET(0x174D0C70)
#define RPG_CLIENT_GRIDFIGHTFORGEAWARDDATA_GET_AWARDTYPE_OFFSET UNITYSDK_OFFSET(0x174D0C90)
#define RPG_CLIENT_GRIDFIGHTFORGEAWARDDATA_SET_AWARDINDEX_OFFSET UNITYSDK_OFFSET(0x174D0C80)
#define RPG_CLIENT_GRIDFIGHTFORGEAWARDDATA_SET_AWARDTYPE_OFFSET UNITYSDK_OFFSET(0x174D0CA0)
#define RPG_CLIENT_GRIDFIGHTFORGEAWARDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x174D0C60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightForgeAwardData_TypeDefinitionIndex = 59835;

	class GridFightForgeAwardData : public ::System::Object
	{
	public:
		::RPG::Client::GridFightForgeAwardType _AwardType_k__BackingField; // 0x10
		::System::UInt32 _AwardIndex_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 awardIndex, ::RPG::Client::GridFightForgeAwardType awardType)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightForgeAwardType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEAWARDDATA__CTOR_OFFSET))(this, awardIndex, awardType);
		}

		::System::UInt32 get_AwardIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEAWARDDATA_GET_AWARDINDEX_OFFSET))(this);
		}

		::System::Void set_AwardIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEAWARDDATA_SET_AWARDINDEX_OFFSET))(this, value);
		}

		::RPG::Client::GridFightForgeAwardType get_AwardType()
		{
			return ((::RPG::Client::GridFightForgeAwardType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEAWARDDATA_GET_AWARDTYPE_OFFSET))(this);
		}

		::System::Void set_AwardType(::RPG::Client::GridFightForgeAwardType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightForgeAwardType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFORGEAWARDDATA_SET_AWARDTYPE_OFFSET))(this, value);
		}
	};
}
