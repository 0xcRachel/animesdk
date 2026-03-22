#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define IRICLUSTERBUILDER_IRIMESHCLUSTERITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x10AD4D90)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRIMeshClusterItem_TypeDefinitionIndex = 37663;

	class IRIMeshClusterItem : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRIMESHCLUSTERITEM__CTOR_OFFSET))(this);
		}
	};
}
