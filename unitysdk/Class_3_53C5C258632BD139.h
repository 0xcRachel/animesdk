#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A72B7E8634F951BA.h"
#include "unitysdk/RPG/Client/LittleGameShare/FightServerLogLevel.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/Struct_2_9D8AC967EA14E5A2.h"

class Class_0_16E4307DCC419505_41;
class Class_1_0E9EED74A778662A;
class Class_1_455008579EB95638_34;
class Class_1_57B0727320B17159;
class Class_1_9AD828BA811E7C7A_1;
class Class_1_9AD828BA811E7C7A_2;
class Class_1_9AD828BA811E7C7A_4;
class Class_1_DDEA15C15400616B;
class Class_2_4087ADCA7404CF67;
namespace Entitas { template <typename T> class Context_1; }
namespace Entitas { template <typename T> class IContext_1; }
namespace Entitas { template <typename T> class IMatcher_1; }
namespace Google::Protobuf { class IMessage; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_53C5C258632BD139_GET_LEAVEPLAYERUIDLIST_OFFSET UNITYSDK_OFFSET(0x142F8BA0)
#define CLASS_3_53C5C258632BD139_METHOD_3_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x142F9610)
#define CLASS_3_53C5C258632BD139_METHOD_3_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x142FB4E0)
#define CLASS_3_53C5C258632BD139_METHOD_3_0AB718BEE9EA06D7_OFFSET UNITYSDK_OFFSET(0x142F9AD0)
#define CLASS_3_53C5C258632BD139_METHOD_3_19E89B4D61AF5CBB_OFFSET UNITYSDK_OFFSET(0x142FB0B0)
#define CLASS_3_53C5C258632BD139_METHOD_3_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x142FAE60)
#define CLASS_3_53C5C258632BD139_METHOD_3_29E8EBCBB63706B4_OFFSET UNITYSDK_OFFSET(0x142FB270)
#define CLASS_3_53C5C258632BD139_METHOD_3_3C927B51D2142A24_1_OFFSET UNITYSDK_OFFSET(0x142FB4F0)
#define CLASS_3_53C5C258632BD139_METHOD_3_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x142FB470)
#define CLASS_3_53C5C258632BD139_METHOD_3_4A3AAA27F88537AE_OFFSET UNITYSDK_OFFSET(0x142F9620)
#define CLASS_3_53C5C258632BD139_METHOD_3_522C97A47C3F7DF2_OFFSET UNITYSDK_OFFSET(0x142FA870)
#define CLASS_3_53C5C258632BD139_METHOD_3_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x142F9D80)
#define CLASS_3_53C5C258632BD139_METHOD_3_5C9ADA0E17F862CC_OFFSET UNITYSDK_OFFSET(0x142F8BC0)
#define CLASS_3_53C5C258632BD139_METHOD_3_621CEC88A9371968_OFFSET UNITYSDK_OFFSET(0x142FB060)
#define CLASS_3_53C5C258632BD139_METHOD_3_73D70CF7573CE802_OFFSET UNITYSDK_OFFSET(0x142F9C20)
#define CLASS_3_53C5C258632BD139_METHOD_3_812B27EF664F59CD_OFFSET UNITYSDK_OFFSET(0x142F9F80)
#define CLASS_3_53C5C258632BD139_METHOD_3_81DC6A05DA9E068A_OFFSET UNITYSDK_OFFSET(0x142FA5B0)
#define CLASS_3_53C5C258632BD139_METHOD_3_87BEE437DCC0FF03_OFFSET UNITYSDK_OFFSET(0x142FA540)
#define CLASS_3_53C5C258632BD139_METHOD_3_90E40848AF21BB07_OFFSET UNITYSDK_OFFSET(0x142F9EE0)
#define CLASS_3_53C5C258632BD139_METHOD_3_9A8BFEB2D43F0EAB_OFFSET UNITYSDK_OFFSET(0x142FB1A0)
#define CLASS_3_53C5C258632BD139_METHOD_3_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x142FA810)
#define CLASS_3_53C5C258632BD139_METHOD_3_9BA66CABB1BB20A4_OFFSET UNITYSDK_OFFSET(0x142FA4D0)
#define CLASS_3_53C5C258632BD139_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x142FADE0)
#define CLASS_3_53C5C258632BD139_METHOD_3_B31EA7BDC4F550AC_OFFSET UNITYSDK_OFFSET(0x142F9530)
#define CLASS_3_53C5C258632BD139_METHOD_3_B793751D2A39A234_OFFSET UNITYSDK_OFFSET(0x142FA030)
#define CLASS_3_53C5C258632BD139_METHOD_3_B86FB61B32E1718F_OFFSET UNITYSDK_OFFSET(0x142FB150)
#define CLASS_3_53C5C258632BD139_METHOD_3_C64988A565FE5CC3_1_OFFSET UNITYSDK_OFFSET(0x142FB560)
#define CLASS_3_53C5C258632BD139_METHOD_3_C64988A565FE5CC3_OFFSET UNITYSDK_OFFSET(0x142FB550)
#define CLASS_3_53C5C258632BD139_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x142F9B60)
#define CLASS_3_53C5C258632BD139_METHOD_3_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x142F9BA0)
#define CLASS_3_53C5C258632BD139_METHOD_3_CEEA8717F1571454_OFFSET UNITYSDK_OFFSET(0x142FB460)
#define CLASS_3_53C5C258632BD139_METHOD_3_D329119D0317233F_OFFSET UNITYSDK_OFFSET(0x142FAEB0)
#define CLASS_3_53C5C258632BD139_METHOD_3_D488C3062E88EA00_OFFSET UNITYSDK_OFFSET(0x142F93A0)
#define CLASS_3_53C5C258632BD139_METHOD_3_D8618198BDAD0561_OFFSET UNITYSDK_OFFSET(0x142F8B90)
#define CLASS_3_53C5C258632BD139_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x142FA7C0)
#define CLASS_3_53C5C258632BD139_SET_LEAVEPLAYERUIDLIST_OFFSET UNITYSDK_OFFSET(0x142F8BB0)
#define CLASS_3_53C5C258632BD139__CTOR_OFFSET UNITYSDK_OFFSET(0x142F9810)

inline static constexpr unsigned int Class_3_53C5C258632BD139_TypeDefinitionIndex = 34658;

class Class_3_53C5C258632BD139 : public ::Class_2_A72B7E8634F951BA
{
public:
	::RPG::Client::RPGProfilerMarker* Field_3_0; // 0x68
	::Class_1_9AD828BA811E7C7A_2* Field_3_1; // 0x70
	::RPG::Client::RPGProfilerMarker* Field_3_2; // 0x78
	::System::Collections::Generic::List_1<::Struct_2_9D8AC967EA14E5A2>* Field_3_3; // 0x80
	::Class_2_4087ADCA7404CF67* Field_3_4; // 0x88
	::Class_0_16E4307DCC419505_41* Field_3_5; // 0x90
	::System::Collections::Generic::List_1<::Class_1_9AD828BA811E7C7A_4*>* Field_3_6; // 0x98
	::System::Collections::Generic::List_1<::System::UInt32>* _LeavePlayerUidList_k__BackingField; // 0xA0
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_8; // 0xA8
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_9; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>* Method_3_D8618198BDAD0561()
	{
		return ((::System::Collections::Generic::IReadOnlyCollection_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_D8618198BDAD0561_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* get_LeavePlayerUidList()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_GET_LEAVEPLAYERUIDLIST_OFFSET))(this);
	}

	::System::Void set_LeavePlayerUidList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_SET_LEAVEPLAYERUIDLIST_OFFSET))(this, a1);
	}

	::System::Void Method_3_5C9ADA0E17F862CC(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_5C9ADA0E17F862CC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D488C3062E88EA00(::System::UInt32 a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_D488C3062E88EA00_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_B31EA7BDC4F550AC(::System::UInt32 a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_B31EA7BDC4F550AC_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_3_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_02A3D10A9D535169_OFFSET))(this);
	}

	::Class_1_DDEA15C15400616B* Method_3_4A3AAA27F88537AE(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::Class_1_DDEA15C15400616B*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_4A3AAA27F88537AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0AB718BEE9EA06D7(::Class_1_57B0727320B17159* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57B0727320B17159*))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_0AB718BEE9EA06D7_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_3_73D70CF7573CE802(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_73D70CF7573CE802_OFFSET))(this, a1);
	}

	::System::Void Method_3_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_3_90E40848AF21BB07(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_90E40848AF21BB07_OFFSET))(this, a1);
	}

	::System::Void Method_3_812B27EF664F59CD(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_812B27EF664F59CD_OFFSET))(this, a1);
	}

	::System::Void Method_3_B793751D2A39A234(::System::UInt32 a1, ::Class_1_9AD828BA811E7C7A_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_9AD828BA811E7C7A_1*))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_B793751D2A39A234_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_87BEE437DCC0FF03(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_87BEE437DCC0FF03_OFFSET))(this, a1);
	}

	::System::Void Method_3_81DC6A05DA9E068A(::System::UInt32 a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_81DC6A05DA9E068A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_9AD828BA811E7C7A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9AD828BA811E7C7A_2*))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::Class_1_9AD828BA811E7C7A_2* Method_3_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_9AD828BA811E7C7A_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_9B39F7D7C1FF70D6_OFFSET))(this);
	}

	::System::Void Method_3_522C97A47C3F7DF2(::Class_1_455008579EB95638_34* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_455008579EB95638_34*))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_522C97A47C3F7DF2_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_9AD828BA811E7C7A_4*>* Method_3_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9AD828BA811E7C7A_4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_241FCB0507EB9FA1_OFFSET))(this);
	}

	::System::Void Method_3_D329119D0317233F(::System::UInt32 a1, ::Google::Protobuf::IMessage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_D329119D0317233F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_621CEC88A9371968(::System::String* a1, ::RPG::LogTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_621CEC88A9371968_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9BA66CABB1BB20A4(::System::String* a1, ::RPG::LogTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_9BA66CABB1BB20A4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_19E89B4D61AF5CBB(::System::Collections::Generic::List_1<::Struct_2_9D8AC967EA14E5A2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_9D8AC967EA14E5A2>*))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_19E89B4D61AF5CBB_OFFSET))(this, a1);
	}

	::System::Void Method_3_B86FB61B32E1718F(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_B86FB61B32E1718F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9A8BFEB2D43F0EAB(::System::UInt64 a1, ::System::UInt32 a2, ::Class_1_0E9EED74A778662A* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::UInt32, ::Class_1_0E9EED74A778662A*))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_9A8BFEB2D43F0EAB_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_29E8EBCBB63706B4(::System::String* a1, ::RPG::Client::LittleGameShare::FightServerLogLevel a2, ::RPG::LogTag a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGameShare::FightServerLogLevel, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_29E8EBCBB63706B4_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CEEA8717F1571454(::Class_1_57B0727320B17159* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57B0727320B17159*))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_CEEA8717F1571454_OFFSET))(this, a1);
	}

	::System::Void Method_3_3C927B51D2142A24(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_3C927B51D2142A24_OFFSET))(this, a1);
	}

	::System::Void Method_3_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_3_3C927B51D2142A24_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_3C927B51D2142A24_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_C64988A565FE5CC3(::System::String* a1, ::RPG::LogTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_C64988A565FE5CC3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C64988A565FE5CC3_1(::System::String* a1, ::RPG::LogTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_3_53C5C258632BD139_METHOD_3_C64988A565FE5CC3_1_OFFSET))(this, a1, a2);
	}
};
