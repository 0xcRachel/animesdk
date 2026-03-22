#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_3A7B270FE0BE90AE_2;
class Class_1_827373C1CEDFE355;
namespace RPG::Client { class RogueArcadeRoomData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEARCADEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DD61E0)
#define RPG_CLIENT_ROGUEARCADEMODULE_GET_CURRENTROOMDATA_OFFSET UNITYSDK_OFFSET(0x9DD7350)
#define RPG_CLIENT_ROGUEARCADEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9DD60C0)
#define RPG_CLIENT_ROGUEARCADEMODULE_LEAVEARCADE_OFFSET UNITYSDK_OFFSET(0x9DD7110)
#define RPG_CLIENT_ROGUEARCADEMODULE_RESTARTARCADE_OFFSET UNITYSDK_OFFSET(0x9DD7220)
#define RPG_CLIENT_ROGUEARCADEMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x9DD6A60)
#define RPG_CLIENT_ROGUEARCADEMODULE_SET_CURRENTROOMDATA_OFFSET UNITYSDK_OFFSET(0x9DD7360)
#define RPG_CLIENT_ROGUEARCADEMODULE_STARTARCADE_OFFSET UNITYSDK_OFFSET(0x9DD6C50)
#define RPG_CLIENT_ROGUEARCADEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x9DD6B50)
#define RPG_CLIENT_ROGUEARCADEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DD6230)
#define RPG_CLIENT_ROGUEARCADEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DD63B0)
#define RPG_CLIENT_ROGUEARCADEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9DD7370)
#define RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEADVENTUREROOMGAMEFINISH_OFFSET UNITYSDK_OFFSET(0x9DD62E0)
#define RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEARCADEGETINFOSCRSP_OFFSET UNITYSDK_OFFSET(0x9DD6960)
#define RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEARCADELEAVESCRSP_OFFSET UNITYSDK_OFFSET(0x9DD6760)
#define RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEARCADERESTARTSCRSP_OFFSET UNITYSDK_OFFSET(0x9DD68F0)
#define RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEARCADESTARTSCRSP_OFFSET UNITYSDK_OFFSET(0x9DD64D0)
#define RPG_CLIENT_ROGUEARCADEMODULE__RANDOMGETROOMID_OFFSET UNITYSDK_OFFSET(0x9DD6EA0)
#define RPG_CLIENT_ROGUEARCADEMODULE__SWITCHSCENE_OFFSET UNITYSDK_OFFSET(0x9DD6640)
#define RPG_CLIENT_ROGUEARCADEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DD7480)
#define RPG_CLIENT_ROGUEARCADEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9DD73F0)
#define RPG_CLIENT_ROGUEARCADEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DD7490)
#define RPG_CLIENT_ROGUEARCADEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9DD74F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueArcadeModule_TypeDefinitionIndex = 53533;

	class RogueArcadeModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ValidRoomIDListCache; // 0x10
		::Class_1_827373C1CEDFE355* _LogicRandom; // 0x18
		::RPG::Client::RogueArcadeRoomData* _CurrentRoomData_k__BackingField; // 0x20
		::System::UInt32 _AutoShowEntranceID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRogueAdventureRoomGameFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEADVENTUREROOMGAMEFINISH_OFFSET))(this, arg);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnRogueArcadeStartScRsp(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEARCADESTARTSCRSP_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnRogueArcadeLeaveScRsp(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEARCADELEAVESCRSP_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnRogueArcadeRestartScRsp(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEARCADERESTARTSCRSP_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnRogueArcadeGetInfoScRsp(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__ONROGUEARCADEGETINFOSCRSP_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void StartArcade(::System::UInt32 arcadeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_STARTARCADE_OFFSET))(this, arcadeID);
		}

		::System::Void LeaveArcade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_LEAVEARCADE_OFFSET))(this);
		}

		::System::Void RestartArcade()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_RESTARTARCADE_OFFSET))(this);
		}

		::System::Void _SwitchScene(::Class_1_3A7B270FE0BE90AE_2* sceneExtInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3A7B270FE0BE90AE_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__SWITCHSCENE_OFFSET))(this, sceneExtInfo);
		}

		::System::UInt32 _RandomGetRoomID(::System::UInt32 arcadeID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE__RANDOMGETROOMID_OFFSET))(this, arcadeID);
		}

		::RPG::Client::RogueArcadeRoomData* get_CurrentRoomData()
		{
			return ((::RPG::Client::RogueArcadeRoomData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_GET_CURRENTROOMDATA_OFFSET))(this);
		}

		::System::Void set_CurrentRoomData(::RPG::Client::RogueArcadeRoomData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueArcadeRoomData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE_SET_CURRENTROOMDATA_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEARCADEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}
