#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/FollowState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_523C55AEA55804D8;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_F8F1752DCDE35E35_DISPOSE_OFFSET UNITYSDK_OFFSET(0x116BB820)
#define CLASS_1_F8F1752DCDE35E35_GET_INSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0x116BB800)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_0BC5386E06CF8A2C_OFFSET UNITYSDK_OFFSET(0x116BAF80)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_169C5280D338BD7B_OFFSET UNITYSDK_OFFSET(0x116BB400)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_1806079A447FCB36_OFFSET UNITYSDK_OFFSET(0x116BACD0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_3D8F0F1C6E55B9B6_OFFSET UNITYSDK_OFFSET(0x116BC2D0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0x116BB0F0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x116BB7B0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_41222BE43C0D6E56_OFFSET UNITYSDK_OFFSET(0x116BB5E0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_4F6CB99543AF5BF6_OFFSET UNITYSDK_OFFSET(0x116BB540)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_5757B3ADFA1F6ECF_OFFSET UNITYSDK_OFFSET(0x116BBA80)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_5AD578FCE9CF19D4_1_OFFSET UNITYSDK_OFFSET(0x116BB050)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x116BAF10)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0x116BB880)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_7DD84EAFF333A1E4_1_OFFSET UNITYSDK_OFFSET(0x116BB750)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x116BB6F0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_82E78E5C348471FD_OFFSET UNITYSDK_OFFSET(0x116BB4D0)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x116BB670)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_B12B4E4A39A083D2_OFFSET UNITYSDK_OFFSET(0x116BB900)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x116BC320)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x116BC290)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_CEDFBBF689E64233_OFFSET UNITYSDK_OFFSET(0x116BC370)
#define CLASS_1_F8F1752DCDE35E35_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x116BCA20)
#define CLASS_1_F8F1752DCDE35E35_SET_INSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0x116BB810)
#define CLASS_1_F8F1752DCDE35E35__CCTOR_OFFSET UNITYSDK_OFFSET(0x116BCA30)
#define CLASS_1_F8F1752DCDE35E35__CTOR_OFFSET UNITYSDK_OFFSET(0x116BAC30)

inline static constexpr unsigned int Class_1_F8F1752DCDE35E35_TypeDefinitionIndex = 42425;

class Class_1_F8F1752DCDE35E35 : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_10()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F8F1752DCDE35E35_TypeDefinitionIndex)->GetStaticField(0xD700);
	}
	::RPG::GameCore::TransformComponent* Field_1_12; // 0x10
	::RPG::GameCore::AdventureCharacterController* Field_1_14; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_1_18; // 0x20
	::RPG::GameCore::TransformComponent* Field_1_17; // 0x28
	::RPG::GameCore::GameEntity* Field_1_11; // 0x30
	::RPG::GameCore::GameEntity* Field_1_16; // 0x38
	::Class_2_A0580152EB393340* Field_1_13; // 0x40
	::Class_2_523C55AEA55804D8* Field_1_15; // 0x48
	::System::Single Field_1_8; // 0x50
	::System::Single Field_1_3; // 0x54
	::System::Single Field_1_2; // 0x58
	::RPG::GameCore::FollowState Field_1_19; // 0x5C
	::System::Single Field_1_4; // 0x60
	::System::Single Field_1_7; // 0x64
	::System::Boolean Field_1_1; // 0x68
	::System::Boolean Field_1_6; // 0x69
	::System::Boolean Field_1_23; // 0x6A
	::System::Boolean Field_1_9; // 0x6B
	::RPG::GameCore::CharacterMotionFlag Field_1_21; // 0x6C
	::System::Single Field_1_22; // 0x70
	::System::Boolean _InSpecialState_k__BackingField; // 0x74
	::System::Boolean Field_1_20; // 0x75
	::System::Boolean Field_1_24; // 0x76
	::System::Boolean Field_1_5; // 0x77

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35__CCTOR_OFFSET))();
	}

	::System::Void Method_1_1806079A447FCB36(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_1806079A447FCB36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3DA91C9B57824EE6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_3DA91C9B57824EE6_OFFSET))(this);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_1_82E78E5C348471FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_82E78E5C348471FD_OFFSET))(this);
	}

	::System::Void Method_1_41222BE43C0D6E56(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_41222BE43C0D6E56_OFFSET))(this, a1);
	}

	::System::Void Method_1_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BC5386E06CF8A2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_0BC5386E06CF8A2C_OFFSET))(this);
	}

	::System::Void Method_1_169C5280D338BD7B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_169C5280D338BD7B_OFFSET))(this);
	}

	::System::Void Method_1_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DD84EAFF333A1E4_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_7DD84EAFF333A1E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5AD578FCE9CF19D4_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_5AD578FCE9CF19D4_1_OFFSET))(this);
	}

	::System::Void Method_1_4F6CB99543AF5BF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_4F6CB99543AF5BF6_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean get_InSpecialState()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_GET_INSPECIALSTATE_OFFSET))(this);
	}

	::System::Void set_InSpecialState(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_SET_INSPECIALSTATE_OFFSET))(this, value);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B12B4E4A39A083D2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_B12B4E4A39A083D2_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_3D8F0F1C6E55B9B6(::RPG::GameCore::AdvNavigationFailReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_3D8F0F1C6E55B9B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5757B3ADFA1F6ECF(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_5757B3ADFA1F6ECF_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_1_CEDFBBF689E64233(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_CEDFBBF689E64233_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8F1752DCDE35E35_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
