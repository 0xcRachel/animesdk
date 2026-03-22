#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_CLIENT_SHOWATTACKTIMEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9F71DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ShowAttackTimeParam_TypeDefinitionIndex = 58402;

	class ShowAttackTimeParam : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Entity; // 0x10
		::System::Boolean IsShow; // 0x18
		::System::Int32 EnhancedAttackTime; // 0x1C
		::System::Int32 BaseAttackTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOWATTACKTIMEPARAM__CTOR_OFFSET))(this);
		}
	};
}
