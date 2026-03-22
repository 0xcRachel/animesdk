#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MemberData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x91ADE30)
#define RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___C__DISPLAYCLASS5_0___CHECKEXCLUDEBASICTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x91AE060)

namespace RPG::Client
{
	inline static constexpr unsigned int ExcludeAvatarBaseTypeChallengeTargetData___c__DisplayClass5_0_TypeDefinitionIndex = 50078;

	class ExcludeAvatarBaseTypeChallengeTargetData___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::Client::MemberData*, ::System::Boolean>* __9__0; // 0x10
		::RPG::GameCore::AvatarBaseType avatarBaseType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __CheckExcludeBasicType_b__0(::RPG::Client::MemberData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXCLUDEAVATARBASETYPECHALLENGETARGETDATA___C__DISPLAYCLASS5_0___CHECKEXCLUDEBASICTYPE_B__0_OFFSET))(this, x);
		}
	};
}
