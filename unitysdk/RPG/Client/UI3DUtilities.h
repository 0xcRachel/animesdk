#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DUTILITIES_ACTIVEENVIRONMENTPROFILE_OFFSET UNITYSDK_OFFSET(0x138F1BA0)
#define RPG_CLIENT_UI3DUTILITIES_CLEARSHADOWCENTER_OFFSET UNITYSDK_OFFSET(0x138F2310)
#define RPG_CLIENT_UI3DUTILITIES_DIRTYUIBLUR_OFFSET UNITYSDK_OFFSET(0x138F29E0)
#define RPG_CLIENT_UI3DUTILITIES_ENABLEHIZOC_OFFSET UNITYSDK_OFFSET(0x138F2000)
#define RPG_CLIENT_UI3DUTILITIES_ISCAMERABLENDING_OFFSET UNITYSDK_OFFSET(0x138F2A80)
#define RPG_CLIENT_UI3DUTILITIES_OVERRIDEDOFCONFIG_OFFSET UNITYSDK_OFFSET(0x138F26E0)
#define RPG_CLIENT_UI3DUTILITIES_RELEASEDOFCONFIG_OFFSET UNITYSDK_OFFSET(0x138F28F0)
#define RPG_CLIENT_UI3DUTILITIES_RESETENVIRONMENTPROFILE_OFFSET UNITYSDK_OFFSET(0x138F1E30)
#define RPG_CLIENT_UI3DUTILITIES_RESTORESCENE_OFFSET UNITYSDK_OFFSET(0x138F2580)
#define RPG_CLIENT_UI3DUTILITIES_SETDEFAULTSHADOWCENTER_OFFSET UNITYSDK_OFFSET(0x138F23C0)
#define RPG_CLIENT_UI3DUTILITIES_SETDOFENABLE_OFFSET UNITYSDK_OFFSET(0x138F2840)
#define RPG_CLIENT_UI3DUTILITIES_SETPLAYERINFOALLBLOCKVISIBLE_OFFSET UNITYSDK_OFFSET(0x138F2B90)
#define RPG_CLIENT_UI3DUTILITIES_SWITCHTOUI3DLAYER_OFFSET UNITYSDK_OFFSET(0x138EFFD0)
#define RPG_CLIENT_UI3DUTILITIES_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0x138F24F0)
#define RPG_CLIENT_UI3DUTILITIES__CTOR_OFFSET UNITYSDK_OFFSET(0x138F2C10)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DUtilities_TypeDefinitionIndex = 67239;

	class UI3DUtilities : public ::System::Object
	{
	public:
		static ::System::Nullable_1<::System::Boolean>* StaticGet__EnableHiZOCBefore()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(UI3DUtilities_TypeDefinitionIndex)->GetStaticField(0xF310);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES__CTOR_OFFSET))(this);
		}

		static ::System::Boolean ActiveEnvironmentProfile(::System::String* path)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_ACTIVEENVIRONMENTPROFILE_OFFSET))(path);
		}

		static ::System::Void ResetEnvironmentProfile()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_RESETENVIRONMENTPROFILE_OFFSET))();
		}

		static ::System::Void EnableHiZOC(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_ENABLEHIZOC_OFFSET))(enable);
		}

		static ::System::Void ClearShadowCenter()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_CLEARSHADOWCENTER_OFFSET))();
		}

		static ::System::Void SetDefaultShadowCenter()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_SETDEFAULTSHADOWCENTER_OFFSET))();
		}

		static ::System::Void SwitchToUI3DLayer(::UnityEngine::Transform* trans)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_SWITCHTOUI3DLAYER_OFFSET))(trans);
		}

		static ::System::Void UnloadScene()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_UNLOADSCENE_OFFSET))();
		}

		static ::System::Void RestoreScene(::System::Action* callback)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_RESTORESCENE_OFFSET))(callback);
		}

		static ::System::Void OverrideDOFConfig(::System::String* volumePath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_OVERRIDEDOFCONFIG_OFFSET))(volumePath);
		}

		static ::System::Void SetDOFEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_SETDOFENABLE_OFFSET))(enable);
		}

		static ::System::Void ReleaseDOFConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_RELEASEDOFCONFIG_OFFSET))();
		}

		static ::System::Void DirtyUIBlur()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_DIRTYUIBLUR_OFFSET))();
		}

		static ::System::Boolean IsCameraBlending()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_ISCAMERABLENDING_OFFSET))();
		}

		static ::System::Void SetPlayerInfoAllBlockVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DUTILITIES_SETPLAYERINFOALLBLOCKVISIBLE_OFFSET))(visible);
		}
	};
}
