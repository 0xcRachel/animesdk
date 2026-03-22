#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"

class Class_1_1F45DE918CFECDFD;
class Class_1_34D861EC1B1CDD27;
class Class_1_5610B7568BF432BE;
class Class_1_7AB88D713F5121B3_46;
class Class_1_7AB88D713F5121B3_47;
class Class_1_7AB88D713F5121B3_48;
class Class_1_9100C4ECB2108214;
class Class_1_945ACFB1FEBC7A2C_26;
class Class_1_DDB796240B07BA45;
namespace RPG::Client { class GetRogueTournBuildRefHistoryHttpRsp; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { template <typename T> class RPGHttpPlatformActResponse_1; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E894E0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9E89510)
#define RPG_CLIENT_ROGUETOURNMODULE___C__GET_ISAUTOSHOWENTRANCEPAGEAFTERGOTOPROMISED_B__170_0_OFFSET UNITYSDK_OFFSET(0x9E89B10)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__26_0_OFFSET UNITYSDK_OFFSET(0x9E89670)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__26_1_OFFSET UNITYSDK_OFFSET(0x9E896A0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFHISTORYHTTPREQ_B__31_0_OFFSET UNITYSDK_OFFSET(0x9E89870)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFHISTORYHTTPREQ_B__31_1_OFFSET UNITYSDK_OFFSET(0x9E898A0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFINTERACTDATAHTTPREQ_B__28_0_OFFSET UNITYSDK_OFFSET(0x9E896F0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFINTERACTDATAHTTPREQ_B__28_1_OFFSET UNITYSDK_OFFSET(0x9E89720)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__30_0_OFFSET UNITYSDK_OFFSET(0x9E897F0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__30_1_OFFSET UNITYSDK_OFFSET(0x9E89820)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__29_0_OFFSET UNITYSDK_OFFSET(0x9E89770)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__29_1_OFFSET UNITYSDK_OFFSET(0x9E897A0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__SHOWCOLLECTIONEXHIBITIONPAGEFROMENTRANCEPROMISED_B__73_0_OFFSET UNITYSDK_OFFSET(0x9E89920)
#define RPG_CLIENT_ROGUETOURNMODULE___C___ONCMDENTERSCENEBYSERVERSCNOTIFY_B__96_0_OFFSET UNITYSDK_OFFSET(0x9E89A10)
#define RPG_CLIENT_ROGUETOURNMODULE___C___ONGETROGUETOURNBUILDREFINTERACTDATAHTTPRSP_B__35_0_OFFSET UNITYSDK_OFFSET(0x9E898F0)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATAAPIHTTPREQ_B__22_0_OFFSET UNITYSDK_OFFSET(0x9E89570)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATAAPIHTTPREQ_B__22_1_OFFSET UNITYSDK_OFFSET(0x9E895A0)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATACDNHTTPREQ_B__21_0_OFFSET UNITYSDK_OFFSET(0x9E89520)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDSETROGUETOURNBUILDREFAPPLIEDHTTPREQ_B__25_0_OFFSET UNITYSDK_OFFSET(0x9E895F0)
#define RPG_CLIENT_ROGUETOURNMODULE___C___SENDSETROGUETOURNBUILDREFAPPLIEDHTTPREQ_B__25_1_OFFSET UNITYSDK_OFFSET(0x9E89620)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c_TypeDefinitionIndex = 53785;

	class RogueTournModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__170_0()
		{
			return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBF40);
		}
		static ::RPG::Client::RogueTournModule___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournModule___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBF48);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::RPG::Client::GetRogueTournBuildRefHistoryHttpRsp*>*>** StaticGet___9__31_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::RPG::Client::GetRogueTournBuildRefHistoryHttpRsp*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBF50);
		}
		static ::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBF58);
		}
		static ::System::Func_2<::System::String*, ::RPG::Client::MongoObjectId>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::System::String*, ::RPG::Client::MongoObjectId>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBF60);
		}
		static ::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBF68);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_46*>*>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_46*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBF70);
		}
		static ::System::Func_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>*>** StaticGet___9__73_0()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBF78);
		}
		static ::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBF80);
		}
		static ::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBF88);
		}
		static ::System::Action** StaticGet___9__96_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBF90);
		}
		static ::System::Func_2<::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_26*>*, ::Class_1_1F45DE918CFECDFD*>** StaticGet___9__22_1()
		{
			return (::System::Func_2<::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_26*>*, ::Class_1_1F45DE918CFECDFD*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBF98);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_34D861EC1B1CDD27*>*>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_34D861EC1B1CDD27*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBFA0);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_47*>*>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_47*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBFA8);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_48*>*>** StaticGet___9__30_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_48*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBFB0);
		}
		static ::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBFB8);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::Class_1_1F45DE918CFECDFD*>** StaticGet___9__21_0()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::Class_1_1F45DE918CFECDFD*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBFC0);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_5610B7568BF432BE*>*>** StaticGet___9__28_1()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_5610B7568BF432BE*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBFC8);
		}
		static ::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::Class_1_9100C4ECB2108214*, ::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBFD0);
		}
		static ::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_26*>*>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::Class_1_DDB796240B07BA45*, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_26*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournModule___c_TypeDefinitionIndex)->GetStaticField(0xBFD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__CTOR_OFFSET))(this);
		}

		::Class_1_1F45DE918CFECDFD* __SendGetRogueTournBuildRefStaticDataCdnHttpReq_b__21_0(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::Class_1_1F45DE918CFECDFD*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATACDNHTTPREQ_B__21_0_OFFSET))(this, rsp);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_26*>* __SendGetRogueTournBuildRefStaticDataApiHttpReq_b__22_0(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_26*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATAAPIHTTPREQ_B__22_0_OFFSET))(this, rsp);
		}

		::Class_1_1F45DE918CFECDFD* __SendGetRogueTournBuildRefStaticDataApiHttpReq_b__22_1(::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_26*>* rsp)
		{
			return ((::Class_1_1F45DE918CFECDFD*(*)(::PVOID, ::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_945ACFB1FEBC7A2C_26*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDGETROGUETOURNBUILDREFSTATICDATAAPIHTTPREQ_B__22_1_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* __SendSetRogueTournBuildRefAppliedHttpReq_b__25_0(::Class_1_9100C4ECB2108214* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_9100C4ECB2108214*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDSETROGUETOURNBUILDREFAPPLIEDHTTPREQ_B__25_0_OFFSET))(this, req);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_46*>* __SendSetRogueTournBuildRefAppliedHttpReq_b__25_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_46*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___SENDSETROGUETOURNBUILDREFAPPLIEDHTTPREQ_B__25_1_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendGetRogueTournBuildRefFavoriteHttpReq_b__26_0(::Class_1_9100C4ECB2108214* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_9100C4ECB2108214*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__26_0_OFFSET))(this, req);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_34D861EC1B1CDD27*>* _SendGetRogueTournBuildRefFavoriteHttpReq_b__26_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_34D861EC1B1CDD27*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__26_1_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendGetRogueTournBuildRefInteractDataHttpReq_b__28_0(::Class_1_9100C4ECB2108214* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_9100C4ECB2108214*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFINTERACTDATAHTTPREQ_B__28_0_OFFSET))(this, req);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_5610B7568BF432BE*>* _SendGetRogueTournBuildRefInteractDataHttpReq_b__28_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_5610B7568BF432BE*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFINTERACTDATAHTTPREQ_B__28_1_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendSetRogueTournBuildRefLikeHttpReq_b__29_0(::Class_1_9100C4ECB2108214* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_9100C4ECB2108214*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__29_0_OFFSET))(this, req);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_47*>* _SendSetRogueTournBuildRefLikeHttpReq_b__29_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_47*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFLIKEHTTPREQ_B__29_1_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendSetRogueTournBuildRefFavoriteHttpReq_b__30_0(::Class_1_9100C4ECB2108214* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_9100C4ECB2108214*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__30_0_OFFSET))(this, req);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_48*>* _SendSetRogueTournBuildRefFavoriteHttpReq_b__30_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::Class_1_7AB88D713F5121B3_48*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDSETROGUETOURNBUILDREFFAVORITEHTTPREQ_B__30_1_OFFSET))(this, rsp);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>* _SendGetRogueTournBuildRefHistoryHttpReq_b__31_0(::Class_1_9100C4ECB2108214* req)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_DDB796240B07BA45*>*(*)(::PVOID, ::Class_1_9100C4ECB2108214*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFHISTORYHTTPREQ_B__31_0_OFFSET))(this, req);
		}

		::RPG::Client::RPGHttpPlatformActResponse_1<::RPG::Client::GetRogueTournBuildRefHistoryHttpRsp*>* _SendGetRogueTournBuildRefHistoryHttpReq_b__31_1(::Class_1_DDB796240B07BA45* rsp)
		{
			return ((::RPG::Client::RPGHttpPlatformActResponse_1<::RPG::Client::GetRogueTournBuildRefHistoryHttpRsp*>*(*)(::PVOID, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SENDGETROGUETOURNBUILDREFHISTORYHTTPREQ_B__31_1_OFFSET))(this, rsp);
		}

		::RPG::Client::MongoObjectId __OnGetRogueTournBuildRefInteractDataHttpRsp_b__35_0(::System::String* id)
		{
			return ((::RPG::Client::MongoObjectId(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___ONGETROGUETOURNBUILDREFINTERACTDATAHTTPRSP_B__35_0_OFFSET))(this, id);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>* _ShowCollectionExhibitionPageFromEntrancePromised_b__73_0()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::LuaUIController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__SHOWCOLLECTIONEXHIBITIONPAGEFROMENTRANCEPROMISED_B__73_0_OFFSET))(this);
		}

		::System::Void __OnCmdEnterSceneByServerScNotify_b__96_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C___ONCMDENTERSCENEBYSERVERSCNOTIFY_B__96_0_OFFSET))(this);
		}

		::System::Boolean _get_IsAutoShowEntrancePageAfterGotoPromised_b__170_0(::System::Boolean isNotAutoShow)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__GET_ISAUTOSHOWENTRANCEPAGEAFTERGOTOPROMISED_B__170_0_OFFSET))(this, isNotAutoShow);
		}
	};
}
