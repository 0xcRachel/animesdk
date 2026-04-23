#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_DETAILPROTOTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x12C3EE90)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_DetailPrototype_TypeDefinitionIndex = 43746;

	class HEU_DetailPrototype : public ::System::Object
	{
	public:
		::System::String* _prototypeTexture; // 0x10
		::System::String* _prototypePrefab; // 0x18
		::UnityEngine::Color _healthyColor; // 0x20
		::System::Single _noiseSpread; // 0x30
		::System::Single _maxWidth; // 0x34
		::System::Single _maxHeight; // 0x38
		::System::Single _minHeight; // 0x3C
		::System::Single _minWidth; // 0x40
		::UnityEngine::Color _dryColor; // 0x44
		::System::Int32 _renderMode; // 0x54
		::System::Single _bendFactor; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_DETAILPROTOTYPE__CTOR_OFFSET))(this);
		}
	};
}
