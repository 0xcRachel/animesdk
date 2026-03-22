#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_AVATARDATACOMPARERBUILDER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCD870)
#define RPG_CLIENT_AVATARDATACOMPARERBUILDER___C__DISPLAYCLASS6_0__ORDERBYKEY_B__0_OFFSET UNITYSDK_OFFSET(0x8CCD9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDataComparerBuilder___c__DisplayClass6_0_TypeDefinitionIndex = 49658;

	class AvatarDataComparerBuilder___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::Client::AvatarData*, ::System::Int32>* keySelector; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _OrderByKey_b__0(::RPG::Client::AvatarData* a, ::RPG::Client::AvatarData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDER___C__DISPLAYCLASS6_0__ORDERBYKEY_B__0_OFFSET))(this, a, b);
		}
	};
}
