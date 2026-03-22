#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CUSTOMRP_ADDVOXELVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0xA27A070)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AddVoxelVolume_TypeDefinitionIndex = 40822;

	class AddVoxelVolume : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_ADDVOXELVOLUME__CTOR_OFFSET))(this);
		}
	};
}
