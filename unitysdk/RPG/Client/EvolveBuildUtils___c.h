#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_727381C54DC8F89E;
namespace RPG::Client { class EvolveBuildMixData; }
namespace RPG::Client { class EvolveBuildScMixData; }
namespace RPG::GameCore { class EvolveBuildGearEquipInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_EVOLVEBUILDUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x91ACAF0)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__COUNTUNLOCKEDSLOTNUM_B__18_0_OFFSET UNITYSDK_OFFSET(0x91ACF80)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x91ACB30)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__GETSORTEDGEAREQUIPINFO_B__1_0_OFFSET UNITYSDK_OFFSET(0x91ACB40)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__GETSORTEDMIXDATASC_B__8_0_OFFSET UNITYSDK_OFFSET(0x91ACD60)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__GETSORTEDMIXDATA_B__7_0_OFFSET UNITYSDK_OFFSET(0x91ACB70)
#define RPG_CLIENT_EVOLVEBUILDUTILS___C__SLOTINFOS2GEAREQUIPINFOS_B__17_0_OFFSET UNITYSDK_OFFSET(0x91ACF50)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildUtils___c_TypeDefinitionIndex = 50725;

	class EvolveBuildUtils___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::EvolveBuildMixData*>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::Client::EvolveBuildMixData*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildUtils___c_TypeDefinitionIndex)->GetStaticField(0x40BB0);
		}
		static ::System::Func_2<::RPG::GameCore::EvolveBuildGearEquipInfo*, ::System::UInt32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::GameCore::EvolveBuildGearEquipInfo*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildUtils___c_TypeDefinitionIndex)->GetStaticField(0x40BB8);
		}
		static ::System::Func_2<::Class_1_727381C54DC8F89E*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::Class_1_727381C54DC8F89E*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildUtils___c_TypeDefinitionIndex)->GetStaticField(0x40BC0);
		}
		static ::RPG::Client::EvolveBuildUtils___c** StaticGet___9()
		{
			return (::RPG::Client::EvolveBuildUtils___c**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildUtils___c_TypeDefinitionIndex)->GetStaticField(0x40BC8);
		}
		static ::System::Comparison_1<::RPG::Client::EvolveBuildScMixData*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::Client::EvolveBuildScMixData*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildUtils___c_TypeDefinitionIndex)->GetStaticField(0x40BD0);
		}
		static ::System::Func_2<::Class_1_727381C54DC8F89E*, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::Class_1_727381C54DC8F89E*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildUtils___c_TypeDefinitionIndex)->GetStaticField(0x40BD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetSortedGearEquipInfo_b__1_0(::RPG::GameCore::EvolveBuildGearEquipInfo* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::EvolveBuildGearEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__GETSORTEDGEAREQUIPINFO_B__1_0_OFFSET))(this, x);
		}

		::System::Int32 _GetSortedMixData_b__7_0(::RPG::Client::EvolveBuildMixData* mixDataA, ::RPG::Client::EvolveBuildMixData* mixDataB)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildMixData*, ::RPG::Client::EvolveBuildMixData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__GETSORTEDMIXDATA_B__7_0_OFFSET))(this, mixDataA, mixDataB);
		}

		::System::Int32 _GetSortedMixDataSC_b__8_0(::RPG::Client::EvolveBuildScMixData* mixDataA, ::RPG::Client::EvolveBuildScMixData* mixDataB)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::EvolveBuildScMixData*, ::RPG::Client::EvolveBuildScMixData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__GETSORTEDMIXDATASC_B__8_0_OFFSET))(this, mixDataA, mixDataB);
		}

		::System::Boolean _SlotInfos2GearEquipInfos_b__17_0(::Class_1_727381C54DC8F89E* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_727381C54DC8F89E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__SLOTINFOS2GEAREQUIPINFOS_B__17_0_OFFSET))(this, x);
		}

		::System::Boolean _CountUnlockedSlotNum_b__18_0(::Class_1_727381C54DC8F89E* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_727381C54DC8F89E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDUTILS___C__COUNTUNLOCKEDSLOTNUM_B__18_0_OFFSET))(this, x);
		}
	};
}
