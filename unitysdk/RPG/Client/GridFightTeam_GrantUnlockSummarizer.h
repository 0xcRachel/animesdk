#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"

class Class_1_B9E56D0D50E02617_1;

#define RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x9410C00)
#define RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x9410F20)
#define RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER___IFIXBASEPROXY_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x9410F30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTeam_GrantUnlockSummarizer_TypeDefinitionIndex = 51779;

	class GridFightTeam_GrantUnlockSummarizer : public ::Class_1_41E07A9DDAB7FC78
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER__CTOR_OFFSET))(this);
		}

		::System::Void UpdateModifier(::Class_1_B9E56D0D50E02617_1* modifier)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9E56D0D50E02617_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER_UPDATEMODIFIER_OFFSET))(this, modifier);
		}

		::System::Void __iFixBaseProxy_UpdateModifier(::Class_1_B9E56D0D50E02617_1* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B9E56D0D50E02617_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTEAM_GRANTUNLOCKSUMMARIZER___IFIXBASEPROXY_UPDATEMODIFIER_OFFSET))(this, P0);
		}
	};
}
