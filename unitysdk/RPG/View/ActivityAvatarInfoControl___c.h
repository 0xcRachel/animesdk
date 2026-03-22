#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_VIEW_ACTIVITYAVATARINFOCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5DC5A0)
#define RPG_VIEW_ACTIVITYAVATARINFOCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA5DC5E0)

namespace RPG::View
{
	inline static constexpr unsigned int ActivityAvatarInfoControl___c_TypeDefinitionIndex = 40879;

	class ActivityAvatarInfoControl___c : public ::System::Object
	{
	public:
		static ::RPG::View::ActivityAvatarInfoControl___c** StaticGet___9()
		{
			return (::RPG::View::ActivityAvatarInfoControl___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityAvatarInfoControl___c_TypeDefinitionIndex)->GetStaticField(0x46540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_VIEW_ACTIVITYAVATARINFOCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_ACTIVITYAVATARINFOCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
