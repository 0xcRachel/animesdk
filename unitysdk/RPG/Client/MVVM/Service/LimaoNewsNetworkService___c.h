#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_51;
class Class_1_FA4F4A67B1C04320_462;
class Class_1_FA4F4A67B1C04320_464;
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x95B9CA0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x95B9CE0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__REFRESHLIMAONEWSOFFICESURVEYWITHFILTER_B__2_0_OFFSET UNITYSDK_OFFSET(0x95B9CF0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSFINISHCLIENTREPLYCSREQ_B__6_0_OFFSET UNITYSDK_OFFSET(0x95B9D00)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSTRACKSURVEYCSREQ_B__8_0_OFFSET UNITYSDK_OFFSET(0x95B9D40)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsNetworkService___c_TypeDefinitionIndex = 59283;

	class LimaoNewsNetworkService___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_FA4F4A67B1C04320_462*>** StaticGet___9__2_0()
		{
			return (::System::Action_1<::Class_1_FA4F4A67B1C04320_462*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x24D00);
		}
		static ::RPG::Client::MVVM::Service::LimaoNewsNetworkService___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::Service::LimaoNewsNetworkService___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x24D08);
		}
		static ::System::Action_1<::Class_1_120319518E6F6581_51*>** StaticGet___9__6_0()
		{
			return (::System::Action_1<::Class_1_120319518E6F6581_51*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x24D10);
		}
		static ::System::Action_1<::Class_1_FA4F4A67B1C04320_464*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::Class_1_FA4F4A67B1C04320_464*>**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsNetworkService___c_TypeDefinitionIndex)->GetStaticField(0x24D18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshLimaoNewsOfficeSurveyWithFilter_b__2_0(::Class_1_FA4F4A67B1C04320_462* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_462*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__REFRESHLIMAONEWSOFFICESURVEYWITHFILTER_B__2_0_OFFSET))(this, rsp);
		}

		::System::Void _SendLimaoNewsFinishClientReplyCsReq_b__6_0(::Class_1_120319518E6F6581_51* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_51*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSFINISHCLIENTREPLYCSREQ_B__6_0_OFFSET))(this, rsp);
		}

		::System::Void _SendLimaoNewsTrackSurveyCsReq_b__8_0(::Class_1_FA4F4A67B1C04320_464* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_464*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSNETWORKSERVICE___C__SENDLIMAONEWSTRACKSURVEYCSREQ_B__8_0_OFFSET))(this, rsp);
		}
	};
}
