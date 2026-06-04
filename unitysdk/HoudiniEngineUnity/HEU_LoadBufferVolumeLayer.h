#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HFLayerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x105232A0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferVolumeLayer_TypeDefinitionIndex = 37646;

	class HEU_LoadBufferVolumeLayer : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* _normalizedHeights; // 0x10
		::System::String* _layerPath; // 0x18
		::System::String* _maskTexturePath; // 0x20
		::System::String* _normalTexturePath; // 0x28
		::System::String* _layerName; // 0x30
		::System::String* _diffuseTexturePath; // 0x38
		::System::Single _minHeight; // 0x40
		::UnityEngine::Vector2 _tileSize; // 0x44
		::System::Boolean _hasLayerAttributes; // 0x4C
		::System::Boolean _uiExpanded; // 0x4D
		::UnityEngine::Vector3 _minBounds; // 0x50
		::System::Single _terrainSizeX; // 0x5C
		::System::Int32 _heightMapWidth; // 0x60
		::UnityEngine::Vector3 _maxBounds; // 0x64
		::System::Single _heightRange; // 0x70
		::System::Int32 _partID; // 0x74
		::UnityEngine::Vector3 _position; // 0x78
		::System::Single _terrainSizeY; // 0x84
		::System::Int32 _heightMapHeight; // 0x88
		::UnityEngine::Vector2 _tileOffset; // 0x8C
		::System::Single _maxHeight; // 0x94
		::System::Single _strength; // 0x98
		::System::Single _smoothness; // 0x9C
		::UnityEngine::Color _specularColor; // 0xA0
		::System::Int32 _tile; // 0xB0
		::System::Single _normalScale; // 0xB4
		::System::Single _metallic; // 0xB8
		::UnityEngine::Vector3 _center; // 0xBC
		::HoudiniEngineUnity::HFLayerType _layerType; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET))(this);
		}
	};
}
