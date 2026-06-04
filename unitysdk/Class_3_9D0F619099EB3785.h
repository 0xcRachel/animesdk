#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::Client { class WaitMatchThreeV2BirdLocationChange; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_9D0F619099EB3785_METHOD_3_F69068FADEFBD596_OFFSET UNITYSDK_OFFSET(0x13888DD0)
#define CLASS_3_9D0F619099EB3785__CTOR_OFFSET UNITYSDK_OFFSET(0x13888A80)
#define CLASS_3_9D0F619099EB3785__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x13888C50)
#define CLASS_3_9D0F619099EB3785__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x13888D10)
#define CLASS_3_9D0F619099EB3785___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x13888F40)
#define CLASS_3_9D0F619099EB3785___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x13888F50)

inline static constexpr unsigned int Class_3_9D0F619099EB3785_TypeDefinitionIndex = 49555;

class Class_3_9D0F619099EB3785 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::Client::WaitMatchThreeV2BirdLocationChange*>
{
public:
	::System::UInt32 Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::WaitMatchThreeV2BirdLocationChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::WaitMatchThreeV2BirdLocationChange*))((::PBYTE)hIl2Cpp + CLASS_3_9D0F619099EB3785__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D0F619099EB3785__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D0F619099EB3785__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_F69068FADEFBD596(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_9D0F619099EB3785_METHOD_3_F69068FADEFBD596_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D0F619099EB3785___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9D0F619099EB3785___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
