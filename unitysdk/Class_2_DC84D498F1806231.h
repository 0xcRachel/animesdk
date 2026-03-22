#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_46E4E5A67DD5EF4D.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"

class Class_1_37676B2FB4322E20;
class Class_1_4F1450C7202739F5;

#define CLASS_2_DC84D498F1806231_METHOD_2_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0x109CEB50)
#define CLASS_2_DC84D498F1806231_METHOD_2_4B2CFC0A996DAB17_OFFSET UNITYSDK_OFFSET(0x109CF8D0)
#define CLASS_2_DC84D498F1806231_METHOD_2_57490C396338312A_OFFSET UNITYSDK_OFFSET(0x109CF680)
#define CLASS_2_DC84D498F1806231_METHOD_2_EA583971D4372292_OFFSET UNITYSDK_OFFSET(0x109CF550)
#define CLASS_2_DC84D498F1806231__CTOR_OFFSET UNITYSDK_OFFSET(0x109CEAC0)
#define CLASS_2_DC84D498F1806231___REGISTERSUMMATIONFORMULA_B__4_0_OFFSET UNITYSDK_OFFSET(0x109CF960)

inline static constexpr unsigned int Class_2_DC84D498F1806231_TypeDefinitionIndex = 49805;

class Class_2_DC84D498F1806231 : public ::Class_1_46E4E5A67DD5EF4D
{
public:
	::Class_1_37676B2FB4322E20* Field_2_0; // 0x18

	::System::Void _ctor(::Class_1_37676B2FB4322E20* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_37676B2FB4322E20*))((::PBYTE)hIl2Cpp + CLASS_2_DC84D498F1806231__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E06E2491B129B22()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC84D498F1806231_METHOD_2_3E06E2491B129B22_OFFSET))(this);
	}

	::System::Void Method_2_EA583971D4372292(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::AvatarPropertyType a2, ::RPG::GameCore::AvatarPropertyType a3, ::RPG::GameCore::AvatarPropertyType a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_DC84D498F1806231_METHOD_2_EA583971D4372292_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_57490C396338312A(::Il2CppArray<::RPG::GameCore::AvatarPropertyType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyType>*))((::PBYTE)hIl2Cpp + CLASS_2_DC84D498F1806231_METHOD_2_57490C396338312A_OFFSET))(this, a1);
	}

	::System::Void Method_2_4B2CFC0A996DAB17(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_DC84D498F1806231_METHOD_2_4B2CFC0A996DAB17_OFFSET))(this, a1);
	}

	::Class_1_4F1450C7202739F5* __RegisterSummationFormula_b__4_0(::RPG::GameCore::AvatarPropertyType propertyType)
	{
		return ((::Class_1_4F1450C7202739F5*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_DC84D498F1806231___REGISTERSUMMATIONFORMULA_B__4_0_OFFSET))(this, propertyType);
	}
};
