#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_3EB6D13BCFBCDBBC;
class Class_1_D7692BFC86C747A2;
class Class_2_4C5CE8D630A9F4A2;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_20C279B49A195787_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BB8C20)
#define CLASS_1_20C279B49A195787_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x10BB9750)
#define CLASS_1_20C279B49A195787_METHOD_1_0A5DD54A2675889F_OFFSET UNITYSDK_OFFSET(0x10BB9040)
#define CLASS_1_20C279B49A195787_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10BB8EB0)
#define CLASS_1_20C279B49A195787_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x10BB8E50)
#define CLASS_1_20C279B49A195787_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10BBA370)
#define CLASS_1_20C279B49A195787_METHOD_1_5595F7B248936921_OFFSET UNITYSDK_OFFSET(0x10BBA500)
#define CLASS_1_20C279B49A195787_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x10BBA470)
#define CLASS_1_20C279B49A195787_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x10BBA250)
#define CLASS_1_20C279B49A195787_METHOD_1_96F674FB9A99092A_OFFSET UNITYSDK_OFFSET(0x10BBA2F0)
#define CLASS_1_20C279B49A195787_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x10BBA880)
#define CLASS_1_20C279B49A195787_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x10BBA3F0)
#define CLASS_1_20C279B49A195787_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10BBA4C0)
#define CLASS_1_20C279B49A195787_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10BBA1F0)
#define CLASS_1_20C279B49A195787_METHOD_1_D37FAD0A6AA04B25_OFFSET UNITYSDK_OFFSET(0x10BBA890)
#define CLASS_1_20C279B49A195787_METHOD_1_F984B00E5903EAAE_OFFSET UNITYSDK_OFFSET(0x10BB9FA0)
#define CLASS_1_20C279B49A195787_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x10BB8C60)
#define CLASS_1_20C279B49A195787_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x10BB8FF0)
#define CLASS_1_20C279B49A195787__CCTOR_OFFSET UNITYSDK_OFFSET(0x10BBA8B0)
#define CLASS_1_20C279B49A195787__CTOR_OFFSET UNITYSDK_OFFSET(0x10BB8920)

inline static constexpr unsigned int Class_1_20C279B49A195787_TypeDefinitionIndex = 52159;

class Class_1_20C279B49A195787 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_25()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20C279B49A195787_TypeDefinitionIndex)->GetStaticField(0xED00);
	}
	static ::System::Int32* StaticGet_Field_1_26()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20C279B49A195787_TypeDefinitionIndex)->GetStaticField(0xED04);
	}
	static ::System::Int32* StaticGet_Field_1_27()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20C279B49A195787_TypeDefinitionIndex)->GetStaticField(0xED08);
	}
	static ::System::Int32* StaticGet_Field_1_28()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20C279B49A195787_TypeDefinitionIndex)->GetStaticField(0xED0C);
	}
	// static const ::System::Single Field_1_24; // 0x0
	::RPG::GameCore::GameEntity* Field_1_1; // 0x10
	::RPG::GameCore::TransformComponent* Field_1_6; // 0x18
	::RPG::GameCore::CharacterModelComponent* Field_1_10; // 0x20
	::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* Field_1_13; // 0x28
	::Class_2_A0580152EB393340* Field_1_8; // 0x30
	::RPG::GameCore::CharacterModelComponent* Field_1_11; // 0x38
	::Class_1_D7692BFC86C747A2* Field_1_12; // 0x40
	::Class_2_4C5CE8D630A9F4A2* Field_1_9; // 0x48
	::Class_1_3EB6D13BCFBCDBBC* Field_1_2; // 0x50
	::RPG::GameCore::GameEntity* Field_1_0; // 0x58
	::RPG::GameCore::AdventureCharacterController* Field_1_7; // 0x60
	::System::Single Field_1_4; // 0x68
	::RPG::GameCore::CharacterMotionFlag Field_1_17; // 0x6C
	::System::Boolean Field_1_20; // 0x70
	::System::Boolean Field_1_19; // 0x71
	::System::Single Field_1_18; // 0x74
	::System::Single Field_1_21; // 0x78
	::System::Single Field_1_5; // 0x7C
	::System::Int32 Field_1_23; // 0x80
	::UnityEngine::Vector3 Field_1_16; // 0x84
	::UnityEngine::Vector3 Field_1_14; // 0x90
	::UnityEngine::Vector3 Field_1_15; // 0x9C
	::System::Single Field_1_22; // 0xA8
	::System::Int32 Field_1_3; // 0xAC

	::System::Void _ctor(::Class_1_3EB6D13BCFBCDBBC* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3EB6D13BCFBCDBBC*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_DISPOSE_OFFSET))(this);
	}

	::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
	}

	::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
	}

	::System::Void Method_1_0A5DD54A2675889F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_0A5DD54A2675889F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_96F674FB9A99092A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_96F674FB9A99092A_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_5595F7B248936921(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_5595F7B248936921_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F984B00E5903EAAE(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_F984B00E5903EAAE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_D37FAD0A6AA04B25()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20C279B49A195787_METHOD_1_D37FAD0A6AA04B25_OFFSET))(this);
	}
};
