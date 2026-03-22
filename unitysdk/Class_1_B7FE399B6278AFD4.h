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
namespace System { template <typename T> class Action_1; }

#define CLASS_1_B7FE399B6278AFD4_ADD_ONFIGHTHEARTBEATSCRSP_OFFSET UNITYSDK_OFFSET(0x11199F20)
#define CLASS_1_B7FE399B6278AFD4_ADD_ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0x11199E60)
#define CLASS_1_B7FE399B6278AFD4_ADD_ONGENERALRSP_OFFSET UNITYSDK_OFFSET(0x11199DA0)
#define CLASS_1_B7FE399B6278AFD4_ADD_ONSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0x11199AA0)
#define CLASS_1_B7FE399B6278AFD4_ADD_ONSERVERCONNECTFAIL_OFFSET UNITYSDK_OFFSET(0x11199C20)
#define CLASS_1_B7FE399B6278AFD4_ADD_ONSERVERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x11199B60)
#define CLASS_1_B7FE399B6278AFD4_ADD_ONSERVERSTOPPED_OFFSET UNITYSDK_OFFSET(0x11199CE0)
#define CLASS_1_B7FE399B6278AFD4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1119A190)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x1119C180)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_07FB94561F155CD7_OFFSET UNITYSDK_OFFSET(0x1119B100)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_0BDFAC56E6B704CB_1_OFFSET UNITYSDK_OFFSET(0x1119B590)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x1119AE70)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_0D8DB2DC8B47A973_OFFSET UNITYSDK_OFFSET(0x11199FE0)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_0DD2F59010F908F5_OFFSET UNITYSDK_OFFSET(0x11199750)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x1119B010)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_21AFFD96111DC5FA_OFFSET UNITYSDK_OFFSET(0x1119B1F0)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x11199A90)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_25DEA5C65A602671_1_OFFSET UNITYSDK_OFFSET(0x1119A5E0)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_25DEA5C65A602671_2_OFFSET UNITYSDK_OFFSET(0x1119A6B0)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1119BD10)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x1119A9C0)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_2BC55A66CB2B0118_OFFSET UNITYSDK_OFFSET(0x1119A4F0)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0x1119A2F0)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1119B1B0)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1119AA40)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1119A580)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_528BD4865C714C5C_OFFSET UNITYSDK_OFFSET(0x11199A60)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x11199A10)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_62165C025F5C0B19_OFFSET UNITYSDK_OFFSET(0x1119A390)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_7541FB7EB0923E08_OFFSET UNITYSDK_OFFSET(0x1119C200)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_79D3E3D754041A2D_OFFSET UNITYSDK_OFFSET(0x1119B700)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_9968A620B068A0F0_OFFSET UNITYSDK_OFFSET(0x11199580)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x1119C0B0)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_9D07C9D58517DB16_OFFSET UNITYSDK_OFFSET(0x111998B0)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_9F218BA7C451254A_OFFSET UNITYSDK_OFFSET(0x1119C010)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_A6B0DBF2DA41C614_OFFSET UNITYSDK_OFFSET(0x1119BC10)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_A7E8B52E9ABB8DB9_1_OFFSET UNITYSDK_OFFSET(0x1119BF10)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_A7E8B52E9ABB8DB9_2_OFFSET UNITYSDK_OFFSET(0x1119BF90)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0x1119BE90)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_A9DAF3FE2888211B_OFFSET UNITYSDK_OFFSET(0x1119AED0)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_B22E4C20D4492593_OFFSET UNITYSDK_OFFSET(0x111997C0)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x1119AA90)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x1119A780)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_BD97C03B146A6E18_OFFSET UNITYSDK_OFFSET(0x1119A890)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1119A220)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_DE1C1F4DF5D06882_OFFSET UNITYSDK_OFFSET(0x1119BE00)
#define CLASS_1_B7FE399B6278AFD4_METHOD_1_F4ADC37B63F4E9EF_OFFSET UNITYSDK_OFFSET(0x1119B5F0)
#define CLASS_1_B7FE399B6278AFD4_REMOVE_ONFIGHTHEARTBEATSCRSP_OFFSET UNITYSDK_OFFSET(0x11199F80)
#define CLASS_1_B7FE399B6278AFD4_REMOVE_ONGENERALNOTIFY_OFFSET UNITYSDK_OFFSET(0x11199EC0)
#define CLASS_1_B7FE399B6278AFD4_REMOVE_ONGENERALRSP_OFFSET UNITYSDK_OFFSET(0x11199E00)
#define CLASS_1_B7FE399B6278AFD4_REMOVE_ONSERVERCONNECTED_OFFSET UNITYSDK_OFFSET(0x11199B00)
#define CLASS_1_B7FE399B6278AFD4_REMOVE_ONSERVERCONNECTFAIL_OFFSET UNITYSDK_OFFSET(0x11199C80)
#define CLASS_1_B7FE399B6278AFD4_REMOVE_ONSERVERDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x11199BC0)
#define CLASS_1_B7FE399B6278AFD4_REMOVE_ONSERVERSTOPPED_OFFSET UNITYSDK_OFFSET(0x11199D40)
#define CLASS_1_B7FE399B6278AFD4__CTOR_OFFSET UNITYSDK_OFFSET(0x1119C290)

inline static constexpr unsigned int Class_1_B7FE399B6278AFD4_TypeDefinitionIndex = 55127;

class Class_1_B7FE399B6278AFD4 : public ::System::Object
{
public:
	::System::Action* OnServerDisconnected; // 0x10
	::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* OnGeneralRsp; // 0x18
	::System::Action* OnServerConnectFail; // 0x20
	::Class_1_615E8BBF6B445C30* Field_1_7; // 0x28
	::System::Action_1<::System::UInt64>* OnFightHeartBeatScRsp; // 0x30
	::Class_1_B884A3F1FCD4287A* Field_1_11; // 0x38
	::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* OnGeneralNotify; // 0x40
	::Class_1_23F67DD15593C8D6* Field_1_13; // 0x48
	::Class_1_69A4FCD237772492* Field_1_8; // 0x50
	::System::Action* OnServerConnected; // 0x58
	::Class_1_23F67DD15593C8D6* Field_1_12; // 0x60
	::System::Action* OnServerStopped; // 0x68
	::System::UInt32 Field_1_10; // 0x70
	::System::UInt32 Field_1_9; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9968A620B068A0F0(::System::UInt32 a1, ::System::UInt64 a2, ::System::String* a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::System::String*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_9968A620B068A0F0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void Method_1_B22E4C20D4492593(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_B22E4C20D4492593_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0DD2F59010F908F5(::System::UInt16 a1, ::Google::Protobuf::IMessage* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt16, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_0DD2F59010F908F5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9D07C9D58517DB16(::Class_1_615E8BBF6B445C30* a1, ::System::UInt16 a2, ::Google::Protobuf::IMessage* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_615E8BBF6B445C30*, ::System::UInt16, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_9D07C9D58517DB16_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_1_B7FE399B6278AFD4* Method_1_528BD4865C714C5C()
	{
		return ((::Class_1_B7FE399B6278AFD4*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_528BD4865C714C5C_OFFSET))();
	}

	::Class_1_615E8BBF6B445C30* Method_1_24748FC20F375725()
	{
		return ((::Class_1_615E8BBF6B445C30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void add_OnServerConnected(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_ADD_ONSERVERCONNECTED_OFFSET))(this, value);
	}

	::System::Void remove_OnServerConnected(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_REMOVE_ONSERVERCONNECTED_OFFSET))(this, value);
	}

	::System::Void add_OnServerDisconnected(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_ADD_ONSERVERDISCONNECTED_OFFSET))(this, value);
	}

	::System::Void remove_OnServerDisconnected(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_REMOVE_ONSERVERDISCONNECTED_OFFSET))(this, value);
	}

	::System::Void add_OnServerConnectFail(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_ADD_ONSERVERCONNECTFAIL_OFFSET))(this, value);
	}

	::System::Void remove_OnServerConnectFail(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_REMOVE_ONSERVERCONNECTFAIL_OFFSET))(this, value);
	}

	::System::Void add_OnServerStopped(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_ADD_ONSERVERSTOPPED_OFFSET))(this, value);
	}

	::System::Void remove_OnServerStopped(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_REMOVE_ONSERVERSTOPPED_OFFSET))(this, value);
	}

	::System::Void add_OnGeneralRsp(::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_ADD_ONGENERALRSP_OFFSET))(this, value);
	}

	::System::Void remove_OnGeneralRsp(::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_REMOVE_ONGENERALRSP_OFFSET))(this, value);
	}

	::System::Void add_OnGeneralNotify(::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_ADD_ONGENERALNOTIFY_OFFSET))(this, value);
	}

	::System::Void remove_OnGeneralNotify(::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_REMOVE_ONGENERALNOTIFY_OFFSET))(this, value);
	}

	::System::Void add_OnFightHeartBeatScRsp(::System::Action_1<::System::UInt64>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_ADD_ONFIGHTHEARTBEATSCRSP_OFFSET))(this, value);
	}

	::System::Void remove_OnFightHeartBeatScRsp(::System::Action_1<::System::UInt64>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt64>*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_REMOVE_ONFIGHTHEARTBEATSCRSP_OFFSET))(this, value);
	}

	::System::Void Method_1_0D8DB2DC8B47A973()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_0D8DB2DC8B47A973_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_35942D7A8A374AB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_35942D7A8A374AB0_OFFSET))(this);
	}

	::System::Void Method_1_2BC55A66CB2B0118()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_2BC55A66CB2B0118_OFFSET))(this);
	}

	::System::Void Method_1_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_1_BD97C03B146A6E18(::System::String* a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_BD97C03B146A6E18_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_25EC451C0EA68F53_OFFSET))(this);
	}

	::System::Void Method_1_0BDFAC56E6B704CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_0BDFAC56E6B704CB_OFFSET))(this);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Void Method_1_07FB94561F155CD7(::RPG::Client::NetPacket* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_07FB94561F155CD7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_62165C025F5C0B19()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_62165C025F5C0B19_OFFSET))(this);
	}

	::System::Void Method_1_21AFFD96111DC5FA(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_21AFFD96111DC5FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_79D3E3D754041A2D(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_79D3E3D754041A2D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DE1C1F4DF5D06882(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_DE1C1F4DF5D06882_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A7E8B52E9ABB8DB9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_A7E8B52E9ABB8DB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A7E8B52E9ABB8DB9_1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_A7E8B52E9ABB8DB9_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A7E8B52E9ABB8DB9_2(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_A7E8B52E9ABB8DB9_2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Void Method_1_9F218BA7C451254A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_9F218BA7C451254A_OFFSET))(this, a1);
	}

	::Class_1_69A4FCD237772492* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_69A4FCD237772492*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Void Method_1_A9DAF3FE2888211B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_A9DAF3FE2888211B_OFFSET))(this, a1);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_A6B0DBF2DA41C614(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_A6B0DBF2DA41C614_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_25DEA5C65A602671_1_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_25DEA5C65A602671_2_OFFSET))(this);
	}

	::System::Void Method_1_F4ADC37B63F4E9EF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_F4ADC37B63F4E9EF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_06330CD58CB602B6_OFFSET))(this);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Void Method_1_7541FB7EB0923E08(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_7541FB7EB0923E08_OFFSET))(this, a1);
	}

	::System::Void Method_1_0BDFAC56E6B704CB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7FE399B6278AFD4_METHOD_1_0BDFAC56E6B704CB_1_OFFSET))(this);
	}
};
