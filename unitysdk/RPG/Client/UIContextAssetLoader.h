#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client { class UIContextAssetLoader_AsyncAssetCache; }
namespace RPG::Client { template <typename T> class FlagSwitch_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UICONTEXTASSETLOADER_AFTERFLAGPUSHED_OFFSET UNITYSDK_OFFSET(0x12F005B0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADMATERIALTO_OFFSET UNITYSDK_OFFSET(0x12EFF3D0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADSPRITETO_OFFSET UNITYSDK_OFFSET(0x12EFEE20)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADTEXTURETO_OFFSET UNITYSDK_OFFSET(0x12EFF730)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASEMATERIALIN_OFFSET UNITYSDK_OFFSET(0x12EFF6A0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASESPRITEIN_OFFSET UNITYSDK_OFFSET(0x12EFF1C0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASETEXTUREIN_OFFSET UNITYSDK_OFFSET(0x12EFFA00)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ENABLEFLAGSWITCH_OFFSET UNITYSDK_OFFSET(0x12F006D0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ISFLAGPUSED_OFFSET UNITYSDK_OFFSET(0x12F00670)
#define RPG_CLIENT_UICONTEXTASSETLOADER_LOADMATERIALTO_OFFSET UNITYSDK_OFFSET(0x12EFE6E0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_LOADSPRITETO_OFFSET UNITYSDK_OFFSET(0x12EFE4D0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_LOADTEXTURETO_OFFSET UNITYSDK_OFFSET(0x12EFE7E0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ONFLAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x12F00500)
#define RPG_CLIENT_UICONTEXTASSETLOADER_RELEASEALL_OFFSET UNITYSDK_OFFSET(0x12EFE030)
#define RPG_CLIENT_UICONTEXTASSETLOADER_RELEASEMATERIALIN_OFFSET UNITYSDK_OFFSET(0x12EFED00)
#define RPG_CLIENT_UICONTEXTASSETLOADER_RELEASESPRITEIN_OFFSET UNITYSDK_OFFSET(0x12EFEB80)
#define RPG_CLIENT_UICONTEXTASSETLOADER_RELEASETEXTUREIN_OFFSET UNITYSDK_OFFSET(0x12EFED90)
#define RPG_CLIENT_UICONTEXTASSETLOADER_SETFLAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x12F00560)
#define RPG_CLIENT_UICONTEXTASSETLOADER_TRYLOADEFFECTTO_OFFSET UNITYSDK_OFFSET(0x12EFE920)
#define RPG_CLIENT_UICONTEXTASSETLOADER__ADDASSETTOCACHEPOOL_1_OFFSET UNITYSDK_OFFSET(0x12EFF260)
#define RPG_CLIENT_UICONTEXTASSETLOADER__ADDASSETTOCACHEPOOL_OFFSET UNITYSDK_OFFSET(0x12EFE5B0)
#define RPG_CLIENT_UICONTEXTASSETLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x12EFDCD0)
#define RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADMATERIAL_OFFSET UNITYSDK_OFFSET(0x12EFFFA0)
#define RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADSPRITE_OFFSET UNITYSDK_OFFSET(0x12EFFD40)
#define RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x12F00230)
#define RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEEFFECTPOOL_OFFSET UNITYSDK_OFFSET(0x12EFE390)
#define RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEPOOL_1_OFFSET UNITYSDK_OFFSET(0x12EFE200)
#define RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEPOOL_OFFSET UNITYSDK_OFFSET(0x12EFE0C0)
#define RPG_CLIENT_UICONTEXTASSETLOADER__RELEASEONEASSETINCACHEPOOL_1_OFFSET UNITYSDK_OFFSET(0x12EFFA90)
#define RPG_CLIENT_UICONTEXTASSETLOADER__RELEASEONEASSETINCACHEPOOL_OFFSET UNITYSDK_OFFSET(0x12EFEC10)

namespace RPG::Client
{
	inline static constexpr unsigned int UIContextAssetLoader_TypeDefinitionIndex = 67252;

	class UIContextAssetLoader : public ::System::Object
	{
	public:
		// static const ::System::String* IMG_NULL_ERR_MSG; // 0x0
		// static const ::System::String* PNG_EXT; // 0x0
		// static const ::System::String* SPRITE_NULL_ERR_MSG; // 0x0
		// static const ::System::String* MAT_EXT; // 0x0
		// static const ::System::String* MAT_NULL_ERR_MSG; // 0x0
		// static const ::System::String* TEXTURE_NULL_ERR_MSG; // 0x0
		// static const ::System::String* PREFAB_EXT; // 0x0
		// static const ::System::String* PREFAB_NULL_ERR_MSG; // 0x0
		// static const ::System::String* _FLAG_FORMAT; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* _CachedTextureInImages; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>* _AsyncCachedTextureInImages; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* _CachedEffect; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* _CachedMaterialInImages; // 0x28
		::RPG::Client::FlagSwitch_1<::System::Int64>* flagSwitch; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>* _AsyncCachedMaterialInImages; // 0x38
		::System::Action* flagCallback; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>* _AsyncCachedSpriteInImages; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* _CachedSpriteInImages; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__CTOR_OFFSET))(this);
		}

		::System::Void ReleaseAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_RELEASEALL_OFFSET))(this);
		}

		::System::Void LoadSpriteTo(::UnityEngine::UI::Image* destination, ::System::String* spritePath)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_LOADSPRITETO_OFFSET))(this, destination, spritePath);
		}

		::System::Void LoadMaterialTo(::UnityEngine::UI::Image* destination, ::System::String* materialPath)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_LOADMATERIALTO_OFFSET))(this, destination, materialPath);
		}

		::System::Void LoadTextureTo(::UnityEngine::UI::Image* destination, ::System::String* texturePath)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_LOADTEXTURETO_OFFSET))(this, destination, texturePath);
		}

		::UnityEngine::GameObject* TryLoadEffectTo(::UnityEngine::Transform* tf, ::System::String* effectPath)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_TRYLOADEFFECTTO_OFFSET))(this, tf, effectPath);
		}

		::System::Void ReleaseSpriteIn(::UnityEngine::UI::Image* image)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_RELEASESPRITEIN_OFFSET))(this, image);
		}

		::System::Void ReleaseMaterialIn(::UnityEngine::UI::Image* image)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_RELEASEMATERIALIN_OFFSET))(this, image);
		}

		::System::Void ReleaseTextureIn(::UnityEngine::UI::Image* image)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_RELEASETEXTUREIN_OFFSET))(this, image);
		}

		::System::Void AsyncLoadSpriteTo(::UnityEngine::UI::Image* destination, ::System::String* spritePath, ::RPG::Client::OnAssetOperationDelegate* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADSPRITETO_OFFSET))(this, destination, spritePath, callback);
		}

		::System::Void AsyncLoadMaterialTo(::UnityEngine::UI::Image* destination, ::System::String* materialPath, ::RPG::Client::OnAssetOperationDelegate* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADMATERIALTO_OFFSET))(this, destination, materialPath, callback);
		}

		::System::Void AsyncLoadTextureTo(::UnityEngine::UI::Image* destination, ::System::String* texturePath, ::RPG::Client::OnAssetOperationDelegate* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADTEXTURETO_OFFSET))(this, destination, texturePath, callback);
		}

		::System::Void AsyncReleaseSpriteIn(::UnityEngine::UI::Image* image)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASESPRITEIN_OFFSET))(this, image);
		}

		::System::Void AsyncReleaseMaterialIn(::UnityEngine::UI::Image* image)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASEMATERIALIN_OFFSET))(this, image);
		}

		::System::Void AsyncReleaseTextureIn(::UnityEngine::UI::Image* image)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASETEXTUREIN_OFFSET))(this, image);
		}

		::System::Void _ReleaseOneAssetInCachePool(::System::Int32 guid, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* cachePool)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__RELEASEONEASSETINCACHEPOOL_OFFSET))(this, guid, cachePool);
		}

		::System::Boolean _ReleaseOneAssetInCachePool_1(::System::Int32 guid, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>* cachePool)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__RELEASEONEASSETINCACHEPOOL_1_OFFSET))(this, guid, cachePool);
		}

		::System::Boolean _OnAsyncLoadSprite(::RPG::Client::IAssetOperation* assetOpt)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADSPRITE_OFFSET))(this, assetOpt);
		}

		::System::Boolean _OnAsyncLoadMaterial(::RPG::Client::IAssetOperation* assetOpt)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADMATERIAL_OFFSET))(this, assetOpt);
		}

		::System::Boolean _OnAsyncLoadTexture(::RPG::Client::IAssetOperation* assetOpt)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADTEXTURE_OFFSET))(this, assetOpt);
		}

		::System::Void _AddAssetToCachePool(::System::Int32 guid, ::UnityEngine::Object* cacheObject, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* cachePool)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Object*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__ADDASSETTOCACHEPOOL_OFFSET))(this, guid, cacheObject, cachePool);
		}

		::System::Void _AddAssetToCachePool_1(::UnityEngine::UI::Image* image, ::RPG::Client::IAssetOperation* cacheObject, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>* cachePool)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::RPG::Client::IAssetOperation*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__ADDASSETTOCACHEPOOL_1_OFFSET))(this, image, cacheObject, cachePool);
		}

		::System::Void _ReleaseCachePool(::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* cachePool)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEPOOL_OFFSET))(this, cachePool);
		}

		::System::Void _ReleaseCacheEffectPool(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* cachePool)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEEFFECTPOOL_OFFSET))(this, cachePool);
		}

		::System::Void _ReleaseCachePool_1(::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>* cachePool)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::UIContextAssetLoader_AsyncAssetCache*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEPOOL_1_OFFSET))(this, cachePool);
		}

		::System::Void onFlagCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ONFLAGCALLBACK_OFFSET))(this);
		}

		::System::Void SetFlagCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_SETFLAGCALLBACK_OFFSET))(this, callback);
		}

		::System::Void AfterFlagPushed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_AFTERFLAGPUSHED_OFFSET))(this);
		}

		::System::Boolean IsFlagPused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ISFLAGPUSED_OFFSET))(this);
		}

		::System::Void EnableFlagSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ENABLEFLAGSWITCH_OFFSET))(this);
		}
	};
}
