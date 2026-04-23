#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_58D4E6FABD47E257;
namespace RPG::Client { class OnlinePlayRoomModule_PendingVisitUIDInfo; }
namespace RPG::Client { class OnlinePlayRoomRecentVisitorInfo; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x143F9890)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x143F98D0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_B__16_1_OFFSET UNITYSDK_OFFSET(0x143F99B0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETONLINEROOMPLAYERINDEX_B__27_0_OFFSET UNITYSDK_OFFSET(0x143F99F0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETRECENTVISITORLIST_B__38_0_OFFSET UNITYSDK_OFFSET(0x143F9AB0)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRANSFERTOARRANGEPAGE_B__31_3_OFFSET UNITYSDK_OFFSET(0x143F9A30)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRYGETPENDINGVISITPLAYERBRIEFDISPLAYDATA_B__32_0_OFFSET UNITYSDK_OFFSET(0x143F9A70)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRYQUERYONLINEROOMSTATUS_B__15_0_OFFSET UNITYSDK_OFFSET(0x143F9920)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C___ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_B__5_0_OFFSET UNITYSDK_OFFSET(0x143F98E0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule___c_TypeDefinitionIndex = 61162;

	class OnlinePlayRoomModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_1_58D4E6FABD47E257*>** StaticGet___9__27_0()
		{
			return (::System::Comparison_1<::Class_1_58D4E6FABD47E257*>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0x68A00);
		}
		static ::RPG::Client::OnlinePlayRoomModule___c** StaticGet___9()
		{
			return (::RPG::Client::OnlinePlayRoomModule___c**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0x68A08);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0x68A10);
		}
		static ::System::Action** StaticGet___9__5_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0x68A18);
		}
		static ::System::Action** StaticGet___9__31_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0x68A20);
		}
		static ::System::Comparison_1<::Class_1_58D4E6FABD47E257*>** StaticGet___9__16_1()
		{
			return (::System::Comparison_1<::Class_1_58D4E6FABD47E257*>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0x68A28);
		}
		static ::System::Comparison_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>** StaticGet___9__38_0()
		{
			return (::System::Comparison_1<::RPG::Client::OnlinePlayRoomRecentVisitorInfo*>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0x68A30);
		}
		static ::System::Comparison_1<::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>** StaticGet___9__32_0()
		{
			return (::System::Comparison_1<::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*>**)Il2CppClass::FromTypeDefinitionIndex(OnlinePlayRoomModule___c_TypeDefinitionIndex)->GetStaticField(0x68A38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnSocialPlayGameplayOperationScNotify_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C___ONSOCIALPLAYGAMEPLAYOPERATIONSCNOTIFY_B__5_0_OFFSET))(this);
		}

		::System::Void _TryqueryOnlineRoomStatus_b__15_0(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRYQUERYONLINEROOMSTATUS_B__15_0_OFFSET))(this, isOk);
		}

		::System::Int32 _GetOnlineRoomPlayerBriefDisplayDataList_b__16_1(::Class_1_58D4E6FABD47E257* a, ::Class_1_58D4E6FABD47E257* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_58D4E6FABD47E257*, ::Class_1_58D4E6FABD47E257*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETONLINEROOMPLAYERBRIEFDISPLAYDATALIST_B__16_1_OFFSET))(this, a, b);
		}

		::System::Int32 _GetOnlineRoomPlayerIndex_b__27_0(::Class_1_58D4E6FABD47E257* a, ::Class_1_58D4E6FABD47E257* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_58D4E6FABD47E257*, ::Class_1_58D4E6FABD47E257*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETONLINEROOMPLAYERINDEX_B__27_0_OFFSET))(this, a, b);
		}

		::System::Void _TransferToArrangePage_b__31_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRANSFERTOARRANGEPAGE_B__31_3_OFFSET))(this);
		}

		::System::Int32 _TryGetPendingVisitPlayerBriefDisplayData_b__32_0(::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo* a, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*, ::RPG::Client::OnlinePlayRoomModule_PendingVisitUIDInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__TRYGETPENDINGVISITPLAYERBRIEFDISPLAYDATA_B__32_0_OFFSET))(this, a, b);
		}

		::System::Int32 _GetRecentVisitorList_b__38_0(::RPG::Client::OnlinePlayRoomRecentVisitorInfo* a, ::RPG::Client::OnlinePlayRoomRecentVisitorInfo* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::OnlinePlayRoomRecentVisitorInfo*, ::RPG::Client::OnlinePlayRoomRecentVisitorInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__GETRECENTVISITORLIST_B__38_0_OFFSET))(this, a, b);
		}
	};
}
