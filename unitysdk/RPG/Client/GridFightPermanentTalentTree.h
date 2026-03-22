#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTalentTree.h"
#include "unitysdk/RPG/Client/GridFightTalentType.h"

class Class_1_6E708EAB438EC183_37;

#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_GET_TALENTTYPE_OFFSET UNITYSDK_OFFSET(0x93CC170)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_RESET_OFFSET UNITYSDK_OFFSET(0x93CC8D0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_SYNC_OFFSET UNITYSDK_OFFSET(0x93CC7A0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_UNLOCKTALENT_OFFSET UNITYSDK_OFFSET(0x93CC840)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x93CC9B0)
#define RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE__INIT_OFFSET UNITYSDK_OFFSET(0x93CC180)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPermanentTalentTree_TypeDefinitionIndex = 51857;

	class GridFightPermanentTalentTree : public ::RPG::Client::GridFightTalentTree
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightTalentType get_TalentType()
		{
			return ((::RPG::Client::GridFightTalentType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_GET_TALENTTYPE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE__INIT_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_6E708EAB438EC183_37* talentInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_37*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_SYNC_OFFSET))(this, talentInfo);
		}

		::System::Void UnlockTalent(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_UNLOCKTALENT_OFFSET))(this, id);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPERMANENTTALENTTREE_RESET_OFFSET))(this);
		}
	};
}
