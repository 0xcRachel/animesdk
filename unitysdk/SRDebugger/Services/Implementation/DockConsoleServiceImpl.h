#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/ConsoleAlignment.h"
#include "unitysdk/System/Object.h"

namespace SRDebugger::UI::Other { class DockConsoleController; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_CHECKTRIGGER_OFFSET UNITYSDK_OFFSET(0x18451560)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x184519F0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ISEXPANDED_OFFSET UNITYSDK_OFFSET(0x18451860)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x18451250)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_LOAD_OFFSET UNITYSDK_OFFSET(0x184512F0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ALIGNMENT_OFFSET UNITYSDK_OFFSET(0x18451A00)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ISEXPANDED_OFFSET UNITYSDK_OFFSET(0x18451870)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x18451260)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x184511D0)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int DockConsoleServiceImpl_TypeDefinitionIndex = 29725;

	class DockConsoleServiceImpl : public ::System::Object
	{
	public:
		::SRDebugger::UI::Other::DockConsoleController* _consoleRoot; // 0x10
		::System::Boolean _isExpanded; // 0x18
		::System::Boolean _isVisible; // 0x19
		::System::Boolean _didSuspendTrigger; // 0x1A
		::SRDebugger::ConsoleAlignment _alignment; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ISVISIBLE_OFFSET))(this);
		}

		::System::Void set_IsVisible(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ISVISIBLE_OFFSET))(this, value);
		}

		::System::Boolean get_IsExpanded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ISEXPANDED_OFFSET))(this);
		}

		::System::Void set_IsExpanded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ISEXPANDED_OFFSET))(this, value);
		}

		::SRDebugger::ConsoleAlignment get_Alignment()
		{
			return ((::SRDebugger::ConsoleAlignment(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_GET_ALIGNMENT_OFFSET))(this);
		}

		::System::Void set_Alignment(::SRDebugger::ConsoleAlignment value)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::ConsoleAlignment))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_SET_ALIGNMENT_OFFSET))(this, value);
		}

		::System::Void Load()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_LOAD_OFFSET))(this);
		}

		::System::Void CheckTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_DOCKCONSOLESERVICEIMPL_CHECKTRIGGER_OFFSET))(this);
		}
	};
}
