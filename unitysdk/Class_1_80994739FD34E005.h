#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F5FBDA629A1B439F.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_80994739FD34E005_CLEAR_OFFSET UNITYSDK_OFFSET(0xD1E2BE0)
#define CLASS_1_80994739FD34E005_GET_PRECISION_OFFSET UNITYSDK_OFFSET(0xD1E3740)
#define CLASS_1_80994739FD34E005_METHOD_1_385F8235BFCDC480_OFFSET UNITYSDK_OFFSET(0xD1E3490)
#define CLASS_1_80994739FD34E005_METHOD_1_7DE7C561B74B060F_1_OFFSET UNITYSDK_OFFSET(0xD1E30D0)
#define CLASS_1_80994739FD34E005_METHOD_1_7DE7C561B74B060F_OFFSET UNITYSDK_OFFSET(0xD1E2DD0)
#define CLASS_1_80994739FD34E005_METHOD_1_A392A2473EAD53B0_OFFSET UNITYSDK_OFFSET(0xD1E36C0)
#define CLASS_1_80994739FD34E005_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0xD1E2B40)
#define CLASS_1_80994739FD34E005_METHOD_1_F23E613517DF62CA_OFFSET UNITYSDK_OFFSET(0xD1E2C30)
#define CLASS_1_80994739FD34E005_SET_PRECISION_OFFSET UNITYSDK_OFFSET(0xD1E3750)
#define CLASS_1_80994739FD34E005__CCTOR_OFFSET UNITYSDK_OFFSET(0xD1E3770)
#define CLASS_1_80994739FD34E005__CTOR_OFFSET UNITYSDK_OFFSET(0xD1E3760)

inline static constexpr unsigned int Class_1_80994739FD34E005_TypeDefinitionIndex = 67585;

class Class_1_80994739FD34E005 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_80994739FD34E005_TypeDefinitionIndex)->GetStaticField(0x31B40);
	}
	// static const ::System::Double Field_1_1; // 0x0
	// static const ::System::Double Field_1_2; // 0x0
	// static const ::System::Double Field_1_3; // 0x0
	::System::Int32 _Precision_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80994739FD34E005__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_80994739FD34E005__CCTOR_OFFSET))();
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_80994739FD34E005_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80994739FD34E005_CLEAR_OFFSET))(this);
	}

	::System::String* Method_1_F23E613517DF62CA(::System::Object* a1, ::Struct_2_F5FBDA629A1B439F a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Object*, ::Struct_2_F5FBDA629A1B439F))((::PBYTE)hIl2Cpp + CLASS_1_80994739FD34E005_METHOD_1_F23E613517DF62CA_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_7DE7C561B74B060F(::System::Object* a1, ::Struct_2_F5FBDA629A1B439F a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Object*, ::Struct_2_F5FBDA629A1B439F))((::PBYTE)hIl2Cpp + CLASS_1_80994739FD34E005_METHOD_1_7DE7C561B74B060F_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_7DE7C561B74B060F_1(::System::Object* a1, ::Struct_2_F5FBDA629A1B439F a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Object*, ::Struct_2_F5FBDA629A1B439F))((::PBYTE)hIl2Cpp + CLASS_1_80994739FD34E005_METHOD_1_7DE7C561B74B060F_1_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_385F8235BFCDC480(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_80994739FD34E005_METHOD_1_385F8235BFCDC480_OFFSET))(a1);
	}

	static ::System::String* Method_1_A392A2473EAD53B0(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_80994739FD34E005_METHOD_1_A392A2473EAD53B0_OFFSET))(a1);
	}

	::System::Int32 get_Precision()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80994739FD34E005_GET_PRECISION_OFFSET))(this);
	}

	::System::Void set_Precision(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_80994739FD34E005_SET_PRECISION_OFFSET))(this, value);
	}
};
