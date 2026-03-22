#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"

class Class_0_16E4307DCC419505_510;
class Class_1_3B36CE63D36E9917;
class Class_1_3C3EAF61D129C7B7;
namespace RPG::Client { class BaseGameFlow; }
namespace System { class Object; }

#define CLASS_2_7C047832E1F21ACC_METHOD_2_165193CCF0986BE4_OFFSET UNITYSDK_OFFSET(0x10E3C600)
#define CLASS_2_7C047832E1F21ACC_RECEIVEEVENT_OFFSET UNITYSDK_OFFSET(0x10E3C770)
#define CLASS_2_7C047832E1F21ACC_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0x10E3C7D0)
#define CLASS_2_7C047832E1F21ACC__CTOR_OFFSET UNITYSDK_OFFSET(0x10E3C4E0)

inline static constexpr unsigned int Class_2_7C047832E1F21ACC_TypeDefinitionIndex = 60197;

class Class_2_7C047832E1F21ACC : public ::RPG::Client::BaseGameFlowContext
{
public:
	::Class_1_3B36CE63D36E9917* Field_2_0; // 0x20
	::Class_1_3C3EAF61D129C7B7* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_7C047832E1F21ACC__CTOR_OFFSET))(this, a1);
	}

	static ::Class_2_7C047832E1F21ACC* Method_2_165193CCF0986BE4(::RPG::Client::BaseGameFlow* a1)
	{
		return ((::Class_2_7C047832E1F21ACC*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + CLASS_2_7C047832E1F21ACC_METHOD_2_165193CCF0986BE4_OFFSET))(a1);
	}

	::System::Void ReceiveEvent(::Class_0_16E4307DCC419505_510* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_510*))((::PBYTE)hIl2Cpp + CLASS_2_7C047832E1F21ACC_RECEIVEEVENT_OFFSET))(this, a1);
	}

	::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_7C047832E1F21ACC_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
	}
};
