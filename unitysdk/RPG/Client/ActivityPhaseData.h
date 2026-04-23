#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DocumentaryPhaseQuestPanelRow; }

#define RPG_CLIENT_ACTIVITYPHASEDATA_GETRECEIVABLECOUNT_OFFSET UNITYSDK_OFFSET(0x170764C0)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_BEFOREID_OFFSET UNITYSDK_OFFSET(0x17075F60)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x17075C20)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x17075D20)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_EXTRALOCKED_OFFSET UNITYSDK_OFFSET(0x17075F90)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_EXTRAQUEST_OFFSET UNITYSDK_OFFSET(0x17075EF0)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_FINISHEDQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0x17075FC0)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_HAVEBEFORE_OFFSET UNITYSDK_OFFSET(0x17075F80)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_HAVENEXT_OFFSET UNITYSDK_OFFSET(0x17075E10)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_ISALLFINISH_OFFSET UNITYSDK_OFFSET(0x17076450)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_ISEXTRAAVAILABLE_OFFSET UNITYSDK_OFFSET(0x17076330)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_ISEXTRACLOSED_OFFSET UNITYSDK_OFFSET(0x170761A0)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17075CA0)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_NEXTLOCKED_OFFSET UNITYSDK_OFFSET(0x17076190)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_NEXTPHASE_OFFSET UNITYSDK_OFFSET(0x17075DA0)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_QUESTLIST_OFFSET UNITYSDK_OFFSET(0x17075E80)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x17075C40)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x170762C0)
#define RPG_CLIENT_ACTIVITYPHASEDATA_GET_TOTALQUESTCOUNT_OFFSET UNITYSDK_OFFSET(0x170760E0)
#define RPG_CLIENT_ACTIVITYPHASEDATA_SET_BEFOREID_OFFSET UNITYSDK_OFFSET(0x17075F70)
#define RPG_CLIENT_ACTIVITYPHASEDATA_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x17075C30)
#define RPG_CLIENT_ACTIVITYPHASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17075C10)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPhaseData_TypeDefinitionIndex = 56894;

	class ActivityPhaseData : public ::System::Object
	{
	public:
		::System::UInt32 _BeforeID_k__BackingField; // 0x10
		::System::UInt32 _ConfigID_k__BackingField; // 0x14

		::System::Void _ctor(::System::UInt32 configId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA__CTOR_OFFSET))(this, configId);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_SET_CONFIGID_OFFSET))(this, value);
		}

		::RPG::GameCore::DocumentaryPhaseQuestPanelRow* get_Row()
		{
			return ((::RPG::GameCore::DocumentaryPhaseQuestPanelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_NextPhase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_NEXTPHASE_OFFSET))(this);
		}

		::System::Boolean get_HaveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_HAVENEXT_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_QuestList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_QUESTLIST_OFFSET))(this);
		}

		::System::UInt32 get_ExtraQuest()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_EXTRAQUEST_OFFSET))(this);
		}

		::System::UInt32 get_BeforeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_BEFOREID_OFFSET))(this);
		}

		::System::Void set_BeforeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_SET_BEFOREID_OFFSET))(this, value);
		}

		::System::Boolean get_HaveBefore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_HAVEBEFORE_OFFSET))(this);
		}

		::System::Boolean get_ExtraLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_EXTRALOCKED_OFFSET))(this);
		}

		::System::Boolean get_NextLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_NEXTLOCKED_OFFSET))(this);
		}

		::System::UInt32 get_TotalQuestCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_TOTALQUESTCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_FinishedQuestCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_FINISHEDQUESTCOUNT_OFFSET))(this);
		}

		::System::Single get_TotalProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsExtraAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_ISEXTRAAVAILABLE_OFFSET))(this);
		}

		::System::Boolean get_IsExtraClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_ISEXTRACLOSED_OFFSET))(this);
		}

		::System::Boolean get_IsAllFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GET_ISALLFINISH_OFFSET))(this);
		}

		::System::UInt32 GetReceivableCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPHASEDATA_GETRECEIVABLECOUNT_OFFSET))(this);
		}
	};
}
