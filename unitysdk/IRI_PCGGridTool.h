#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define IRI_PCGGRIDTOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x14062410)

inline static constexpr unsigned int IRI_PCGGridTool_TypeDefinitionIndex = 44847;

class IRI_PCGGridTool : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_PCGGRIDTOOL__CTOR_OFFSET))(this);
	}
};
