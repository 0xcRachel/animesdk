#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoMap3DTouch_Struct_2_89E69CD783F83437.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class MonoMap3DTouch_Class_1_7919F3AA7BCFEB6C; }

#define RPG_CLIENT_MONOMAP3DTOUCH_ISPAGENOTFOCUSED_OFFSET UNITYSDK_OFFSET(0x9843A80)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_0DA2C55EA555FBD4_OFFSET UNITYSDK_OFFSET(0x9844770)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_0DC794B6E3A200E7_OFFSET UNITYSDK_OFFSET(0x9843C00)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_115AB266A722E835_OFFSET UNITYSDK_OFFSET(0x98468F0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0x9843570)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x98437A0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9845C20)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_49A086C8E6F42C45_OFFSET UNITYSDK_OFFSET(0x9845E30)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_4A997C91819DC81F_OFFSET UNITYSDK_OFFSET(0x9844200)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7A73F165001BC325_1_OFFSET UNITYSDK_OFFSET(0x9846560)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7A73F165001BC325_OFFSET UNITYSDK_OFFSET(0x9846350)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0x9846780)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7F55222BA915D588_1_OFFSET UNITYSDK_OFFSET(0x9844C40)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7F55222BA915D588_2_OFFSET UNITYSDK_OFFSET(0x9844D00)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7F55222BA915D588_OFFSET UNITYSDK_OFFSET(0x9844B80)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_88C2171D7C672B2E_1_OFFSET UNITYSDK_OFFSET(0x9844DC0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_88C2171D7C672B2E_OFFSET UNITYSDK_OFFSET(0x98447C0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_922876C57354302C_OFFSET UNITYSDK_OFFSET(0x9843F70)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_92CF8E9074F633FA_OFFSET UNITYSDK_OFFSET(0x98444B0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_94A2F63DE8B7DB51_OFFSET UNITYSDK_OFFSET(0x9843BB0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_C08EA6252F773E6C_1_OFFSET UNITYSDK_OFFSET(0x9844A10)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_C08EA6252F773E6C_OFFSET UNITYSDK_OFFSET(0x98448A0)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_D2A08F3D951A0C1D_OFFSET UNITYSDK_OFFSET(0x9846800)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_F70DC5473DF715AD_OFFSET UNITYSDK_OFFSET(0x9846090)
#define RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_FBF2CB29FD3B55E6_OFFSET UNITYSDK_OFFSET(0x9843930)
#define RPG_CLIENT_MONOMAP3DTOUCH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9845B70)
#define RPG_CLIENT_MONOMAP3DTOUCH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9845510)
#define RPG_CLIENT_MONOMAP3DTOUCH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9844EA0)
#define RPG_CLIENT_MONOMAP3DTOUCH_REFRESH_OFFSET UNITYSDK_OFFSET(0x9843390)
#define RPG_CLIENT_MONOMAP3DTOUCH_RESETTOUCH_OFFSET UNITYSDK_OFFSET(0x9845D10)
#define RPG_CLIENT_MONOMAP3DTOUCH_SUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0x9844F20)
#define RPG_CLIENT_MONOMAP3DTOUCH_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0x9845580)
#define RPG_CLIENT_MONOMAP3DTOUCH_UPDATE_OFFSET UNITYSDK_OFFSET(0x9843510)
#define RPG_CLIENT_MONOMAP3DTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0x9846940)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMap3DTouch_TypeDefinitionIndex = 54842;

	class MonoMap3DTouch : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_2; // 0x0
		::RPG::Client::MonoMap3DTouch_Struct_2_89E69CD783F83437 TouchEvents; // 0x18
		::RPG::Client::MonoMap3DTouch_Class_1_7919F3AA7BCFEB6C* Field_5_1; // 0x68
		::System::Boolean Field_5_3; // 0x70
		::System::Boolean Field_5_4; // 0x71
		::System::Boolean Field_5_5; // 0x72
		::System::Boolean Field_5_6; // 0x73
		::System::Boolean Field_5_7; // 0x74
		::System::Single Field_5_8; // 0x78
		::UnityEngine::Vector3 Field_5_9; // 0x7C
		::System::Boolean Field_5_10; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH__CTOR_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_REFRESH_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_3E06E2491B129B22()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_3E06E2491B129B22_OFFSET))(this);
		}

		::System::Boolean IsPageNotFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_ISPAGENOTFOCUSED_OFFSET))(this);
		}

		::System::Void Method_5_922876C57354302C(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_922876C57354302C_OFFSET))(this, a1);
		}

		::System::Void Method_5_4A997C91819DC81F(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_4A997C91819DC81F_OFFSET))(this, a1);
		}

		::System::Void Method_5_92CF8E9074F633FA(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_92CF8E9074F633FA_OFFSET))(this, a1);
		}

		::System::Void Method_5_0DA2C55EA555FBD4(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_0DA2C55EA555FBD4_OFFSET))(this, a1);
		}

		::System::Void Method_5_88C2171D7C672B2E(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_88C2171D7C672B2E_OFFSET))(this, a1);
		}

		::System::Void Method_5_C08EA6252F773E6C(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_C08EA6252F773E6C_OFFSET))(this, a1);
		}

		::System::Void Method_5_C08EA6252F773E6C_1(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_C08EA6252F773E6C_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_7F55222BA915D588(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7F55222BA915D588_OFFSET))(this, a1);
		}

		::System::Void Method_5_7F55222BA915D588_1(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7F55222BA915D588_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_7F55222BA915D588_2(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7F55222BA915D588_2_OFFSET))(this, a1);
		}

		::System::Void Method_5_88C2171D7C672B2E_1(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_88C2171D7C672B2E_1_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void SubscribeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_SUBSCRIBEEVENT_OFFSET))(this);
		}

		::System::Void UnsubscribeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_UNSUBSCRIBEEVENT_OFFSET))(this);
		}

		::System::Void ResetTouch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_RESETTOUCH_OFFSET))(this);
		}

		::System::Void Method_5_94A2F63DE8B7DB51()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_94A2F63DE8B7DB51_OFFSET))(this);
		}

		::System::Void Method_5_49A086C8E6F42C45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_49A086C8E6F42C45_OFFSET))(this);
		}

		::System::Void Method_5_F70DC5473DF715AD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_F70DC5473DF715AD_OFFSET))(this);
		}

		::System::Void Method_5_7A73F165001BC325()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7A73F165001BC325_OFFSET))(this);
		}

		::System::Void Method_5_7A73F165001BC325_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7A73F165001BC325_1_OFFSET))(this);
		}

		::System::Void Method_5_0DC794B6E3A200E7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_0DC794B6E3A200E7_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_5_7F4EBEC55EBE2D81()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_7F4EBEC55EBE2D81_OFFSET))(this);
		}

		::System::Void Method_5_D2A08F3D951A0C1D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_D2A08F3D951A0C1D_OFFSET))(this, a1);
		}

		::System::Void Method_5_115AB266A722E835()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_115AB266A722E835_OFFSET))(this);
		}

		::System::Void Method_5_FBF2CB29FD3B55E6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_METHOD_5_FBF2CB29FD3B55E6_OFFSET))(this);
		}
	};
}
