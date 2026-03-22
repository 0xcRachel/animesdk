#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_9F1B299E86EE49AF;
namespace RPG::Client { class OfferingRewardData; }
namespace RPG::GameCore { class OfferingLevelConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_OFFERINGMODULE_GETOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0x9A00960)
#define RPG_CLIENT_OFFERINGMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9A007E0)
#define RPG_CLIENT_OFFERINGMODULE_ISLONGTAILREWARD_OFFSET UNITYSDK_OFFSET(0x9A00A20)
#define RPG_CLIENT_OFFERINGMODULE_SHOULDSHOWMAPSHORTCUTHINT_OFFSET UNITYSDK_OFFSET(0x9A00A80)
#define RPG_CLIENT_OFFERINGMODULE_SHOULDSHOWUPGRADEHINT_OFFSET UNITYSDK_OFFSET(0x9A00C50)
#define RPG_CLIENT_OFFERINGMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9A00D60)
#define RPG_CLIENT_OFFERINGMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A01A00)
#define RPG_CLIENT_OFFERINGMODULE__GETOFFERINGINFO_OFFSET UNITYSDK_OFFSET(0x9A017A0)
#define RPG_CLIENT_OFFERINGMODULE__ONGETOFFERINGINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9A00E80)
#define RPG_CLIENT_OFFERINGMODULE__ONOFFERINGINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x9A01720)
#define RPG_CLIENT_OFFERINGMODULE__ONSUBMITOFFERINGITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x9A014B0)
#define RPG_CLIENT_OFFERINGMODULE__ONTAKEOFFERINGREWARDSCRSP_OFFSET UNITYSDK_OFFSET(0x9A01660)
#define RPG_CLIENT_OFFERINGMODULE__REFRESHREWARDDATA_OFFSET UNITYSDK_OFFSET(0x9A01530)
#define RPG_CLIENT_OFFERINGMODULE__TRYINITREWARDDATA_OFFSET UNITYSDK_OFFSET(0x9A01150)
#define RPG_CLIENT_OFFERINGMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9A01A20)
#define RPG_CLIENT_OFFERINGMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9A01AB0)

namespace RPG::Client
{
	inline static constexpr unsigned int OfferingModule_TypeDefinitionIndex = 52865;

	class OfferingModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::OfferingRewardData*>* _AllOfferingRewardDataDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE_INIT_OFFSET))(this);
		}

		::RPG::Client::OfferingRewardData* GetOfferingRewardData(::System::UInt32 typeID)
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE_GETOFFERINGREWARDDATA_OFFSET))(this, typeID);
		}

		::System::Boolean IsLongTailReward(::RPG::GameCore::OfferingLevelConfigRow* row)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OfferingLevelConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE_ISLONGTAILREWARD_OFFSET))(this, row);
		}

		::System::Boolean ShouldShowMapShortCutHint(::System::UInt32 typeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE_SHOULDSHOWMAPSHORTCUTHINT_OFFSET))(this, typeID);
		}

		::System::Boolean ShouldShowUpgradeHint(::System::UInt32 typeID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE_SHOULDSHOWUPGRADEHINT_OFFSET))(this, typeID);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetOfferingInfoScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__ONGETOFFERINGINFOSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSubmitOfferingItemScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__ONSUBMITOFFERINGITEMSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnTakeOfferingRewardScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__ONTAKEOFFERINGREWARDSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnOfferingInfoScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__ONOFFERINGINFOSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _GetOfferingInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__GETOFFERINGINFO_OFFSET))(this);
		}

		::System::Void _RefreshRewardData(::Class_1_9F1B299E86EE49AF* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9F1B299E86EE49AF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__REFRESHREWARDDATA_OFFSET))(this, info);
		}

		::System::Void _TryInitRewardData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE__TRYINITREWARDDATA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OFFERINGMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
