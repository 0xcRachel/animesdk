#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9100C4ECB2108214;
class Class_1_94A3840C743EB4A9;
class Class_1_A509A996D269C6F2_2;
class Class_1_BB62CC0FD1E45ADE_10;
class Class_1_DDB796240B07BA45;
namespace RPG::Client { template <typename T> class RPGHttpPlatformActResponse_1; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::GameCore { class PlayerReturnInviteRow; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8BB26A0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8BB26D0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__93_0_OFFSET UNITYSDK_OFFSET(0x8BB2840)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__93_1_OFFSET UNITYSDK_OFFSET(0x8BB2870)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__93_2_OFFSET UNITYSDK_OFFSET(0x8BB28C0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__92_0_OFFSET UNITYSDK_OFFSET(0x8BB27C0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__92_1_OFFSET UNITYSDK_OFFSET(0x8BB27F0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__91_0_OFFSET UNITYSDK_OFFSET(0x8BB2740)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__91_1_OFFSET UNITYSDK_OFFSET(0x8BB2770)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___ONPLAYERRETURNINFOQUERYSCRSP_B__180_0_OFFSET UNITYSDK_OFFSET(0x8BB28D0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___ONPLAYERRETURNTAKEEXTRAHCOINSCNOTIFY_B__15_1_OFFSET UNITYSDK_OFFSET(0x8BB26E0)
#define RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___REFRESHCURINVITECONFIGROW_B__57_0_OFFSET UNITYSDK_OFFSET(0x8BB2720)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityPlayerReturnModule___c_TypeDefinitionIndex = 49089;

	class ActivityPlayerReturnModule___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__15_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x23660);
		}
		static ::RPG::Client::ActivityPlayerReturnModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityPlayerReturnModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x23668);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_A509A996D269C6F2_2*>*>** StaticGet___9__91_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_A509A996D269C6F2_2*>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x23670);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::Class_1_94A3840C743EB4A9*>** StaticGet___9__93_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::Class_1_94A3840C743EB4A9*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x23678);
		}
		static ::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__92_0()
		{
			return (::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x23680);
		}
		static ::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__93_0()
		{
			return (::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x23688);
		}
		static ::System::Action** StaticGet___9__93_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x23690);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__180_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x23698);
		}
		static ::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__91_0()
		{
			return (::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x236A0);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_BB62CC0FD1E45ADE_10*>*>** StaticGet___9__92_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_BB62CC0FD1E45ADE_10*>*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x236A8);
		}
		static ::System::Func_2<::RPG::GameCore::PlayerReturnInviteRow*, ::System::UInt32>** StaticGet___9__57_0()
		{
			return (::System::Func_2<::RPG::GameCore::PlayerReturnInviteRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ActivityPlayerReturnModule___c_TypeDefinitionIndex)->GetStaticField(0x236B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnPlayerReturnTakeExtraHcoinScNotify_b__15_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___ONPLAYERRETURNTAKEEXTRAHCOINSCNOTIFY_B__15_1_OFFSET))(this);
		}

		::System::UInt32 __RefreshCurInviteConfigRow_b__57_0(::RPG::GameCore::PlayerReturnInviteRow* row)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::PlayerReturnInviteRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___REFRESHCURINVITECONFIGROW_B__57_0_OFFSET))(this, row);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendGetInviterInfoWWWReq_b__91_0(::Class_1_9100C4ECB2108214* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_9100C4ECB2108214*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__91_0_OFFSET))(this, req);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_A509A996D269C6F2_2*>* _SendGetInviterInfoWWWReq_b__91_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_A509A996D269C6F2_2*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITERINFOWWWREQ_B__91_1_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendGetInviteeInfoWWWReq_b__92_0(::Class_1_9100C4ECB2108214* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_9100C4ECB2108214*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__92_0_OFFSET))(this, req);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_BB62CC0FD1E45ADE_10*>* _SendGetInviteeInfoWWWReq_b__92_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_BB62CC0FD1E45ADE_10*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDGETINVITEEINFOWWWREQ_B__92_1_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendBindInvitationCodeWWWReq_b__93_0(::Class_1_9100C4ECB2108214* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_9100C4ECB2108214*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__93_0_OFFSET))(this, req);
		}

		::Class_1_94A3840C743EB4A9* _SendBindInvitationCodeWWWReq_b__93_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::Class_1_94A3840C743EB4A9*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__93_1_OFFSET))(this, rsp);
		}

		::System::Void _SendBindInvitationCodeWWWReq_b__93_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C__SENDBINDINVITATIONCODEWWWREQ_B__93_2_OFFSET))(this);
		}

		::System::Boolean __OnPlayerReturnInfoQueryScRsp_b__180_0(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYPLAYERRETURNMODULE___C___ONPLAYERRETURNINFOQUERYSCRSP_B__180_0_OFFSET))(this, x);
		}
	};
}
