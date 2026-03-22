#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/GameCore/AdventureBehaviorClampAlertLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
#include "unitysdk/Struct_2_0B84ADD7815498A2.h"
#include "unitysdk/System/Object.h"

class Class_2_F1C3EBA366E084A2;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class AdventureModifierInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_019FAF8DF887E9D8_OFFSET UNITYSDK_OFFSET(0x10D3DF70)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_047F1C6DD5744E80_OFFSET UNITYSDK_OFFSET(0x10D3DC00)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_07406AE8B2231808_OFFSET UNITYSDK_OFFSET(0x10D3DD30)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_081E84DBAB5CA72B_OFFSET UNITYSDK_OFFSET(0x10D3F600)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x10D3D890)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x10D3F570)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x10D3E5E0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10D3E120)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_47084D8B74242CC2_OFFSET UNITYSDK_OFFSET(0x10D3EE20)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_4DE1857021EDD3DF_OFFSET UNITYSDK_OFFSET(0x10D3D9B0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_4E140453C4B32F06_1_OFFSET UNITYSDK_OFFSET(0x10D3E9E0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0x10D3E970)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_525A724DAD4F68F3_OFFSET UNITYSDK_OFFSET(0x10D3EAC0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_5F5E7D098AC43E18_OFFSET UNITYSDK_OFFSET(0x10D3EFD0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_6C0BB35645C3A92B_OFFSET UNITYSDK_OFFSET(0x10D3E180)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_7810B51DB38AD15C_OFFSET UNITYSDK_OFFSET(0x10D3DFE0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_85350C0C31133276_OFFSET UNITYSDK_OFFSET(0x10D3DEF0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_86431F5CB38A9547_OFFSET UNITYSDK_OFFSET(0x10D3E780)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_86C55EEFAA560557_OFFSET UNITYSDK_OFFSET(0x10D3DCC0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_9179AAA9707A4A72_OFFSET UNITYSDK_OFFSET(0x10D3ECF0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_A64E0EC79B97502E_1_OFFSET UNITYSDK_OFFSET(0x10D3DDB0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_A64E0EC79B97502E_OFFSET UNITYSDK_OFFSET(0x10D3EE60)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_A663AF428258DA9A_OFFSET UNITYSDK_OFFSET(0x10D3EBC0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_C18056463E36B2AF_OFFSET UNITYSDK_OFFSET(0x10D3F150)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_C2B827CEDD7D98A1_OFFSET UNITYSDK_OFFSET(0x10D3E6E0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_C2C495C915C952BA_OFFSET UNITYSDK_OFFSET(0x10D3E8B0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_C96F0FDB0D75750C_OFFSET UNITYSDK_OFFSET(0x10D3F420)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10D3EA40)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x10D3EA80)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0x10D3EDA0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0x10D3EDE0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10D3E930)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CCC2465B83D77835_1_OFFSET UNITYSDK_OFFSET(0x10D3EF80)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CCC2465B83D77835_OFFSET UNITYSDK_OFFSET(0x10D3E590)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_D6C704D079CD7C6D_OFFSET UNITYSDK_OFFSET(0x10D3F310)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x10D3F680)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x10D3F690)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F0088C88851A7DFB_3_OFFSET UNITYSDK_OFFSET(0x10D3F6A0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10D3DFD0)
#define CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F6EB917C5A67C7BA_OFFSET UNITYSDK_OFFSET(0x10D3ED50)
#define CLASS_1_9CEAB4C068D9D9DB__CTOR_OFFSET UNITYSDK_OFFSET(0x10D3D6D0)

inline static constexpr unsigned int Class_1_9CEAB4C068D9D9DB_TypeDefinitionIndex = 44850;

class Class_1_9CEAB4C068D9D9DB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AdventureModifierInstance*>* Field_1_6; // 0x10
	::System::Collections::Generic::List_1<::Struct_2_0B84ADD7815498A2>* Field_1_13; // 0x18
	::System::Collections::Generic::List_1<::Struct_2_0B84ADD7815498A2>* Field_1_15; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::AdventureModifierInstance*>* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_16; // 0x30
	::RPG::GameCore::GameEntity* Field_1_17; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* Field_1_14; // 0x40
	::RPG::GameCore::GameEntity* Field_1_7; // 0x48
	::Class_2_F1C3EBA366E084A2* Field_1_8; // 0x50
	::System::Boolean Field_1_10; // 0x58
	::System::Boolean Field_1_4; // 0x59
	::System::Boolean Field_1_11; // 0x5A
	::System::Boolean Field_1_1; // 0x5B
	::System::Int32 Field_1_0; // 0x5C
	::System::Boolean Field_1_12; // 0x60
	::System::Boolean Field_1_3; // 0x61
	::System::Boolean Field_1_2; // 0x62
	::RPG::GameCore::AdventureFeatureMuteLevel Field_1_9; // 0x64

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_047F1C6DD5744E80(::RPG::GameCore::AdventureModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_047F1C6DD5744E80_OFFSET))(this, a1);
	}

	::System::Void Method_1_07406AE8B2231808(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_07406AE8B2231808_OFFSET))(this, a1);
	}

	::System::Void Method_1_85350C0C31133276(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_85350C0C31133276_OFFSET))(this, a1);
	}

	::System::Void Method_1_019FAF8DF887E9D8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_019FAF8DF887E9D8_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_6C0BB35645C3A92B(::System::Boolean a1, ::RPG::GameCore::AdventureModifierInstance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_6C0BB35645C3A92B_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AdventureBehaviorClampAlertLevel Method_1_86431F5CB38A9547(::System::Boolean& a1)
	{
		return ((::RPG::GameCore::AdventureBehaviorClampAlertLevel(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_86431F5CB38A9547_OFFSET))(this, a1);
	}

	::System::Void Method_1_C2C495C915C952BA(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_C2C495C915C952BA_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E140453C4B32F06_1(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_4E140453C4B32F06_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_525A724DAD4F68F3(::RPG::GameCore::AdventureModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_525A724DAD4F68F3_OFFSET))(this, a1);
	}

	::System::Void Method_1_A663AF428258DA9A(::RPG::GameCore::AdventureModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_A663AF428258DA9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_9179AAA9707A4A72(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_9179AAA9707A4A72_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F6EB917C5A67C7BA(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F6EB917C5A67C7BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_3_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CA373AA1C7054598_4_OFFSET))(this);
	}

	::RPG::GameCore::AdventureFeatureMuteLevel Method_1_47084D8B74242CC2()
	{
		return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_47084D8B74242CC2_OFFSET))(this);
	}

	::RPG::GameCore::AdventureModifierInstance* Method_1_86C55EEFAA560557()
	{
		return ((::RPG::GameCore::AdventureModifierInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_86C55EEFAA560557_OFFSET))(this);
	}

	::System::Void Method_1_C2B827CEDD7D98A1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_C2B827CEDD7D98A1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_7810B51DB38AD15C(::RPG::GameCore::AdventureFeatureMuteLevel a1, ::RPG::GameCore::AdventureFeatureMuteLevel a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureFeatureMuteLevel, ::RPG::GameCore::AdventureFeatureMuteLevel))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_7810B51DB38AD15C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CCC2465B83D77835(::RPG::GameCore::AdventureFeatureMuteLevel a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureFeatureMuteLevel))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CCC2465B83D77835_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CCC2465B83D77835_1(::RPG::GameCore::AdventureFeatureMuteLevel a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureFeatureMuteLevel))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_CCC2465B83D77835_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A64E0EC79B97502E(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_A64E0EC79B97502E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A64E0EC79B97502E_1(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_A64E0EC79B97502E_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5F5E7D098AC43E18(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_5F5E7D098AC43E18_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4DE1857021EDD3DF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_4DE1857021EDD3DF_OFFSET))(this, a1);
	}

	::System::Void Method_1_C18056463E36B2AF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_C18056463E36B2AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_D6C704D079CD7C6D(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_D6C704D079CD7C6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C96F0FDB0D75750C(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_C96F0FDB0D75750C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_081E84DBAB5CA72B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_081E84DBAB5CA72B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CEAB4C068D9D9DB_METHOD_1_F0088C88851A7DFB_3_OFFSET))(this);
	}
};
