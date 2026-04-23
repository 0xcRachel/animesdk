#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RPG::Client { class MonoFourFeetSimpleIK_OriginTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_FC8FD27D5072ECAA_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x116943F0)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_FC8FD27D5072ECAA_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11693C60)
#define RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_FC8FD27D5072ECAA__CTOR_OFFSET UNITYSDK_OFFSET(0x11693540)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoFourFeetSimpleIK_Class_1_FC8FD27D5072ECAA_TypeDefinitionIndex = 63257;

	class MonoFourFeetSimpleIK_Class_1_FC8FD27D5072ECAA : public ::System::Object
	{
	public:
		::RPG::Client::MonoFourFeetSimpleIK_OriginTransform* Field_1_0; // 0x10
		::UnityEngine::Transform* Field_1_1; // 0x18
		::UnityEngine::Quaternion Field_1_2; // 0x20
		::System::Single Field_1_3; // 0x30

		::System::Void _ctor(::RPG::Client::MonoFourFeetSimpleIK_OriginTransform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoFourFeetSimpleIK_OriginTransform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_FC8FD27D5072ECAA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_FC8FD27D5072ECAA_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_1_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOFOURFEETSIMPLEIK_CLASS_1_FC8FD27D5072ECAA_METHOD_1_1290EA767C459179_OFFSET))(this);
		}
	};
}
