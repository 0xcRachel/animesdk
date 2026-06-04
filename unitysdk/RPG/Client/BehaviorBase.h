#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class MonoBehaviour; }

#define RPG_CLIENT_BEHAVIORBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17916330)
#define RPG_CLIENT_BEHAVIORBASE_METHOD_1_60AA426059997E64_OFFSET UNITYSDK_OFFSET(0x17916380)
#define RPG_CLIENT_BEHAVIORBASE_METHOD_1_BB7A80635436443C_OFFSET UNITYSDK_OFFSET(0x179162E0)
#define RPG_CLIENT_BEHAVIORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x17916450)

namespace RPG::Client
{
	inline static constexpr unsigned int BehaviorBase_TypeDefinitionIndex = 65787;

	class BehaviorBase : public ::System::Object
	{
	public:
		::UnityEngine::MonoBehaviour* _OwnerMonoBehavior; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEHAVIORBASE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_BB7A80635436443C(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEHAVIORBASE_METHOD_1_BB7A80635436443C_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEHAVIORBASE_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_60AA426059997E64(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BEHAVIORBASE_METHOD_1_60AA426059997E64_OFFSET))(this, a1);
		}
	};
}
