#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_DETAILPROTOTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x80CD310)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_DetailPrototype_TypeDefinitionIndex = 36932;

	class HEU_DetailPrototype : public ::System::Object
	{
	public:
		::System::String* _prototypeTexture; // 0x10
		::System::String* _prototypePrefab; // 0x18
		::System::Single _bendFactor; // 0x20
		::System::Single _maxWidth; // 0x24
		::System::Single _maxHeight; // 0x28
		::UnityEngine::Color _healthyColor; // 0x2C
		::System::Int32 _renderMode; // 0x3C
		::System::Single _minHeight; // 0x40
		::UnityEngine::Color _dryColor; // 0x44
		::System::Single _noiseSpread; // 0x54
		::System::Single _minWidth; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_DETAILPROTOTYPE__CTOR_OFFSET))(this);
		}
	};
}
