#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define EDITORMONOREGIONVARIENTSET__CTOR_OFFSET UNITYSDK_OFFSET(0xFB894D0)

inline static constexpr unsigned int EditorMonoRegionVarientSet_TypeDefinitionIndex = 38262;

class EditorMonoRegionVarientSet : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDITORMONOREGIONVARIENTSET__CTOR_OFFSET))(this);
	}
};
