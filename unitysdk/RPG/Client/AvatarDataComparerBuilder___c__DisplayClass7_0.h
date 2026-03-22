#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_AVATARDATACOMPARERBUILDER___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCD980)
#define RPG_CLIENT_AVATARDATACOMPARERBUILDER___C__DISPLAYCLASS7_0___ORDERBYKEY_B__0_OFFSET UNITYSDK_OFFSET(0x8CCDA50)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarDataComparerBuilder___c__DisplayClass7_0_TypeDefinitionIndex = 49659;

	class AvatarDataComparerBuilder___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>* keySelector; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDER___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Int32 __OrderByKey_b__0(::RPG::Client::AvatarData* a, ::RPG::Client::AvatarData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::AvatarData*, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARDATACOMPARERBUILDER___C__DISPLAYCLASS7_0___ORDERBYKEY_B__0_OFFSET))(this, a, b);
		}
	};
}
