#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimView.h"

namespace RPG::GameCore { class FiveDimPropBakedMoveConfig; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_METHOD_7_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x158E2340)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_METHOD_7_6A139A735C181466_OFFSET UNITYSDK_OFFSET(0x158E2050)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_METHOD_7_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0x158E1E90)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x158E2300)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimCleanerBotView_TypeDefinitionIndex = 70879;

	class FiveDimCleanerBotView : public ::RPG::Client::LittleGame::FiveDim::FiveDimView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW__CTOR_OFFSET))(this);
		}

		::System::Void Method_7_739DB9F245C7FAD0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_METHOD_7_739DB9F245C7FAD0_OFFSET))(this);
		}

		::System::Void Method_7_6A139A735C181466(::UnityEngine::Transform* a1, ::RPG::GameCore::FiveDimPropBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::FiveDimPropBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_METHOD_7_6A139A735C181466_OFFSET))(this, a1, a2);
		}

		::System::Void Method_7_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_METHOD_7_4343F372F34C05BF_OFFSET))(this);
		}
	};
}
