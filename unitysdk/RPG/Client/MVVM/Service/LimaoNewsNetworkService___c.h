#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D17272E82AE804C2_518;
class Class_1_D17272E82AE804C2_520;
class Class_1_D1E0AD3915BCCF29_59;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1696E460)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1696E4A0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__REFRESHLIMAONEWSOFFICESURVEYWITHFILTER_B__2_0_OFFSET UNITYSDK_OFFSET(0x1696E4B0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSFINISHCLIENTREPLYCSREQ_B__6_0_OFFSET UNITYSDK_OFFSET(0x1696E4C0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSTRACKSURVEYCSREQ_B__8_0_OFFSET UNITYSDK_OFFSET(0x1696E500)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsNetworkService___c_TypeDefinitionIndex = 68494;

	class LimaoNewsNetworkService___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_D1E0AD3915BCCF29_59*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::Class_1_D1E0AD3915BCCF29_59*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x4C450);
		}
		static ::RPG::Client::MVVM::Service::LimaoNewsNetworkService___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::Service::LimaoNewsNetworkService___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x4C458);
		}
		static ::System::Action_1<::Class_1_D17272E82AE804C2_518*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::Class_1_D17272E82AE804C2_518*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x4C460);
		}
		static ::System::Action_1<::Class_1_D17272E82AE804C2_520*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::Class_1_D17272E82AE804C2_520*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x4C468);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLimaoNewsOfficeSurveyWithFilter_b__2_0(::Class_1_D17272E82AE804C2_518* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_518*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__REFRESHLIMAONEWSOFFICESURVEYWITHFILTER_B__2_0_OFFSET))(this, rsp);
		}

		::System::Void _SendLimaoNewsFinishClientReplyCsReq_b__6_0(::Class_1_D1E0AD3915BCCF29_59* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_59*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSFINISHCLIENTREPLYCSREQ_B__6_0_OFFSET))(this, rsp);
		}

		::System::Void _SendLimaoNewsTrackSurveyCsReq_b__8_0(::Class_1_D17272E82AE804C2_520* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D17272E82AE804C2_520*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSTRACKSURVEYCSREQ_B__8_0_OFFSET))(this, rsp);
		}
	};
}
