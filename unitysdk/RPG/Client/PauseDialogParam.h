#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_1.h"
#include "unitysdk/RPG/Client/PauseDialogTabEnum.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PAUSEDIALOGPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x9A534F0)

namespace RPG::Client
{
	inline static constexpr unsigned int PauseDialogParam_TypeDefinitionIndex = 57124;

	class PauseDialogParam : public ::System::Object
	{
	public:
		::Enum_3_71AA90D596A09AC8_1 ModeType; // 0x10
		::RPG::GameCore::StageType StageType; // 0x14
		::RPG::Client::PauseDialogTabEnum InitTabEnum; // 0x18
		::System::Boolean IsExitBattleBtnDisable; // 0x1C
		::System::Boolean IsExitBattleBtnShow; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAUSEDIALOGPARAM__CTOR_OFFSET))(this);
		}
	};
}
