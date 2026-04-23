#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_63D18ECF87218619.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameNetMode.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/Struct_2_019938BC9C50B169.h"
#include "unitysdk/Struct_2_6E318F2AEABB84CB.h"
#include "unitysdk/Struct_2_C983EE158040EDC8.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_0_16E4307DCC419505_41;
class Class_1_1C06EB7D3B64779A;
class Class_1_57B0727320B17159;
class Class_1_81F1CF945D2A8B9E;
namespace Entitas { class IComponent; }
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Buffers { template <typename T> class IBufferWriter_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_2703A0F8B5DB9328_GET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x1646F660)
#define CLASS_2_2703A0F8B5DB9328_GET_LOGICDELTATIMEMS_OFFSET UNITYSDK_OFFSET(0x1646F690)
#define CLASS_2_2703A0F8B5DB9328_GET_NETMODE_OFFSET UNITYSDK_OFFSET(0x1646F640)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_0443CEBB7C313290_OFFSET UNITYSDK_OFFSET(0x1646F6C0)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x1646F510)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16456B80)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_2CAAA58EB429FD63_1_OFFSET UNITYSDK_OFFSET(0x1646F6B0)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_2CAAA58EB429FD63_OFFSET UNITYSDK_OFFSET(0x1646F6A0)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_376C9020E20CBA2F_OFFSET UNITYSDK_OFFSET(0x1646F580)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_37F600CCE247DD30_OFFSET UNITYSDK_OFFSET(0x1646F960)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_40D3DE8ADED3E32E_1_OFFSET UNITYSDK_OFFSET(0x164579A0)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_40D3DE8ADED3E32E_OFFSET UNITYSDK_OFFSET(0x164578F0)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_6F33BDFADAB75769_OFFSET UNITYSDK_OFFSET(0x16459380)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_783DA64ED5EB41BC_OFFSET UNITYSDK_OFFSET(0x1646F520)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_7FD9AF65E5D65DC4_OFFSET UNITYSDK_OFFSET(0x16457700)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_A134E903C4692403_OFFSET UNITYSDK_OFFSET(0x16456480)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x16454550)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_BF71B4DA3FD7CFF6_OFFSET UNITYSDK_OFFSET(0x1646F6D0)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_CE0CB83609ED8121_OFFSET UNITYSDK_OFFSET(0x1646FBD0)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_E5A2FF297C2B7A4E_OFFSET UNITYSDK_OFFSET(0x1646F5E0)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x164570B0)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_EF80CA5F5C8B83B3_OFFSET UNITYSDK_OFFSET(0x1646FC80)
#define CLASS_2_2703A0F8B5DB9328_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1646F680)
#define CLASS_2_2703A0F8B5DB9328_SET_ISSERVER_OFFSET UNITYSDK_OFFSET(0x1646F670)
#define CLASS_2_2703A0F8B5DB9328_SET_NETMODE_OFFSET UNITYSDK_OFFSET(0x1646F650)
#define CLASS_2_2703A0F8B5DB9328__CCTOR_OFFSET UNITYSDK_OFFSET(0x1646FDF0)
#define CLASS_2_2703A0F8B5DB9328__CTOR_OFFSET UNITYSDK_OFFSET(0x16456110)

inline static constexpr unsigned int Class_2_2703A0F8B5DB9328_TypeDefinitionIndex = 34374;

class Class_2_2703A0F8B5DB9328 : public ::Class_1_63D18ECF87218619
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_41*>** StaticGet_Field_2_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_41*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2703A0F8B5DB9328_TypeDefinitionIndex)->GetStaticField(0x50C40);
	}
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::Class_0_16E4307DCC419505_41*, ::Il2CppArray<::System::Object*>*>*>** StaticGet_Field_2_4()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::Class_0_16E4307DCC419505_41*, ::Il2CppArray<::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2703A0F8B5DB9328_TypeDefinitionIndex)->GetStaticField(0x50C48);
	}
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::System::Buffers::IBufferWriter_1<::System::Byte>*, ::Il2CppArray<::System::Object*>*>*>** StaticGet_Field_2_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::System::Buffers::IBufferWriter_1<::System::Byte>*, ::Il2CppArray<::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2703A0F8B5DB9328_TypeDefinitionIndex)->GetStaticField(0x50C50);
	}
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_3<::System::UInt32, ::Struct_2_C983EE158040EDC8, ::Class_0_16E4307DCC419505_41*>*>** StaticGet_Field_2_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_3<::System::UInt32, ::Struct_2_C983EE158040EDC8, ::Class_0_16E4307DCC419505_41*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_2703A0F8B5DB9328_TypeDefinitionIndex)->GetStaticField(0x50C58);
	}
	// static const ::System::Int32 Field_2_1 = 0x19000; // 0x0
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_17; // 0x10
	::Class_1_81F1CF945D2A8B9E* Field_2_0; // 0x18
	::Class_1_1C06EB7D3B64779A* Field_2_7; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Class_0_16E4307DCC419505_41*>* Field_2_6; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_16; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt64>*>* Field_2_18; // 0x38
	::System::UInt64 Field_2_12; // 0x40
	::System::UInt64 Field_2_11; // 0x48
	::System::Single Field_2_13; // 0x50
	::RPG::Client::LittleGameShare::LittleGameNetMode _NetMode_k__BackingField; // 0x54
	::System::Boolean _IsServer_k__BackingField; // 0x55
	::System::UInt32 _LogicDeltaTimeMs_k__BackingField; // 0x58
	::System::Int32 Field_2_15; // 0x5C
	::System::UInt32 Field_2_10; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A134E903C4692403(::Class_1_57B0727320B17159* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57B0727320B17159*))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_A134E903C4692403_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::Class_1_81F1CF945D2A8B9E* Method_2_24748FC20F375725()
	{
		return ((::Class_1_81F1CF945D2A8B9E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::System::Buffers::IBufferWriter_1<::System::Byte>*, ::Il2CppArray<::System::Object*>*>*>* Method_2_783DA64ED5EB41BC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::System::Buffers::IBufferWriter_1<::System::Byte>*, ::Il2CppArray<::System::Object*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_783DA64ED5EB41BC_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_3<::System::UInt32, ::Struct_2_C983EE158040EDC8, ::Class_0_16E4307DCC419505_41*>*>* Method_2_376C9020E20CBA2F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_3<::System::UInt32, ::Struct_2_C983EE158040EDC8, ::Class_0_16E4307DCC419505_41*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_376C9020E20CBA2F_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::Class_0_16E4307DCC419505_41*, ::Il2CppArray<::System::Object*>*>*>* Method_2_E5A2FF297C2B7A4E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::Class_0_16E4307DCC419505_41*, ::Il2CppArray<::System::Object*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_E5A2FF297C2B7A4E_OFFSET))(this);
	}

	::System::Void Method_2_6F33BDFADAB75769(::Class_0_16E4307DCC419505_41* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_41*))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_6F33BDFADAB75769_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Queue_1<::Struct_2_6E318F2AEABB84CB>* Method_2_7FD9AF65E5D65DC4()
	{
		return ((::System::Collections::Generic::Queue_1<::Struct_2_6E318F2AEABB84CB>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_7FD9AF65E5D65DC4_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::LittleGameNetMode get_NetMode()
	{
		return ((::RPG::Client::LittleGameShare::LittleGameNetMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_GET_NETMODE_OFFSET))(this);
	}

	::System::Void set_NetMode(::RPG::Client::LittleGameShare::LittleGameNetMode value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::LittleGameNetMode))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_SET_NETMODE_OFFSET))(this, value);
	}

	::System::Boolean get_IsServer()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_GET_ISSERVER_OFFSET))(this);
	}

	::System::Void set_IsServer(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_SET_ISSERVER_OFFSET))(this, value);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::UInt32 get_LogicDeltaTimeMs()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_GET_LOGICDELTATIMEMS_OFFSET))(this);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_2_2CAAA58EB429FD63()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_2CAAA58EB429FD63_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_2_2CAAA58EB429FD63_1()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_2CAAA58EB429FD63_1_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt64>*>* Method_2_0443CEBB7C313290()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt64>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_0443CEBB7C313290_OFFSET))(this);
	}

	::System::Void Method_2_BF71B4DA3FD7CFF6(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_BF71B4DA3FD7CFF6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_37F600CCE247DD30(::Entitas::IEntity* a1, ::System::Int32 a2, ::Entitas::IComponent* a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::System::Int32, ::Entitas::IComponent*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_37F600CCE247DD30_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CE0CB83609ED8121(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_CE0CB83609ED8121_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EF80CA5F5C8B83B3(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_EF80CA5F5C8B83B3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_40D3DE8ADED3E32E(::System::String* a1, ::RPG::LogTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_40D3DE8ADED3E32E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_40D3DE8ADED3E32E_1(::System::String* a1, ::RPG::LogTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_2_2703A0F8B5DB9328_METHOD_2_40D3DE8ADED3E32E_1_OFFSET))(this, a1, a2);
	}
};
