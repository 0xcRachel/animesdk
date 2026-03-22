#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

namespace RPG::GameCore { class EventManager; }
namespace System { class Object; }

#define CLASS_2_24222339AD802068_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x105F96C0)
#define CLASS_2_24222339AD802068_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x105F9760)
#define CLASS_2_24222339AD802068_METHOD_2_709E9C02EF9B7181_OFFSET UNITYSDK_OFFSET(0x105F94F0)
#define CLASS_2_24222339AD802068_METHOD_2_7A74CBCA024E5DDB_OFFSET UNITYSDK_OFFSET(0x105F94A0)
#define CLASS_2_24222339AD802068_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0x105F95F0)
#define CLASS_2_24222339AD802068__CTOR_OFFSET UNITYSDK_OFFSET(0x105F9370)
#define CLASS_2_24222339AD802068__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x105F93C0)
#define CLASS_2_24222339AD802068__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x105F9450)
#define CLASS_2_24222339AD802068___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x105F98A0)
#define CLASS_2_24222339AD802068___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x105F9900)
#define CLASS_2_24222339AD802068___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x105F97E0)
#define CLASS_2_24222339AD802068___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x105F9840)

inline static constexpr unsigned int Class_2_24222339AD802068_TypeDefinitionIndex = 57118;

class Class_2_24222339AD802068 : public ::RPG::Client::UIController
{
public:
	::RPG::GameCore::EventManager* Field_2_0; // 0x180

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068__CTOR_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void Method_2_7A74CBCA024E5DDB(::RPG::GameCore::EventManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventManager*))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068_METHOD_2_7A74CBCA024E5DDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_709E9C02EF9B7181(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068_METHOD_2_709E9C02EF9B7181_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
