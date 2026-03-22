#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_657;
class Class_1_C691E63EC08C4628;
class Class_1_E7C4009BCC22497A_72;
class Class_1_FA4F4A67B1C04320_163;
class Class_1_FA4F4A67B1C04320_693;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueBuffEnhanceItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEBUFFINFO_COUNTACHIVEDBUFFBYBUFFTYPE_OFFSET UNITYSDK_OFFSET(0x9DDB640)
#define RPG_CLIENT_ROGUEBUFFINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DDB0F0)
#define RPG_CLIENT_ROGUEBUFFINFO_GETACHIVEDBUFFLIST_OFFSET UNITYSDK_OFFSET(0x9DDB480)
#define RPG_CLIENT_ROGUEBUFFINFO_GETACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0x9DDB4E0)
#define RPG_CLIENT_ROGUEBUFFINFO_GETROGUEBUFFENHANCEITEM_OFFSET UNITYSDK_OFFSET(0x9DDB840)
#define RPG_CLIENT_ROGUEBUFFINFO_GET_ACHIVEDBUFFS_OFFSET UNITYSDK_OFFSET(0x9DDB7E0)
#define RPG_CLIENT_ROGUEBUFFINFO_GET_BUFFACHIVEDDATA_OFFSET UNITYSDK_OFFSET(0x9DDB8A0)
#define RPG_CLIENT_ROGUEBUFFINFO_GET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x9DDB8C0)
#define RPG_CLIENT_ROGUEBUFFINFO_HASACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0x9DDB5E0)
#define RPG_CLIENT_ROGUEBUFFINFO_REFRESHACHIVEDBUFFS_1_OFFSET UNITYSDK_OFFSET(0x9DDB330)
#define RPG_CLIENT_ROGUEBUFFINFO_REFRESHACHIVEDBUFFS_OFFSET UNITYSDK_OFFSET(0x9DDB1E0)
#define RPG_CLIENT_ROGUEBUFFINFO_REFRESHORADDACHIVEDBUFF_1_OFFSET UNITYSDK_OFFSET(0x9DDB3A0)
#define RPG_CLIENT_ROGUEBUFFINFO_REFRESHORADDACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0x9DDB250)
#define RPG_CLIENT_ROGUEBUFFINFO_REMOVEACHIVEDBUFF_1_OFFSET UNITYSDK_OFFSET(0x9DDB410)
#define RPG_CLIENT_ROGUEBUFFINFO_REMOVEACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0x9DDB2C0)
#define RPG_CLIENT_ROGUEBUFFINFO_SETSENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x9DDB0A0)
#define RPG_CLIENT_ROGUEBUFFINFO_SET_BUFFACHIVEDDATA_OFFSET UNITYSDK_OFFSET(0x9DDB8B0)
#define RPG_CLIENT_ROGUEBUFFINFO_SET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x9DDB8D0)
#define RPG_CLIENT_ROGUEBUFFINFO_SYNCACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0x9DDB150)
#define RPG_CLIENT_ROGUEBUFFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9DDB060)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffInfo_TypeDefinitionIndex = 53400;

	class RogueBuffInfo : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_657* _SendPacketCmd_k__BackingField; // 0x10
		::Class_1_C691E63EC08C4628* _BuffAchivedData_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO__CTOR_OFFSET))(this);
		}

		::System::Void SetSendPacketCmd(::Class_0_16E4307DCC419505_657* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_657*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_SETSENDPACKETCMD_OFFSET))(this, cmd);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAchivedBuff(::Class_1_E7C4009BCC22497A_72* gameBuffInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_72*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_SYNCACHIVEDBUFF_OFFSET))(this, gameBuffInfo);
		}

		::System::Void RefreshAchivedBuffs(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_693*>* buffList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_693*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REFRESHACHIVEDBUFFS_OFFSET))(this, buffList);
		}

		::System::Void RefreshOrAddAchivedBuff(::Class_1_FA4F4A67B1C04320_693* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_693*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REFRESHORADDACHIVEDBUFF_OFFSET))(this, proto);
		}

		::System::Void RemoveAchivedBuff(::Class_1_FA4F4A67B1C04320_693* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_693*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REMOVEACHIVEDBUFF_OFFSET))(this, proto);
		}

		::System::Void RefreshAchivedBuffs_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_163*>* buffList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_FA4F4A67B1C04320_163*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REFRESHACHIVEDBUFFS_1_OFFSET))(this, buffList);
		}

		::System::Void RefreshOrAddAchivedBuff_1(::Class_1_FA4F4A67B1C04320_163* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_163*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REFRESHORADDACHIVEDBUFF_1_OFFSET))(this, proto);
		}

		::System::Void RemoveAchivedBuff_1(::Class_1_FA4F4A67B1C04320_163* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_163*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REMOVEACHIVEDBUFF_1_OFFSET))(this, proto);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* GetAchivedBuffList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_GETACHIVEDBUFFLIST_OFFSET))(this);
		}

		::RPG::Client::RogueBuffData* GetAchivedBuff(::System::UInt32 buffID)
		{
			return ((::RPG::Client::RogueBuffData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_GETACHIVEDBUFF_OFFSET))(this, buffID);
		}

		::System::Boolean HasAchivedBuff(::System::UInt32 buffID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_HASACHIVEDBUFF_OFFSET))(this, buffID);
		}

		::System::UInt32 CountAchivedBuffByBuffType(::System::UInt32 buffTypeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_COUNTACHIVEDBUFFBYBUFFTYPE_OFFSET))(this, buffTypeID);
		}

		::RPG::Client::RogueBuffEnhanceItem* GetRogueBuffEnhanceItem(::System::UInt32 buffID)
		{
			return ((::RPG::Client::RogueBuffEnhanceItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_GETROGUEBUFFENHANCEITEM_OFFSET))(this, buffID);
		}

		::Class_1_C691E63EC08C4628* get_BuffAchivedData()
		{
			return ((::Class_1_C691E63EC08C4628*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_GET_BUFFACHIVEDDATA_OFFSET))(this);
		}

		::System::Void set_BuffAchivedData(::Class_1_C691E63EC08C4628* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C691E63EC08C4628*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_SET_BUFFACHIVEDDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* get_AchivedBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_GET_ACHIVEDBUFFS_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_657* get_SendPacketCmd()
		{
			return ((::Class_0_16E4307DCC419505_657*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_GET_SENDPACKETCMD_OFFSET))(this);
		}

		::System::Void set_SendPacketCmd(::Class_0_16E4307DCC419505_657* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_657*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_SET_SENDPACKETCMD_OFFSET))(this, value);
		}
	};
}
