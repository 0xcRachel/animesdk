#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_1_857979286963EC4B_Class_3_A09093250D8C682A;
namespace RPG::Client { class NetPacket; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_857979286963EC4B_METHOD_1_2BB6EBBCAB393772_OFFSET UNITYSDK_OFFSET(0xACA9B70)
#define CLASS_1_857979286963EC4B_METHOD_1_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0xACA45D0)
#define CLASS_1_857979286963EC4B_METHOD_1_AD464C9B997B3B29_OFFSET UNITYSDK_OFFSET(0xACA9CB0)
#define CLASS_1_857979286963EC4B_METHOD_1_AE8B62FEF3CBE53B_OFFSET UNITYSDK_OFFSET(0xACA9E50)
#define CLASS_1_857979286963EC4B_METHOD_1_C6E054E52157389E_OFFSET UNITYSDK_OFFSET(0xACA9DF0)
#define CLASS_1_857979286963EC4B_METHOD_1_D119F3F97D668C62_OFFSET UNITYSDK_OFFSET(0xACA9D10)
#define CLASS_1_857979286963EC4B__CCTOR_OFFSET UNITYSDK_OFFSET(0xACAA750)

inline static constexpr unsigned int Class_1_857979286963EC4B_TypeDefinitionIndex = 54688;

class Class_1_857979286963EC4B : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::UInt16>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::HashSet_1<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_857979286963EC4B_TypeDefinitionIndex)->GetStaticField(0x67D80);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt16, ::Class_1_857979286963EC4B_Class_3_A09093250D8C682A*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt16, ::Class_1_857979286963EC4B_Class_3_A09093250D8C682A*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_857979286963EC4B_TypeDefinitionIndex)->GetStaticField(0x67D88);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::UInt16>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_857979286963EC4B_TypeDefinitionIndex)->GetStaticField(0x67D90);
	}
	static ::System::Collections::Generic::SortedList_2<::System::UInt16, ::System::RuntimeTypeHandle>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::SortedList_2<::System::UInt16, ::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_857979286963EC4B_TypeDefinitionIndex)->GetStaticField(0x67D98);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_857979286963EC4B__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_A6544B958241856F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_857979286963EC4B_METHOD_1_A6544B958241856F_OFFSET))();
	}

	static ::System::UInt16 Method_1_AD464C9B997B3B29(::System::RuntimeTypeHandle a1)
	{
		return ((::System::UInt16(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + CLASS_1_857979286963EC4B_METHOD_1_AD464C9B997B3B29_OFFSET))(a1);
	}

	static ::System::RuntimeTypeHandle Method_1_D119F3F97D668C62(::System::UInt16 a1)
	{
		return ((::System::RuntimeTypeHandle(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_857979286963EC4B_METHOD_1_D119F3F97D668C62_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C6E054E52157389E(::System::UInt16 a1)
	{
		return ((::System::Boolean(*)(::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_857979286963EC4B_METHOD_1_C6E054E52157389E_OFFSET))(a1);
	}

	static ::System::Object* Method_1_AE8B62FEF3CBE53B(::RPG::Client::NetPacket* a1, ::System::UInt32& a2)
	{
		return ((::System::Object*(*)(::RPG::Client::NetPacket*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_857979286963EC4B_METHOD_1_AE8B62FEF3CBE53B_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_2BB6EBBCAB393772(::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::UInt16>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::UInt16>*))((::PBYTE)hIl2Cpp + CLASS_1_857979286963EC4B_METHOD_1_2BB6EBBCAB393772_OFFSET))(a1);
	}
};
