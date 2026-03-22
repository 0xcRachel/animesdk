#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_377FC780C60D5111.h"

namespace RPG::Client { class GridFightTraitBonusConfig; }
namespace RPG::Client { class GridFightTraitSpaceEffect; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_EA0CB6127F99EDA0_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x10DC9270)
#define CLASS_3_EA0CB6127F99EDA0_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x10DC9330)
#define CLASS_3_EA0CB6127F99EDA0_METHOD_3_21452A1BEF1B880F_OFFSET UNITYSDK_OFFSET(0x10DC8C10)
#define CLASS_3_EA0CB6127F99EDA0_METHOD_3_2CD6D17D088D5DB9_OFFSET UNITYSDK_OFFSET(0x10DC87C0)
#define CLASS_3_EA0CB6127F99EDA0_METHOD_3_3AC94EEB348AAF2D_OFFSET UNITYSDK_OFFSET(0x10DC8A20)
#define CLASS_3_EA0CB6127F99EDA0_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10DC9480)
#define CLASS_3_EA0CB6127F99EDA0_METHOD_3_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x10DC8850)
#define CLASS_3_EA0CB6127F99EDA0_METHOD_3_A4BAC8F69A1CF480_OFFSET UNITYSDK_OFFSET(0x10DC8AA0)
#define CLASS_3_EA0CB6127F99EDA0_METHOD_3_CEE2550285AA5985_OFFSET UNITYSDK_OFFSET(0x10DC9110)
#define CLASS_3_EA0CB6127F99EDA0_METHOD_3_E1BB42859EA6CA16_OFFSET UNITYSDK_OFFSET(0x10DC94E0)
#define CLASS_3_EA0CB6127F99EDA0_METHOD_3_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x10DC8B70)
#define CLASS_3_EA0CB6127F99EDA0__CTOR_OFFSET UNITYSDK_OFFSET(0x10DC93D0)
#define CLASS_3_EA0CB6127F99EDA0___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x10DC9550)
#define CLASS_3_EA0CB6127F99EDA0___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x10DC95B0)
#define CLASS_3_EA0CB6127F99EDA0___UPDATEEFFECTDATA_B__2_0_OFFSET UNITYSDK_OFFSET(0x10DC9440)

inline static constexpr unsigned int Class_3_EA0CB6127F99EDA0_TypeDefinitionIndex = 57592;

class Class_3_EA0CB6127F99EDA0 : public ::Class_2_377FC780C60D5111
{
public:
	::RPG::Client::GridFightTraitSpaceEffect* Field_3_1; // 0x120
	::RPG::Client::GridFightTraitBonusConfig* Field_3_2; // 0x128
	::System::UInt32 Field_3_0; // 0x130

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA0CB6127F99EDA0__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_2CD6D17D088D5DB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA0CB6127F99EDA0_METHOD_3_2CD6D17D088D5DB9_OFFSET))(this);
	}

	::System::Void Method_3_A4BAC8F69A1CF480(::RPG::GameCore::BattleGridFightTeamTraitData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightTeamTraitData*))((::PBYTE)hIl2Cpp + CLASS_3_EA0CB6127F99EDA0_METHOD_3_A4BAC8F69A1CF480_OFFSET))(this, a1);
	}

	::System::Void Method_3_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA0CB6127F99EDA0_METHOD_3_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_3_3AC94EEB348AAF2D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA0CB6127F99EDA0_METHOD_3_3AC94EEB348AAF2D_OFFSET))(this);
	}

	::System::Void Method_3_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_EA0CB6127F99EDA0_METHOD_3_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::String* Method_3_21452A1BEF1B880F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA0CB6127F99EDA0_METHOD_3_21452A1BEF1B880F_OFFSET))(this);
	}

	::System::Void Method_3_CEE2550285AA5985(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_EA0CB6127F99EDA0_METHOD_3_CEE2550285AA5985_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA0CB6127F99EDA0_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA0CB6127F99EDA0_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Boolean __UpdateEffectData_b__2_0(::RPG::Client::GridFightTraitBonusConfig* config)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + CLASS_3_EA0CB6127F99EDA0___UPDATEEFFECTDATA_B__2_0_OFFSET))(this, config);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA0CB6127F99EDA0_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_E1BB42859EA6CA16(::System::Object* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_EA0CB6127F99EDA0_METHOD_3_E1BB42859EA6CA16_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA0CB6127F99EDA0___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA0CB6127F99EDA0___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
