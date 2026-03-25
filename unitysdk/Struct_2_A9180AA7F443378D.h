#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class Object; }
namespace System { class String; }

#define STRUCT_2_A9180AA7F443378D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x142B510)
#define STRUCT_2_A9180AA7F443378D_EXECUTE_OFFSET UNITYSDK_OFFSET(0x142B4D0)
#define STRUCT_2_A9180AA7F443378D_METHOD_2_04E4CA3D124E26DA_OFFSET UNITYSDK_OFFSET(0x142B4E0)
#define STRUCT_2_A9180AA7F443378D_METHOD_2_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0x142B500)
#define STRUCT_2_A9180AA7F443378D_METHOD_2_655C85F26527BF1E_OFFSET UNITYSDK_OFFSET(0x105D5480)
#define STRUCT_2_A9180AA7F443378D_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x142B4F0)
#define STRUCT_2_A9180AA7F443378D__CCTOR_OFFSET UNITYSDK_OFFSET(0x105D7C60)

inline static constexpr unsigned int Struct_2_A9180AA7F443378D_TypeDefinitionIndex = 58227;

struct alignas(8) Struct_2_A9180AA7F443378D
{
	static ::System::Object** StaticGet_Field_2_3()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Struct_2_A9180AA7F443378D_TypeDefinitionIndex)->GetStaticField(0x27810);
	}
	static ::System::Boolean* StaticGet_Field_2_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_A9180AA7F443378D_TypeDefinitionIndex)->GetStaticField(0xB1B0);
	}
	::Unity::Collections::NativeArray_1<::System::Int32> Field_2_1; // 0x10
	::System::Single Field_2_2; // 0x20

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_A9180AA7F443378D__CCTOR_OFFSET))();
	}

	static ::System::String* Method_2_655C85F26527BF1E(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_A9180AA7F443378D_METHOD_2_655C85F26527BF1E_OFFSET))(a1, a2);
	}

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_A9180AA7F443378D_EXECUTE_OFFSET))(this, a1);
	}

	::System::Void Method_2_04E4CA3D124E26DA(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_A9180AA7F443378D_METHOD_2_04E4CA3D124E26DA_OFFSET))(this, a1);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A9180AA7F443378D_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_3B258437A86233AC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A9180AA7F443378D_METHOD_2_3B258437A86233AC_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A9180AA7F443378D_DISPOSE_OFFSET))(this);
	}
};
