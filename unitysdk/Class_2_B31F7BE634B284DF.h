#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_59305B446B42427E.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"

class Class_1_3E7CB4EB71D78E39;
class Class_2_9D4DD2F4235F8658;
namespace RPG::GameCore { class ButtonListTrigger_RuntimeButton; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B31F7BE634B284DF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF3E8390)
#define CLASS_2_B31F7BE634B284DF_DOONENTER_OFFSET UNITYSDK_OFFSET(0xF3E85D0)
#define CLASS_2_B31F7BE634B284DF_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xF3E88B0)
#define CLASS_2_B31F7BE634B284DF_DOONTICK_OFFSET UNITYSDK_OFFSET(0xF3E8920)
#define CLASS_2_B31F7BE634B284DF_METHOD_2_025E4B1A2211CF52_OFFSET UNITYSDK_OFFSET(0xF3E89E0)
#define CLASS_2_B31F7BE634B284DF_METHOD_2_2ADBA02EC0F7C432_OFFSET UNITYSDK_OFFSET(0xF3E9180)
#define CLASS_2_B31F7BE634B284DF_METHOD_2_3DC7237D000039D0_OFFSET UNITYSDK_OFFSET(0xF3E8D70)
#define CLASS_2_B31F7BE634B284DF_METHOD_2_797A699EED121969_OFFSET UNITYSDK_OFFSET(0xF3E8430)
#define CLASS_2_B31F7BE634B284DF_METHOD_2_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0xF3E8A50)
#define CLASS_2_B31F7BE634B284DF_METHOD_2_CA344D06ECBECF75_OFFSET UNITYSDK_OFFSET(0xF3E8640)
#define CLASS_2_B31F7BE634B284DF__CCTOR_OFFSET UNITYSDK_OFFSET(0xF3E9330)
#define CLASS_2_B31F7BE634B284DF__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E8190)
#define CLASS_2_B31F7BE634B284DF___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF3E9370)
#define CLASS_2_B31F7BE634B284DF___IFIXBASEPROXY_DOONENTER_OFFSET UNITYSDK_OFFSET(0xF3E9380)
#define CLASS_2_B31F7BE634B284DF___IFIXBASEPROXY_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xF3E9390)

inline static constexpr unsigned int Class_2_B31F7BE634B284DF_TypeDefinitionIndex = 53020;

class Class_2_B31F7BE634B284DF : public ::Class_1_59305B446B42427E
{
public:
	static ::System::String** StaticGet_Field_2_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_B31F7BE634B284DF_TypeDefinitionIndex)->GetStaticField(0x2F8A0);
	}
	::System::Collections::Generic::List_1<::RPG::GameCore::ButtonListTrigger_RuntimeButton*>* Field_2_3; // 0x98
	::Class_2_9D4DD2F4235F8658* Field_2_6; // 0xA0
	::System::Boolean Field_2_0; // 0xA8
	::System::Boolean Field_2_4; // 0xA9
	::System::Boolean Field_2_5; // 0xAA
	::System::Single Field_2_1; // 0xAC

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>*))((::PBYTE)hIl2Cpp + CLASS_2_B31F7BE634B284DF__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B31F7BE634B284DF__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B31F7BE634B284DF_DISPOSE_OFFSET))(this);
	}

	::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B31F7BE634B284DF_DOONENTER_OFFSET))(this, a1);
	}

	::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_B31F7BE634B284DF_DOONEXIT_OFFSET))(this, a1, a2);
	}

	::System::Void DoOnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B31F7BE634B284DF_DOONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_025E4B1A2211CF52()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B31F7BE634B284DF_METHOD_2_025E4B1A2211CF52_OFFSET))(this);
	}

	::System::Void Method_2_3DC7237D000039D0(::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_3E7CB4EB71D78E39*>*))((::PBYTE)hIl2Cpp + CLASS_2_B31F7BE634B284DF_METHOD_2_3DC7237D000039D0_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA344D06ECBECF75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B31F7BE634B284DF_METHOD_2_CA344D06ECBECF75_OFFSET))(this);
	}

	::System::Void Method_2_797A699EED121969()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B31F7BE634B284DF_METHOD_2_797A699EED121969_OFFSET))(this);
	}

	::System::Void Method_2_2ADBA02EC0F7C432(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B31F7BE634B284DF_METHOD_2_2ADBA02EC0F7C432_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B31F7BE634B284DF_METHOD_2_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B31F7BE634B284DF___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_DoOnEnter(::RPG::GameCore::GameEntity* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B31F7BE634B284DF___IFIXBASEPROXY_DOONENTER_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_DoOnExit(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::TriggerExitReason P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + CLASS_2_B31F7BE634B284DF___IFIXBASEPROXY_DOONEXIT_OFFSET))(this, P0, P1);
	}
};
