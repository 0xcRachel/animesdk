#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/BaseMonoGenericView.h"

#define RPG_CLIENT_LITTLEGAME_BASEMONOCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x17E0D870)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BaseMonoCamera_TypeDefinitionIndex = 71082;

	class BaseMonoCamera : public ::RPG::Client::LittleGame::BaseMonoGenericView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_BASEMONOCAMERA__CTOR_OFFSET))(this);
		}
	};
}
