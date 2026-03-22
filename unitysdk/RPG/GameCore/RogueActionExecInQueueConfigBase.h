#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE_METHOD_5_B4B3A91CF7A44A67_OFFSET UNITYSDK_OFFSET(0x16E10EA0)
#define RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE_METHOD_5_F9FF1D64C01802CB_OFFSET UNITYSDK_OFFSET(0x16E10E90)
#define RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16E10DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActionExecInQueueConfigBase_TypeDefinitionIndex = 17535;

	class RogueActionExecInQueueConfigBase : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_B4B3A91CF7A44A67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActionExecInQueueConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActionExecInQueueConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE_METHOD_5_B4B3A91CF7A44A67_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_F9FF1D64C01802CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActionExecInQueueConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActionExecInQueueConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONEXECINQUEUECONFIGBASE_METHOD_5_F9FF1D64C01802CB_OFFSET))(a1, a2);
		}
	};
}
