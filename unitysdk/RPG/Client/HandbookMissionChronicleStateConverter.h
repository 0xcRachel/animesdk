#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/HandbookMissionChronicleState.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class HandbookChronicleDisplayData; }
namespace RPG::Client { class MissionChronicleMainPathData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER_CONVERT_OFFSET UNITYSDK_OFFSET(0x152070F0)
#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER_GETMAINPATHSTATE_OFFSET UNITYSDK_OFFSET(0x15207780)
#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER_GETSUBITEMSTATE_OFFSET UNITYSDK_OFFSET(0x152077C0)
#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER_SETMAINPATH_OFFSET UNITYSDK_OFFSET(0x15206CD0)
#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER__CONVERTMAINPATHSTATE_OFFSET UNITYSDK_OFFSET(0x15207140)
#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER__CONVERTSUBDISPLAYDATASTATE_OFFSET UNITYSDK_OFFSET(0x15207490)
#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15206C40)
#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER__ISEARLYACCESSCANUNLOCK_OFFSET UNITYSDK_OFFSET(0x15207900)
#define RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER___CONVERTMAINPATHSTATE_B__5_0_OFFSET UNITYSDK_OFFSET(0x15207B60)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookMissionChronicleStateConverter_TypeDefinitionIndex = 60423;

	class HandbookMissionChronicleStateConverter : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HandbookMissionChronicleState>* _SubPathStateDict; // 0x10
		::RPG::Client::MissionChronicleMainPathData* _MainPath; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::HandbookChronicleDisplayData*>* _SortedDisplayDataList; // 0x20
		::RPG::Client::HandbookMissionChronicleState _MainPathState; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER__CTOR_OFFSET))(this);
		}

		::System::Void SetMainPath(::RPG::Client::MissionChronicleMainPathData* mainPath)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER_SETMAINPATH_OFFSET))(this, mainPath);
		}

		::System::Void Convert()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER_CONVERT_OFFSET))(this);
		}

		::RPG::Client::HandbookMissionChronicleState GetMainPathState()
		{
			return ((::RPG::Client::HandbookMissionChronicleState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER_GETMAINPATHSTATE_OFFSET))(this);
		}

		::RPG::Client::HandbookMissionChronicleState GetSubItemState(::System::UInt32 subItemID)
		{
			return ((::RPG::Client::HandbookMissionChronicleState(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER_GETSUBITEMSTATE_OFFSET))(this, subItemID);
		}

		::System::Void _ConvertMainPathState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER__CONVERTMAINPATHSTATE_OFFSET))(this);
		}

		::System::Void _ConvertSubDisplayDataState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER__CONVERTSUBDISPLAYDATASTATE_OFFSET))(this);
		}

		::System::Boolean _IsEarlyAccessCanUnlock(::RPG::Client::HandbookChronicleDisplayData* displayData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::HandbookChronicleDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER__ISEARLYACCESSCANUNLOCK_OFFSET))(this, displayData);
		}

		::System::Boolean __ConvertMainPathState_b__5_0(::RPG::Client::HandbookChronicleDisplayData* displayData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::HandbookChronicleDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKMISSIONCHRONICLESTATECONVERTER___CONVERTMAINPATHSTATE_B__5_0_OFFSET))(this, displayData);
		}
	};
}
