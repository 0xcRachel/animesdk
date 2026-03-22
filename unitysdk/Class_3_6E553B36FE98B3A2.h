#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorSavedValueChangeV2; }
namespace System { class String; }

#define CLASS_3_6E553B36FE98B3A2_METHOD_3_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x10A08580)
#define CLASS_3_6E553B36FE98B3A2__CTOR_OFFSET UNITYSDK_OFFSET(0x10A08380)
#define CLASS_3_6E553B36FE98B3A2__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x10A08910)
#define CLASS_3_6E553B36FE98B3A2__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x10A08650)
#define CLASS_3_6E553B36FE98B3A2__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x10A087A0)
#define CLASS_3_6E553B36FE98B3A2___IFIXBASEPROXY__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x10A08A40)
#define CLASS_3_6E553B36FE98B3A2___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x10A08A20)
#define CLASS_3_6E553B36FE98B3A2___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x10A08A30)

inline static constexpr unsigned int Class_3_6E553B36FE98B3A2_TypeDefinitionIndex = 42252;

class Class_3_6E553B36FE98B3A2 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitFloorSavedValueChangeV2*>
{
public:
	::System::String* Field_3_0; // 0x68

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorSavedValueChangeV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorSavedValueChangeV2*))((::PBYTE)hIl2Cpp + CLASS_3_6E553B36FE98B3A2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_6E553B36FE98B3A2_METHOD_3_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E553B36FE98B3A2__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E553B36FE98B3A2__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E553B36FE98B3A2__PREPAREDATA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E553B36FE98B3A2___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E553B36FE98B3A2___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy__PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6E553B36FE98B3A2___IFIXBASEPROXY__PREPAREDATA_OFFSET))(this);
	}
};
