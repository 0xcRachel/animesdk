#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleInitPosition.h"
#include "unitysdk/System/Object.h"

class Class_1_87D6E24AEDA0242C;
namespace RPG::Client { class ChenLingBattleSoldierConfig; }
namespace RPG::Client { class ChenLingBattleSoldierLevelConfig; }
namespace RPG::Client::ChenLingBattle { class Enchant; }
namespace RPG::Client::ChenLingBattle { class Soldier; }
namespace RPG::GameCore { class ChenLingBattlePresetArmyConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B1C37B065CBC515F_GET_ATKSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x105F4830)
#define CLASS_1_B1C37B065CBC515F_GET_ENHANCEMENTS_OFFSET UNITYSDK_OFFSET(0x105F4890)
#define CLASS_1_B1C37B065CBC515F_GET_EXTRAADDSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x105F4850)
#define CLASS_1_B1C37B065CBC515F_GET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0x105F4700)
#define CLASS_1_B1C37B065CBC515F_GET_ISPROMOTED_OFFSET UNITYSDK_OFFSET(0x105F4870)
#define CLASS_1_B1C37B065CBC515F_GET_ISRANGEATTACK_OFFSET UNITYSDK_OFFSET(0x105F47F0)
#define CLASS_1_B1C37B065CBC515F_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x105F45F0)
#define CLASS_1_B1C37B065CBC515F_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x105F47D0)
#define CLASS_1_B1C37B065CBC515F_GET_OVERRIDEMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x105F48B0)
#define CLASS_1_B1C37B065CBC515F_GET_RECOMMENDEDGRIDINDEX_OFFSET UNITYSDK_OFFSET(0x105F48F0)
#define CLASS_1_B1C37B065CBC515F_GET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x105F4810)
#define CLASS_1_B1C37B065CBC515F_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x105F45D0)
#define CLASS_1_B1C37B065CBC515F_GET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x105F4660)
#define CLASS_1_B1C37B065CBC515F_GET_UNITPROFILERLIST_OFFSET UNITYSDK_OFFSET(0x105F48D0)
#define CLASS_1_B1C37B065CBC515F_METHOD_1_0071574A21BAA896_OFFSET UNITYSDK_OFFSET(0x105F44E0)
#define CLASS_1_B1C37B065CBC515F_METHOD_1_0C3314530441AA85_OFFSET UNITYSDK_OFFSET(0x105F4720)
#define CLASS_1_B1C37B065CBC515F_METHOD_1_21FFA59AF169ACF7_OFFSET UNITYSDK_OFFSET(0x105F2AA0)
#define CLASS_1_B1C37B065CBC515F_METHOD_1_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x105F37F0)
#define CLASS_1_B1C37B065CBC515F_METHOD_1_394F35BBA0EE596A_OFFSET UNITYSDK_OFFSET(0x105F2860)
#define CLASS_1_B1C37B065CBC515F_METHOD_1_3E7F7468DAE568D3_OFFSET UNITYSDK_OFFSET(0x105F3F10)
#define CLASS_1_B1C37B065CBC515F_METHOD_1_51C854947DF30177_OFFSET UNITYSDK_OFFSET(0x105F3D30)
#define CLASS_1_B1C37B065CBC515F_METHOD_1_6CF3795CBDFE8DD0_OFFSET UNITYSDK_OFFSET(0x105F4190)
#define CLASS_1_B1C37B065CBC515F_METHOD_1_A1AFAEA19EB263CD_OFFSET UNITYSDK_OFFSET(0x105F4680)
#define CLASS_1_B1C37B065CBC515F_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x105F4610)
#define CLASS_1_B1C37B065CBC515F_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x105F37A0)
#define CLASS_1_B1C37B065CBC515F_METHOD_1_AF3DE7EEF4AB88EF_OFFSET UNITYSDK_OFFSET(0x105F4910)
#define CLASS_1_B1C37B065CBC515F_METHOD_1_BD42F13584090B7C_OFFSET UNITYSDK_OFFSET(0x105F3F70)
#define CLASS_1_B1C37B065CBC515F_METHOD_1_E899E0851F0B5B3E_OFFSET UNITYSDK_OFFSET(0x105F24F0)
#define CLASS_1_B1C37B065CBC515F_METHOD_1_EDB6701F9DBE9544_OFFSET UNITYSDK_OFFSET(0x105F4580)
#define CLASS_1_B1C37B065CBC515F_SET_ATKSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x105F4840)
#define CLASS_1_B1C37B065CBC515F_SET_ENHANCEMENTS_OFFSET UNITYSDK_OFFSET(0x105F48A0)
#define CLASS_1_B1C37B065CBC515F_SET_EXTRAADDSKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x105F4860)
#define CLASS_1_B1C37B065CBC515F_SET_INITPOSITION_OFFSET UNITYSDK_OFFSET(0x105F4710)
#define CLASS_1_B1C37B065CBC515F_SET_ISPROMOTED_OFFSET UNITYSDK_OFFSET(0x105F4880)
#define CLASS_1_B1C37B065CBC515F_SET_ISRANGEATTACK_OFFSET UNITYSDK_OFFSET(0x105F4800)
#define CLASS_1_B1C37B065CBC515F_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x105F4600)
#define CLASS_1_B1C37B065CBC515F_SET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x105F47E0)
#define CLASS_1_B1C37B065CBC515F_SET_OVERRIDEMATERIALPATH_OFFSET UNITYSDK_OFFSET(0x105F48C0)
#define CLASS_1_B1C37B065CBC515F_SET_RECOMMENDEDGRIDINDEX_OFFSET UNITYSDK_OFFSET(0x105F4900)
#define CLASS_1_B1C37B065CBC515F_SET_SKILLIDLIST_OFFSET UNITYSDK_OFFSET(0x105F4820)
#define CLASS_1_B1C37B065CBC515F_SET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x105F45E0)
#define CLASS_1_B1C37B065CBC515F_SET_TEAMTYPE_OFFSET UNITYSDK_OFFSET(0x105F4670)
#define CLASS_1_B1C37B065CBC515F_SET_UNITPROFILERLIST_OFFSET UNITYSDK_OFFSET(0x105F48E0)
#define CLASS_1_B1C37B065CBC515F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x105F3A70)
#define CLASS_1_B1C37B065CBC515F__CTOR_2_OFFSET UNITYSDK_OFFSET(0x105F3FD0)
#define CLASS_1_B1C37B065CBC515F__CTOR_OFFSET UNITYSDK_OFFSET(0x105F25B0)

inline static constexpr unsigned int Class_1_B1C37B065CBC515F_TypeDefinitionIndex = 49839;

class Class_1_B1C37B065CBC515F : public ::System::Object
{
public:
	::System::String* _OverrideMaterialPath_k__BackingField; // 0x10
	::System::String* _ModelPath_k__BackingField; // 0x18
	::Il2CppArray<::System::UInt32>* _SkillIDList_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::Class_1_87D6E24AEDA0242C*>* _UnitProfilerList_k__BackingField; // 0x28
	::Il2CppArray<::System::UInt32>* _AtkSkillIDList_k__BackingField; // 0x30
	::System::Collections::Generic::List_1<::System::UInt32>* _ExtraAddSkillIDList_k__BackingField; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _Enhancements_k__BackingField; // 0x40
	::RPG::GameCore::ChenLingBattleInitPosition _InitPosition_k__BackingField; // 0x48
	::System::Boolean _IsPromoted_k__BackingField; // 0x4C
	::System::Boolean _IsRangeAttack_k__BackingField; // 0x4D
	::System::UInt32 _SoldierID_k__BackingField; // 0x50
	::System::UInt32 Field_1_2; // 0x54
	::System::Int32 _RecommendedGridIndex_k__BackingField; // 0x58
	::System::UInt32 _Level_k__BackingField; // 0x5C
	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType _TeamType_k__BackingField; // 0x60

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Enchant*>* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChenLingBattle::Enchant*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_1(::RPG::Client::ChenLingBattle::Soldier* a1, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::Soldier*, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F__CTOR_2_OFFSET))(this, a1, a2);
	}

	static ::Class_1_B1C37B065CBC515F* Method_1_E899E0851F0B5B3E(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a4)
	{
		return ((::Class_1_B1C37B065CBC515F*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_METHOD_1_E899E0851F0B5B3E_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_1_B1C37B065CBC515F* Method_1_21FFA59AF169ACF7(::RPG::GameCore::ChenLingBattlePresetArmyConfig* a1, ::System::Boolean a2)
	{
		return ((::Class_1_B1C37B065CBC515F*(*)(::RPG::GameCore::ChenLingBattlePresetArmyConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_METHOD_1_21FFA59AF169ACF7_OFFSET))(a1, a2);
	}

	::System::Void Method_1_3E7F7468DAE568D3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_METHOD_1_3E7F7468DAE568D3_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD42F13584090B7C(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_METHOD_1_BD42F13584090B7C_OFFSET))(this, a1);
	}

	::System::Void Method_1_394F35BBA0EE596A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_METHOD_1_394F35BBA0EE596A_OFFSET))(this);
	}

	::System::Void Method_1_51C854947DF30177(::RPG::Client::ChenLingBattle::Soldier* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::Soldier*))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_METHOD_1_51C854947DF30177_OFFSET))(this, a1);
	}

	::System::Void Method_1_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_METHOD_1_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_1_6CF3795CBDFE8DD0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_METHOD_1_6CF3795CBDFE8DD0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_EDB6701F9DBE9544(::RPG::GameCore::ChenLingBattleInitPosition a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingBattleInitPosition))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_METHOD_1_EDB6701F9DBE9544_OFFSET))(this, a1);
	}

	::System::UInt32 get_SoldierID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_GET_SOLDIERID_OFFSET))(this);
	}

	::System::Void set_SoldierID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_SET_SOLDIERID_OFFSET))(this, value);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_SET_LEVEL_OFFSET))(this, value);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType get_TeamType()
	{
		return ((::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_GET_TEAMTYPE_OFFSET))(this);
	}

	::System::Void set_TeamType(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_SET_TEAMTYPE_OFFSET))(this, value);
	}

	::RPG::GameCore::ChenLingBattleInitPosition Method_1_A1AFAEA19EB263CD()
	{
		return ((::RPG::GameCore::ChenLingBattleInitPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_METHOD_1_A1AFAEA19EB263CD_OFFSET))(this);
	}

	::RPG::GameCore::ChenLingBattleInitPosition get_InitPosition()
	{
		return ((::RPG::GameCore::ChenLingBattleInitPosition(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_GET_INITPOSITION_OFFSET))(this);
	}

	::System::Void set_InitPosition(::RPG::GameCore::ChenLingBattleInitPosition value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingBattleInitPosition))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_SET_INITPOSITION_OFFSET))(this, value);
	}

	::RPG::Client::ChenLingBattleSoldierConfig* Method_1_0071574A21BAA896()
	{
		return ((::RPG::Client::ChenLingBattleSoldierConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_METHOD_1_0071574A21BAA896_OFFSET))(this);
	}

	::RPG::Client::ChenLingBattleSoldierLevelConfig* Method_1_0C3314530441AA85()
	{
		return ((::RPG::Client::ChenLingBattleSoldierLevelConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_METHOD_1_0C3314530441AA85_OFFSET))(this);
	}

	::System::String* get_ModelPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_GET_MODELPATH_OFFSET))(this);
	}

	::System::Void set_ModelPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_SET_MODELPATH_OFFSET))(this, value);
	}

	::System::Boolean get_IsRangeAttack()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_GET_ISRANGEATTACK_OFFSET))(this);
	}

	::System::Void set_IsRangeAttack(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_SET_ISRANGEATTACK_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_SkillIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_GET_SKILLIDLIST_OFFSET))(this);
	}

	::System::Void set_SkillIDList(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_SET_SKILLIDLIST_OFFSET))(this, value);
	}

	::Il2CppArray<::System::UInt32>* get_AtkSkillIDList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_GET_ATKSKILLIDLIST_OFFSET))(this);
	}

	::System::Void set_AtkSkillIDList(::Il2CppArray<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_SET_ATKSKILLIDLIST_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_ExtraAddSkillIDList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_GET_EXTRAADDSKILLIDLIST_OFFSET))(this);
	}

	::System::Void set_ExtraAddSkillIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_SET_EXTRAADDSKILLIDLIST_OFFSET))(this, value);
	}

	::System::Boolean get_IsPromoted()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_GET_ISPROMOTED_OFFSET))(this);
	}

	::System::Void set_IsPromoted(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_SET_ISPROMOTED_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_Enhancements()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_GET_ENHANCEMENTS_OFFSET))(this);
	}

	::System::Void set_Enhancements(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_SET_ENHANCEMENTS_OFFSET))(this, value);
	}

	::System::String* get_OverrideMaterialPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_GET_OVERRIDEMATERIALPATH_OFFSET))(this);
	}

	::System::Void set_OverrideMaterialPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_SET_OVERRIDEMATERIALPATH_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::Class_1_87D6E24AEDA0242C*>* get_UnitProfilerList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_87D6E24AEDA0242C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_GET_UNITPROFILERLIST_OFFSET))(this);
	}

	::System::Void set_UnitProfilerList(::System::Collections::Generic::List_1<::Class_1_87D6E24AEDA0242C*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_87D6E24AEDA0242C*>*))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_SET_UNITPROFILERLIST_OFFSET))(this, value);
	}

	::System::Int32 get_RecommendedGridIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_GET_RECOMMENDEDGRIDINDEX_OFFSET))(this);
	}

	::System::Void set_RecommendedGridIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_SET_RECOMMENDEDGRIDINDEX_OFFSET))(this, value);
	}

	::System::Int32 Method_1_AF3DE7EEF4AB88EF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B1C37B065CBC515F_METHOD_1_AF3DE7EEF4AB88EF_OFFSET))(this);
	}
};
