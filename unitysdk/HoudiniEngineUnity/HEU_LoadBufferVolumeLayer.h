#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HFLayerType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x811DF20)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_LoadBufferVolumeLayer_TypeDefinitionIndex = 36856;

	class HEU_LoadBufferVolumeLayer : public ::System::Object
	{
	public:
		::System::String* _layerName; // 0x10
		::System::String* _normalTexturePath; // 0x18
		::System::String* _diffuseTexturePath; // 0x20
		::System::String* _maskTexturePath; // 0x28
		::System::String* _layerPath; // 0x30
		::Il2CppArray<::System::Single>* _normalizedHeights; // 0x38
		::System::Int32 _partID; // 0x40
		::System::Single _normalScale; // 0x44
		::System::Single _metallic; // 0x48
		::System::Single _smoothness; // 0x4C
		::System::Single _heightRange; // 0x50
		::UnityEngine::Vector2 _tileOffset; // 0x54
		::System::Int32 _heightMapWidth; // 0x5C
		::UnityEngine::Vector3 _maxBounds; // 0x60
		::System::Single _strength; // 0x6C
		::System::Int32 _heightMapHeight; // 0x70
		::System::Boolean _uiExpanded; // 0x74
		::System::Boolean _hasLayerAttributes; // 0x75
		::UnityEngine::Vector2 _tileSize; // 0x78
		::System::Single _maxHeight; // 0x80
		::UnityEngine::Vector3 _minBounds; // 0x84
		::System::Single _minHeight; // 0x90
		::UnityEngine::Color _specularColor; // 0x94
		::System::Int32 _tile; // 0xA4
		::UnityEngine::Vector3 _position; // 0xA8
		::System::Single _terrainSizeY; // 0xB4
		::System::Single _terrainSizeX; // 0xB8
		::HoudiniEngineUnity::HFLayerType _layerType; // 0xBC
		::UnityEngine::Vector3 _center; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_LOADBUFFERVOLUMELAYER__CTOR_OFFSET))(this);
		}
	};
}
