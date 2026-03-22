#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_Move; }

#define CLASS_3_8B25E9F62ECDFBE1_METHOD_3_39ABFA75105CA1F6_OFFSET UNITYSDK_OFFSET(0x1060C150)
#define CLASS_3_8B25E9F62ECDFBE1_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x1060C530)
#define CLASS_3_8B25E9F62ECDFBE1_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1060C4D0)
#define CLASS_3_8B25E9F62ECDFBE1_METHOD_3_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x1060C590)
#define CLASS_3_8B25E9F62ECDFBE1_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x1060C0D0)
#define CLASS_3_8B25E9F62ECDFBE1_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1060C050)
#define CLASS_3_8B25E9F62ECDFBE1__CTOR_OFFSET UNITYSDK_OFFSET(0x1060C4B0)

inline static constexpr unsigned int Class_3_8B25E9F62ECDFBE1_TypeDefinitionIndex = 54532;

class Class_3_8B25E9F62ECDFBE1 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_Move*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B25E9F62ECDFBE1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B25E9F62ECDFBE1_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B25E9F62ECDFBE1_METHOD_3_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_3_39ABFA75105CA1F6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8B25E9F62ECDFBE1_METHOD_3_39ABFA75105CA1F6_OFFSET))(this, a1);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B25E9F62ECDFBE1_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8B25E9F62ECDFBE1_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void Method_3_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8B25E9F62ECDFBE1_METHOD_3_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
