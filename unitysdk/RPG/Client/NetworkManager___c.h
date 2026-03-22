#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B87448D5E720C3DE.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_7;
namespace RPG::Client { class GlobalDispatchData_ServerData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_NETWORKMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x99F1320)
#define RPG_CLIENT_NETWORKMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x99F1350)
#define RPG_CLIENT_NETWORKMANAGER___C__SENDPVEBATTLERESULTCSREQ_B__331_0_OFFSET UNITYSDK_OFFSET(0x99F13F0)
#define RPG_CLIENT_NETWORKMANAGER___C__SETRECOMMANDSERVERBYPINGANDREGION_B__66_0_OFFSET UNITYSDK_OFFSET(0x99F13D0)
#define RPG_CLIENT_NETWORKMANAGER___C___ONGLOBALDISPATCHRESPONSE_B__59_0_OFFSET UNITYSDK_OFFSET(0x99F1360)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___c_TypeDefinitionIndex = 55131;

	class NetworkManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Struct_2_B87448D5E720C3DE, ::Class_1_21DCD4640D389503_7*>** StaticGet___9__331_0()
		{
			return (::System::Func_2<::Struct_2_B87448D5E720C3DE, ::Class_1_21DCD4640D389503_7*>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x43170);
		}
		static ::RPG::Client::NetworkManager___c** StaticGet___9()
		{
			return (::RPG::Client::NetworkManager___c**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x43178);
		}
		static ::System::Func_2<::RPG::Client::GlobalDispatchData_ServerData*, ::System::Boolean>** StaticGet___9__59_0()
		{
			return (::System::Func_2<::RPG::Client::GlobalDispatchData_ServerData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x43180);
		}
		static ::System::Func_2<::RPG::Client::GlobalDispatchData_ServerData*, ::System::Int64>** StaticGet___9__66_0()
		{
			return (::System::Func_2<::RPG::Client::GlobalDispatchData_ServerData*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(NetworkManager___c_TypeDefinitionIndex)->GetStaticField(0x43188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnGlobalDispatchResponse_b__59_0(::RPG::Client::GlobalDispatchData_ServerData* r)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C___ONGLOBALDISPATCHRESPONSE_B__59_0_OFFSET))(this, r);
		}

		::System::Int64 _SetRecommandServerByPingAndRegion_b__66_0(::RPG::Client::GlobalDispatchData_ServerData* a)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SETRECOMMANDSERVERBYPINGANDREGION_B__66_0_OFFSET))(this, a);
		}

		::Class_1_21DCD4640D389503_7* _SendPVEBattleResultCsReq_b__331_0(::Struct_2_B87448D5E720C3DE x)
		{
			return ((::Class_1_21DCD4640D389503_7*(*)(::PVOID, ::Struct_2_B87448D5E720C3DE))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___C__SENDPVEBATTLERESULTCSREQ_B__331_0_OFFSET))(this, x);
		}
	};
}
