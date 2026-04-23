#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_29.h"
#include "unitysdk/RPG/Client/RogueSelectSourceType.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_10;
class Class_1_455008579EB95638_89;
class Class_1_B872C5A8501F8C99;
namespace Proto { class ItemCost; }
namespace RPG::Client { class RogueBuffData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEBUFFSELECTACTION_GETROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1772ABC0)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_GETUIPATH_OFFSET UNITYSDK_OFFSET(0x1772AC60)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_CANROLL_OFFSET UNITYSDK_OFFSET(0x1772A440)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_FORCESELECTBUFFID_OFFSET UNITYSDK_OFFSET(0x1772A4C0)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1772A320)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_ROLLBUFFCOSTS_OFFSET UNITYSDK_OFFSET(0x1772A4A0)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_ROLLBUFFMAXTIMES_OFFSET UNITYSDK_OFFSET(0x1772A480)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_ROLLBUFFTIMES_OFFSET UNITYSDK_OFFSET(0x1772A460)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_SELECTBUFFSOURCECURCOUNT_OFFSET UNITYSDK_OFFSET(0x1772A3E0)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_SELECTBUFFSOURCEHINTID_OFFSET UNITYSDK_OFFSET(0x1772A3C0)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_SELECTBUFFSOURCETOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1772A400)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_SELECTBUFFS_OFFSET UNITYSDK_OFFSET(0x1772A360)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_SELECTFIRSTBUFFTYPELIST_OFFSET UNITYSDK_OFFSET(0x1772A420)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_SELECTSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1772A340)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_REFRESHONROLLRSP_OFFSET UNITYSDK_OFFSET(0x1772A600)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_SENDSELECTREQUEST_OFFSET UNITYSDK_OFFSET(0x1772A6D0)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_SET_ROGUEACTIONID_OFFSET UNITYSDK_OFFSET(0x1772A330)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_SET_SELECTSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1772A350)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_TRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x1772AC00)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION_TRYSHOWBUFFAEONFIRSTTALK_OFFSET UNITYSDK_OFFSET(0x1772AA60)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1772A5A0)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1772A4E0)
#define RPG_CLIENT_ROGUEBUFFSELECTACTION__REPORTSDKSELECTION_OFFSET UNITYSDK_OFFSET(0x1772A810)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffSelectAction_TypeDefinitionIndex = 61693;

	class RogueBuffSelectAction : public ::System::Object
	{
	public:
		::Class_1_B872C5A8501F8C99* _BuffSelectData; // 0x10
		::Enum_3_4608E37A1B3D374A_29 _SelectSourceType_k__BackingField; // 0x18
		::System::UInt32 _RogueActionID_k__BackingField; // 0x1C
		::RPG::Client::RogueSelectSourceType _SourceType; // 0x20

		::System::Void _ctor(::System::UInt32 actionID, ::Class_1_14E02E1F6D70E487_10* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_14E02E1F6D70E487_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION__CTOR_OFFSET))(this, actionID, proto);
		}

		::System::Void _ctor_1(::System::UInt32 actionID, ::Class_1_455008579EB95638_89* proto)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_455008579EB95638_89*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION__CTOR_1_OFFSET))(this, actionID, proto);
		}

		::System::UInt32 get_RogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_ROGUEACTIONID_OFFSET))(this);
		}

		::System::Void set_RogueActionID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_SET_ROGUEACTIONID_OFFSET))(this, value);
		}

		::Enum_3_4608E37A1B3D374A_29 get_SelectSourceType()
		{
			return ((::Enum_3_4608E37A1B3D374A_29(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_SELECTSOURCETYPE_OFFSET))(this);
		}

		::System::Void set_SelectSourceType(::Enum_3_4608E37A1B3D374A_29 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_4608E37A1B3D374A_29))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_SET_SELECTSOURCETYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* get_SelectBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_SELECTBUFFS_OFFSET))(this);
		}

		::System::UInt32 get_SelectBuffSourceHintID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_SELECTBUFFSOURCEHINTID_OFFSET))(this);
		}

		::System::UInt32 get_SelectBuffSourceCurCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_SELECTBUFFSOURCECURCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_SelectBuffSourceTotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_SELECTBUFFSOURCETOTALCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SelectFirstBuffTypeList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_SELECTFIRSTBUFFTYPELIST_OFFSET))(this);
		}

		::System::Boolean get_CanRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_CANROLL_OFFSET))(this);
		}

		::System::UInt32 get_RollBuffTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_ROLLBUFFTIMES_OFFSET))(this);
		}

		::System::UInt32 get_RollBuffMaxTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_ROLLBUFFMAXTIMES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Proto::ItemCost*>* get_RollBuffCosts()
		{
			return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_ROLLBUFFCOSTS_OFFSET))(this);
		}

		::System::UInt32 get_ForceSelectBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_GET_FORCESELECTBUFFID_OFFSET))(this);
		}

		::System::Void RefreshOnRollRsp(::Class_1_14E02E1F6D70E487_10* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_REFRESHONROLLRSP_OFFSET))(this, proto);
		}

		::System::Void SendSelectRequest(::System::UInt32 selectBuffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_SENDSELECTREQUEST_OFFSET))(this, selectBuffID);
		}

		::System::Void TryShowBuffAeonFirstTalk()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_TRYSHOWBUFFAEONFIRSTTALK_OFFSET))(this);
		}

		::System::UInt32 GetRogueActionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_GETROGUEACTIONID_OFFSET))(this);
		}

		::System::Void TriggerAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_TRIGGERACTION_OFFSET))(this);
		}

		::System::String* GetUIPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION_GETUIPATH_OFFSET))(this);
		}

		::System::Void _ReportSDKSelection(::System::UInt32 selectBuffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFSELECTACTION__REPORTSDKSELECTION_OFFSET))(this, selectBuffID);
		}
	};
}
