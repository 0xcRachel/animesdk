#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_819;
class Class_1_C691E63EC08C4628;
class Class_1_D17272E82AE804C2_193;
class Class_1_D17272E82AE804C2_755;
class Class_1_D40936EF3BF54118_77;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::Client { class RogueBuffEnhanceItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEBUFFINFO_COUNTACHIVEDBUFFBYBUFFTYPE_OFFSET UNITYSDK_OFFSET(0x17729C00)
#define RPG_CLIENT_ROGUEBUFFINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177296E0)
#define RPG_CLIENT_ROGUEBUFFINFO_GETACHIVEDBUFFLIST_OFFSET UNITYSDK_OFFSET(0x17729A70)
#define RPG_CLIENT_ROGUEBUFFINFO_GETACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0x17729AD0)
#define RPG_CLIENT_ROGUEBUFFINFO_GETROGUEBUFFENHANCEITEM_OFFSET UNITYSDK_OFFSET(0x17729E00)
#define RPG_CLIENT_ROGUEBUFFINFO_GET_ACHIVEDBUFFS_OFFSET UNITYSDK_OFFSET(0x17729DA0)
#define RPG_CLIENT_ROGUEBUFFINFO_GET_BUFFACHIVEDDATA_OFFSET UNITYSDK_OFFSET(0x17729E60)
#define RPG_CLIENT_ROGUEBUFFINFO_GET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x17729E80)
#define RPG_CLIENT_ROGUEBUFFINFO_HASACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0x17729BA0)
#define RPG_CLIENT_ROGUEBUFFINFO_REFRESHACHIVEDBUFFS_1_OFFSET UNITYSDK_OFFSET(0x17729920)
#define RPG_CLIENT_ROGUEBUFFINFO_REFRESHACHIVEDBUFFS_OFFSET UNITYSDK_OFFSET(0x177297D0)
#define RPG_CLIENT_ROGUEBUFFINFO_REFRESHORADDACHIVEDBUFF_1_OFFSET UNITYSDK_OFFSET(0x17729990)
#define RPG_CLIENT_ROGUEBUFFINFO_REFRESHORADDACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0x17729840)
#define RPG_CLIENT_ROGUEBUFFINFO_REMOVEACHIVEDBUFF_1_OFFSET UNITYSDK_OFFSET(0x17729A00)
#define RPG_CLIENT_ROGUEBUFFINFO_REMOVEACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0x177298B0)
#define RPG_CLIENT_ROGUEBUFFINFO_SETSENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x17729690)
#define RPG_CLIENT_ROGUEBUFFINFO_SET_BUFFACHIVEDDATA_OFFSET UNITYSDK_OFFSET(0x17729E70)
#define RPG_CLIENT_ROGUEBUFFINFO_SET_SENDPACKETCMD_OFFSET UNITYSDK_OFFSET(0x17729E90)
#define RPG_CLIENT_ROGUEBUFFINFO_SYNCACHIVEDBUFF_OFFSET UNITYSDK_OFFSET(0x17729740)
#define RPG_CLIENT_ROGUEBUFFINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17729650)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueBuffInfo_TypeDefinitionIndex = 61900;

	class RogueBuffInfo : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_819* _SendPacketCmd_k__BackingField; // 0x10
		::Class_1_C691E63EC08C4628* _BuffAchivedData_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO__CTOR_OFFSET))(this);
		}

		::System::Void SetSendPacketCmd(::Class_0_16E4307DCC419505_819* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_819*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_SETSENDPACKETCMD_OFFSET))(this, cmd);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncAchivedBuff(::Class_1_D40936EF3BF54118_77* gameBuffInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_77*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_SYNCACHIVEDBUFF_OFFSET))(this, gameBuffInfo);
		}

		::System::Void RefreshAchivedBuffs(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_755*>* buffList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_755*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REFRESHACHIVEDBUFFS_OFFSET))(this, buffList);
		}

		::System::Void RefreshOrAddAchivedBuff(::Class_1_D17272E82AE804C2_755* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_755*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REFRESHORADDACHIVEDBUFF_OFFSET))(this, proto);
		}

		::System::Void RemoveAchivedBuff(::Class_1_D17272E82AE804C2_755* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_755*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REMOVEACHIVEDBUFF_OFFSET))(this, proto);
		}

		::System::Void RefreshAchivedBuffs_1(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_193*>* buffList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_193*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REFRESHACHIVEDBUFFS_1_OFFSET))(this, buffList);
		}

		::System::Void RefreshOrAddAchivedBuff_1(::Class_1_D17272E82AE804C2_193* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_193*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REFRESHORADDACHIVEDBUFF_1_OFFSET))(this, proto);
		}

		::System::Void RemoveAchivedBuff_1(::Class_1_D17272E82AE804C2_193* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_193*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_REMOVEACHIVEDBUFF_1_OFFSET))(this, proto);
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

		::Class_0_16E4307DCC419505_819* get_SendPacketCmd()
		{
			return ((::Class_0_16E4307DCC419505_819*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_GET_SENDPACKETCMD_OFFSET))(this);
		}

		::System::Void set_SendPacketCmd(::Class_0_16E4307DCC419505_819* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_819*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEBUFFINFO_SET_SENDPACKETCMD_OFFSET))(this, value);
		}
	};
}
