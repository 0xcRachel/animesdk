#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/RPG/Client/LittleGameShare/ST_TargetCatType.h"
#include "unitysdk/RPG/GameCore/CakeRaceAbilityName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_434341DAC51FD4BD_109;
class Class_1_4DF3292AA5AADAD0_4;
class Class_1_735612C94F558EAE_24;
class Class_1_92B0B8C84327961B;
class Class_1_9CED2ED5D733E7A4;
class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
class Class_3_07018709FCD48E07;
namespace RPG::GameCore { class CakeRaceAbilityConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0D8B762DCE2B2E43_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15FF6B60)
#define CLASS_1_0D8B762DCE2B2E43_GET_CURABILITY_OFFSET UNITYSDK_OFFSET(0x15FF8600)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x15FF8330)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_050E70FEDB783306_1_OFFSET UNITYSDK_OFFSET(0x15FF7CE0)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x15FF7C90)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_0F8D6364B34C7195_OFFSET UNITYSDK_OFFSET(0x15FF7520)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_20A193958CD38A4D_OFFSET UNITYSDK_OFFSET(0x15FF7A80)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_20EECD3CB6E3F4E7_OFFSET UNITYSDK_OFFSET(0x15FF7300)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_29CB7F89FF9FAEC1_OFFSET UNITYSDK_OFFSET(0x15FF7120)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_47D42B95159AE8D1_OFFSET UNITYSDK_OFFSET(0x15FECC80)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_4AD40A385BC29831_OFFSET UNITYSDK_OFFSET(0x15FF68B0)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_4D321473AD05803E_OFFSET UNITYSDK_OFFSET(0x15FF5D90)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_5F0F329C4FFEAF09_OFFSET UNITYSDK_OFFSET(0x15FF6BA0)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_622F78E871526932_OFFSET UNITYSDK_OFFSET(0x15FF7420)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_64D0E9B25AC2D69E_OFFSET UNITYSDK_OFFSET(0x15FF7D80)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_6EFF7E1A23E85631_OFFSET UNITYSDK_OFFSET(0x15FF5C30)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_990C937A7EFED2E0_OFFSET UNITYSDK_OFFSET(0x15FF68C0)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_9B8206603CE8CF13_OFFSET UNITYSDK_OFFSET(0x15FF6E40)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_A4D14F9E3A0FE051_OFFSET UNITYSDK_OFFSET(0x15FF8240)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_AD6EC7EAF52F4741_OFFSET UNITYSDK_OFFSET(0x15FF7210)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_CB3EE60CB90D2A3B_OFFSET UNITYSDK_OFFSET(0x15FF7D30)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_DE9D28F7BFC866AF_OFFSET UNITYSDK_OFFSET(0x15FF7DD0)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_DF6B79EC0B5A9128_OFFSET UNITYSDK_OFFSET(0x15FF6A70)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_E26DE46BC5335E39_OFFSET UNITYSDK_OFFSET(0x15FF7AF0)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_E2E35095C865A084_OFFSET UNITYSDK_OFFSET(0x15FF7750)
#define CLASS_1_0D8B762DCE2B2E43_METHOD_1_FC4C460388CBA528_OFFSET UNITYSDK_OFFSET(0x15FF7070)
#define CLASS_1_0D8B762DCE2B2E43_SET_CURABILITY_OFFSET UNITYSDK_OFFSET(0x15FF8610)
#define CLASS_1_0D8B762DCE2B2E43__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF6940)

inline static constexpr unsigned int Class_1_0D8B762DCE2B2E43_TypeDefinitionIndex = 28063;

class Class_1_0D8B762DCE2B2E43 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_3_07018709FCD48E07*>* Field_1_5; // 0x10
	::Class_2_F3C45F1FC7349B6E* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_2; // 0x20
	::Class_1_92B0B8C84327961B* _CurAbility_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::Class_1_92B0B8C84327961B*>* Field_1_1; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* Field_1_3; // 0x38
	::System::Boolean Field_1_4; // 0x40

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43__CTOR_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_92B0B8C84327961B*>* Method_1_4AD40A385BC29831()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_92B0B8C84327961B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_4AD40A385BC29831_OFFSET))(this);
	}

	static ::Class_1_0D8B762DCE2B2E43* Method_1_990C937A7EFED2E0(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::Class_1_0D8B762DCE2B2E43*(*)(::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_990C937A7EFED2E0_OFFSET))(a1);
	}

	::Class_1_92B0B8C84327961B* Method_1_DF6B79EC0B5A9128(::System::Int32 a1, ::RPG::GameCore::CakeRaceAbilityName a2)
	{
		return ((::Class_1_92B0B8C84327961B*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceAbilityName))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_DF6B79EC0B5A9128_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5F0F329C4FFEAF09(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_5F0F329C4FFEAF09_OFFSET))(this, a1);
	}

	::System::Void Method_1_9B8206603CE8CF13(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_9B8206603CE8CF13_OFFSET))(this, a1);
	}

	::System::Void Method_1_FC4C460388CBA528(::Class_2_3ABA989E5AECB261* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::Class_1_9CED2ED5D733E7A4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::Class_1_9CED2ED5D733E7A4*))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_FC4C460388CBA528_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_92B0B8C84327961B* Method_1_29CB7F89FF9FAEC1(::Class_2_3ABA989E5AECB261* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::Class_1_9CED2ED5D733E7A4* a3)
	{
		return ((::Class_1_92B0B8C84327961B*(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::Class_1_9CED2ED5D733E7A4*))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_29CB7F89FF9FAEC1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AD6EC7EAF52F4741(::Class_2_3ABA989E5AECB261* a1, ::RPG::GameCore::CakeRaceAbilityConfig* a2, ::Class_1_9CED2ED5D733E7A4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::RPG::GameCore::CakeRaceAbilityConfig*, ::Class_1_9CED2ED5D733E7A4*))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_AD6EC7EAF52F4741_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Boolean Method_1_20EECD3CB6E3F4E7(::RPG::GameCore::CakeRaceAbilityConfig* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::CakeRaceAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_20EECD3CB6E3F4E7_OFFSET))(a1);
	}

	::RPG::Client::LittleGameShare::MsgRetcode Method_1_4D321473AD05803E(::System::UInt32 a1, ::Class_1_4DF3292AA5AADAD0_4*& a2, ::Class_1_434341DAC51FD4BD_109*& a3)
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::Class_1_4DF3292AA5AADAD0_4*&, ::Class_1_434341DAC51FD4BD_109*&))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_4D321473AD05803E_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_0F8D6364B34C7195(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_0F8D6364B34C7195_OFFSET))(this, a1);
	}

	::Class_2_3ABA989E5AECB261* Method_1_6EFF7E1A23E85631(::RPG::Client::LittleGameShare::ST_TargetCatType a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Class_2_3ABA989E5AECB261*(*)(::PVOID, ::RPG::Client::LittleGameShare::ST_TargetCatType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_6EFF7E1A23E85631_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_735612C94F558EAE_24* Method_1_E2E35095C865A084(::System::UInt32 a1)
	{
		return ((::Class_1_735612C94F558EAE_24*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_E2E35095C865A084_OFFSET))(this, a1);
	}

	::System::Void Method_1_20A193958CD38A4D(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_20A193958CD38A4D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_622F78E871526932(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_622F78E871526932_OFFSET))(this, a1);
	}

	::System::Void Method_1_47D42B95159AE8D1(::Class_3_07018709FCD48E07* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07018709FCD48E07*))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_47D42B95159AE8D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E26DE46BC5335E39()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_E26DE46BC5335E39_OFFSET))(this);
	}

	::System::Void Method_1_050E70FEDB783306(::System::String*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_1_050E70FEDB783306_1(::System::String*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_050E70FEDB783306_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CB3EE60CB90D2A3B(::Il2CppArray<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_CB3EE60CB90D2A3B_OFFSET))(this, a1);
	}

	::System::Void Method_1_64D0E9B25AC2D69E(::Il2CppArray<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_64D0E9B25AC2D69E_OFFSET))(this, a1);
	}

	::System::Void Method_1_DE9D28F7BFC866AF(::Il2CppArray<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ValueTuple_3<::System::UInt32, ::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_DE9D28F7BFC866AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_A4D14F9E3A0FE051(::Il2CppArray<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_A4D14F9E3A0FE051_OFFSET))(this, a1);
	}

	::System::Void Method_1_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_METHOD_1_03C4FFAD29DE0852_OFFSET))(this);
	}

	::Class_1_92B0B8C84327961B* get_CurAbility()
	{
		return ((::Class_1_92B0B8C84327961B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_GET_CURABILITY_OFFSET))(this);
	}

	::System::Void set_CurAbility(::Class_1_92B0B8C84327961B* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_92B0B8C84327961B*))((::PBYTE)hIl2Cpp + CLASS_1_0D8B762DCE2B2E43_SET_CURABILITY_OFFSET))(this, value);
	}
};
