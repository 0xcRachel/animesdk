#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace Proto { class AntiAddictScNotify; }
namespace System { class Object; }

#define CLASS_2_A9F883EC112FEECD_INIT_OFFSET UNITYSDK_OFFSET(0xACB21B0)
#define CLASS_2_A9F883EC112FEECD_METHOD_2_99272A34A22F949E_OFFSET UNITYSDK_OFFSET(0xACB2990)
#define CLASS_2_A9F883EC112FEECD_METHOD_2_DC029EEDE931ACB9_OFFSET UNITYSDK_OFFSET(0xACB2440)
#define CLASS_2_A9F883EC112FEECD_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0xACB25B0)
#define CLASS_2_A9F883EC112FEECD__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xACB22E0)
#define CLASS_2_A9F883EC112FEECD__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xACB2240)
#define CLASS_2_A9F883EC112FEECD__CTOR_OFFSET UNITYSDK_OFFSET(0xACB29E0)
#define CLASS_2_A9F883EC112FEECD___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xACB2A00)
#define CLASS_2_A9F883EC112FEECD___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xACB2AF0)
#define CLASS_2_A9F883EC112FEECD___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xACB2A90)

inline static constexpr unsigned int Class_2_A9F883EC112FEECD_TypeDefinitionIndex = 49568;

class Class_2_A9F883EC112FEECD : public ::RPG::Client::BaseModule
{
public:
	::Proto::AntiAddictScNotify* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9F883EC112FEECD__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9F883EC112FEECD_INIT_OFFSET))(this);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9F883EC112FEECD__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void _AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9F883EC112FEECD__ADDNOTIFYHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_DC029EEDE931ACB9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A9F883EC112FEECD_METHOD_2_DC029EEDE931ACB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_99272A34A22F949E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_A9F883EC112FEECD_METHOD_2_99272A34A22F949E_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9F883EC112FEECD_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9F883EC112FEECD___IFIXBASEPROXY_INIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9F883EC112FEECD___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__AddNotifyHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A9F883EC112FEECD___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
	}
};
