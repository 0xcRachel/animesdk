#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_321489CFFF7B18E7.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtCharacterState.h"

class Class_1_70CCABA9DB985F52;
class Class_3_E566EAF4730F7493;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animator; }

#define CLASS_2_4E1B9F934C07A624_GET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0x142B19F0)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_5127424BDC5529D7_OFFSET UNITYSDK_OFFSET(0x142B1710)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x142B1AB0)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x142B1A50)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x142B15A0)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_9E00F4903B0DF842_OFFSET UNITYSDK_OFFSET(0x142B0CE0)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_A88B36294D55B85C_OFFSET UNITYSDK_OFFSET(0x142B07E0)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_B45DC2E8B8DF29CA_OFFSET UNITYSDK_OFFSET(0x142B0C10)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x142B09C0)
#define CLASS_2_4E1B9F934C07A624_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x142B16D0)
#define CLASS_2_4E1B9F934C07A624_ONANIMATORCHANGE_OFFSET UNITYSDK_OFFSET(0x142B18C0)
#define CLASS_2_4E1B9F934C07A624_ONFLAGSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x142B1770)
#define CLASS_2_4E1B9F934C07A624_SET_HITADDITIVELAYERINDEX_OFFSET UNITYSDK_OFFSET(0x142B1A00)
#define CLASS_2_4E1B9F934C07A624__CCTOR_OFFSET UNITYSDK_OFFSET(0x142B1A20)
#define CLASS_2_4E1B9F934C07A624__CTOR_OFFSET UNITYSDK_OFFSET(0x142B1A10)

inline static constexpr unsigned int Class_2_4E1B9F934C07A624_TypeDefinitionIndex = 50395;

class Class_2_4E1B9F934C07A624 : public ::Class_1_321489CFFF7B18E7
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E1B9F934C07A624_TypeDefinitionIndex)->GetStaticField(0x11960);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4E1B9F934C07A624_TypeDefinitionIndex)->GetStaticField(0x11964);
	}
	::RPG::GameCore::FixPoint Field_2_2; // 0x18
	::System::Boolean Field_2_3; // 0x20
	::System::Boolean Field_2_4; // 0x21
	::System::Boolean Field_2_5; // 0x22
	::System::Boolean Field_2_6; // 0x23
	::System::Int32 Field_2_7; // 0x24
	::System::Int32 _HitAdditiveLayerIndex_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624__CCTOR_OFFSET))();
	}

	::System::Void Method_2_A88B36294D55B85C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_A88B36294D55B85C_OFFSET))(this);
	}

	::System::Void Method_2_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Void Method_2_B45DC2E8B8DF29CA(::Class_1_70CCABA9DB985F52* a1, ::Class_3_E566EAF4730F7493* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_70CCABA9DB985F52*, ::Class_3_E566EAF4730F7493*))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_B45DC2E8B8DF29CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9E00F4903B0DF842(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_9E00F4903B0DF842_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_5127424BDC5529D7(::RPG::GameCore::RtCharacterState a1, ::RPG::GameCore::RtCharacterState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtCharacterState, ::RPG::GameCore::RtCharacterState))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_5127424BDC5529D7_OFFSET))(this, a1, a2);
	}

	::System::Void OnFlagStateChange(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::RtBehaviorFlag a2, ::System::Boolean a3, ::RPG::GameCore::GameEntity* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::RtBehaviorFlag, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_ONFLAGSTATECHANGE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void OnAnimatorChange(::UnityEngine::Animator* a1, ::UnityEngine::Animator* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_ONANIMATORCHANGE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_9CA35E5BF1A50E77_OFFSET))(this);
	}

	::System::Int32 get_HitAdditiveLayerIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_GET_HITADDITIVELAYERINDEX_OFFSET))(this);
	}

	::System::Void set_HitAdditiveLayerIndex(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_SET_HITADDITIVELAYERINDEX_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4E1B9F934C07A624_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
