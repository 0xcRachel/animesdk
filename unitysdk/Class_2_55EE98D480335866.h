#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtMoveStopReason.h"
#include "unitysdk/RPG/GameCore/RtTransformAdaptor_2.h"
#include "unitysdk/Struct_2_6E1B724B14572104_1.h"

class Class_0_16E4307DCC419505_415;
class Class_2_6CA36F0DFFCC1A6E;
namespace System { class Object; }
namespace UnityEngine { class Animator; }

#define CLASS_2_55EE98D480335866_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xEEA3E60)
#define CLASS_2_55EE98D480335866_METHOD_2_475B50CC2AB42EAF_OFFSET UNITYSDK_OFFSET(0xEEA4240)
#define CLASS_2_55EE98D480335866_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0xEEA41F0)
#define CLASS_2_55EE98D480335866_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xEEA42C0)
#define CLASS_2_55EE98D480335866_ONINIT_OFFSET UNITYSDK_OFFSET(0xEEA3D20)
#define CLASS_2_55EE98D480335866_ONREFRESHPOS_OFFSET UNITYSDK_OFFSET(0xEEA4510)
#define CLASS_2_55EE98D480335866_ONREFRESHROT_OFFSET UNITYSDK_OFFSET(0xEEA45A0)
#define CLASS_2_55EE98D480335866_ONSTART_OFFSET UNITYSDK_OFFSET(0xEEA3DF0)
#define CLASS_2_55EE98D480335866_ONSTOP_OFFSET UNITYSDK_OFFSET(0xEEA40F0)
#define CLASS_2_55EE98D480335866_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xEEA3DA0)
#define CLASS_2_55EE98D480335866__CTOR_OFFSET UNITYSDK_OFFSET(0xEEA4740)
#define CLASS_2_55EE98D480335866___IFIXBASEPROXY_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xEEA48D0)
#define CLASS_2_55EE98D480335866___IFIXBASEPROXY_ONINIT_OFFSET UNITYSDK_OFFSET(0xEEA4760)
#define CLASS_2_55EE98D480335866___IFIXBASEPROXY_ONREFRESHPOS_OFFSET UNITYSDK_OFFSET(0xEEA48E0)
#define CLASS_2_55EE98D480335866___IFIXBASEPROXY_ONREFRESHROT_OFFSET UNITYSDK_OFFSET(0xEEA48F0)
#define CLASS_2_55EE98D480335866___IFIXBASEPROXY_ONSTART_OFFSET UNITYSDK_OFFSET(0xEEA4830)
#define CLASS_2_55EE98D480335866___IFIXBASEPROXY_ONSTOP_OFFSET UNITYSDK_OFFSET(0xEEA48C0)
#define CLASS_2_55EE98D480335866___IFIXBASEPROXY_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xEEA47E0)

inline static constexpr unsigned int Class_2_55EE98D480335866_TypeDefinitionIndex = 49976;

class Class_2_55EE98D480335866 : public ::RPG::GameCore::RtTransformAdaptor_2<::Struct_2_6E1B724B14572104_1, ::System::Object*>
{
public:
	::Class_2_6CA36F0DFFCC1A6E* Field_2_0; // 0x50
	::System::Single Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866__CTOR_OFFSET))(this);
	}

	::System::Void OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_ONINIT_OFFSET))(this);
	}

	::System::Void OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_ONUNINIT_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_ONSTART_OFFSET))(this);
	}

	::System::Void OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_ONSTOP_OFFSET))(this);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_415* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_415*))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_475B50CC2AB42EAF(::Class_0_16E4307DCC419505_415* a1, ::RPG::GameCore::RtMoveStopReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_415*, ::RPG::GameCore::RtMoveStopReason))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_METHOD_2_475B50CC2AB42EAF_OFFSET))(this, a1, a2);
	}

	::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_ONANIMATORMOVE_OFFSET))(this, a1);
	}

	::System::Void OnRefreshPos(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_ONREFRESHPOS_OFFSET))(this, a1);
	}

	::System::Void OnRefreshRot()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_ONREFRESHROT_OFFSET))(this);
	}

	::System::Void Method_2_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnInit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866___IFIXBASEPROXY_ONINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnUninit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866___IFIXBASEPROXY_ONUNINIT_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866___IFIXBASEPROXY_ONSTART_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnStop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866___IFIXBASEPROXY_ONSTOP_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnAnimatorMove(::UnityEngine::Animator* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866___IFIXBASEPROXY_ONANIMATORMOVE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnRefreshPos(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866___IFIXBASEPROXY_ONREFRESHPOS_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnRefreshRot()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_55EE98D480335866___IFIXBASEPROXY_ONREFRESHROT_OFFSET))(this);
	}
};
