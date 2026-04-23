#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"

class Class_1_0AC743E88BB51C0B;
class Class_1_D17272E82AE804C2_478;
class Class_3_1C169A0F2ACF26E7;
namespace RPG::Client::ActivityIdleLive { class IdleLiveAvatarData; }
namespace System { class String; }
namespace System { template <typename T> class EventHandler_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_ADD_PROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x17342070)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_CHECKHASAVATAR_OFFSET UNITYSDK_OFFSET(0x17342B90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_GETALLAVATARS_OFFSET UNITYSDK_OFFSET(0x17342EE0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_GETAVATARDATABYID_OFFSET UNITYSDK_OFFSET(0x17342C40)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_GETAVATARSBYPOSTYPE_OFFSET UNITYSDK_OFFSET(0x17342D20)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_GETMETAVATARCNT_OFFSET UNITYSDK_OFFSET(0x17342F50)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_GETSLOTLEVELBYSLOTID_OFFSET UNITYSDK_OFFSET(0x17342AF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_GET_ALLAVATARS_OFFSET UNITYSDK_OFFSET(0x17343000)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_GET_GOTAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0x17342FB0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_GET_TOTALAVATARCOUNT_OFFSET UNITYSDK_OFFSET(0x17342FA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_INIT_OFFSET UNITYSDK_OFFSET(0x17342210)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_ONPROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x17342130)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_REMOVE_PROTOCOLRECEIVED_OFFSET UNITYSDK_OFFSET(0x173420D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_UPDATEADDAVATAR_OFFSET UNITYSDK_OFFSET(0x17342340)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_UPDATEMGRINFO_OFFSET UNITYSDK_OFFSET(0x173426D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO__CREATEAVATAR_OFFSET UNITYSDK_OFFSET(0x173425E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17343070)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveAvatarInfo_TypeDefinitionIndex = 69136;

	class IdleLiveAvatarInfo : public ::System::Object
	{
	public:
		::System::EventHandler_1<::Class_3_1C169A0F2ACF26E7*>* ProtocolReceived; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*>* _AllAvatarDatas; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _SlotLevelDic; // 0x20
		::System::UInt32 _TotalAvatarCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO__CTOR_OFFSET))(this);
		}

		::System::Void add_ProtocolReceived(::System::EventHandler_1<::Class_3_1C169A0F2ACF26E7*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::Class_3_1C169A0F2ACF26E7*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_ADD_PROTOCOLRECEIVED_OFFSET))(this, value);
		}

		::System::Void remove_ProtocolReceived(::System::EventHandler_1<::Class_3_1C169A0F2ACF26E7*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::Class_3_1C169A0F2ACF26E7*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_REMOVE_PROTOCOLRECEIVED_OFFSET))(this, value);
		}

		::System::Void OnProtocolReceived(::System::String* propertyName, ::System::Object* protocolData)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_ONPROTOCOLRECEIVED_OFFSET))(this, propertyName, protocolData);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_INIT_OFFSET))(this);
		}

		::System::Void UpdateAddAvatar(::Class_1_D17272E82AE804C2_478* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_478*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_UPDATEADDAVATAR_OFFSET))(this, avatar);
		}

		::System::Void UpdateMgrInfo(::Class_1_0AC743E88BB51C0B* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0AC743E88BB51C0B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_UPDATEMGRINFO_OFFSET))(this, info);
		}

		::System::Int32 GetSlotLevelBySlotID(::System::UInt32 slotId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_GETSLOTLEVELBYSLOTID_OFFSET))(this, slotId);
		}

		::System::Boolean CheckHasAvatar(::System::UInt32 avatarId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_CHECKHASAVATAR_OFFSET))(this, avatarId);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveAvatarData* GetAvatarDataByID(::System::UInt32 avatarId)
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_GETAVATARDATABYID_OFFSET))(this, avatarId);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*>* GetAvatarsByPosType(::RPG::GameCore::ILBattleCharacterLocation posType)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*>*(*)(::PVOID, ::RPG::GameCore::ILBattleCharacterLocation))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_GETAVATARSBYPOSTYPE_OFFSET))(this, posType);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*>* GetAllAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_GETALLAVATARS_OFFSET))(this);
		}

		::System::UInt32 GetMetAvatarCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_GETMETAVATARCNT_OFFSET))(this);
		}

		::System::Void _CreateAvatar(::Class_1_D17272E82AE804C2_478* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_478*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO__CREATEAVATAR_OFFSET))(this, avatar);
		}

		::System::UInt32 get_TotalAvatarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_GET_TOTALAVATARCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_GotAvatarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_GET_GOTAVATARCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*>* get_AllAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::IdleLiveAvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEAVATARINFO_GET_ALLAVATARS_OFFSET))(this);
		}
	};
}
