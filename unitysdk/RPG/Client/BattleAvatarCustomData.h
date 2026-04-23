#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleSilverWolf999CustomUIData; }

#define RPG_CLIENT_BATTLEAVATARCUSTOMDATA_ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0xF3B76A0)
#define RPG_CLIENT_BATTLEAVATARCUSTOMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF3B7630)
#define RPG_CLIENT_BATTLEAVATARCUSTOMDATA_LATETICK_OFFSET UNITYSDK_OFFSET(0xF3B7700)
#define RPG_CLIENT_BATTLEAVATARCUSTOMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xF3B77A0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAvatarCustomData_TypeDefinitionIndex = 65867;

	class BattleAvatarCustomData : public ::System::Object
	{
	public:
		::RPG::Client::BattleSilverWolf999CustomUIData* SilverWolf999CustomUIData; // 0x10
		::System::Boolean _AddedHandlers; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARCUSTOMDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARCUSTOMDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARCUSTOMDATA_ADDHANDLERS_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEAVATARCUSTOMDATA_LATETICK_OFFSET))(this, deltaTime);
		}
	};
}
