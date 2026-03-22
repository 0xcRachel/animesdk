#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEffectController; }
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9345A30)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS25_0__PLAYUPGRADEEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x9347130)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c__DisplayClass25_0_TypeDefinitionIndex = 51249;

	class GridFightEffectController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEffectController* __4__this; // 0x10
		::System::Action* __9__0; // 0x18
		::UnityEngine::Transform* end; // 0x20
		::System::Action* onFinished; // 0x28
		::System::Boolean isEndPerspective; // 0x30
		::System::Int32 star; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayUpgradeEffect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__DISPLAYCLASS25_0__PLAYUPGRADEEFFECT_B__0_OFFSET))(this);
		}
	};
}
