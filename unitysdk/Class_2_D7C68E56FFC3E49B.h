#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_D7C68E56FFC3E49B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB8E3EC0)
#define CLASS_2_D7C68E56FFC3E49B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB8E3FA0)
#define CLASS_2_D7C68E56FFC3E49B_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xB8E3D40)
#define CLASS_2_D7C68E56FFC3E49B_METHOD_2_016BC96F40F93302_OFFSET UNITYSDK_OFFSET(0xB8E38D0)
#define CLASS_2_D7C68E56FFC3E49B_METHOD_2_045BF4A36D01ABDD_OFFSET UNITYSDK_OFFSET(0xB8E3A10)
#define CLASS_2_D7C68E56FFC3E49B_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xB8E3880)
#define CLASS_2_D7C68E56FFC3E49B_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB8E3D00)
#define CLASS_2_D7C68E56FFC3E49B_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xB8E37E0)
#define CLASS_2_D7C68E56FFC3E49B_METHOD_2_464E7ACA1C2A60C8_OFFSET UNITYSDK_OFFSET(0xB8E3920)
#define CLASS_2_D7C68E56FFC3E49B_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB8E4090)
#define CLASS_2_D7C68E56FFC3E49B_METHOD_2_5F7725CF19FE7264_OFFSET UNITYSDK_OFFSET(0xB8E3C20)
#define CLASS_2_D7C68E56FFC3E49B_METHOD_2_8C48EA4AF8A4D85F_OFFSET UNITYSDK_OFFSET(0xB8E3B30)
#define CLASS_2_D7C68E56FFC3E49B_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xB8E3E20)
#define CLASS_2_D7C68E56FFC3E49B_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xB8E3D50)
#define CLASS_2_D7C68E56FFC3E49B__CTOR_OFFSET UNITYSDK_OFFSET(0xB8E4050)
#define CLASS_2_D7C68E56FFC3E49B__ONBIND_OFFSET UNITYSDK_OFFSET(0xB8E3840)
#define CLASS_2_D7C68E56FFC3E49B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB8E4150)
#define CLASS_2_D7C68E56FFC3E49B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB8E41B0)
#define CLASS_2_D7C68E56FFC3E49B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xB8E40F0)

inline static constexpr unsigned int Class_2_D7C68E56FFC3E49B_TypeDefinitionIndex = 56944;

class Class_2_D7C68E56FFC3E49B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_5; // 0x0
	::System::Action* Field_2_2; // 0x60
	::RPG::GameCore::GameEntity* Field_2_3; // 0x68
	::UnityEngine::Transform* Field_2_4; // 0x70
	::System::Boolean Field_2_1; // 0x78
	::System::Int32 _Priority_k__BackingField; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_016BC96F40F93302(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B_METHOD_2_016BC96F40F93302_OFFSET))(this, a1);
	}

	::System::Void Method_2_045BF4A36D01ABDD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B_METHOD_2_045BF4A36D01ABDD_OFFSET))(this, a1);
	}

	::System::Void Method_2_464E7ACA1C2A60C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B_METHOD_2_464E7ACA1C2A60C8_OFFSET))(this);
	}

	::System::Void Method_2_8C48EA4AF8A4D85F(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B_METHOD_2_8C48EA4AF8A4D85F_OFFSET))(this, a1);
	}

	::System::Void Method_2_5F7725CF19FE7264(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B_METHOD_2_5F7725CF19FE7264_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B_GET_PRIORITY_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D7C68E56FFC3E49B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
