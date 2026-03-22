#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_28.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PLAYERSETTINGDATA_GET_AUTOPROTECTEQUIPMENTRARITY4_OFFSET UNITYSDK_OFFSET(0x9B287A0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_CLOSERELICAFFIXHIGHTLIGHT_OFFSET UNITYSDK_OFFSET(0x9B288C0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x9B287E0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9B28800)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYDIARY_OFFSET UNITYSDK_OFFSET(0x9B28860)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYONLINESTATUS_OFFSET UNITYSDK_OFFSET(0x9B288A0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYRECORDTYPE_OFFSET UNITYSDK_OFFSET(0x9B28840)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_DISPLAYRECORD_OFFSET UNITYSDK_OFFSET(0x9B28820)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSEAVATARLOOKAT_OFFSET UNITYSDK_OFFSET(0x9B287C0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSEGOODRELICHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x9B288E0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISCLOSESELECTAVATARGOODRELICHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x9B28900)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISDISPLAYHEADFRAME_OFFSET UNITYSDK_OFFSET(0x9B28920)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISEQUIPMENTUPCOSTPILE_OFFSET UNITYSDK_OFFSET(0x9B289A0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISFARMSTAGEAUTOADDSTAMINA_OFFSET UNITYSDK_OFFSET(0x9B28980)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISHIDESTRANGERASSIST_OFFSET UNITYSDK_OFFSET(0x9B289C0)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_ISSHOWTEAMASSOCIATION_OFFSET UNITYSDK_OFFSET(0x9B28940)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_RELICAUTODECOMPOSERARITY_OFFSET UNITYSDK_OFFSET(0x9B28960)
#define RPG_CLIENT_PLAYERSETTINGDATA_GET_UPLOADRECORDTEAM_OFFSET UNITYSDK_OFFSET(0x9B28880)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_AUTOPROTECTEQUIPMENTRARITY4_OFFSET UNITYSDK_OFFSET(0x9B287B0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_CLOSERELICAFFIXHIGHTLIGHT_OFFSET UNITYSDK_OFFSET(0x9B288D0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x9B287F0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9B28810)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYDIARY_OFFSET UNITYSDK_OFFSET(0x9B28870)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYONLINESTATUS_OFFSET UNITYSDK_OFFSET(0x9B288B0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYRECORDTYPE_OFFSET UNITYSDK_OFFSET(0x9B28850)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_DISPLAYRECORD_OFFSET UNITYSDK_OFFSET(0x9B28830)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSEAVATARLOOKAT_OFFSET UNITYSDK_OFFSET(0x9B287D0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSEGOODRELICHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x9B288F0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISCLOSESELECTAVATARGOODRELICHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x9B28910)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISDISPLAYHEADFRAME_OFFSET UNITYSDK_OFFSET(0x9B28930)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISEQUIPMENTUPCOSTPILE_OFFSET UNITYSDK_OFFSET(0x9B289B0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISFARMSTAGEAUTOADDSTAMINA_OFFSET UNITYSDK_OFFSET(0x9B28990)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISHIDESTRANGERASSIST_OFFSET UNITYSDK_OFFSET(0x9B289D0)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_ISSHOWTEAMASSOCIATION_OFFSET UNITYSDK_OFFSET(0x9B28950)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_RELICAUTODECOMPOSERARITY_OFFSET UNITYSDK_OFFSET(0x9B28970)
#define RPG_CLIENT_PLAYERSETTINGDATA_SET_UPLOADRECORDTEAM_OFFSET UNITYSDK_OFFSET(0x9B28890)
#define RPG_CLIENT_PLAYERSETTINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B25AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerSettingData_TypeDefinitionIndex = 53147;

	class PlayerSettingData : public ::System::Object
	{
	public:
		::System::Boolean _DisplayRecord_k__BackingField; // 0x10
		::System::Boolean _DisplayDiary_k__BackingField; // 0x11
		::System::Boolean _AutoProtectEquipmentRarity4_k__BackingField; // 0x12
		::System::Boolean _IsCloseAvatarLookAt_k__BackingField; // 0x13
		::Enum_3_0A3761FE34514D6C_28 _DisplayRecordType_k__BackingField; // 0x14
		::System::Boolean _UploadRecordTeam_k__BackingField; // 0x18
		::System::Boolean _IsCloseGoodRelicHighLight_k__BackingField; // 0x19
		::System::Boolean _DisplayCollection_k__BackingField; // 0x1A
		::System::Boolean _DisplayBirthday_k__BackingField; // 0x1B
		::System::UInt32 _RelicAutoDecomposeRarity_k__BackingField; // 0x1C
		::System::Boolean _IsEquipmentUpCostPile_k__BackingField; // 0x20
		::System::Boolean _IsShowTeamAssociation_k__BackingField; // 0x21
		::System::Boolean _CloseRelicAffixHightLight_k__BackingField; // 0x22
		::System::Boolean _IsHideStrangerAssist_k__BackingField; // 0x23
		::System::Boolean _DisplayOnlineStatus_k__BackingField; // 0x24
		::System::Boolean _IsFarmStageAutoAddStamina_k__BackingField; // 0x25
		::System::Boolean _IsDisplayHeadFrame_k__BackingField; // 0x26
		::System::Boolean _IsCloseSelectAvatarGoodRelicHighlight_k__BackingField; // 0x27

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
	};
}
