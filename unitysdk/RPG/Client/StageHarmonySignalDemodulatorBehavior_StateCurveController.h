#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StageHarmonySignalDemodulatorBehavior_StateCurve; }
namespace RPG::Client { class StageHarmonySignalDemodulatorBehavior_StateCurve_StateConnection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x9FB1820)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_METHOD_1_BF653AC3FD8A315F_OFFSET UNITYSDK_OFFSET(0x9FB1930)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_METHOD_1_EABB3B542C82E557_OFFSET UNITYSDK_OFFSET(0x9FB1480)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_METHOD_1_FC353143FEF1A387_OFFSET UNITYSDK_OFFSET(0x9FB1740)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9FB1B60)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalDemodulatorBehavior_StateCurveController_TypeDefinitionIndex = 56569;

	class StageHarmonySignalDemodulatorBehavior_StateCurveController : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurve_StateConnection*>* InitStateConnections; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurve*>* StateCurves; // 0x18
		::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurve* CurrentState; // 0x20
		::System::Boolean _FirstFrame; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_EABB3B542C82E557(::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_METHOD_1_EABB3B542C82E557_OFFSET))(this, a1);
		}

		::System::Single Method_1_FC353143FEF1A387(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_METHOD_1_FC353143FEF1A387_OFFSET))(this, a1);
		}

		::System::Void Method_1_2C95AFAD0256302F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
		}

		::System::Void Method_1_BF653AC3FD8A315F(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_METHOD_1_BF653AC3FD8A315F_OFFSET))(this, a1);
		}
	};
}
