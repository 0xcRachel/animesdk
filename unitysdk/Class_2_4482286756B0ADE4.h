#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/TimeSpan.h"

#define CLASS_2_4482286756B0ADE4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BF8290)
#define CLASS_2_4482286756B0ADE4_METHOD_2_077465549C9EA81F_OFFSET UNITYSDK_OFFSET(0x8BF88E0)
#define CLASS_2_4482286756B0ADE4_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x8BF8880)
#define CLASS_2_4482286756B0ADE4_METHOD_2_A9F6594EA869CA9D_OFFSET UNITYSDK_OFFSET(0x8BF83D0)
#define CLASS_2_4482286756B0ADE4_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8BF8800)
#define CLASS_2_4482286756B0ADE4_METHOD_2_EBFFDA5B2524E067_OFFSET UNITYSDK_OFFSET(0x8BF85A0)
#define CLASS_2_4482286756B0ADE4_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x8BF80A0)
#define CLASS_2_4482286756B0ADE4__CTOR_OFFSET UNITYSDK_OFFSET(0x8BF8990)
#define CLASS_2_4482286756B0ADE4___DOSHOWEXITCONFIRM_B__10_0_OFFSET UNITYSDK_OFFSET(0x8BF89B0)
#define CLASS_2_4482286756B0ADE4___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BF8A20)
#define CLASS_2_4482286756B0ADE4___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x8BF89C0)

inline static constexpr unsigned int Class_2_4482286756B0ADE4_TypeDefinitionIndex = 52257;

class Class_2_4482286756B0ADE4 : public ::RPG::Client::BaseModule
{
public:
	::System::Nullable_1<::RPG::Client::DateTimePro> Field_2_0; // 0x10
	::System::Boolean Field_2_2; // 0x20
	::System::Nullable_1<::System::Boolean> Field_2_4; // 0x21
	::System::Boolean Field_2_3; // 0x23
	::System::TimeSpan Field_2_1; // 0x28

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

	::System::Void Method_2_077465549C9EA81F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4482286756B0ADE4_METHOD_2_077465549C9EA81F_OFFSET))(this);
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
