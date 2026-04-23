#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtProjectileDataList; }
namespace RPG::GameCore { class RtProjectileOnHitList; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_BD2B13F4D2829CC3_METHOD_3_18338215AC7BEB04_OFFSET UNITYSDK_OFFSET(0x189216D0)
#define CLASS_3_BD2B13F4D2829CC3_METHOD_3_FF096862EF90B096_OFFSET UNITYSDK_OFFSET(0x18921650)
#define CLASS_3_BD2B13F4D2829CC3__CTOR_OFFSET UNITYSDK_OFFSET(0x189216A0)

inline static constexpr unsigned int Class_3_BD2B13F4D2829CC3_TypeDefinitionIndex = 23135;

class Class_3_BD2B13F4D2829CC3 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::RtProjectileOnHitList*>* Field_3_4; // 0x20
	::Il2CppArray<::RPG::GameCore::RtProjectileDataList*>* Field_3_3; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x30
	::System::Boolean Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BD2B13F4D2829CC3__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FF096862EF90B096(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BD2B13F4D2829CC3*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BD2B13F4D2829CC3*&))((::PBYTE)hIl2Cpp + CLASS_3_BD2B13F4D2829CC3_METHOD_3_FF096862EF90B096_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_18338215AC7BEB04(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BD2B13F4D2829CC3* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BD2B13F4D2829CC3*))((::PBYTE)hIl2Cpp + CLASS_3_BD2B13F4D2829CC3_METHOD_3_18338215AC7BEB04_OFFSET))(a1, a2);
	}
};
