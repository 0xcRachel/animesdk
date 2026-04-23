#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/AvatarSystem/Property/PropertyModifierBuilder_1.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"

class Class_1_9645B0775BC8A72D;

#define CLASS_2_D794DA1F69CB56FF_METHOD_2_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x10C9A0C0)
#define CLASS_2_D794DA1F69CB56FF__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x10C9A110)
#define CLASS_2_D794DA1F69CB56FF__CTOR_OFFSET UNITYSDK_OFFSET(0x10C99B20)
#define CLASS_2_D794DA1F69CB56FF__REBUILD_OFFSET UNITYSDK_OFFSET(0x10C99BB0)

inline static constexpr unsigned int Class_2_D794DA1F69CB56FF_TypeDefinitionIndex = 69180;

class Class_2_D794DA1F69CB56FF : public ::RPG::AvatarSystem::Property::PropertyModifierBuilder_1<::RPG::Client::ActivityIdleLive::IdleLiveDecimal>
{
public:
	::Class_1_9645B0775BC8A72D* Field_2_1; // 0x20
	::System::UInt32 Field_2_0; // 0x28

	::System::Void _ctor(::Class_1_9645B0775BC8A72D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9645B0775BC8A72D*))((::PBYTE)hIl2Cpp + CLASS_2_D794DA1F69CB56FF__CTOR_OFFSET))(this, a1);
	}

	::System::Void _Rebuild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D794DA1F69CB56FF__REBUILD_OFFSET))(this);
	}

	::System::Void Method_2_FBF2CB29FD3B55E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D794DA1F69CB56FF_METHOD_2_FBF2CB29FD3B55E6_OFFSET))(this);
	}

	::System::Boolean _CheckNeedRebuild()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D794DA1F69CB56FF__CHECKNEEDREBUILD_OFFSET))(this);
	}
};
