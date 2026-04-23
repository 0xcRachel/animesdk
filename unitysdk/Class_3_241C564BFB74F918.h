#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitLittleGameCustomEvent; }
namespace System { class String; }

#define CLASS_3_241C564BFB74F918_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF0C8D70)
#define CLASS_3_241C564BFB74F918__CTOR_OFFSET UNITYSDK_OFFSET(0xF0C8C10)
#define CLASS_3_241C564BFB74F918__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xF0C8DD0)
#define CLASS_3_241C564BFB74F918__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xF0C9020)
#define CLASS_3_241C564BFB74F918__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xF0C9290)
#define CLASS_3_241C564BFB74F918___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF0C9500)
#define CLASS_3_241C564BFB74F918___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0xF0C9560)
#define CLASS_3_241C564BFB74F918___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xF0C9570)
#define CLASS_3_241C564BFB74F918___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xF0C9580)

inline static constexpr unsigned int Class_3_241C564BFB74F918_TypeDefinitionIndex = 48842;

class Class_3_241C564BFB74F918 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitLittleGameCustomEvent*>
{
public:
	::System::String* Field_3_0; // 0x68
	::System::UInt32 Field_3_1; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitLittleGameCustomEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitLittleGameCustomEvent*))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_241C564BFB74F918___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
