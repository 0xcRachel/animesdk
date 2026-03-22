#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_AWAKE_OFFSET UNITYSDK_OFFSET(0x9F81D30)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9F81EB0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9F81E20)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9F81D90)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO__CTOR_OFFSET UNITYSDK_OFFSET(0x9F81F10)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleTextManagerMono_TypeDefinitionIndex = 57914;

	class SimpleTextManagerMono : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_ONDESTROY_OFFSET))(this);
		}
	};
}
