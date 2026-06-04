#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_2FDE33CCAE591AA8;
namespace System { class String; }

#define RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0x18CC2ED0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18CC30C0)
#define RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOVIEWMODEL___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0x18CC3180)

namespace RPG::Client::DirectDeliveryNotice
{
	inline static constexpr unsigned int ActivityAvatarInfoViewModel_TypeDefinitionIndex = 73902;

	class ActivityAvatarInfoViewModel : public ::Sofa::Core::ObservableObject
	{
	public:
		::Class_1_2FDE33CCAE591AA8* OnAvatarDetailClick; // 0x18
		::System::String* ProfessionName; // 0x20
		::System::String* AvatarName; // 0x28
		::System::String* DamageTypeIcon; // 0x30
		::System::String* ProfessionIcon; // 0x38
		::System::UInt32 AvatarID; // 0x40
		::System::UInt32 Rarity; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOVIEWMODEL__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DirectDeliveryNotice::ActivityAvatarInfoViewModel* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::DirectDeliveryNotice::ActivityAvatarInfoViewModel*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOVIEWMODEL_CREATE_OFFSET))(a1);
		}

		::System::Void __ctor_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIRECTDELIVERYNOTICE_ACTIVITYAVATARINFOVIEWMODEL___CTOR_B__1_0_OFFSET))(this);
		}
	};
}
