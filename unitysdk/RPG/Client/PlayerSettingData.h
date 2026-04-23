#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_28.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PLAYERSETTINGDATA_GET_AUTOPROTECTEQUIPMENTRARITY4_OFFSET UNITYSDK_OFFSET(0x12741620)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_CLOSERELICAFFIXHIGHTLIGHT_OFFSET UNITYSDK_OFFSET(0x12741740)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x12741660)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x12741680)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYDIARY_OFFSET UNITYSDK_OFFSET(0x127416E0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYONLINESTATUS_OFFSET UNITYSDK_OFFSET(0x12741720)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYRECORDTYPE_OFFSET UNITYSDK_OFFSET(0x127416C0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYRECORD_OFFSET UNITYSDK_OFFSET(0x127416A0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWENTERONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x12741860)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWOPENONLINECAKEBOX_OFFSET UNITYSDK_OFFSET(0x12741880)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWSTRANGERVISIT_OFFSET UNITYSDK_OFFSET(0x127418A0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSEAVATARLOOKAT_OFFSET UNITYSDK_OFFSET(0x12741640)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSEGOODRELICHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x12741760)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSESELECTAVATARGOODRELICHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x12741780)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISDISPLAYHEADFRAME_OFFSET UNITYSDK_OFFSET(0x127417A0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISEQUIPMENTUPCOSTPILE_OFFSET UNITYSDK_OFFSET(0x12741820)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISFARMSTAGEAUTOADDSTAMINA_OFFSET UNITYSDK_OFFSET(0x12741800)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISHIDESTRANGERASSIST_OFFSET UNITYSDK_OFFSET(0x12741840)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISSHOWTEAMASSOCIATION_OFFSET UNITYSDK_OFFSET(0x127417C0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_RELICAUTODECOMPOSERARITY_OFFSET UNITYSDK_OFFSET(0x127417E0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_UPLOADRECORDTEAM_OFFSET UNITYSDK_OFFSET(0x12741700)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_AUTOPROTECTEQUIPMENTRARITY4_OFFSET UNITYSDK_OFFSET(0x12741630)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_CLOSERELICAFFIXHIGHTLIGHT_OFFSET UNITYSDK_OFFSET(0x12741750)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x12741670)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x12741690)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYDIARY_OFFSET UNITYSDK_OFFSET(0x127416F0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYONLINESTATUS_OFFSET UNITYSDK_OFFSET(0x12741730)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYRECORDTYPE_OFFSET UNITYSDK_OFFSET(0x127416D0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYRECORD_OFFSET UNITYSDK_OFFSET(0x127416B0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWENTERONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x12741870)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWOPENONLINECAKEBOX_OFFSET UNITYSDK_OFFSET(0x12741890)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWSTRANGERVISIT_OFFSET UNITYSDK_OFFSET(0x127418B0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSEAVATARLOOKAT_OFFSET UNITYSDK_OFFSET(0x12741650)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSEGOODRELICHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x12741770)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSESELECTAVATARGOODRELICHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x12741790)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISDISPLAYHEADFRAME_OFFSET UNITYSDK_OFFSET(0x127417B0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISEQUIPMENTUPCOSTPILE_OFFSET UNITYSDK_OFFSET(0x12741830)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISFARMSTAGEAUTOADDSTAMINA_OFFSET UNITYSDK_OFFSET(0x12741810)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISHIDESTRANGERASSIST_OFFSET UNITYSDK_OFFSET(0x12741850)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISSHOWTEAMASSOCIATION_OFFSET UNITYSDK_OFFSET(0x127417D0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_RELICAUTODECOMPOSERARITY_OFFSET UNITYSDK_OFFSET(0x127417F0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_UPLOADRECORDTEAM_OFFSET UNITYSDK_OFFSET(0x12741710)
#define RPG_CLIENT_PLAYERSETTINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1273DD50)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerSettingData_TypeDefinitionIndex = 61449;

	class PlayerSettingData : public ::System::Object
	{
	public:
		::System::Boolean _IsDisplayHeadFrame_k__BackingField; // 0x10
		::System::Boolean _AutoProtectEquipmentRarity4_k__BackingField; // 0x11
		::System::Boolean _IsAllowOpenOnlineCakeBox_k__BackingField; // 0x12
		::System::Boolean _IsEquipmentUpCostPile_k__BackingField; // 0x13
		::System::Boolean _DisplayOnlineStatus_k__BackingField; // 0x14
		::System::Boolean _DisplayBirthday_k__BackingField; // 0x15
		::System::Boolean _DisplayRecord_k__BackingField; // 0x16
		::System::Boolean _IsAllowEnterOnlinePlayRoom_k__BackingField; // 0x17
		::System::Boolean _DisplayCollection_k__BackingField; // 0x18
		::System::Boolean _IsAllowStrangerVisit_k__BackingField; // 0x19
		::System::Boolean _IsCloseAvatarLookAt_k__BackingField; // 0x1A
		::System::Boolean _IsFarmStageAutoAddStamina_k__BackingField; // 0x1B
		::System::UInt32 _RelicAutoDecomposeRarity_k__BackingField; // 0x1C
		::System::Boolean _IsCloseSelectAvatarGoodRelicHighlight_k__BackingField; // 0x20
		::System::Boolean _DisplayDiary_k__BackingField; // 0x21
		::System::Boolean _IsHideStrangerAssist_k__BackingField; // 0x22
		::System::Boolean _IsShowTeamAssociation_k__BackingField; // 0x23
		::System::Boolean _IsCloseGoodRelicHighLight_k__BackingField; // 0x24
		::System::Boolean _UploadRecordTeam_k__BackingField; // 0x25
		::System::Boolean _CloseRelicAffixHightLight_k__BackingField; // 0x26
		::Enum_3_0A3761FE34514D6C_28 _DisplayRecordType_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AutoProtectEquipmentRarity4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_AUTOPROTECTEQUIPMENTRARITY4_OFFSET))(this);
		}

		::System::Void set_AutoProtectEquipmentRarity4(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_AUTOPROTECTEQUIPMENTRARITY4_OFFSET))(this, value);
		}

		::System::Boolean get_IsCloseAvatarLookAt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSEAVATARLOOKAT_OFFSET))(this);
		}

		::System::Void set_IsCloseAvatarLookAt(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSEAVATARLOOKAT_OFFSET))(this, value);
		}

		::System::Boolean get_DisplayBirthday()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYBIRTHDAY_OFFSET))(this);
		}

		::System::Void set_DisplayBirthday(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYBIRTHDAY_OFFSET))(this, value);
		}

		::System::Boolean get_DisplayCollection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYCOLLECTION_OFFSET))(this);
		}

		::System::Void set_DisplayCollection(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYCOLLECTION_OFFSET))(this, value);
		}

		::System::Boolean get_DisplayRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYRECORD_OFFSET))(this);
		}

		::System::Void set_DisplayRecord(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYRECORD_OFFSET))(this, value);
		}

		::Enum_3_0A3761FE34514D6C_28 get_DisplayRecordType()
		{
			return ((::Enum_3_0A3761FE34514D6C_28(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYRECORDTYPE_OFFSET))(this);
		}

		::System::Void set_DisplayRecordType(::Enum_3_0A3761FE34514D6C_28 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYRECORDTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_DisplayDiary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYDIARY_OFFSET))(this);
		}

		::System::Void set_DisplayDiary(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYDIARY_OFFSET))(this, value);
		}

		::System::Boolean get_UploadRecordTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_UPLOADRECORDTEAM_OFFSET))(this);
		}

		::System::Void set_UploadRecordTeam(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_UPLOADRECORDTEAM_OFFSET))(this, value);
		}

		::System::Boolean get_DisplayOnlineStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYONLINESTATUS_OFFSET))(this);
		}

		::System::Void set_DisplayOnlineStatus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYONLINESTATUS_OFFSET))(this, value);
		}

		::System::Boolean get_CloseRelicAffixHightLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_CLOSERELICAFFIXHIGHTLIGHT_OFFSET))(this);
		}

		::System::Void set_CloseRelicAffixHightLight(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_CLOSERELICAFFIXHIGHTLIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_IsCloseGoodRelicHighLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSEGOODRELICHIGHLIGHT_OFFSET))(this);
		}

		::System::Void set_IsCloseGoodRelicHighLight(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSEGOODRELICHIGHLIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_IsCloseSelectAvatarGoodRelicHighlight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSESELECTAVATARGOODRELICHIGHLIGHT_OFFSET))(this);
		}

		::System::Void set_IsCloseSelectAvatarGoodRelicHighlight(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSESELECTAVATARGOODRELICHIGHLIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_IsDisplayHeadFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISDISPLAYHEADFRAME_OFFSET))(this);
		}

		::System::Void set_IsDisplayHeadFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISDISPLAYHEADFRAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsShowTeamAssociation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISSHOWTEAMASSOCIATION_OFFSET))(this);
		}

		::System::Void set_IsShowTeamAssociation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISSHOWTEAMASSOCIATION_OFFSET))(this, value);
		}

		::System::UInt32 get_RelicAutoDecomposeRarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_RELICAUTODECOMPOSERARITY_OFFSET))(this);
		}

		::System::Void set_RelicAutoDecomposeRarity(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_RELICAUTODECOMPOSERARITY_OFFSET))(this, value);
		}

		::System::Boolean get_IsFarmStageAutoAddStamina()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISFARMSTAGEAUTOADDSTAMINA_OFFSET))(this);
		}

		::System::Void set_IsFarmStageAutoAddStamina(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISFARMSTAGEAUTOADDSTAMINA_OFFSET))(this, value);
		}

		::System::Boolean get_IsEquipmentUpCostPile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISEQUIPMENTUPCOSTPILE_OFFSET))(this);
		}

		::System::Void set_IsEquipmentUpCostPile(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISEQUIPMENTUPCOSTPILE_OFFSET))(this, value);
		}

		::System::Boolean get_IsHideStrangerAssist()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISHIDESTRANGERASSIST_OFFSET))(this);
		}

		::System::Void set_IsHideStrangerAssist(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISHIDESTRANGERASSIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllowEnterOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWENTERONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Void set_IsAllowEnterOnlinePlayRoom(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWENTERONLINEPLAYROOM_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllowOpenOnlineCakeBox()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWOPENONLINECAKEBOX_OFFSET))(this);
		}

		::System::Void set_IsAllowOpenOnlineCakeBox(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWOPENONLINECAKEBOX_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllowStrangerVisit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_GET_ISALLOWSTRANGERVISIT_OFFSET))(this);
		}

		::System::Void set_IsAllowStrangerVisit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERSETTINGDATA_SET_ISALLOWSTRANGERVISIT_OFFSET))(this, value);
		}
	};
}
