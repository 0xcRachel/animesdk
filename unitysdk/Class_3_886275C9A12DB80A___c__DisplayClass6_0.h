#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffect; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_886275C9A12DB80A___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10D433D0)
#define CLASS_3_886275C9A12DB80A___C__DISPLAYCLASS6_0___PLAYDAMAGEHITEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x10D43650)

inline static constexpr unsigned int Class_3_886275C9A12DB80A___c__DisplayClass6_0_TypeDefinitionIndex = 44137;

class Class_3_886275C9A12DB80A___c__DisplayClass6_0 : public ::System::Object
{
public:
	::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* __9__0; // 0x10
	::RPG::MVector3 vHitSourcePos; // 0x18
	::RPG::MVector3 vHitPos; // 0x24
	::System::Single fConfigEffectHeight; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_886275C9A12DB80A___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void __PlayDamageHitEffect_b__0(::RPG::Client::MonoEffect* pHitEffect, ::RPG::Client::TriggerEffectCallbackParams extraParams)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_3_886275C9A12DB80A___C__DISPLAYCLASS6_0___PLAYDAMAGEHITEFFECT_B__0_OFFSET))(this, pHitEffect, extraParams);
	}
};
