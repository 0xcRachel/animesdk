#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_546;

#define CLASS_1_A90F67CF3F5F5D0E_METHOD_1_273A009027628C24_OFFSET UNITYSDK_OFFSET(0x846D9B0)
#define CLASS_1_A90F67CF3F5F5D0E_METHOD_1_CC5BF082D09104AB_OFFSET UNITYSDK_OFFSET(0x846D830)
#define CLASS_1_A90F67CF3F5F5D0E__CTOR_OFFSET UNITYSDK_OFFSET(0x846D820)

inline static constexpr unsigned int Class_1_A90F67CF3F5F5D0E_TypeDefinitionIndex = 49700;

class Class_1_A90F67CF3F5F5D0E : public ::System::Object
{
public:
	::RPG::GameCore::AvatarPropertyType Field_1_1; // 0x10
	::RPG::GameCore::AvatarPropertyType Field_1_0; // 0x14

	::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_A90F67CF3F5F5D0E__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_CC5BF082D09104AB(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_546* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_546*))((::PBYTE)hIl2Cpp + CLASS_1_A90F67CF3F5F5D0E_METHOD_1_CC5BF082D09104AB_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_273A009027628C24(::RPG::GameCore::FixPoint a1, ::Class_0_16E4307DCC419505_546* a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Class_0_16E4307DCC419505_546*))((::PBYTE)hIl2Cpp + CLASS_1_A90F67CF3F5F5D0E_METHOD_1_273A009027628C24_OFFSET))(this, a1, a2);
	}
};
