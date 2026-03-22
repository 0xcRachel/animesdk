#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4800B8E54A1FF822_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x110F4B30)
#define CLASS_2_4800B8E54A1FF822_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x110F4C10)
#define CLASS_2_4800B8E54A1FF822_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x110F46A0)
#define CLASS_2_4800B8E54A1FF822_METHOD_2_0DEC1A8F053BEBEC_OFFSET UNITYSDK_OFFSET(0x110F47E0)
#define CLASS_2_4800B8E54A1FF822_METHOD_2_1835459715B5D9D1_OFFSET UNITYSDK_OFFSET(0x110F43A0)
#define CLASS_2_4800B8E54A1FF822_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x110F41F0)
#define CLASS_2_4800B8E54A1FF822_METHOD_2_36AF0FAD6B8F6E4D_OFFSET UNITYSDK_OFFSET(0x110F4950)
#define CLASS_2_4800B8E54A1FF822_METHOD_2_4538E9501054E688_OFFSET UNITYSDK_OFFSET(0x110F4250)
#define CLASS_2_4800B8E54A1FF822_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x110F48C0)
#define CLASS_2_4800B8E54A1FF822_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x110F4A90)
#define CLASS_2_4800B8E54A1FF822_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x110F49C0)
#define CLASS_2_4800B8E54A1FF822_METHOD_2_BD2E3EED6A052FEA_OFFSET UNITYSDK_OFFSET(0x110F46F0)
#define CLASS_2_4800B8E54A1FF822_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x110F41E0)
#define CLASS_2_4800B8E54A1FF822_METHOD_2_D9EF75A2D048B8A1_OFFSET UNITYSDK_OFFSET(0x110F42A0)
#define CLASS_2_4800B8E54A1FF822__CTOR_OFFSET UNITYSDK_OFFSET(0x110F4CC0)
#define CLASS_2_4800B8E54A1FF822___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x110F4CF0)
#define CLASS_2_4800B8E54A1FF822___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x110F4D50)

inline static constexpr unsigned int Class_2_4800B8E54A1FF822_TypeDefinitionIndex = 57626;

class Class_2_4800B8E54A1FF822 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::String* Field_2_9; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	::RPG::GameCore::GameEntity* Field_2_1; // 0x60
	::RPG::Client::RPGAnimationEvent* Field_2_7; // 0x68
	::UnityEngine::Animation* Field_2_6; // 0x70
	::System::Action* Field_2_4; // 0x78
	::UnityEngine::Transform* Field_2_5; // 0x80
	::System::Boolean Field_2_2; // 0x88
	::System::Boolean Field_2_3; // 0x89

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4800B8E54A1FF822__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4800B8E54A1FF822_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4800B8E54A1FF822_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_4538E9501054E688(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4800B8E54A1FF822_METHOD_2_4538E9501054E688_OFFSET))(this, a1);
	}

	::System::Void Method_2_1835459715B5D9D1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4800B8E54A1FF822_METHOD_2_1835459715B5D9D1_OFFSET))(this, a1);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4800B8E54A1FF822_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD2E3EED6A052FEA(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_4800B8E54A1FF822_METHOD_2_BD2E3EED6A052FEA_OFFSET))(this, a1);
	}

	::System::Void Method_2_0DEC1A8F053BEBEC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4800B8E54A1FF822_METHOD_2_0DEC1A8F053BEBEC_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4800B8E54A1FF822_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_36AF0FAD6B8F6E4D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4800B8E54A1FF822_METHOD_2_36AF0FAD6B8F6E4D_OFFSET))(this);
	}

	::System::Void Method_2_D9EF75A2D048B8A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4800B8E54A1FF822_METHOD_2_D9EF75A2D048B8A1_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4800B8E54A1FF822_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4800B8E54A1FF822_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4800B8E54A1FF822_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4800B8E54A1FF822_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4800B8E54A1FF822___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4800B8E54A1FF822___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
