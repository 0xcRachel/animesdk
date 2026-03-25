#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE_CANSHOWTOAST_OFFSET UNITYSDK_OFFSET(0x8FBB470)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8FBAF90)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x8FBB760)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8FBB740)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__REFRESHACTIVITYICONTRANSFORM_OFFSET UNITYSDK_OFFSET(0x8FBB6C0)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE__TRYSHOWTOAST_OFFSET UNITYSDK_OFFSET(0x8FBB0B0)
#define RPG_CLIENT_ACTIVITYSTARTHINTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8FBB770)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityStartHintModule_TypeDefinitionIndex = 50239;

	class ActivityStartHintModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::UInt32* StaticGet__ACTIVITY_UNLOCK_ID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(ActivityStartHintModule_TypeDefinitionIndex)->GetStaticField(0xD990);
		}
		::UnityEngine::Transform* ActivityIconTransform; // 0x10
		::System::Boolean _IsToastShown; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE__CCTOR_OFFSET))();
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _TryShowToast(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE__TRYSHOWTOAST_OFFSET))(this, arg);
		}

		static ::System::Boolean CanShowToast(::System::UInt32 activityStartHintID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE_CANSHOWTOAST_OFFSET))(activityStartHintID);
		}

		::System::Void _RefreshActivityIconTransform(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE__REFRESHACTIVITYICONTRANSFORM_OFFSET))(this, arg);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYSTARTHINTMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
