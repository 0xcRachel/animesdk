#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"

#define CLASS_2_4482286756B0ADE4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6D3970)
#define CLASS_2_4482286756B0ADE4_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA6D3F60)
#define CLASS_2_4482286756B0ADE4_METHOD_2_24C471DB40089304_OFFSET UNITYSDK_OFFSET(0xA6D3FC0)
#define CLASS_2_4482286756B0ADE4_METHOD_2_A9F6594EA869CA9D_OFFSET UNITYSDK_OFFSET(0xA6D3AB0)
#define CLASS_2_4482286756B0ADE4_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA6D3EE0)
#define CLASS_2_4482286756B0ADE4_METHOD_2_EBFFDA5B2524E067_OFFSET UNITYSDK_OFFSET(0xA6D3C80)
#define CLASS_2_4482286756B0ADE4_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xA6D3780)
#define CLASS_2_4482286756B0ADE4__CTOR_OFFSET UNITYSDK_OFFSET(0xA6D4070)
#define CLASS_2_4482286756B0ADE4___DOSHOWEXITCONFIRM_B__10_0_OFFSET UNITYSDK_OFFSET(0xA6D4090)
#define CLASS_2_4482286756B0ADE4___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA6D4100)
#define CLASS_2_4482286756B0ADE4___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0xA6D40A0)

inline static constexpr unsigned int Class_2_4482286756B0ADE4_TypeDefinitionIndex = 51124;

class Class_2_4482286756B0ADE4 : public ::RPG::Client::BaseModule
{
public:
	::System::TimeSpan Field_2_1; // 0x10
	::System::Boolean Field_2_3; // 0x18
	::System::Nullable_1<::System::Boolean> Field_2_4; // 0x19
	::System::Boolean Field_2_2; // 0x1B
	::System::Nullable_1<::RPG::Client::DateTimePro> Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4__CTOR_OFFSET))(this);
	}

	::System::Void OnLoginFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4_ONLOGINFINISH_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_A9F6594EA869CA9D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4_METHOD_2_A9F6594EA869CA9D_OFFSET))(this);
	}

	::System::Boolean Method_2_EBFFDA5B2524E067()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4_METHOD_2_EBFFDA5B2524E067_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_24C471DB40089304()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4_METHOD_2_24C471DB40089304_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void __DoShowExitConfirm_b__10_0(::System::Boolean confirmed)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4___DOSHOWEXITCONFIRM_B__10_0_OFFSET))(this, confirmed);
	}

	::System::Void __iFixBaseProxy_OnLoginFinish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4___IFIXBASEPROXY_ONLOGINFINISH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
