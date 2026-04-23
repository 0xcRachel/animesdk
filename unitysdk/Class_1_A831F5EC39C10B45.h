#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D11CE62B2BEC69E;
class Class_1_A831F5EC39C10B45_Class_3_42C3ADEFE001CF00_1;
class Class_1_EE559462F37DF929;
class Class_2_0C58AD91B0F4D809;
class Class_3_D6E9A038FA23103A;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client { class QuestData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelAnimalAttachBillboardData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelGlobalData; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelProgressTipsData; }
namespace RPG::GameCore { class FourRotateVoxelEntranceConfig; }
namespace RPG::GameCore { class FourRotateVoxelPortalConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A831F5EC39C10B45_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF467B00)
#define CLASS_1_A831F5EC39C10B45_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xF467180)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_00A4B38C951C5BD5_OFFSET UNITYSDK_OFFSET(0xF466F80)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_0BCA929F38D4D7DB_OFFSET UNITYSDK_OFFSET(0xF468F10)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_125126BF7ACBDD51_OFFSET UNITYSDK_OFFSET(0xF465A10)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_168CDBBDB08BE45E_OFFSET UNITYSDK_OFFSET(0xF466E40)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_1DAEA1372099E262_OFFSET UNITYSDK_OFFSET(0xF466B10)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_2416EE8102DF21CF_OFFSET UNITYSDK_OFFSET(0xF466820)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_2DC2C8C0FD03A63B_OFFSET UNITYSDK_OFFSET(0xF465B90)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xF468A60)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_59779BE96F16C058_OFFSET UNITYSDK_OFFSET(0xF468FB0)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_6A664DCBFEADE56F_OFFSET UNITYSDK_OFFSET(0xF468C70)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0xF4676C0)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_94CBD0C21A609187_OFFSET UNITYSDK_OFFSET(0xF465C20)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_AFDC576A9606B859_OFFSET UNITYSDK_OFFSET(0xF4682F0)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_B3EC426F9661E4D1_OFFSET UNITYSDK_OFFSET(0xF466B90)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_C9072C01C81FE8E4_OFFSET UNITYSDK_OFFSET(0xF468AA0)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_DAEB27AB569ACC67_OFFSET UNITYSDK_OFFSET(0xF469330)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_DC8592C913491D4B_OFFSET UNITYSDK_OFFSET(0xF4678A0)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xF4685C0)
#define CLASS_1_A831F5EC39C10B45_METHOD_1_FC15BAFC5717F4C6_OFFSET UNITYSDK_OFFSET(0xF4662F0)
#define CLASS_1_A831F5EC39C10B45_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xF4686A0)
#define CLASS_1_A831F5EC39C10B45__CCTOR_OFFSET UNITYSDK_OFFSET(0xF4694A0)
#define CLASS_1_A831F5EC39C10B45__CTOR_OFFSET UNITYSDK_OFFSET(0xF465550)
#define CLASS_1_A831F5EC39C10B45__EXECUTE_B__12_0_OFFSET UNITYSDK_OFFSET(0xF4694E0)

inline static constexpr unsigned int Class_1_A831F5EC39C10B45_TypeDefinitionIndex = 70492;

class Class_1_A831F5EC39C10B45 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_10()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A831F5EC39C10B45_TypeDefinitionIndex)->GetStaticField(0x26D70);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_2_0C58AD91B0F4D809*>* Field_1_4; // 0x10
	::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGlobalData* Field_1_11; // 0x18
	::Entitas::IGroup_1<::Class_2_0C58AD91B0F4D809*>* Field_1_19; // 0x20
	::Class_3_D6E9A038FA23103A* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::Class_2_0C58AD91B0F4D809*>* Field_1_15; // 0x30
	::RPG::GameCore::FourRotateVoxelPortalConfig* Field_1_14; // 0x38
	::Entitas::IGroup_1<::Class_2_0C58AD91B0F4D809*>* Field_1_2; // 0x40
	::System::Collections::Generic::Dictionary_2<::Class_2_0C58AD91B0F4D809*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelProgressTipsData*>* Field_1_5; // 0x48
	::System::Collections::Generic::Dictionary_2<::Class_2_0C58AD91B0F4D809*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelAnimalAttachBillboardData*>* Field_1_18; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_A831F5EC39C10B45_Class_3_42C3ADEFE001CF00_1*>* Field_1_17; // 0x58
	::Class_1_4D11CE62B2BEC69E* Field_1_0; // 0x60
	::System::Single Field_1_12; // 0x68
	::System::Int32 Field_1_9; // 0x6C
	::System::Boolean Field_1_6; // 0x70
	::System::Boolean Field_1_8; // 0x71
	::System::Boolean Field_1_3; // 0x72
	::System::Boolean Field_1_7; // 0x73
	::System::UInt32 Field_1_16; // 0x74
	::System::Single Field_1_13; // 0x78

	::System::Void _ctor(::Class_1_4D11CE62B2BEC69E* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D11CE62B2BEC69E*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45__CCTOR_OFFSET))();
	}

	::System::Void Method_1_125126BF7ACBDD51(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_125126BF7ACBDD51_OFFSET))(this, a1);
	}

	::System::Void Method_1_94CBD0C21A609187(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_94CBD0C21A609187_OFFSET))(this, a1);
	}

	::System::Void Method_1_B3EC426F9661E4D1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_B3EC426F9661E4D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_168CDBBDB08BE45E(::RPG::GameCore::FourRotateVoxelEntranceConfig* a1, ::System::Int32& a2, ::System::Int32& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FourRotateVoxelEntranceConfig*, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_168CDBBDB08BE45E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_FC15BAFC5717F4C6(::Class_2_0C58AD91B0F4D809* a1, ::RPG::Client::QuestData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_FC15BAFC5717F4C6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_00A4B38C951C5BD5(::Class_1_EE559462F37DF929* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EE559462F37DF929*))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_00A4B38C951C5BD5_OFFSET))(this, a1);
	}

	::System::Void Method_1_2DC2C8C0FD03A63B(::Class_2_0C58AD91B0F4D809* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_2DC2C8C0FD03A63B_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_1_DC8592C913491D4B(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_DC8592C913491D4B_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_AFDC576A9606B859()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_AFDC576A9606B859_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_TEARDOWN_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_C9072C01C81FE8E4(::Entitas::IGroup_1<::Class_2_0C58AD91B0F4D809*>* a1, ::Class_2_0C58AD91B0F4D809* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_0C58AD91B0F4D809*>*, ::Class_2_0C58AD91B0F4D809*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_C9072C01C81FE8E4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_0BCA929F38D4D7DB(::Class_2_0C58AD91B0F4D809* a1, ::System::String*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_0BCA929F38D4D7DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1DAEA1372099E262(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_1DAEA1372099E262_OFFSET))(this, a1);
	}

	::System::Void Method_1_59779BE96F16C058(::Class_2_0C58AD91B0F4D809* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_59779BE96F16C058_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6A664DCBFEADE56F(::Class_2_0C58AD91B0F4D809* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_6A664DCBFEADE56F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DAEB27AB569ACC67(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_DAEB27AB569ACC67_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2416EE8102DF21CF(::Class_2_0C58AD91B0F4D809* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45_METHOD_1_2416EE8102DF21CF_OFFSET))(this, a1, a2);
	}

	::System::Void _Execute_b__12_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45__EXECUTE_B__12_0_OFFSET))(this);
	}
};
