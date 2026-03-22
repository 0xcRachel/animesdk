#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitRemarkLineTraitStateParserBase.h"

namespace RPG::Client { class GridFightTrait; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITEQUALSTATEPARSER_CHECKLAYERCONDITION_OFFSET UNITYSDK_OFFSET(0x9427600)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITEQUALSTATEPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x94271A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineTraitEqualStateParser_TypeDefinitionIndex = 52038;

	class GridFightTraitRemarkLineTraitEqualStateParser : public ::RPG::Client::GridFightTraitRemarkLineTraitStateParserBase
	{
	public:
		::System::Void _ctor(::Il2CppArray<::System::UInt32>* layers, ::RPG::Client::GridFightTrait* trait)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITEQUALSTATEPARSER__CTOR_OFFSET))(this, layers, trait);
		}

		::System::Boolean CheckLayerCondition(::System::UInt32 traitLayer, ::System::UInt32 targetLayer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINETRAITEQUALSTATEPARSER_CHECKLAYERCONDITION_OFFSET))(this, traitLayer, targetLayer);
		}
	};
}
