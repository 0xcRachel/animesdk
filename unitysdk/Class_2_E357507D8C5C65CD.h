#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/System/Guid.h"

class Class_2_A48F3719AA1CF200_28;
namespace System { class Action; }
namespace System { class Object; }

#define CLASS_2_E357507D8C5C65CD_GET_EXITACTION_OFFSET UNITYSDK_OFFSET(0x10E31BF0)
#define CLASS_2_E357507D8C5C65CD_METHOD_2_0C726E1A401D0413_OFFSET UNITYSDK_OFFSET(0x10E31BA0)
#define CLASS_2_E357507D8C5C65CD_METHOD_2_64B6514CFF8F8D76_OFFSET UNITYSDK_OFFSET(0x10E312F0)
#define CLASS_2_E357507D8C5C65CD_METHOD_2_8EC3255570F308C5_OFFSET UNITYSDK_OFFSET(0x10E319D0)
#define CLASS_2_E357507D8C5C65CD_SET_EXITACTION_OFFSET UNITYSDK_OFFSET(0x10E31C00)
#define CLASS_2_E357507D8C5C65CD__CTOR_OFFSET UNITYSDK_OFFSET(0x10E31090)
#define CLASS_2_E357507D8C5C65CD__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x10E31130)
#define CLASS_2_E357507D8C5C65CD__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x10E31940)
#define CLASS_2_E357507D8C5C65CD__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x10E31320)
#define CLASS_2_E357507D8C5C65CD__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x10E31880)
#define CLASS_2_E357507D8C5C65CD___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x10E31C10)
#define CLASS_2_E357507D8C5C65CD___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x10E31D30)
#define CLASS_2_E357507D8C5C65CD___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x10E31C70)
#define CLASS_2_E357507D8C5C65CD___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x10E31CD0)

inline static constexpr unsigned int Class_2_E357507D8C5C65CD_TypeDefinitionIndex = 57975;

class Class_2_E357507D8C5C65CD : public ::RPG::Client::UIController
{
public:
	::System::Action* _ExitAction_k__BackingField; // 0x180
	::System::Guid Field_2_1; // 0x188

	::System::Void _ctor(::RPG::Client::UILayer a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD__CTOR_OFFSET))(this, a1);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void _OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD__ONEXITFINALSTEP_OFFSET))(this);
	}

	::System::Void Method_2_8EC3255570F308C5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD_METHOD_2_8EC3255570F308C5_OFFSET))(this, a1);
	}

	::System::Void Method_2_0C726E1A401D0413(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD_METHOD_2_0C726E1A401D0413_OFFSET))(this, a1);
	}

	::System::Action* get_ExitAction()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD_GET_EXITACTION_OFFSET))(this);
	}

	::System::Void set_ExitAction(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD_SET_EXITACTION_OFFSET))(this, value);
	}

	::Class_2_A48F3719AA1CF200_28* Method_2_64B6514CFF8F8D76()
	{
		return ((::Class_2_A48F3719AA1CF200_28*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD_METHOD_2_64B6514CFF8F8D76_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnExitFinalStep()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E357507D8C5C65CD___IFIXBASEPROXY__ONEXITFINALSTEP_OFFSET))(this);
	}
};
