#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_345;
class Class_1_50D7577ADBD39E1A;
class Class_1_715991DD7016B4FF;

#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_DEEPCLONE_OFFSET UNITYSDK_OFFSET(0x11D2CED0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_GETEQUIPSHOWSTATUSCOUNT_OFFSET UNITYSDK_OFFSET(0x11D2D320)
#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_GETFINALPARAMLIST_OFFSET UNITYSDK_OFFSET(0x11D2D0E0)
#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_SETUPABILITYINSTANCE_OFFSET UNITYSDK_OFFSET(0x11D2D180)
#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x11D2D040)
#define RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA__ONSELFCUSTOMDYNAMICVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x11D2D280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleGridFightEquipData_TypeDefinitionIndex = 51877;

	class BattleGridFightEquipData : public ::System::Object
	{
	public:
		::Class_1_50D7577ADBD39E1A* AdditionalPropertyMap; // 0x10
		::Class_0_16E4307DCC419505_345* _AbilityInstance; // 0x18
		::Class_1_715991DD7016B4FF* AdditionalParamProtoMap; // 0x20
		::System::UInt32 ID; // 0x28
		::System::Boolean IsDynamicCreate; // 0x2C
		::System::UInt32 UniqueID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::BattleGridFightEquipData* DeepClone()
		{
			return ((::RPG::GameCore::BattleGridFightEquipData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_DEEPCLONE_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* GetFinalParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_GETFINALPARAMLIST_OFFSET))(this);
		}

		::System::Void SetupAbilityInstance(::Class_0_16E4307DCC419505_345* pAbilityInstance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_345*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_SETUPABILITYINSTANCE_OFFSET))(this, pAbilityInstance);
		}

		::System::Void _OnSelfCustomDynamicValueChanged(::RPG::GameCore::StringHash pKey, ::System::Nullable_1<::RPG::GameCore::FixPoint> preVal, ::RPG::GameCore::FixPoint fVal)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA__ONSELFCUSTOMDYNAMICVALUECHANGED_OFFSET))(this, pKey, preVal, fVal);
		}

		::RPG::GameCore::FixPoint GetEquipShowStatusCount()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEGRIDFIGHTEQUIPDATA_GETEQUIPSHOWSTATUSCOUNT_OFFSET))(this);
		}
	};
}
