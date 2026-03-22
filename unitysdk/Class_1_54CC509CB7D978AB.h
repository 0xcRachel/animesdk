#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1F09213678A820A2;
class Class_1_D91AD7AC78B58FEA;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_54CC509CB7D978AB_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x85A4C30)
#define CLASS_1_54CC509CB7D978AB_METHOD_1_AB5C526925451715_OFFSET UNITYSDK_OFFSET(0x85A4BB0)
#define CLASS_1_54CC509CB7D978AB_METHOD_1_FB4705923C73EFAF_OFFSET UNITYSDK_OFFSET(0x85A4C80)
#define CLASS_1_54CC509CB7D978AB__CTOR_OFFSET UNITYSDK_OFFSET(0x85A4C20)

inline static constexpr unsigned int Class_1_54CC509CB7D978AB_TypeDefinitionIndex = 57420;

class Class_1_54CC509CB7D978AB : public ::System::Object
{
public:
	::Class_1_D91AD7AC78B58FEA* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54CC509CB7D978AB__CTOR_OFFSET))(this);
	}

	static ::Class_1_54CC509CB7D978AB* Method_1_AB5C526925451715(::Class_1_D91AD7AC78B58FEA* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::Class_1_54CC509CB7D978AB*(*)(::Class_1_D91AD7AC78B58FEA*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_54CC509CB7D978AB_METHOD_1_AB5C526925451715_OFFSET))(a1, a2);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_54CC509CB7D978AB_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::Class_1_1F09213678A820A2* Method_1_FB4705923C73EFAF()
	{
		return ((::Class_1_1F09213678A820A2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54CC509CB7D978AB_METHOD_1_FB4705923C73EFAF_OFFSET))(this);
	}
};
