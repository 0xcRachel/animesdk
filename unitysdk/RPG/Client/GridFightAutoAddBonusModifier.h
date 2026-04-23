#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_EBD9A77671154634;

#define RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER_GET_NPCUID_OFFSET UNITYSDK_OFFSET(0x1605A330)
#define RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1605A2E0)
#define RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1605A2D0)
#define RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER___IFIXBASEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x1605A3D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAutoAddBonusModifier_TypeDefinitionIndex = 59861;

	class GridFightAutoAddBonusModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_EBD9A77671154634* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER__CTOR_OFFSET))(this, info);
		}

		::System::Void Update(::Class_1_EBD9A77671154634* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER_UPDATE_OFFSET))(this, info);
		}

		::System::UInt32 get_NpcUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER_GET_NPCUID_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Update(::Class_1_EBD9A77671154634* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUTOADDBONUSMODIFIER___IFIXBASEPROXY_UPDATE_OFFSET))(this, P0);
		}
	};
}
