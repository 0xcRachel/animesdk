#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F2FA40)
#define RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16F2FA80)

namespace RPG::View
{
	inline static constexpr unsigned int DirectDeliveryAvatarRewardToastWindow___c_TypeDefinitionIndex = 47909;

	class DirectDeliveryAvatarRewardToastWindow___c : public ::System::Object
	{
	public:
		static ::RPG::View::DirectDeliveryAvatarRewardToastWindow___c** StaticGet___9()
		{
			return (::RPG::View::DirectDeliveryAvatarRewardToastWindow___c**)Il2CppClass::FromTypeDefinitionIndex(DirectDeliveryAvatarRewardToastWindow___c_TypeDefinitionIndex)->GetStaticField(0x6A8A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_VIEW_DIRECTDELIVERYAVATARREWARDTOASTWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
