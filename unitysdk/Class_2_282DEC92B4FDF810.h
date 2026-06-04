#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_151B93D9C4BBDCA4.h"
#include "unitysdk/Class_1_3DA1D1484278689C_ReceiveMode.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameClientNetMode.h"

class Class_0_16E4307DCC419505_29;
class Class_1_4CD8A1ACD565F336;
class Class_3_53C5C258632BD139;
class Class_3_C66DEDBB208C643C;
namespace Google::Protobuf { class ByteString; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_282DEC92B4FDF810_GET_CLIENTPREDICATETIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x179BEEF0)
#define CLASS_2_282DEC92B4FDF810_GET_CLIENTREPLAYTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x179BEF10)
#define CLASS_2_282DEC92B4FDF810_GET_ISPAUSEREPLAY_OFFSET UNITYSDK_OFFSET(0x179BEF30)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_02DC14AEDD53F663_OFFSET UNITYSDK_OFFSET(0x179BE060)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_102A1038C38883F3_OFFSET UNITYSDK_OFFSET(0x179BECB0)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x179BDE60)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_2F5AC4358F4D89A9_OFFSET UNITYSDK_OFFSET(0x179BEED0)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_4484591CA1060976_OFFSET UNITYSDK_OFFSET(0x179BE4C0)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_4E84FD21E7EECC5B_OFFSET UNITYSDK_OFFSET(0x179BE370)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_8F4CDE31FF46216D_1_OFFSET UNITYSDK_OFFSET(0x179BEBE0)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_8F4CDE31FF46216D_OFFSET UNITYSDK_OFFSET(0x179BEB10)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_9407410AABC43F0E_OFFSET UNITYSDK_OFFSET(0x179BEEE0)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x179BD7D0)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x179BE7B0)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_E5695720AB0F6E98_OFFSET UNITYSDK_OFFSET(0x179BE1B0)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_F239777256F9BA8F_1_OFFSET UNITYSDK_OFFSET(0x179BEF60)
#define CLASS_2_282DEC92B4FDF810_METHOD_2_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x179BEF50)
#define CLASS_2_282DEC92B4FDF810_SET_CLIENTPREDICATETIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x179BEF00)
#define CLASS_2_282DEC92B4FDF810_SET_CLIENTREPLAYTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0x179BEF20)
#define CLASS_2_282DEC92B4FDF810_SET_ISPAUSEREPLAY_OFFSET UNITYSDK_OFFSET(0x179BEF40)
#define CLASS_2_282DEC92B4FDF810__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x179BE5C0)
#define CLASS_2_282DEC92B4FDF810__CTOR_OFFSET UNITYSDK_OFFSET(0x179BEF70)
#define CLASS_2_282DEC92B4FDF810__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x179BEA10)
#define CLASS_2_282DEC92B4FDF810__ONINIT_OFFSET UNITYSDK_OFFSET(0x179BD810)
#define CLASS_2_282DEC92B4FDF810__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x179BE600)
#define CLASS_2_282DEC92B4FDF810__ONSTART_OFFSET UNITYSDK_OFFSET(0x179BDA10)
#define CLASS_2_282DEC92B4FDF810__ONTICK_OFFSET UNITYSDK_OFFSET(0x179BDB40)
#define CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x179BF1E0)
#define CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x179BF120)
#define CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONINIT_OFFSET UNITYSDK_OFFSET(0x179BF060)
#define CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x179BF240)
#define CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONSTART_OFFSET UNITYSDK_OFFSET(0x179BF0C0)
#define CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x179BF180)

inline static constexpr unsigned int Class_2_282DEC92B4FDF810_TypeDefinitionIndex = 56602;

class Class_2_282DEC92B4FDF810 : public ::Class_1_151B93D9C4BBDCA4
{
public:
	::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* Field_2_0; // 0x78
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x80
	::Class_0_16E4307DCC419505_29* Field_2_2; // 0x88
	::Class_3_C66DEDBB208C643C* Field_2_3; // 0x90
	::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* Field_2_4; // 0x98
	::Class_3_53C5C258632BD139* Field_2_5; // 0xA0
	::System::Action* Field_2_6; // 0xA8
	::Class_1_3DA1D1484278689C_ReceiveMode Field_2_7; // 0xB0
	::System::UInt32 Field_2_8; // 0xB4
	::System::UInt32 Field_2_9; // 0xB8
	::RPG::Client::LittleGameShare::LittleGameClientNetMode Field_2_10; // 0xBC
	::System::Boolean _IsPauseReplay_k__BackingField; // 0xBD
	::System::Boolean Field_2_12; // 0xBE
	::System::UInt32 Field_2_13; // 0xC0
	::System::UInt64 _ClientReplayTimeStampMs_k__BackingField; // 0xC8
	::System::UInt64 _ClientPredicateTimeStampMs_k__BackingField; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnInit(::Class_1_4CD8A1ACD565F336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CD8A1ACD565F336*))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810__ONINIT_OFFSET))(this, a1);
	}

	::System::Void _OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810__ONSTART_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810__ONTICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4E84FD21E7EECC5B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_4E84FD21E7EECC5B_OFFSET))(this);
	}

	::System::Void Method_2_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Boolean Method_2_E5695720AB0F6E98()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_E5695720AB0F6E98_OFFSET))(this);
	}

	::System::Boolean _CanLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810__CANLATEUPDATE_OFFSET))(this);
	}

	::System::Void _OnLateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810__ONLATEUPDATE_OFFSET))(this, a1);
	}

	::System::Void Method_2_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_D109CE569415FA03_OFFSET))(this);
	}

	::System::Void _OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810__ONCLEAR_OFFSET))(this);
	}

	::System::Void Method_2_8F4CDE31FF46216D(::System::Action* a1, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a2, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_8F4CDE31FF46216D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8F4CDE31FF46216D_1(::System::Action* a1, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a2, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*, ::System::Action_2<::System::UInt32, ::Google::Protobuf::ByteString*>*))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_8F4CDE31FF46216D_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_102A1038C38883F3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_102A1038C38883F3_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::LittleGameClientNetMode Method_2_2F5AC4358F4D89A9()
	{
		return ((::RPG::Client::LittleGameShare::LittleGameClientNetMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_2F5AC4358F4D89A9_OFFSET))(this);
	}

	::System::Void Method_2_9407410AABC43F0E(::RPG::Client::LittleGameShare::LittleGameClientNetMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::LittleGameClientNetMode))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_9407410AABC43F0E_OFFSET))(this, a1);
	}

	::System::UInt64 Method_2_02DC14AEDD53F663()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_02DC14AEDD53F663_OFFSET))(this);
	}

	::System::UInt32 Method_2_4484591CA1060976()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_4484591CA1060976_OFFSET))(this);
	}

	::System::UInt64 get_ClientPredicateTimeStampMs()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_GET_CLIENTPREDICATETIMESTAMPMS_OFFSET))(this);
	}

	::System::Void set_ClientPredicateTimeStampMs(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_SET_CLIENTPREDICATETIMESTAMPMS_OFFSET))(this, a1);
	}

	::System::UInt64 get_ClientReplayTimeStampMs()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_GET_CLIENTREPLAYTIMESTAMPMS_OFFSET))(this);
	}

	::System::Void set_ClientReplayTimeStampMs(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_SET_CLIENTREPLAYTIMESTAMPMS_OFFSET))(this, a1);
	}

	::System::Boolean get_IsPauseReplay()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_GET_ISPAUSEREPLAY_OFFSET))(this);
	}

	::System::Void set_IsPauseReplay(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_SET_ISPAUSEREPLAY_OFFSET))(this, a1);
	}

	::Class_3_C66DEDBB208C643C* Method_2_F239777256F9BA8F()
	{
		return ((::Class_3_C66DEDBB208C643C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_F239777256F9BA8F_OFFSET))(this);
	}

	::Class_3_53C5C258632BD139* Method_2_F239777256F9BA8F_1()
	{
		return ((::Class_3_53C5C258632BD139*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810_METHOD_2_F239777256F9BA8F_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnInit(::Class_1_4CD8A1ACD565F336* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4CD8A1ACD565F336*))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONINIT_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONSTART_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONCLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy__CanLateUpdate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__CANLATEUPDATE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnLateUpdate(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_282DEC92B4FDF810___IFIXBASEPROXY__ONLATEUPDATE_OFFSET))(this, a1);
	}
};
