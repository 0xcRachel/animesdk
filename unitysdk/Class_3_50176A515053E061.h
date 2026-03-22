#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionTemplate_1.h"

namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_BossAvatar; }

#define CLASS_3_50176A515053E061_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x11142640)
#define CLASS_3_50176A515053E061_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x11142550)
#define CLASS_3_50176A515053E061__CTOR_OFFSET UNITYSDK_OFFSET(0x11142620)

inline static constexpr unsigned int Class_3_50176A515053E061_TypeDefinitionIndex = 54542;

class Class_3_50176A515053E061 : public ::RPG::Client::WolfBroGunPlayTargetActionTemplate_1<::RPG::Client::WolfBroGunPlayTargetActionConfig_BossAvatar*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50176A515053E061__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50176A515053E061_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_50176A515053E061_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}
};
