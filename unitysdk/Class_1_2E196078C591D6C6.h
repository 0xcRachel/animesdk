#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class UIController; }
namespace System { class Action; }

#define CLASS_1_2E196078C591D6C6_METHOD_1_256B6E165124982E_1_OFFSET UNITYSDK_OFFSET(0x15E1CF40)
#define CLASS_1_2E196078C591D6C6_METHOD_1_256B6E165124982E_OFFSET UNITYSDK_OFFSET(0x15E1CEA0)
#define CLASS_1_2E196078C591D6C6_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15E1CC10)
#define CLASS_1_2E196078C591D6C6_METHOD_1_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x15E1CDE0)
#define CLASS_1_2E196078C591D6C6_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15E1CF00)
#define CLASS_1_2E196078C591D6C6_METHOD_1_D20F759FC2EC43FB_OFFSET UNITYSDK_OFFSET(0x15E1CC50)
#define CLASS_1_2E196078C591D6C6__CTOR_OFFSET UNITYSDK_OFFSET(0x15E1CC00)

inline static constexpr unsigned int Class_1_2E196078C591D6C6_TypeDefinitionIndex = 56511;

class Class_1_2E196078C591D6C6 : public ::System::Object
{
public:
	::RPG::Client::ChallengePeakGroup* Field_1_0; // 0x10
	::RPG::Client::UIController* Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::ChallengePeakGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + CLASS_1_2E196078C591D6C6__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E196078C591D6C6_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_D20F759FC2EC43FB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E196078C591D6C6_METHOD_1_D20F759FC2EC43FB_OFFSET))(this);
	}

	::System::Void Method_1_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E196078C591D6C6_METHOD_1_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2E196078C591D6C6_METHOD_1_256B6E165124982E_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E196078C591D6C6_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_256B6E165124982E_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_2E196078C591D6C6_METHOD_1_256B6E165124982E_1_OFFSET))(this, a1);
	}
};
