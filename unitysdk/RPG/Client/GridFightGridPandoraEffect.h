#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_137.h"
#include "unitysdk/RPG/Client/GridFightGridEffectType.h"

namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightGridData; }

#define RPG_CLIENT_GRIDFIGHTGRIDPANDORAEFFECT_CANCASTER_OFFSET UNITYSDK_OFFSET(0x939DC30)
#define RPG_CLIENT_GRIDFIGHTGRIDPANDORAEFFECT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x939DC20)
#define RPG_CLIENT_GRIDFIGHTGRIDPANDORAEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x939DE10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGridPandoraEffect_TypeDefinitionIndex = 51501;

	class GridFightGridPandoraEffect : public ::Class_1_43BD383C98B4C0C5_137
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDPANDORAEFFECT__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightGridEffectType get_Type()
		{
			return ((::RPG::Client::GridFightGridEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDPANDORAEFFECT_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean CanCaster(::RPG::Client::GridFightGameSession* session, ::RPG::Client::GridFightGridData* grid)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameSession*, ::RPG::Client::GridFightGridData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGRIDPANDORAEFFECT_CANCASTER_OFFSET))(this, session, grid);
		}
	};
}
