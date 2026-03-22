#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CUSTOMRP_FOGVOLUME_START_OFFSET UNITYSDK_OFFSET(0x1639F080)
#define RPG_CUSTOMRP_FOGVOLUME_UPDATEPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1639EDC0)
#define RPG_CUSTOMRP_FOGVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1639F0C0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int FogVolume_TypeDefinitionIndex = 28478;

	class FogVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::MaterialPropertyBlock* _mpb; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGVOLUME__CTOR_OFFSET))(this);
		}

		::System::Void UpdateParameters()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGVOLUME_UPDATEPARAMETERS_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_FOGVOLUME_START_OFFSET))(this);
		}
	};
}
