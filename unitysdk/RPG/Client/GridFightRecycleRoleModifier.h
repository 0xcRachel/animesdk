#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameModifier.h"

class Class_1_B9E56D0D50E02617_1;

#define RPG_CLIENT_GRIDFIGHTRECYCLEROLEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x93DB6E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRecycleRoleModifier_TypeDefinitionIndex = 51660;

	class GridFightRecycleRoleModifier : public ::RPG::Client::GridFightGameModifier
	{
	public:
		::System::Void _ctor(::Class_1_B9E56D0D50E02617_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9E56D0D50E02617_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTRECYCLEROLEMODIFIER__CTOR_OFFSET))(this, info);
		}
	};
}
