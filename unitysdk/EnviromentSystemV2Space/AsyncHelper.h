#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_542524E089786F71;

#define ENVIROMENTSYSTEMV2SPACE_ASYNCHELPER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE4EF5E0)
#define ENVIROMENTSYSTEMV2SPACE_ASYNCHELPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE4EF460)
#define ENVIROMENTSYSTEMV2SPACE_ASYNCHELPER_UPDATE_OFFSET UNITYSDK_OFFSET(0xE4EF630)
#define ENVIROMENTSYSTEMV2SPACE_ASYNCHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0xE4EF6F0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int AsyncHelper_TypeDefinitionIndex = 38945;

	class AsyncHelper : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_1_542524E089786F71* Field_5_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ASYNCHELPER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ASYNCHELPER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ASYNCHELPER_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ASYNCHELPER_UPDATE_OFFSET))(this);
		}
	};
}
