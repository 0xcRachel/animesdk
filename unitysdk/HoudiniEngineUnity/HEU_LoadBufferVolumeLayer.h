#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HFLayerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x15440A50)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferVolumeLayer_TypeDefinitionIndex = 43670;

	class HEU_LoadBufferVolumeLayer : public ::System::Object
	{
	public:
		::System::String* _normalTexturePath; // 0x10
		::System::String* _maskTexturePath; // 0x18
		::System::String* _diffuseTexturePath; // 0x20
		::Il2CppArray<::System::Single>* _normalizedHeights; // 0x28
		::System::String* _layerPath; // 0x30
		::System::String* _layerName; // 0x38
		::UnityEngine::Vector2 _tileSize; // 0x40
		::UnityEngine::Vector3 _maxBounds; // 0x48
		::System::Single _strength; // 0x54
		::System::Single _heightRange; // 0x58
		::System::Int32 _partID; // 0x5C
		::System::Boolean _hasLayerAttributes; // 0x60
		::System::Boolean _uiExpanded; // 0x61
		::UnityEngine::Vector3 _minBounds; // 0x64
		::UnityEngine::Color _specularColor; // 0x70
		::System::Single _terrainSizeY; // 0x80
		::System::Single _minHeight; // 0x84
		::System::Single _normalScale; // 0x88
		::HoudiniEngineUnity::HFLayerType _layerType; // 0x8C
		::System::Single _smoothness; // 0x90
		::UnityEngine::Vector3 _center; // 0x94
		::System::Int32 _heightMapWidth; // 0xA0
		::UnityEngine::Vector2 _tileOffset; // 0xA4
		::System::Single _terrainSizeX; // 0xAC
		::System::Int32 _tile; // 0xB0
		::System::Int32 _heightMapHeight; // 0xB4
		::UnityEngine::Vector3 _position; // 0xB8
		::System::Single _maxHeight; // 0xC4
		::System::Single _metallic; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET))(this);
		}
	};
}
