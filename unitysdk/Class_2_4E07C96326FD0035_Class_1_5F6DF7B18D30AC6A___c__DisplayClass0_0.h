#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"

class Class_2_4E07C96326FD0035;
class Class_2_4E07C96326FD0035_Class_1_5F6DF7B18D30AC6A;
namespace RPG::Client { class MonoEffect; }

#define CLASS_2_4E07C96326FD0035_CLASS_1_5F6DF7B18D30AC6A___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9BE6F40)
#define CLASS_2_4E07C96326FD0035_CLASS_1_5F6DF7B18D30AC6A___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x9BE7040)

inline static constexpr unsigned int Class_2_4E07C96326FD0035_Class_1_5F6DF7B18D30AC6A___c__DisplayClass0_0_TypeDefinitionIndex = 45115;

class Class_2_4E07C96326FD0035_Class_1_5F6DF7B18D30AC6A___c__DisplayClass0_0 : public ::System::Object
{
public:
	::Class_2_4E07C96326FD0035_Class_1_5F6DF7B18D30AC6A* __4__this; // 0x10
	::Class_2_4E07C96326FD0035* monoEffectComponent; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_CLASS_1_5F6DF7B18D30AC6A___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void __ctor_b__0(::RPG::Client::MonoEffect* effect, ::RPG::Client::TriggerEffectCallbackParams callbackParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_2_4E07C96326FD0035_CLASS_1_5F6DF7B18D30AC6A___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET))(this, effect, callbackParams);
	}
};
