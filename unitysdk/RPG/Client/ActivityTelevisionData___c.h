#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8BD38A0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8BD38E0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__GETTRIALAVATARS_B__5_0_OFFSET UNITYSDK_OFFSET(0x8BD38F0)
#define RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__ISPRELEVELFINISHED_B__6_0_OFFSET UNITYSDK_OFFSET(0x8BD3960)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityTelevisionData___c_TypeDefinitionIndex = 49198;

	class ActivityTelevisionData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::AvatarData*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::AvatarData*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionData___c_TypeDefinitionIndex)->GetStaticField(0x266E0);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionData___c_TypeDefinitionIndex)->GetStaticField(0x266E8);
		}
		static ::RPG::Client::ActivityTelevisionData___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityTelevisionData___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityTelevisionData___c_TypeDefinitionIndex)->GetStaticField(0x266F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::AvatarData* _GetTrialAvatars_b__5_0(::System::UInt32 specialAvatarID)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__GETTRIALAVATARS_B__5_0_OFFSET))(this, specialAvatarID);
		}

		::System::Boolean _IsPreLevelFinished_b__6_0(::System::UInt32 televisionID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYTELEVISIONDATA___C__ISPRELEVELFINISHED_B__6_0_OFFSET))(this, televisionID);
		}
	};
}
