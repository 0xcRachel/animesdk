#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Renderer.h"
#include "unitysdk/UnityEngine/SpriteSortPoint.h"

namespace UnityEngine { class Sprite; }

#define UNITYENGINE_SPRITEMASK_GETSPRITEBOUNDS_INJECTED_OFFSET UNITYSDK_OFFSET(0x182A3670)
#define UNITYENGINE_SPRITEMASK_GETSPRITEBOUNDS_OFFSET UNITYSDK_OFFSET(0x182A3620)
#define UNITYENGINE_SPRITEMASK_GET_ALPHACUTOFF_OFFSET UNITYSDK_OFFSET(0x182A35A0)
#define UNITYENGINE_SPRITEMASK_GET_BACKSORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x182A3560)
#define UNITYENGINE_SPRITEMASK_GET_BACKSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x182A3580)
#define UNITYENGINE_SPRITEMASK_GET_FRONTSORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x182A3520)
#define UNITYENGINE_SPRITEMASK_GET_FRONTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x182A3540)
#define UNITYENGINE_SPRITEMASK_GET_ISCUSTOMRANGEACTIVE_OFFSET UNITYSDK_OFFSET(0x182A35E0)
#define UNITYENGINE_SPRITEMASK_GET_SPRITESORTPOINT_OFFSET UNITYSDK_OFFSET(0x182A3600)
#define UNITYENGINE_SPRITEMASK_GET_SPRITE_OFFSET UNITYSDK_OFFSET(0x182A35C0)
#define UNITYENGINE_SPRITEMASK_SET_ALPHACUTOFF_OFFSET UNITYSDK_OFFSET(0x182A35B0)
#define UNITYENGINE_SPRITEMASK_SET_BACKSORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x182A3570)
#define UNITYENGINE_SPRITEMASK_SET_BACKSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x182A3590)
#define UNITYENGINE_SPRITEMASK_SET_FRONTSORTINGLAYERID_OFFSET UNITYSDK_OFFSET(0x182A3530)
#define UNITYENGINE_SPRITEMASK_SET_FRONTSORTINGORDER_OFFSET UNITYSDK_OFFSET(0x182A3550)
#define UNITYENGINE_SPRITEMASK_SET_ISCUSTOMRANGEACTIVE_OFFSET UNITYSDK_OFFSET(0x182A35F0)
#define UNITYENGINE_SPRITEMASK_SET_SPRITESORTPOINT_OFFSET UNITYSDK_OFFSET(0x182A3610)
#define UNITYENGINE_SPRITEMASK_SET_SPRITE_OFFSET UNITYSDK_OFFSET(0x182A35D0)
#define UNITYENGINE_SPRITEMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x182A3680)

namespace UnityEngine
{
	inline static constexpr unsigned int SpriteMask_TypeDefinitionIndex = 5411;

	class SpriteMask : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_frontSortingLayerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GET_FRONTSORTINGLAYERID_OFFSET))(this);
		}

		::System::Void set_frontSortingLayerID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_SET_FRONTSORTINGLAYERID_OFFSET))(this, value);
		}

		::System::Int32 get_frontSortingOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GET_FRONTSORTINGORDER_OFFSET))(this);
		}

		::System::Void set_frontSortingOrder(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_SET_FRONTSORTINGORDER_OFFSET))(this, value);
		}

		::System::Int32 get_backSortingLayerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GET_BACKSORTINGLAYERID_OFFSET))(this);
		}

		::System::Void set_backSortingLayerID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_SET_BACKSORTINGLAYERID_OFFSET))(this, value);
		}

		::System::Int32 get_backSortingOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GET_BACKSORTINGORDER_OFFSET))(this);
		}

		::System::Void set_backSortingOrder(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_SET_BACKSORTINGORDER_OFFSET))(this, value);
		}

		::System::Single get_alphaCutoff()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GET_ALPHACUTOFF_OFFSET))(this);
		}

		::System::Void set_alphaCutoff(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_SET_ALPHACUTOFF_OFFSET))(this, value);
		}

		::UnityEngine::Sprite* get_sprite()
		{
			return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GET_SPRITE_OFFSET))(this);
		}

		::System::Void set_sprite(::UnityEngine::Sprite* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_SET_SPRITE_OFFSET))(this, value);
		}

		::System::Boolean get_isCustomRangeActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GET_ISCUSTOMRANGEACTIVE_OFFSET))(this);
		}

		::System::Void set_isCustomRangeActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_SET_ISCUSTOMRANGEACTIVE_OFFSET))(this, value);
		}

		::UnityEngine::SpriteSortPoint get_spriteSortPoint()
		{
			return ((::UnityEngine::SpriteSortPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GET_SPRITESORTPOINT_OFFSET))(this);
		}

		::System::Void set_spriteSortPoint(::UnityEngine::SpriteSortPoint value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SpriteSortPoint))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_SET_SPRITESORTPOINT_OFFSET))(this, value);
		}

		::UnityEngine::Bounds GetSpriteBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GETSPRITEBOUNDS_OFFSET))(this);
		}

		::System::Void GetSpriteBounds_Injected(::UnityEngine::Bounds& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITEMASK_GETSPRITEBOUNDS_INJECTED_OFFSET))(this, ret);
		}
	};
}
