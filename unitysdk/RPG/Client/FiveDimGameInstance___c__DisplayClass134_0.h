#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Collider; }

#define RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS134_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9270090)
#define RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS134_0__SETUPSIMPLETRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0x927C7D0)
#define RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS134_0__SETUPSIMPLETRIGGER_B__1_OFFSET UNITYSDK_OFFSET(0x927C820)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimGameInstance___c__DisplayClass134_0_TypeDefinitionIndex = 47822;

	class FiveDimGameInstance___c__DisplayClass134_0 : public ::System::Object
	{
	public:
		::Struct_2_9BF8902D61AE1796 onExit; // 0x10
		::Struct_2_9BF8902D61AE1796 onEnter; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS134_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupSimpleTrigger_b__0(::UnityEngine::Collider* _)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS134_0__SETUPSIMPLETRIGGER_B__0_OFFSET))(this, _);
		}

		::System::Void _SetupSimpleTrigger_b__1(::UnityEngine::Collider* _)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMGAMEINSTANCE___C__DISPLAYCLASS134_0__SETUPSIMPLETRIGGER_B__1_OFFSET))(this, _);
		}
	};
}
