#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetsStaticFlag.h"
#include "unitysdk/Struct_2_84E8631222D334C4.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_37;
namespace System { class String; }

#define STRUCT_2_F6CF28892F8E6FF1_GET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0xD240)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0xCAE40)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x68F0)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_8279976FE67B5972_OFFSET UNITYSDK_OFFSET(0x200F310)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_8D94453293C1F210_OFFSET UNITYSDK_OFFSET(0x200F300)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_966EDE07FE271747_OFFSET UNITYSDK_OFFSET(0x200F050)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1E190)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x200F320)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0x200F120)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x200F220)
#define STRUCT_2_F6CF28892F8E6FF1_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x200F290)
#define STRUCT_2_F6CF28892F8E6FF1_SET_BLOCKINDEX_OFFSET UNITYSDK_OFFSET(0xD250)
#define STRUCT_2_F6CF28892F8E6FF1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x200F3F0)
#define STRUCT_2_F6CF28892F8E6FF1__CCTOR_OFFSET UNITYSDK_OFFSET(0x15E64CF0)
#define STRUCT_2_F6CF28892F8E6FF1__CTOR_OFFSET UNITYSDK_OFFSET(0x200F1E0)
#define STRUCT_2_F6CF28892F8E6FF1___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x200F400)

inline static constexpr unsigned int Struct_2_F6CF28892F8E6FF1_TypeDefinitionIndex = 31147;

struct alignas(8) Struct_2_F6CF28892F8E6FF1
{
	static ::Struct_2_F6CF28892F8E6FF1* StaticGet_Field_2_5()
	{
		return (::Struct_2_F6CF28892F8E6FF1*)Il2CppClass::FromTypeDefinitionIndex(Struct_2_F6CF28892F8E6FF1_TypeDefinitionIndex)->GetStaticField(0x36950);
	}
	// static const ::System::UInt16 Field_2_8 = 0x8000; // 0x0
	// static const ::System::UInt16 Field_2_9 = 0x7FFF; // 0x0
	::Class_0_16E4307DCC419505_37* Field_2_0; // 0x10
	::System::Int32 _BlockIndex_k__BackingField; // 0x18
	::System::UInt32 Field_2_2; // 0x1C
	::System::UInt32 Field_2_3; // 0x20
	::RPG::Client::AssetsStaticFlag Field_2_4; // 0x24
	::Struct_2_84E8631222D334C4 Field_2_6; // 0x28
	::System::Int32 Field_2_7; // 0x2C
	::System::UInt16 Field_2_10; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_37* a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::Client::AssetsStaticFlag a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_37*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::RPG::Client::AssetsStaticFlag, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1__CCTOR_OFFSET))();
	}

	::System::Int32 get_BlockIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_GET_BLOCKINDEX_OFFSET))(this);
	}

	::System::Void set_BlockIndex(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_SET_BLOCKINDEX_OFFSET))(this, value);
	}

	::System::UInt64 Method_2_966EDE07FE271747()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_966EDE07FE271747_OFFSET))(this);
	}

	::System::Int32 Method_2_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_EBCA8E5D8C47FF73_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_02A3D10A9D535169_1_OFFSET))(this);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::RPG::Client::AssetsStaticFlag Method_2_8D94453293C1F210()
	{
		return ((::RPG::Client::AssetsStaticFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_8D94453293C1F210_OFFSET))(this);
	}

	::System::String* Method_2_8279976FE67B5972()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_8279976FE67B5972_OFFSET))(this);
	}

	::System::Boolean Method_2_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_METHOD_2_CE34EA208837238D_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F6CF28892F8E6FF1___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
