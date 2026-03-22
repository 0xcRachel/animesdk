#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D6EFBA9480DF920D.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }

#define CLASS_2_11AD7A2D72029F1E_METHOD_2_047C27B43598EEF2_OFFSET UNITYSDK_OFFSET(0x943F800)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_2776E8AE918CB345_OFFSET UNITYSDK_OFFSET(0x943F110)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x943F940)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x943F2A0)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x943F300)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x943FBA0)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_6EDFB5C97C6E7C6A_OFFSET UNITYSDK_OFFSET(0x943F390)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x943FC80)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x943FC10)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_7B9D6F143086B23A_OFFSET UNITYSDK_OFFSET(0x943F5A0)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_9DA796436610DAC6_OFFSET UNITYSDK_OFFSET(0x943FA50)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_A3EBE3D65878FB6E_OFFSET UNITYSDK_OFFSET(0x943FAF0)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_C4C552549A8C0DBA_OFFSET UNITYSDK_OFFSET(0x943F520)
#define CLASS_2_11AD7A2D72029F1E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x943F4D0)
#define CLASS_2_11AD7A2D72029F1E__CCTOR_OFFSET UNITYSDK_OFFSET(0x943FB60)
#define CLASS_2_11AD7A2D72029F1E__CTOR_OFFSET UNITYSDK_OFFSET(0x943F030)

inline static constexpr unsigned int Class_2_11AD7A2D72029F1E_TypeDefinitionIndex = 41244;

class Class_2_11AD7A2D72029F1E : public ::Class_1_D6EFBA9480DF920D
{
public:
	static ::System::Single* StaticGet_Field_2_13()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_11AD7A2D72029F1E_TypeDefinitionIndex)->GetStaticField(0xF230);
	}
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* Field_2_10; // 0x38
	::System::Single Field_2_11; // 0x40
	::System::Single Field_2_7; // 0x44
	::System::Single Field_2_12; // 0x48
	::UnityEngine::Vector3 Field_2_0; // 0x4C
	::System::Single Field_2_5; // 0x58
	::System::Single Field_2_8; // 0x5C
	::System::Single Field_2_4; // 0x60
	::System::Single Field_2_3; // 0x64
	::System::Single Field_2_9; // 0x68
	::System::Single Field_2_6; // 0x6C
	::RPG::GameCore::CharacterMotionFlag Field_2_1; // 0x70
	::System::Single Field_2_2; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E__CCTOR_OFFSET))();
	}

	::System::Void Method_2_2776E8AE918CB345(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::CharacterMotionFlag a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterMotionFlag, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_2776E8AE918CB345_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_6EDFB5C97C6E7C6A(::RPG::GameCore::CharacterMotionFlag a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterMotionFlag))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_6EDFB5C97C6E7C6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C4C552549A8C0DBA(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_C4C552549A8C0DBA_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B9D6F143086B23A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_7B9D6F143086B23A_OFFSET))(this, a1);
	}

	::System::Void Method_2_047C27B43598EEF2(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_047C27B43598EEF2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_9DA796436610DAC6(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_9DA796436610DAC6_OFFSET))(this, a1);
	}

	::System::Void Method_2_A3EBE3D65878FB6E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_A3EBE3D65878FB6E_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_11AD7A2D72029F1E_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}
};
