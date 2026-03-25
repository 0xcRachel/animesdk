#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/MD5.h"

#define CLASS_3_5EC95B7D948AC13B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A1F440)
#define CLASS_3_5EC95B7D948AC13B_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17A1F3A0)
#define CLASS_3_5EC95B7D948AC13B_HASHCORE_OFFSET UNITYSDK_OFFSET(0x17A1F4C0)
#define CLASS_3_5EC95B7D948AC13B_HASHFINAL_OFFSET UNITYSDK_OFFSET(0x17A1FF10)
#define CLASS_3_5EC95B7D948AC13B_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17A1F300)
#define CLASS_3_5EC95B7D948AC13B_METHOD_3_0800E90C654B2243_OFFSET UNITYSDK_OFFSET(0x17A201F0)
#define CLASS_3_5EC95B7D948AC13B_METHOD_3_258548AF3A64610F_OFFSET UNITYSDK_OFFSET(0x17A203C0)
#define CLASS_3_5EC95B7D948AC13B_METHOD_3_9BCC4010AF78CAEC_OFFSET UNITYSDK_OFFSET(0x17A1F600)
#define CLASS_3_5EC95B7D948AC13B__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A20510)
#define CLASS_3_5EC95B7D948AC13B__CTOR_OFFSET UNITYSDK_OFFSET(0x17A1F2A0)

inline static constexpr unsigned int Class_3_5EC95B7D948AC13B_TypeDefinitionIndex = 8697;

class Class_3_5EC95B7D948AC13B : public ::System::Security::Cryptography::MD5
{
public:
	static ::Il2CppArray<::System::UInt32>** StaticGet_Field_3_6()
	{
		return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_5EC95B7D948AC13B_TypeDefinitionIndex)->GetStaticField(0x3E9F0);
	}
	// static const ::System::Int32 Field_3_0 = 0x40; // 0x0
	::Il2CppArray<::System::Byte>* Field_3_4; // 0x28
	::Il2CppArray<::System::UInt32>* Field_3_2; // 0x30
	::Il2CppArray<::System::UInt32>* Field_3_1; // 0x38
	::System::Int32 Field_3_5; // 0x40
	::System::UInt64 Field_3_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EC95B7D948AC13B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_5EC95B7D948AC13B__CCTOR_OFFSET))();
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EC95B7D948AC13B_FINALIZE_OFFSET))(this);
	}

	::System::Void Dispose(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_5EC95B7D948AC13B_DISPOSE_OFFSET))(this, a1);
	}

	::System::Void HashCore(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5EC95B7D948AC13B_HASHCORE_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::System::Byte>* HashFinal()
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EC95B7D948AC13B_HASHFINAL_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EC95B7D948AC13B_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_3_9BCC4010AF78CAEC(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5EC95B7D948AC13B_METHOD_3_9BCC4010AF78CAEC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_0800E90C654B2243(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5EC95B7D948AC13B_METHOD_3_0800E90C654B2243_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_258548AF3A64610F(::System::UInt64 a1, ::Il2CppArray<::System::Byte>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5EC95B7D948AC13B_METHOD_3_258548AF3A64610F_OFFSET))(this, a1, a2, a3);
	}
};
