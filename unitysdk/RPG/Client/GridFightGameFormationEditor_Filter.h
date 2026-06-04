#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightGameFormationEditor_Filter_FilterType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightGameFormationEditor_GridFightGameFormationEquipFilterOption; }
namespace RPG::Client { class GridFightGameFormationEditor_GridFightGameFormationEquipOption; }
namespace RPG::Client { class GridFightGameFormationEditor_GridFightGameFormationRarityOption; }
namespace RPG::Client { class GridFightGameFormationEditor_GridFightGameFormationRoleFilterOption; }
namespace RPG::Client { class GridFightGameFormationEditor_GridFightGameFormationRoleOption; }
namespace RPG::Client { class GridFightGameFormationEditor_GridFightGameFormationTraitOption; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::GameCore { class GridFightTraitBaseConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_CLEARROLEFILTER_OFFSET UNITYSDK_OFFSET(0x18D33FF0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_FILTEREQUIP_OFFSET UNITYSDK_OFFSET(0x18D33FA0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_FILTERROLE_OFFSET UNITYSDK_OFFSET(0x18D33F50)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GETCOSTOPTIONS_OFFSET UNITYSDK_OFFSET(0x18D34460)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GETEQUIPFILTEROPTIONS_OFFSET UNITYSDK_OFFSET(0x18D344A0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GETEQUIPOPTIONS_OFFSET UNITYSDK_OFFSET(0x18D34330)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GETMAINTRAITOPTIONS_OFFSET UNITYSDK_OFFSET(0x18D344E0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GETROLEOPTIONS_OFFSET UNITYSDK_OFFSET(0x18D341B0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GETSUBTRAITOPTIONS_OFFSET UNITYSDK_OFFSET(0x18D34520)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GET_ISEQUIPFILTERACTIVE_OFFSET UNITYSDK_OFFSET(0x18D34070)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GET_ISFILTERACTIVE_OFFSET UNITYSDK_OFFSET(0x18D34100)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GET_ISROLEFILTERACTIVE_OFFSET UNITYSDK_OFFSET(0x18D34060)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_INITEQUIPS_OFFSET UNITYSDK_OFFSET(0x18D2CA00)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_INITROLES_OFFSET UNITYSDK_OFFSET(0x18D2C560)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_SELECTRARITY_OFFSET UNITYSDK_OFFSET(0x18D34160)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D2B470)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER__FILTER_1_OFFSET UNITYSDK_OFFSET(0x18D34380)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER__FILTER_OFFSET UNITYSDK_OFFSET(0x18D34200)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___CTOR_B__16_0_OFFSET UNITYSDK_OFFSET(0x18D34560)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___CTOR_B__16_3_OFFSET UNITYSDK_OFFSET(0x18D345C0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___CTOR_B__16_6_OFFSET UNITYSDK_OFFSET(0x18D34630)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___FILTER_B__32_0_OFFSET UNITYSDK_OFFSET(0x18D34690)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___FILTER_B__32_1_OFFSET UNITYSDK_OFFSET(0x18D346F0)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___FILTER_B__33_0_OFFSET UNITYSDK_OFFSET(0x18D34730)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_Filter_TypeDefinitionIndex = 60434;

	class GridFightGameFormationEditor_Filter : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipOption*>* _AllEquipOptions; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* _AllEquips; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationTraitOption*>* _MainTraitOptions; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRarityOption*>* _RarityOptions; // 0x28
		::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipFilterOption* CurEquipFilterOption; // 0x30
		::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleFilterOption* CurRoleFilterOption; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* _AllRoles; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleOption*>* _AllRoleOptions; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipFilterOption*>* _EquipTypeOptions; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationTraitOption*>* _SubTraitOptions; // 0x58
		::RPG::Client::GridFightGameFormationEditor_Filter_FilterType CurFilterType; // 0x60
		::System::UInt32 _SelectRarity; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER__CTOR_OFFSET))(this);
		}

		::System::Void FilterRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_FILTERROLE_OFFSET))(this);
		}

		::System::Void FilterEquip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_FILTEREQUIP_OFFSET))(this);
		}

		::System::Void ClearRoleFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_CLEARROLEFILTER_OFFSET))(this);
		}

		::System::Boolean get_IsRoleFilterActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GET_ISROLEFILTERACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsEquipFilterActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GET_ISEQUIPFILTERACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsFilterActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GET_ISFILTERACTIVE_OFFSET))(this);
		}

		::System::Void SelectRarity(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_SELECTRARITY_OFFSET))(this, a1);
		}

		::System::Void InitRoles(::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_INITROLES_OFFSET))(this, a1);
		}

		::System::Void InitEquips(::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_INITEQUIPS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleOption*>* GetRoleOptions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleOption*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GETROLEOPTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipOption*>* GetEquipOptions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipOption*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GETEQUIPOPTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRarityOption*>* GetCostOptions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRarityOption*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GETCOSTOPTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipFilterOption*>* GetEquipFilterOptions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipFilterOption*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GETEQUIPFILTEROPTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationTraitOption*>* GetMainTraitOptions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationTraitOption*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GETMAINTRAITOPTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationTraitOption*>* GetSubTraitOptions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationTraitOption*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER_GETSUBTRAITOPTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleOption*>* _Filter(::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleOption*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleOption*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleOption*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER__FILTER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipOption*>* _Filter_1(::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipOption*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipOption*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipOption*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER__FILTER_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRarityOption* __ctor_b__16_0(::System::Int32 a1)
		{
			return ((::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRarityOption*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___CTOR_B__16_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationTraitOption* __ctor_b__16_3(::RPG::GameCore::GridFightTraitBaseConfigRow* a1)
		{
			return ((::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationTraitOption*(*)(::PVOID, ::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___CTOR_B__16_3_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationTraitOption* __ctor_b__16_6(::RPG::GameCore::GridFightTraitBaseConfigRow* a1)
		{
			return ((::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationTraitOption*(*)(::PVOID, ::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___CTOR_B__16_6_OFFSET))(this, a1);
		}

		::System::Boolean __Filter_b__32_0(::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleOption* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleOption*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___FILTER_B__32_0_OFFSET))(this, a1);
		}

		::System::Boolean __Filter_b__32_1(::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleOption* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationRoleOption*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___FILTER_B__32_1_OFFSET))(this, a1);
		}

		::System::Boolean __Filter_b__33_0(::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipOption* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameFormationEditor_GridFightGameFormationEquipOption*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_FILTER___FILTER_B__33_0_OFFSET))(this, a1);
		}
	};
}
