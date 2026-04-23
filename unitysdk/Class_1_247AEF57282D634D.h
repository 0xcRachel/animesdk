#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_23F67DD15593C8D6;
class Class_1_615E8BBF6B445C30;
class Class_1_69A4FCD237772492;
class Class_1_B884A3F1FCD4287A;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class IMessage; }
namespace RPG::Client { class NetPacket; }
namespace RPG::Client { class RspHandler; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_1_247AEF57282D634D_ADD_ONFIGHTHEARTBEATSCRSP_OFFSET UNITYSDK_OFFSET(0xFF16450)
#define CLASS_1_247AEF57282D634D_ADD_ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0xFF16390)
#define CLASS_1_247AEF57282D634D_ADD_ONGENERALRSP_OFFSET UNITYSDK_OFFSET(0xFF162D0)
#define CLASS_1_247AEF57282D634D_ADD_ONSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0xFF15FD0)
#define CLASS_1_247AEF57282D634D_ADD_ONSERVERCONNECTFAIL_OFFSET UNITYSDK_OFFSET(0xFF16150)
#define CLASS_1_247AEF57282D634D_ADD_ONSERVERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xFF16090)
#define CLASS_1_247AEF57282D634D_ADD_ONSERVERSTOPPED_OFFSET UNITYSDK_OFFSET(0xFF16210)
#define CLASS_1_247AEF57282D634D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFF166C0)
#define CLASS_1_247AEF57282D634D_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xFF18830)
#define CLASS_1_247AEF57282D634D_METHOD_1_07FB94561F155CD7_OFFSET UNITYSDK_OFFSET(0xFF17630)
#define CLASS_1_247AEF57282D634D_METHOD_1_0AE6B6F1AAE15BFE_OFFSET UNITYSDK_OFFSET(0xFF18430)
#define CLASS_1_247AEF57282D634D_METHOD_1_0BDFAC56E6B704CB_1_OFFSET UNITYSDK_OFFSET(0xFF17AC0)
#define CLASS_1_247AEF57282D634D_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xFF173A0)
#define CLASS_1_247AEF57282D634D_METHOD_1_0D8DB2DC8B47A973_OFFSET UNITYSDK_OFFSET(0xFF16510)
#define CLASS_1_247AEF57282D634D_METHOD_1_0DD2F59010F908F5_OFFSET UNITYSDK_OFFSET(0xFF15C80)
#define CLASS_1_247AEF57282D634D_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0xFF17540)
#define CLASS_1_247AEF57282D634D_METHOD_1_21AFFD96111DC5FA_OFFSET UNITYSDK_OFFSET(0xFF17720)
#define CLASS_1_247AEF57282D634D_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xFF15FC0)
#define CLASS_1_247AEF57282D634D_METHOD_1_25DEA5C65A602671_1_OFFSET UNITYSDK_OFFSET(0xFF16B10)
#define CLASS_1_247AEF57282D634D_METHOD_1_25DEA5C65A602671_2_OFFSET UNITYSDK_OFFSET(0xFF16BE0)
#define CLASS_1_247AEF57282D634D_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xFF18230)
#define CLASS_1_247AEF57282D634D_METHOD_1_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0xFF16EF0)
#define CLASS_1_247AEF57282D634D_METHOD_1_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0xFF16A20)
#define CLASS_1_247AEF57282D634D_METHOD_1_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0xFF16820)
#define CLASS_1_247AEF57282D634D_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xFF176E0)
#define CLASS_1_247AEF57282D634D_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xFF16F70)
#define CLASS_1_247AEF57282D634D_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xFF16AB0)
#define CLASS_1_247AEF57282D634D_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0xFF15F90)
#define CLASS_1_247AEF57282D634D_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0xFF15F40)
#define CLASS_1_247AEF57282D634D_METHOD_1_62165C025F5C0B19_OFFSET UNITYSDK_OFFSET(0xFF168C0)
#define CLASS_1_247AEF57282D634D_METHOD_1_7541FB7EB0923E08_OFFSET UNITYSDK_OFFSET(0xFF188B0)
#define CLASS_1_247AEF57282D634D_METHOD_1_79D3E3D754041A2D_OFFSET UNITYSDK_OFFSET(0xFF17C30)
#define CLASS_1_247AEF57282D634D_METHOD_1_9968A620B068A0F0_OFFSET UNITYSDK_OFFSET(0xFF15AB0)
#define CLASS_1_247AEF57282D634D_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xFF18760)
#define CLASS_1_247AEF57282D634D_METHOD_1_9D07C9D58517DB16_OFFSET UNITYSDK_OFFSET(0xFF15DE0)
#define CLASS_1_247AEF57282D634D_METHOD_1_9F218BA7C451254A_OFFSET UNITYSDK_OFFSET(0xFF186C0)
#define CLASS_1_247AEF57282D634D_METHOD_1_A6B0DBF2DA41C614_OFFSET UNITYSDK_OFFSET(0xFF18130)
#define CLASS_1_247AEF57282D634D_METHOD_1_A7E8B52E9ABB8DB9_1_OFFSET UNITYSDK_OFFSET(0xFF18640)
#define CLASS_1_247AEF57282D634D_METHOD_1_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0xFF183B0)
#define CLASS_1_247AEF57282D634D_METHOD_1_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0xFF17400)
#define CLASS_1_247AEF57282D634D_METHOD_1_B22E4C20D4492593_OFFSET UNITYSDK_OFFSET(0xFF15CF0)
#define CLASS_1_247AEF57282D634D_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0xFF16FC0)
#define CLASS_1_247AEF57282D634D_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0xFF16CB0)
#define CLASS_1_247AEF57282D634D_METHOD_1_BD97C03B146A6E18_OFFSET UNITYSDK_OFFSET(0xFF16DC0)
#define CLASS_1_247AEF57282D634D_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0xFF16750)
#define CLASS_1_247AEF57282D634D_METHOD_1_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0xFF18320)
#define CLASS_1_247AEF57282D634D_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0xFF17B20)
#define CLASS_1_247AEF57282D634D_REMOVE_ONFIGHTHEARTBEATSCRSP_OFFSET UNITYSDK_OFFSET(0xFF164B0)
#define CLASS_1_247AEF57282D634D_REMOVE_ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0xFF163F0)
#define CLASS_1_247AEF57282D634D_REMOVE_ONGENERALRSP_OFFSET UNITYSDK_OFFSET(0xFF16330)
#define CLASS_1_247AEF57282D634D_REMOVE_ONSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0xFF16030)
#define CLASS_1_247AEF57282D634D_REMOVE_ONSERVERCONNECTFAIL_OFFSET UNITYSDK_OFFSET(0xFF161B0)
#define CLASS_1_247AEF57282D634D_REMOVE_ONSERVERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xFF160F0)
#define CLASS_1_247AEF57282D634D_REMOVE_ONSERVERSTOPPED_OFFSET UNITYSDK_OFFSET(0xFF16270)
#define CLASS_1_247AEF57282D634D__CTOR_OFFSET UNITYSDK_OFFSET(0xFF18940)

inline static constexpr unsigned int Class_1_247AEF57282D634D_TypeDefinitionIndex = 63934;

class Class_1_247AEF57282D634D : public ::System::Object
{
public:
	::Class_1_615E8BBF6B445C30* Field_1_7; // 0x10
	::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* OnGeneralRsp; // 0x18
	::Class_1_23F67DD15593C8D6* Field_1_12; // 0x20
	::Class_1_23F67DD15593C8D6* Field_1_13; // 0x28
	::System::Action* OnServerStopped; // 0x30
	::System::Action* OnServerDisconnected; // 0x38
	::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* OnGeneralNotify; // 0x40
	::System::Action_2<::System::UInt64, ::System::Single>* OnFightHeartBeatScRsp; // 0x48
	::System::Action* OnServerConnectFail; // 0x50
	::Class_1_B884A3F1FCD4287A* Field_1_11; // 0x58
	::System::Action* OnServerConnected; // 0x60
	::Class_1_69A4FCD237772492* Field_1_8; // 0x68
	::System::UInt32 Field_1_9; // 0x70
	::System::UInt32 Field_1_10; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9968A620B068A0F0(::System::UInt32 a1, ::System::UInt64 a2, ::System::String* a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::System::String*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_9968A620B068A0F0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_B22E4C20D4492593(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_B22E4C20D4492593_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0DD2F59010F908F5(::System::UInt16 a1, ::Google::Protobuf::IMessage* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt16, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_0DD2F59010F908F5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9D07C9D58517DB16(::Class_1_615E8BBF6B445C30* a1, ::System::UInt16 a2, ::Google::Protobuf::IMessage* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_615E8BBF6B445C30*, ::System::UInt16, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_9D07C9D58517DB16_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_1_247AEF57282D634D* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_247AEF57282D634D*(*)())((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_528BD4865C714C5C_OFFSET))();
	}

	::Class_1_615E8BBF6B445C30* Method_1_24748FC20F375725()
	{
		return ((::Class_1_615E8BBF6B445C30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void add_OnServerConnected(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_ADD_ONSERVERCONNECTED_OFFSET))(this, value);
	}

	::System::Void remove_OnServerConnected(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_REMOVE_ONSERVERCONNECTED_OFFSET))(this, value);
	}

	::System::Void add_OnServerDisconnected(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_ADD_ONSERVERDISCONNECTED_OFFSET))(this, value);
	}

	::System::Void remove_OnServerDisconnected(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_REMOVE_ONSERVERDISCONNECTED_OFFSET))(this, value);
	}

	::System::Void add_OnServerConnectFail(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_ADD_ONSERVERCONNECTFAIL_OFFSET))(this, value);
	}

	::System::Void remove_OnServerConnectFail(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_REMOVE_ONSERVERCONNECTFAIL_OFFSET))(this, value);
	}

	::System::Void add_OnServerStopped(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_ADD_ONSERVERSTOPPED_OFFSET))(this, value);
	}

	::System::Void remove_OnServerStopped(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_REMOVE_ONSERVERSTOPPED_OFFSET))(this, value);
	}

	::System::Void add_OnGeneralRsp(::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_ADD_ONGENERALRSP_OFFSET))(this, value);
	}

	::System::Void remove_OnGeneralRsp(::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_REMOVE_ONGENERALRSP_OFFSET))(this, value);
	}

	::System::Void add_OnGeneralNotify(::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_ADD_ONGENERALNOTIFY_OFFSET))(this, value);
	}

	::System::Void remove_OnGeneralNotify(::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_REMOVE_ONGENERALNOTIFY_OFFSET))(this, value);
	}

	::System::Void add_OnFightHeartBeatScRsp(::System::Action_2<::System::UInt64, ::System::Single>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt64, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_ADD_ONFIGHTHEARTBEATSCRSP_OFFSET))(this, value);
	}

	::System::Void remove_OnFightHeartBeatScRsp(::System::Action_2<::System::UInt64, ::System::Single>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt64, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_REMOVE_ONFIGHTHEARTBEATSCRSP_OFFSET))(this, value);
	}

	::System::Void Method_1_0D8DB2DC8B47A973()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_0D8DB2DC8B47A973_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_35942D7A8A374AB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_35942D7A8A374AB0_OFFSET))(this);
	}

	::System::Void Method_1_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_2BC55A66CB2B0118_OFFSET))(this);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_1_BD97C03B146A6E18(::System::String* a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_BD97C03B146A6E18_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_25EC451C0EA68F53_OFFSET))(this);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Void Method_1_07FB94561F155CD7(::RPG::Client::NetPacket* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_07FB94561F155CD7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_62165C025F5C0B19()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_62165C025F5C0B19_OFFSET))(this);
	}

	::System::Void Method_1_21AFFD96111DC5FA(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_21AFFD96111DC5FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_79D3E3D754041A2D(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_79D3E3D754041A2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A7E8B52E9ABB8DB9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_A7E8B52E9ABB8DB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0AE6B6F1AAE15BFE(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_0AE6B6F1AAE15BFE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A7E8B52E9ABB8DB9_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_A7E8B52E9ABB8DB9_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Void Method_1_9F218BA7C451254A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_9F218BA7C451254A_OFFSET))(this, a1);
	}

	::Class_1_69A4FCD237772492* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_69A4FCD237772492*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Void Method_1_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_A9DAF3FE2888211B_OFFSET))(this, a1);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_A6B0DBF2DA41C614(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_A6B0DBF2DA41C614_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_25DEA5C65A602671_1_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_25DEA5C65A602671_2_OFFSET))(this);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_06330CD58CB602B6_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_1_7541FB7EB0923E08(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_7541FB7EB0923E08_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BDFAC56E6B704CB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_247AEF57282D634D_METHOD_1_0BDFAC56E6B704CB_1_OFFSET))(this);
	}
};
