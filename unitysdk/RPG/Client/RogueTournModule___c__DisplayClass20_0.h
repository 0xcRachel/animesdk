#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1F45DE918CFECDFD;
namespace RPG::Client { class RogueTournModule; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E79B80)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS20_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__0_OFFSET UNITYSDK_OFFSET(0x9E89F40)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS20_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__1_OFFSET UNITYSDK_OFFSET(0x9E89F70)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS20_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__2_OFFSET UNITYSDK_OFFSET(0x9E8A140)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS20_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__3_OFFSET UNITYSDK_OFFSET(0x9E8A160)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS20_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__4_OFFSET UNITYSDK_OFFSET(0x9E8A0A0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS20_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__5_OFFSET UNITYSDK_OFFSET(0x9E8A0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass20_0_TypeDefinitionIndex = 53789;

	class RogueTournModule___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournModule* __4__this; // 0x10
		::System::Action_1<::Class_1_1F45DE918CFECDFD*>* __9__4; // 0x18
		::System::Action_1<::System::Exception*>* __9__5; // 0x20
		::RPG::Client::Promises::Promise* promise; // 0x28
		::RPG::Client::Promises::Promise_1<::Class_1_1F45DE918CFECDFD*>* reqPromise; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__0(::Class_1_1F45DE918CFECDFD* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1F45DE918CFECDFD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS20_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__0_OFFSET))(this, data);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__1(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS20_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__1_OFFSET))(this, ex);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__4(::Class_1_1F45DE918CFECDFD* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1F45DE918CFECDFD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS20_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__4_OFFSET))(this, data);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__5(::System::Exception* innerEx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS20_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__5_OFFSET))(this, innerEx);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS20_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__2_OFFSET))(this);
		}

		::System::Void _SendGetRogueTournBuildRefStaticDataHttpReq_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS20_0__SENDGETROGUETOURNBUILDREFSTATICDATAHTTPREQ_B__3_OFFSET))(this);
		}
	};
}
