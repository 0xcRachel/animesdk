#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8B15950)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8B15990)
#define RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C__GETTRIALAVATARS_B__23_0_OFFSET UNITYSDK_OFFSET(0x8B159A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityFeverTimeModule___c_TypeDefinitionIndex = 48776;

	class ActivityFeverTimeModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::AvatarData*>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::AvatarData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeModule___c_TypeDefinitionIndex)->GetStaticField(0x16C00);
		}
		static ::RPG::Client::ActivityFeverTimeModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityFeverTimeModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityFeverTimeModule___c_TypeDefinitionIndex)->GetStaticField(0x16C08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::AvatarData* _GetTrialAvatars_b__23_0(::System::UInt32 specialAvatarID)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYFEVERTIMEMODULE___C__GETTRIALAVATARS_B__23_0_OFFSET))(this, specialAvatarID);
		}
	};
}
