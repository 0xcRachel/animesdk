#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DUTILITIES_ACTIVEENVIRONMENTPROFILE_OFFSET UNITYSDK_OFFSET(0xA186CE0)
#define RPG_CLIENT_UI3DUTILITIES_CLEARSHADOWCENTER_OFFSET UNITYSDK_OFFSET(0xA187480)
#define RPG_CLIENT_UI3DUTILITIES_DIRTYUIBLUR_OFFSET UNITYSDK_OFFSET(0xA187BC0)
#define RPG_CLIENT_UI3DUTILITIES_ENABLEHIZOC_OFFSET UNITYSDK_OFFSET(0xA187140)
#define RPG_CLIENT_UI3DUTILITIES_OVERRIDEDOFCONFIG_OFFSET UNITYSDK_OFFSET(0xA1878C0)
#define RPG_CLIENT_UI3DUTILITIES_RELEASEDOFCONFIG_OFFSET UNITYSDK_OFFSET(0xA187AD0)
#define RPG_CLIENT_UI3DUTILITIES_RESETENVIRONMENTPROFILE_OFFSET UNITYSDK_OFFSET(0xA186F70)
#define RPG_CLIENT_UI3DUTILITIES_RESTORESCENE_OFFSET UNITYSDK_OFFSET(0xA187720)
#define RPG_CLIENT_UI3DUTILITIES_SETDEFAULTSHADOWCENTER_OFFSET UNITYSDK_OFFSET(0xA187530)
#define RPG_CLIENT_UI3DUTILITIES_SETDOFENABLE_OFFSET UNITYSDK_OFFSET(0xA187A20)
#define RPG_CLIENT_UI3DUTILITIES_SWITCHTOUI3DLAYER_OFFSET UNITYSDK_OFFSET(0xA185000)
#define RPG_CLIENT_UI3DUTILITIES_UNLOADSCENE_OFFSET UNITYSDK_OFFSET(0xA187660)
#define RPG_CLIENT_UI3DUTILITIES__CTOR_OFFSET UNITYSDK_OFFSET(0xA187C60)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DUtilities_TypeDefinitionIndex = 58193;

	class UI3DUtilities : public ::System::Object
	{
	public:
		static ::System::Nullable_1<::System::Boolean>* StaticGet__EnableHiZOCBefore()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(UI3DUtilities_TypeDefinitionIndex)->GetStaticField(0xBAC0);
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
	};
}
