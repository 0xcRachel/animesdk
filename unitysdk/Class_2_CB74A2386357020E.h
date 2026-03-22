#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_135.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
namespace RPG::Client { class GridFightRoleSkillDetail; }
namespace System { class String; }

#define CLASS_2_CB74A2386357020E_METHOD_2_094091F2BE8306AF_OFFSET UNITYSDK_OFFSET(0x10BBFC40)
#define CLASS_2_CB74A2386357020E_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x10BBFBF0)
#define CLASS_2_CB74A2386357020E_METHOD_2_3A6711BF4C35BB3D_OFFSET UNITYSDK_OFFSET(0x10BBFF80)
#define CLASS_2_CB74A2386357020E_METHOD_2_B7EDD769B79C6563_OFFSET UNITYSDK_OFFSET(0x10BBFE60)
#define CLASS_2_CB74A2386357020E_METHOD_2_B95515B9CD4B321A_OFFSET UNITYSDK_OFFSET(0x10BBFD50)
#define CLASS_2_CB74A2386357020E_METHOD_2_C3C5041073F2AB64_OFFSET UNITYSDK_OFFSET(0x10BC0130)
#define CLASS_2_CB74A2386357020E__CTOR_OFFSET UNITYSDK_OFFSET(0x10BBFC30)

inline static constexpr unsigned int Class_2_CB74A2386357020E_TypeDefinitionIndex = 51881;

class Class_2_CB74A2386357020E : public ::Class_1_43BD383C98B4C0C5_135
{
public:
	::RPG::Client::GridFightRoleSkillDetail* Field_2_0; // 0x10
	::Class_1_2670985A37556FEA* Field_2_1; // 0x18

	::System::Void _ctor(::RPG::Client::GridFightRoleSkillDetail* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRoleSkillDetail*))((::PBYTE)hIl2Cpp + CLASS_2_CB74A2386357020E__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB74A2386357020E_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::String* Method_2_094091F2BE8306AF(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_CB74A2386357020E_METHOD_2_094091F2BE8306AF_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_B95515B9CD4B321A()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB74A2386357020E_METHOD_2_B95515B9CD4B321A_OFFSET))(this);
	}

	::System::String* Method_2_B7EDD769B79C6563()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB74A2386357020E_METHOD_2_B7EDD769B79C6563_OFFSET))(this);
	}

	::System::String* Method_2_3A6711BF4C35BB3D(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_CB74A2386357020E_METHOD_2_3A6711BF4C35BB3D_OFFSET))(this, a1);
	}

	::System::String* Method_2_C3C5041073F2AB64(::RPG::GameCore::ModifyCalcOpType a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::ModifyCalcOpType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CB74A2386357020E_METHOD_2_C3C5041073F2AB64_OFFSET))(this, a1, a2);
	}
};
