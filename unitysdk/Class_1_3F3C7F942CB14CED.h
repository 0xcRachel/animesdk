#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerSource.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_314;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3F3C7F942CB14CED_METHOD_1_5D12300D3F7C388F_OFFSET UNITYSDK_OFFSET(0x103BFC40)
#define CLASS_1_3F3C7F942CB14CED_METHOD_1_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x103BFC90)
#define CLASS_1_3F3C7F942CB14CED_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x103BFF80)
#define CLASS_1_3F3C7F942CB14CED__CTOR_OFFSET UNITYSDK_OFFSET(0x103BFBC0)

inline static constexpr unsigned int Class_1_3F3C7F942CB14CED_TypeDefinitionIndex = 40905;

class Class_1_3F3C7F942CB14CED : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CombatPowerSource, ::Class_0_16E4307DCC419505_314*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CombatPowerSource, ::System::Single>* Field_1_1; // 0x18

	::System::Void _ctor(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CombatPowerSource, ::Class_0_16E4307DCC419505_314*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CombatPowerSource, ::Class_0_16E4307DCC419505_314*>*))((::PBYTE)hIl2Cpp + CLASS_1_3F3C7F942CB14CED__CTOR_OFFSET))(this, a1);
	}

	::System::Single Method_1_5D12300D3F7C388F()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F3C7F942CB14CED_METHOD_1_5D12300D3F7C388F_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F3C7F942CB14CED_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_1_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F3C7F942CB14CED_METHOD_1_9AB55F553C4AC6E8_OFFSET))(this);
	}
};
