#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_TERRAINLAYER_GET_DIFFUSETEXTURE_OFFSET UNITYSDK_OFFSET(0x1A6FBD70)
#define UNITYENGINE_TERRAINLAYER_GET_TILESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A6FBDE0)
#define UNITYENGINE_TERRAINLAYER_GET_TILESIZE_OFFSET UNITYSDK_OFFSET(0x1A6FBDB0)
#define UNITYENGINE_TERRAINLAYER_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1A6FBD60)
#define UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMAX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A6FBED0)
#define UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMAX_OFFSET UNITYSDK_OFFSET(0x1A6FBEC0)
#define UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMIN_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A6FBEB0)
#define UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMIN_OFFSET UNITYSDK_OFFSET(0x1A6FBEA0)
#define UNITYENGINE_TERRAINLAYER_SET_DIFFUSETEXTURE_OFFSET UNITYSDK_OFFSET(0x1A6FBD80)
#define UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMAX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A6FBF10)
#define UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMAX_OFFSET UNITYSDK_OFFSET(0x1A6FBF00)
#define UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMIN_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A6FBEF0)
#define UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMIN_OFFSET UNITYSDK_OFFSET(0x1A6FBEE0)
#define UNITYENGINE_TERRAINLAYER_SET_MASKMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A6FBDA0)
#define UNITYENGINE_TERRAINLAYER_SET_METALLIC_OFFSET UNITYSDK_OFFSET(0x1A6FBE70)
#define UNITYENGINE_TERRAINLAYER_SET_NORMALMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A6FBD90)
#define UNITYENGINE_TERRAINLAYER_SET_NORMALSCALE_OFFSET UNITYSDK_OFFSET(0x1A6FBE90)
#define UNITYENGINE_TERRAINLAYER_SET_SMOOTHNESS_OFFSET UNITYSDK_OFFSET(0x1A6FBE80)
#define UNITYENGINE_TERRAINLAYER_SET_SPECULAR_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A6FBE60)
#define UNITYENGINE_TERRAINLAYER_SET_SPECULAR_OFFSET UNITYSDK_OFFSET(0x1A6FBE50)
#define UNITYENGINE_TERRAINLAYER_SET_TILEOFFSET_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A6FBE40)
#define UNITYENGINE_TERRAINLAYER_SET_TILEOFFSET_OFFSET UNITYSDK_OFFSET(0x1A6FBE20)
#define UNITYENGINE_TERRAINLAYER_SET_TILESIZE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A6FBE10)
#define UNITYENGINE_TERRAINLAYER_SET_TILESIZE_OFFSET UNITYSDK_OFFSET(0x1A6FBDF0)
#define UNITYENGINE_TERRAINLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6FBD50)

namespace UnityEngine
{
	inline static constexpr unsigned int TerrainLayer_TypeDefinitionIndex = 5248;

	class TerrainLayer : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::TerrainLayer* layer)
		{
			return ((::System::Void(*)(::UnityEngine::TerrainLayer*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_INTERNAL_CREATE_OFFSET))(layer);
		}

		::UnityEngine::Texture2D* get_diffuseTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_GET_DIFFUSETEXTURE_OFFSET))(this);
		}

		::System::Void set_diffuseTexture(::UnityEngine::Texture2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_DIFFUSETEXTURE_OFFSET))(this, value);
		}

		::System::Void set_normalMapTexture(::UnityEngine::Texture2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_NORMALMAPTEXTURE_OFFSET))(this, value);
		}

		::System::Void set_maskMapTexture(::UnityEngine::Texture2D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_MASKMAPTEXTURE_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_tileSize()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_GET_TILESIZE_OFFSET))(this);
		}

		::System::Void set_tileSize(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_TILESIZE_OFFSET))(this, value);
		}

		::System::Void set_tileOffset(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_TILEOFFSET_OFFSET))(this, value);
		}

		::System::Void set_specular(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_SPECULAR_OFFSET))(this, value);
		}

		::System::Void set_metallic(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_METALLIC_OFFSET))(this, value);
		}

		::System::Void set_smoothness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_SMOOTHNESS_OFFSET))(this, value);
		}

		::System::Void set_normalScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_NORMALSCALE_OFFSET))(this, value);
		}

		::System::Void set_diffuseRemapMin(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMIN_OFFSET))(this, value);
		}

		::System::Void set_diffuseRemapMax(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMAX_OFFSET))(this, value);
		}

		::System::Void set_maskMapRemapMin(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMIN_OFFSET))(this, value);
		}

		::System::Void set_maskMapRemapMax(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMAX_OFFSET))(this, value);
		}

		::System::Void get_tileSize_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_GET_TILESIZE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_tileSize_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_TILESIZE_INJECTED_OFFSET))(this, value);
		}

		::System::Void set_tileOffset_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_TILEOFFSET_INJECTED_OFFSET))(this, value);
		}

		::System::Void set_specular_Injected(::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_SPECULAR_INJECTED_OFFSET))(this, value);
		}

		::System::Void set_diffuseRemapMin_Injected(::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMIN_INJECTED_OFFSET))(this, value);
		}

		::System::Void set_diffuseRemapMax_Injected(::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_DIFFUSEREMAPMAX_INJECTED_OFFSET))(this, value);
		}

		::System::Void set_maskMapRemapMin_Injected(::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMIN_INJECTED_OFFSET))(this, value);
		}

		::System::Void set_maskMapRemapMax_Injected(::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_TERRAINLAYER_SET_MASKMAPREMAPMAX_INJECTED_OFFSET))(this, value);
		}
	};
}
