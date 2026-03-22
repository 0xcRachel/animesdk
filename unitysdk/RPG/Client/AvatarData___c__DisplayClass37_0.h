#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_340;
class Class_1_FA4F4A67B1C04320_11;
class Class_1_FA4F4A67B1C04320_94;

#define RPG_CLIENT_AVATARDATA___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCAFE0)
#define RPG_CLIENT_AVATARDATA___C__DISPLAYCLASS37_0__SYNCAVATARDATA_B__0_OFFSET UNITYSDK_OFFSET(0x8CCAFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarData___c__DisplayClass37_0_TypeDefinitionIndex = 49615;

	class AvatarData___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_340* converter; // 0x10
		::Struct_2_BC950E36747FB4C9 avatarPrototypeIdentifier; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::Class_1_FA4F4A67B1C04320_11* _SyncAvatarData_b__0(::Class_1_FA4F4A67B1C04320_94* anchor)
		{
			return ((::Class_1_FA4F4A67B1C04320_11*(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_94*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATA___C__DISPLAYCLASS37_0__SYNCAVATARDATA_B__0_OFFSET))(this, anchor);
		}
	};
}
