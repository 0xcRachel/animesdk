#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_11.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameNetMode.h"
#include "unitysdk/RPG/LogTag.h"
#include "unitysdk/Struct_2_019938BC9C50B169.h"
#include "unitysdk/Struct_2_59BE5B1187A98C1F.h"
#include "unitysdk/Struct_2_C983EE158040EDC8.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_1_3F2088DC1442FBF8_3;
class Class_1_57B0727320B17159;
namespace Entitas { class ISystem; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Buffers { template <typename T> class IBufferWriter_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_2_ED29D5E8860EE4AF_GET_NETMODE_OFFSET UNITYSDK_OFFSET(0x16054F80)
#define CLASS_2_ED29D5E8860EE4AF_METHOD_2_1ABE634E489C2299_OFFSET UNITYSDK_OFFSET(0x16043B80)
#define CLASS_2_ED29D5E8860EE4AF_METHOD_2_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x16054F40)
#define CLASS_2_ED29D5E8860EE4AF_METHOD_2_245D024554ADB191_OFFSET UNITYSDK_OFFSET(0x16054E00)
#define CLASS_2_ED29D5E8860EE4AF_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16043E80)
#define CLASS_2_ED29D5E8860EE4AF_METHOD_2_40D3DE8ADED3E32E_1_OFFSET UNITYSDK_OFFSET(0x16044A20)
#define CLASS_2_ED29D5E8860EE4AF_METHOD_2_40D3DE8ADED3E32E_OFFSET UNITYSDK_OFFSET(0x16044970)
#define CLASS_2_ED29D5E8860EE4AF_METHOD_2_6EAE992EB94B5BF3_OFFSET UNITYSDK_OFFSET(0x16054D70)
#define CLASS_2_ED29D5E8860EE4AF_METHOD_2_8198F1BDD8B196B6_OFFSET UNITYSDK_OFFSET(0x16054DD0)
#define CLASS_2_ED29D5E8860EE4AF_METHOD_2_9D5055F8FC266C32_OFFSET UNITYSDK_OFFSET(0x160447A0)
#define CLASS_2_ED29D5E8860EE4AF_METHOD_2_A0C00A1C0F04E97B_OFFSET UNITYSDK_OFFSET(0x16054DA0)
#define CLASS_2_ED29D5E8860EE4AF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16043F70)
#define CLASS_2_ED29D5E8860EE4AF_SET_NETMODE_OFFSET UNITYSDK_OFFSET(0x16054F90)
#define CLASS_2_ED29D5E8860EE4AF__CCTOR_OFFSET UNITYSDK_OFFSET(0x16054FA0)
#define CLASS_2_ED29D5E8860EE4AF__CTOR_OFFSET UNITYSDK_OFFSET(0x16043A90)

inline static constexpr unsigned int Class_2_ED29D5E8860EE4AF_TypeDefinitionIndex = 27880;

class Class_2_ED29D5E8860EE4AF : public ::Class_1_43BD383C98B4C0C5_11
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Entitas::ISystem*>** StaticGet_Field_2_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Entitas::ISystem*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED29D5E8860EE4AF_TypeDefinitionIndex)->GetStaticField(0x2B60);
	}
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_3<::System::UInt32, ::Struct_2_C983EE158040EDC8, ::Entitas::ISystem*>*>** StaticGet_Field_2_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_3<::System::UInt32, ::Struct_2_C983EE158040EDC8, ::Entitas::ISystem*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED29D5E8860EE4AF_TypeDefinitionIndex)->GetStaticField(0x2B68);
	}
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::System::Buffers::IBufferWriter_1<::System::Byte>*, ::Il2CppArray<::System::Object*>*>*>** StaticGet_Field_2_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::System::Buffers::IBufferWriter_1<::System::Byte>*, ::Il2CppArray<::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED29D5E8860EE4AF_TypeDefinitionIndex)->GetStaticField(0x2B70);
	}
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::Entitas::ISystem*, ::Il2CppArray<::System::Object*>*>*>** StaticGet_Field_2_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::Entitas::ISystem*, ::Il2CppArray<::System::Object*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_ED29D5E8860EE4AF_TypeDefinitionIndex)->GetStaticField(0x2B78);
	}
	::System::Collections::Generic::List_1<::Class_1_3F2088DC1442FBF8_3*>* Field_2_6; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::Entitas::ISystem*>* Field_2_4; // 0x18
	::System::Collections::Generic::Queue_1<::Struct_2_59BE5B1187A98C1F>* Field_2_5; // 0x20
	::RPG::Client::LittleGameShare::LittleGameNetMode _NetMode_k__BackingField; // 0x28
	::System::Single Field_2_8; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_ED29D5E8860EE4AF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED29D5E8860EE4AF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1ABE634E489C2299(::Class_1_57B0727320B17159* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57B0727320B17159*))((::PBYTE)hIl2Cpp + CLASS_2_ED29D5E8860EE4AF_METHOD_2_1ABE634E489C2299_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ED29D5E8860EE4AF_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED29D5E8860EE4AF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::System::Buffers::IBufferWriter_1<::System::Byte>*, ::Il2CppArray<::System::Object*>*>*>* Method_2_6EAE992EB94B5BF3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::System::Buffers::IBufferWriter_1<::System::Byte>*, ::Il2CppArray<::System::Object*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED29D5E8860EE4AF_METHOD_2_6EAE992EB94B5BF3_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_3<::System::UInt32, ::Struct_2_C983EE158040EDC8, ::Entitas::ISystem*>*>* Method_2_A0C00A1C0F04E97B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_3<::System::UInt32, ::Struct_2_C983EE158040EDC8, ::Entitas::ISystem*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED29D5E8860EE4AF_METHOD_2_A0C00A1C0F04E97B_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::Entitas::ISystem*, ::Il2CppArray<::System::Object*>*>*>* Method_2_8198F1BDD8B196B6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169, ::System::Action_2<::Entitas::ISystem*, ::Il2CppArray<::System::Object*>*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED29D5E8860EE4AF_METHOD_2_8198F1BDD8B196B6_OFFSET))(this);
	}

	::System::Void Method_2_245D024554ADB191(::Entitas::ISystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + CLASS_2_ED29D5E8860EE4AF_METHOD_2_245D024554ADB191_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Queue_1<::Struct_2_59BE5B1187A98C1F>* Method_2_9D5055F8FC266C32()
	{
		return ((::System::Collections::Generic::Queue_1<::Struct_2_59BE5B1187A98C1F>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED29D5E8860EE4AF_METHOD_2_9D5055F8FC266C32_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_3F2088DC1442FBF8_3*>* Method_2_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_3F2088DC1442FBF8_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED29D5E8860EE4AF_METHOD_2_241FCB0507EB9FA1_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::LittleGameNetMode get_NetMode()
	{
		return ((::RPG::Client::LittleGameShare::LittleGameNetMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED29D5E8860EE4AF_GET_NETMODE_OFFSET))(this);
	}

	::System::Void set_NetMode(::RPG::Client::LittleGameShare::LittleGameNetMode value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::LittleGameNetMode))((::PBYTE)hIl2Cpp + CLASS_2_ED29D5E8860EE4AF_SET_NETMODE_OFFSET))(this, value);
	}

	::System::Void Method_2_40D3DE8ADED3E32E(::System::String* a1, ::RPG::LogTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_2_ED29D5E8860EE4AF_METHOD_2_40D3DE8ADED3E32E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_40D3DE8ADED3E32E_1(::System::String* a1, ::RPG::LogTag a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::LogTag))((::PBYTE)hIl2Cpp + CLASS_2_ED29D5E8860EE4AF_METHOD_2_40D3DE8ADED3E32E_1_OFFSET))(this, a1, a2);
	}
};
