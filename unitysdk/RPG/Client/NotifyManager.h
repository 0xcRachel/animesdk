#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B5A08EAC9C145CCC.h"
#include "unitysdk/RPG/Client/NotifyGroup.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/Unity/Profiling/ProfilerMarkerWithIntData.h"

class Class_1_735612C94F558EAE_57;
namespace RPG::Client { class NetPacket; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class NotifyManager_DelayPacket; }
namespace RPG::Client { class NotifyManager_NotifyHandlerInfo; }
namespace RPG::Client { class NotifyManager_RspHandlerInfo; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class RspHandler; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NOTIFYMANAGER_ADDALWAYSRSPHANDLER_OFFSET UNITYSDK_OFFSET(0x99F8CA0)
#define RPG_CLIENT_NOTIFYMANAGER_ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0x99F7640)
#define RPG_CLIENT_NOTIFYMANAGER_ADDRSPHANDLER_OFFSET UNITYSDK_OFFSET(0x99F8A70)
#define RPG_CLIENT_NOTIFYMANAGER_CLEARLUALISTENCOUNT_OFFSET UNITYSDK_OFFSET(0x99F8240)
#define RPG_CLIENT_NOTIFYMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0x99F6390)
#define RPG_CLIENT_NOTIFYMANAGER_ENDDELAYPACKET_OFFSET UNITYSDK_OFFSET(0x99F5A40)
#define RPG_CLIENT_NOTIFYMANAGER_ENDPENDINGMAPDELAYPACKET_OFFSET UNITYSDK_OFFSET(0x99F5D50)
#define RPG_CLIENT_NOTIFYMANAGER_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x99F5E80)
#define RPG_CLIENT_NOTIFYMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x99F5EA0)
#define RPG_CLIENT_NOTIFYMANAGER_NOTIFYPACKET_OFFSET UNITYSDK_OFFSET(0x99ECC10)
#define RPG_CLIENT_NOTIFYMANAGER_NOTIFYTOLUA_OFFSET UNITYSDK_OFFSET(0x99F7390)
#define RPG_CLIENT_NOTIFYMANAGER_NOTIFY_1_OFFSET UNITYSDK_OFFSET(0x99F8350)
#define RPG_CLIENT_NOTIFYMANAGER_NOTIFY_OFFSET UNITYSDK_OFFSET(0x99E8810)
#define RPG_CLIENT_NOTIFYMANAGER_ONADDLUANOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0x99F7BE0)
#define RPG_CLIENT_NOTIFYMANAGER_ONADDLUAPACKETHANDLER_OFFSET UNITYSDK_OFFSET(0x99F7EE0)
#define RPG_CLIENT_NOTIFYMANAGER_ONREMOVELUANOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0x99F7D50)
#define RPG_CLIENT_NOTIFYMANAGER_ONREMOVELUAPACKETHANDLER_OFFSET UNITYSDK_OFFSET(0x99F80B0)
#define RPG_CLIENT_NOTIFYMANAGER_REMOVEALWAYSRSPHANDLER_OFFSET UNITYSDK_OFFSET(0x99F8FE0)
#define RPG_CLIENT_NOTIFYMANAGER_REMOVEHANDLERS_OFFSET UNITYSDK_OFFSET(0x99F6420)
#define RPG_CLIENT_NOTIFYMANAGER_REMOVENOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0x99F7870)
#define RPG_CLIENT_NOTIFYMANAGER_REMOVERSPHANDLER_OFFSET UNITYSDK_OFFSET(0x99F8E50)
#define RPG_CLIENT_NOTIFYMANAGER_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x99F5E90)
#define RPG_CLIENT_NOTIFYMANAGER_STARTDELAYPACKET_OFFSET UNITYSDK_OFFSET(0x99F57B0)
#define RPG_CLIENT_NOTIFYMANAGER_STARTPENDINGMAPDELAYPACKET_OFFSET UNITYSDK_OFFSET(0x99F5D10)
#define RPG_CLIENT_NOTIFYMANAGER_TRYDELAYPACKET_OFFSET UNITYSDK_OFFSET(0x99F5D90)
#define RPG_CLIENT_NOTIFYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x99F90E0)
#define RPG_CLIENT_NOTIFYMANAGER__GETHANDLERHASHCODE_OFFSET UNITYSDK_OFFSET(0x99F7B00)
#define RPG_CLIENT_NOTIFYMANAGER__ISPENDINGTOREMOVE_OFFSET UNITYSDK_OFFSET(0x99F7090)
#define RPG_CLIENT_NOTIFYMANAGER__NOTIFYDELAYPACKETS_OFFSET UNITYSDK_OFFSET(0x99F5B70)
#define RPG_CLIENT_NOTIFYMANAGER__NOTIFYRSPGROUPLUA_OFFSET UNITYSDK_OFFSET(0x99F8720)
#define RPG_CLIENT_NOTIFYMANAGER__NOTIFYRSPGROUP_OFFSET UNITYSDK_OFFSET(0x99F8560)
#define RPG_CLIENT_NOTIFYMANAGER__PROCESSPENDINGNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x99F7210)
#define RPG_CLIENT_NOTIFYMANAGER__PROCESSPENDINGRSPHANDLERS_OFFSET UNITYSDK_OFFSET(0x99F8980)
#define RPG_CLIENT_NOTIFYMANAGER__PROCESSRETCODENOTIFY_OFFSET UNITYSDK_OFFSET(0x99F8400)
#define RPG_CLIENT_NOTIFYMANAGER__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x99F6480)
#define RPG_CLIENT_NOTIFYMANAGER__REMOVERSPHANDLERS_OFFSET UNITYSDK_OFFSET(0x99F6B80)

namespace RPG::Client
{
	inline static constexpr unsigned int NotifyManager_TypeDefinitionIndex = 46856;

	class NotifyManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_RspHandlerInfo*>** StaticGet__PendingRspHandlers()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_RspHandlerInfo*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E00);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__RetcodeNotifyMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E08);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__NotifyRspGroupMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E10);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType>, ::System::Int32>** StaticGet__LuaNotifyListenCounter()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E18);
		}
		static ::Il2CppArray<::Enum_3_B5A08EAC9C145CCC>** StaticGet_DelayProtoBlackList()
		{
			return (::Il2CppArray<::Enum_3_B5A08EAC9C145CCC>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E20);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__NotifyMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E28);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__NotifyRspGroupLuaMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E30);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__ProcessPendingRspHandlersMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E38);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__ShouldBlockErrorRspMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E40);
		}
		static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet__DelayIDs()
		{
			return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E48);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__NotifyCSharpMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E50);
		}
		static ::System::Collections::Generic::HashSet_1<::System::UInt16>** StaticGet__LuaPacketListenRequireRspObject()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E58);
		}
		static ::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>*>** StaticGet__RspHandlers()
		{
			return (::Il2CppArray<::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E60);
		}
		static ::RPG::Client::RPGProfilerMarker** StaticGet__NotifyLuaMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E68);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_NotifyHandlerInfo*>** StaticGet__PendingNotifyHandlers()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_NotifyHandlerInfo*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E70);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>** StaticGet__AlwaysRspHandler()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E78);
		}
		static ::Il2CppArray<::System::Collections::Generic::Dictionary_2<::RPG::Client::NotifyType, ::System::Collections::Generic::List_1<::RPG::Client::NotifyHandler*>*>*>** StaticGet__NotifyHandlers()
		{
			return (::Il2CppArray<::System::Collections::Generic::Dictionary_2<::RPG::Client::NotifyType, ::System::Collections::Generic::List_1<::RPG::Client::NotifyHandler*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E80);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_DelayPacket*>** StaticGet__DelayPackets()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::NotifyManager_DelayPacket*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E88);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet__PendingToRemoves()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E90);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::Client::NotifyGroup, ::System::UInt16>, ::System::Int32>** StaticGet__LuaPacketListenCounter()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::RPG::Client::NotifyGroup, ::System::UInt16>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x14E98);
		}
		static ::Unity::Profiling::ProfilerMarkerWithIntData* StaticGet_NotifyPacketMarker()
		{
			return (::Unity::Profiling::ProfilerMarkerWithIntData*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x4F50);
		}
		static ::System::Int32* StaticGet__LockNotifyHandlers()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x4F60);
		}
		static ::System::Int32* StaticGet__LockPacketHandlers()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x4F64);
		}
		static ::System::Boolean* StaticGet_UseDelayPacketOpen()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x4F68);
		}
		static ::System::Boolean* StaticGet__IsPendingMapDelayPacket()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x4F69);
		}
		static ::System::Boolean* StaticGet__IsDestroyed_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x4F6A);
		}
		static ::System::Boolean* StaticGet__IsLoadingDelayPacket()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NotifyManager_TypeDefinitionIndex)->GetStaticField(0x4F6B);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void StartDelayPacket()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_STARTDELAYPACKET_OFFSET))();
		}

		static ::System::Void EndDelayPacket()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ENDDELAYPACKET_OFFSET))();
		}

		static ::System::Void StartPendingMapDelayPacket()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_STARTPENDINGMAPDELAYPACKET_OFFSET))();
		}

		static ::System::Void EndPendingMapDelayPacket()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ENDPENDINGMAPDELAYPACKET_OFFSET))();
		}

		static ::System::Void _NotifyDelayPackets()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__NOTIFYDELAYPACKETS_OFFSET))();
		}

		static ::System::Boolean TryDelayPacket(::System::UInt16 cmdID, ::System::UInt32 retcode, ::System::Object* rsp)
		{
			return ((::System::Boolean(*)(::System::UInt16, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_TRYDELAYPACKET_OFFSET))(cmdID, retcode, rsp);
		}

		static ::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_GET_ISDESTROYED_OFFSET))();
		}

		static ::System::Void set_IsDestroyed(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_SET_ISDESTROYED_OFFSET))(value);
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_INIT_OFFSET))();
		}

		static ::System::Void Destroy()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_DESTROY_OFFSET))();
		}

		static ::System::Void RemoveHandlers(::System::Object* owner)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_REMOVEHANDLERS_OFFSET))(owner);
		}

		static ::System::Void Notify(::RPG::Client::NotifyType type, ::System::Object* arg, ::System::Boolean notifyToLua)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyType, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_NOTIFY_OFFSET))(type, arg, notifyToLua);
		}

		static ::System::Void NotifyToLua(::RPG::Client::NotifyType type, ::System::Object* arg)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_NOTIFYTOLUA_OFFSET))(type, arg);
		}

		static ::System::Void AddNotifyHandler(::RPG::Client::NotifyGroup group, ::RPG::Client::NotifyType type, ::RPG::Client::NotifyHandler* handler)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ADDNOTIFYHANDLER_OFFSET))(group, type, handler);
		}

		static ::System::Void RemoveNotifyHandler(::RPG::Client::NotifyGroup group, ::RPG::Client::NotifyType type, ::RPG::Client::NotifyHandler* handler)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_REMOVENOTIFYHANDLER_OFFSET))(group, type, handler);
		}

		static ::System::Void _RemoveNotifyHandlers(::System::Object* owner)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__REMOVENOTIFYHANDLERS_OFFSET))(owner);
		}

		static ::System::Void _ProcessPendingNotifyHandlers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__PROCESSPENDINGNOTIFYHANDLERS_OFFSET))();
		}

		static ::System::Boolean _IsPendingToRemove(::RPG::Client::NotifyGroup group, ::RPG::Client::NotifyType type, ::RPG::Client::NotifyHandler* handler)
		{
			return ((::System::Boolean(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__ISPENDINGTOREMOVE_OFFSET))(group, type, handler);
		}

		static ::System::Int32 _GetHandlerHashCode(::RPG::Client::NotifyGroup group, ::RPG::Client::NotifyType type, ::RPG::Client::NotifyHandler* handler)
		{
			return ((::System::Int32(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__GETHANDLERHASHCODE_OFFSET))(group, type, handler);
		}

		static ::System::Void OnAddLuaNotifyHandler(::RPG::Client::NotifyGroup group, ::RPG::Client::NotifyType type)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ONADDLUANOTIFYHANDLER_OFFSET))(group, type);
		}

		static ::System::Void OnRemoveLuaNotifyHandler(::RPG::Client::NotifyGroup group, ::RPG::Client::NotifyType type)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ONREMOVELUANOTIFYHANDLER_OFFSET))(group, type);
		}

		static ::System::Void OnAddLuaPacketHandler(::RPG::Client::NotifyGroup group, ::System::UInt16 cmdID, ::System::Boolean requireRsp)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ONADDLUAPACKETHANDLER_OFFSET))(group, cmdID, requireRsp);
		}

		static ::System::Void OnRemoveLuaPacketHandler(::RPG::Client::NotifyGroup group, ::System::UInt16 cmdID)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ONREMOVELUAPACKETHANDLER_OFFSET))(group, cmdID);
		}

		static ::System::Void ClearLuaListenCount()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_CLEARLUALISTENCOUNT_OFFSET))();
		}

		static ::System::Void Notify_1(::RPG::Client::NetPacket* pkt)
		{
			return ((::System::Void(*)(::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_NOTIFY_1_OFFSET))(pkt);
		}

		static ::System::Void NotifyPacket(::System::UInt16 cmdID, ::System::UInt32 retcode, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::System::UInt16, ::System::UInt32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_NOTIFYPACKET_OFFSET))(cmdID, retcode, rsp);
		}

		static ::System::Void _NotifyRspGroup(::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>* rspHandlers, ::System::UInt16 cmdID, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Collections::Generic::List_1<::RPG::Client::RspHandler*>*>*, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__NOTIFYRSPGROUP_OFFSET))(rspHandlers, cmdID, rsp);
		}

		static ::System::Void _NotifyRspGroupLua(::System::Int32 g, ::System::UInt16 cmdID, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__NOTIFYRSPGROUPLUA_OFFSET))(g, cmdID, rsp);
		}

		static ::System::Void AddRspHandler(::RPG::Client::NotifyGroup group, ::System::UInt16 cmdID, ::RPG::Client::RspHandler* handler)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ADDRSPHANDLER_OFFSET))(group, cmdID, handler);
		}

		static ::System::Void AddAlwaysRspHandler(::RPG::Client::NotifyGroup group, ::System::UInt16 cmdID, ::RPG::Client::RspHandler* handler)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_ADDALWAYSRSPHANDLER_OFFSET))(group, cmdID, handler);
		}

		static ::System::Void RemoveRspHandler(::RPG::Client::NotifyGroup group, ::System::UInt16 cmdID, ::RPG::Client::RspHandler* handler)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_REMOVERSPHANDLER_OFFSET))(group, cmdID, handler);
		}

		static ::System::Void RemoveAlwaysRspHandler(::RPG::Client::NotifyGroup group, ::System::UInt16 cmdID, ::RPG::Client::RspHandler* handler)
		{
			return ((::System::Void(*)(::RPG::Client::NotifyGroup, ::System::UInt16, ::RPG::Client::RspHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER_REMOVEALWAYSRSPHANDLER_OFFSET))(group, cmdID, handler);
		}

		static ::System::Void _RemoveRspHandlers(::System::Object* owner)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__REMOVERSPHANDLERS_OFFSET))(owner);
		}

		static ::System::Void _ProcessPendingRspHandlers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__PROCESSPENDINGRSPHANDLERS_OFFSET))();
		}

		static ::System::Void _ProcessRetcodeNotify(::System::UInt16 cmdID, ::System::UInt32 retcode, ::Class_1_735612C94F558EAE_57* notify)
		{
			return ((::System::Void(*)(::System::UInt16, ::System::UInt32, ::Class_1_735612C94F558EAE_57*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOTIFYMANAGER__PROCESSRETCODENOTIFY_OFFSET))(cmdID, retcode, notify);
		}
	};
}
