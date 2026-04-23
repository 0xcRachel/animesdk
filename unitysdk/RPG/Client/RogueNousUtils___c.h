#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class RogueNousDiceSlotDataItem; }
namespace RPG::GameCore { class DynamicValue; }
namespace RPG::GameCore { class RogueNousAeonRow; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUENOUSUTILS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x163622D0)
#define RPG_CLIENT_ROGUENOUSUTILS___C__CHECKLOCKMAINMISSIONSALLFINISHED_B__17_0_OFFSET UNITYSDK_OFFSET(0x16362380)
#define RPG_CLIENT_ROGUENOUSUTILS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16362310)
#define RPG_CLIENT_ROGUENOUSUTILS___C__GETROGUENOUSACCESSIBLEAEONROWSORTEDLIST_B__8_0_OFFSET UNITYSDK_OFFSET(0x16362320)
#define RPG_CLIENT_ROGUENOUSUTILS___C__GETSLOTDATAITEMSORDERBYSLOTID_B__10_0_OFFSET UNITYSDK_OFFSET(0x16362360)
#define RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_0_OFFSET UNITYSDK_OFFSET(0x163623E0)
#define RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_1_OFFSET UNITYSDK_OFFSET(0x16362490)
#define RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_2_OFFSET UNITYSDK_OFFSET(0x163624A0)
#define RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_3_OFFSET UNITYSDK_OFFSET(0x163624C0)
#define RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_4_OFFSET UNITYSDK_OFFSET(0x163624E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousUtils___c_TypeDefinitionIndex = 62190;

	class RogueNousUtils___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueNousUtils___c** StaticGet___9()
		{
			return (::RPG::Client::RogueNousUtils___c**)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils___c_TypeDefinitionIndex)->GetStaticField(0x27C40);
		}
		static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>** StaticGet___9__19_3()
		{
			return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils___c_TypeDefinitionIndex)->GetStaticField(0x27C48);
		}
		static ::System::Func_2<::RPG::Client::RogueNousDiceSlotDataItem*, ::System::UInt32>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::Client::RogueNousDiceSlotDataItem*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils___c_TypeDefinitionIndex)->GetStaticField(0x27C50);
		}
		static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::Boolean>** StaticGet___9__19_4()
		{
			return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils___c_TypeDefinitionIndex)->GetStaticField(0x27C58);
		}
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils___c_TypeDefinitionIndex)->GetStaticField(0x27C60);
		}
		static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::Boolean>** StaticGet___9__19_2()
		{
			return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils___c_TypeDefinitionIndex)->GetStaticField(0x27C68);
		}
		static ::System::Func_2<::RPG::Client::MainMissionData*, ::System::Boolean>** StaticGet___9__19_1()
		{
			return (::System::Func_2<::RPG::Client::MainMissionData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils___c_TypeDefinitionIndex)->GetStaticField(0x27C70);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::MainMissionData*>** StaticGet___9__19_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::MainMissionData*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils___c_TypeDefinitionIndex)->GetStaticField(0x27C78);
		}
		static ::System::Comparison_1<::RPG::GameCore::RogueNousAeonRow*>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::RogueNousAeonRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousUtils___c_TypeDefinitionIndex)->GetStaticField(0x27C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetRogueNousAccessibleAeonRowSortedList_b__8_0(::RPG::GameCore::RogueNousAeonRow* a, ::RPG::GameCore::RogueNousAeonRow* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueNousAeonRow*, ::RPG::GameCore::RogueNousAeonRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C__GETROGUENOUSACCESSIBLEAEONROWSORTEDLIST_B__8_0_OFFSET))(this, a, b);
		}

		::System::UInt32 _GetSlotDataItemsOrderBySlotID_b__10_0(::RPG::Client::RogueNousDiceSlotDataItem* a)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueNousDiceSlotDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C__GETSLOTDATAITEMSORDERBYSLOTID_B__10_0_OFFSET))(this, a);
		}

		::System::UInt32 _CheckLockMainMissionsAllFinished_b__17_0(::RPG::GameCore::DynamicValue* dynVal)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C__CHECKLOCKMAINMISSIONSALLFINISHED_B__17_0_OFFSET))(this, dynVal);
		}

		::RPG::Client::MainMissionData* __CheckMainMissionAllFinished_b__19_0(::System::UInt32 id)
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_0_OFFSET))(this, id);
		}

		::System::Boolean __CheckMainMissionAllFinished_b__19_1(::RPG::Client::MainMissionData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_1_OFFSET))(this, data);
		}

		::System::Boolean __CheckMainMissionAllFinished_b__19_2(::RPG::Client::MainMissionData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_2_OFFSET))(this, data);
		}

		::System::UInt32 __CheckMainMissionAllFinished_b__19_3(::RPG::Client::MainMissionData* data)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_3_OFFSET))(this, data);
		}

		::System::Boolean __CheckMainMissionAllFinished_b__19_4(::RPG::Client::MainMissionData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSUTILS___C___CHECKMAINMISSIONALLFINISHED_B__19_4_OFFSET))(this, data);
		}
	};
}
