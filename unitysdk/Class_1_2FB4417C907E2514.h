#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MissionWayPointType.h"
#include "unitysdk/System/Object.h"

class Class_1_ECBCF86CDE61CBCA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SubMissionInfoConfig; }
namespace System { class String; }

#define CLASS_1_2FB4417C907E2514_GET_ISREGISTERREGIONCHANGE_OFFSET UNITYSDK_OFFSET(0xA13ABF0)
#define CLASS_1_2FB4417C907E2514_METHOD_1_16911FF547634FAF_OFFSET UNITYSDK_OFFSET(0xA13AB90)
#define CLASS_1_2FB4417C907E2514_METHOD_1_392262E4B08A06FA_OFFSET UNITYSDK_OFFSET(0xA13A710)
#define CLASS_1_2FB4417C907E2514_METHOD_1_3A371FE1A66DC309_OFFSET UNITYSDK_OFFSET(0xA13A690)
#define CLASS_1_2FB4417C907E2514_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0xA13A460)
#define CLASS_1_2FB4417C907E2514_METHOD_1_B8B555F33BAC54D0_OFFSET UNITYSDK_OFFSET(0xA13A5E0)
#define CLASS_1_2FB4417C907E2514_SET_ISREGISTERREGIONCHANGE_OFFSET UNITYSDK_OFFSET(0xA13AC00)
#define CLASS_1_2FB4417C907E2514_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA13A870)
#define CLASS_1_2FB4417C907E2514__CTOR_OFFSET UNITYSDK_OFFSET(0xA13AC10)
#define CLASS_1_2FB4417C907E2514___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA13AC20)

inline static constexpr unsigned int Class_1_2FB4417C907E2514_TypeDefinitionIndex = 48281;

class Class_1_2FB4417C907E2514 : public ::System::Object
{
public:
	::System::Boolean _IsRegisterRegionChange_k__BackingField; // 0x10
	::RPG::GameCore::MissionWayPointType Field_1_4; // 0x14
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::UInt32 Field_1_2; // 0x20
	::System::UInt32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_1_B8B555F33BAC54D0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514_METHOD_1_B8B555F33BAC54D0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3A371FE1A66DC309(::RPG::GameCore::SubMissionInfoConfig* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::SubMissionInfoConfig*))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514_METHOD_1_3A371FE1A66DC309_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_392262E4B08A06FA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514_METHOD_1_392262E4B08A06FA_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_16911FF547634FAF(::Class_1_ECBCF86CDE61CBCA* a1, ::Class_1_ECBCF86CDE61CBCA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ECBCF86CDE61CBCA*, ::Class_1_ECBCF86CDE61CBCA*))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514_METHOD_1_16911FF547634FAF_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsRegisterRegionChange()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514_GET_ISREGISTERREGIONCHANGE_OFFSET))(this);
	}

	::System::Void set_IsRegisterRegionChange(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514_SET_ISREGISTERREGIONCHANGE_OFFSET))(this, value);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2FB4417C907E2514___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
