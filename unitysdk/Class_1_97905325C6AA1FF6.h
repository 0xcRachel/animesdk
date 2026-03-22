#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1B9BBF1B9A8CC806;
class Class_1_B6E7D41F9A5F8DB4;
namespace RPG::Client { template <typename T> class ScopeUser_1; }
namespace System { class String; }
namespace System::IO { class BinaryWriter; }

#define CLASS_1_97905325C6AA1FF6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E86020)
#define CLASS_1_97905325C6AA1FF6_METHOD_1_51E2051F9A44A10F_OFFSET UNITYSDK_OFFSET(0x15E84B30)
#define CLASS_1_97905325C6AA1FF6_METHOD_1_70745CD7CB17843F_OFFSET UNITYSDK_OFFSET(0x15E84E30)
#define CLASS_1_97905325C6AA1FF6_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x15E846D0)
#define CLASS_1_97905325C6AA1FF6_METHOD_1_9F9809DF5AED58E5_OFFSET UNITYSDK_OFFSET(0x15E84D60)
#define CLASS_1_97905325C6AA1FF6_METHOD_1_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x15E85190)
#define CLASS_1_97905325C6AA1FF6_METHOD_1_DC8AA765E2AFD1B6_OFFSET UNITYSDK_OFFSET(0x15E84AC0)
#define CLASS_1_97905325C6AA1FF6_METHOD_1_FC778E0226EE5B79_OFFSET UNITYSDK_OFFSET(0x15E84C30)
#define CLASS_1_97905325C6AA1FF6__CTOR_OFFSET UNITYSDK_OFFSET(0x15E84720)

inline static constexpr unsigned int Class_1_97905325C6AA1FF6_TypeDefinitionIndex = 31251;

class Class_1_97905325C6AA1FF6 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_5 = 0x10; // 0x0
	// static const ::System::UInt32 Field_1_6 = 0xC; // 0x0
	::Class_1_1B9BBF1B9A8CC806* Field_1_3; // 0x10
	::Il2CppArray<::Class_1_B6E7D41F9A5F8DB4*>* Field_1_2; // 0x18
	::Class_1_B6E7D41F9A5F8DB4* Field_1_4; // 0x20
	::System::String* Field_1_0; // 0x28
	::Il2CppArray<::System::Byte>* Field_1_7; // 0x30
	::System::Boolean Field_1_1; // 0x38

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::UInt16 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_97905325C6AA1FF6__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97905325C6AA1FF6_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_1_B6E7D41F9A5F8DB4* Method_1_DC8AA765E2AFD1B6(::System::Int32 a1)
	{
		return ((::Class_1_B6E7D41F9A5F8DB4*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_97905325C6AA1FF6_METHOD_1_DC8AA765E2AFD1B6_OFFSET))(this, a1);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>* Method_1_51E2051F9A44A10F()
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97905325C6AA1FF6_METHOD_1_51E2051F9A44A10F_OFFSET))(this);
	}

	::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>* Method_1_FC778E0226EE5B79(::System::Int32 a1)
	{
		return ((::RPG::Client::ScopeUser_1<::Class_1_B6E7D41F9A5F8DB4*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_97905325C6AA1FF6_METHOD_1_FC778E0226EE5B79_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F9809DF5AED58E5(::System::IO::BinaryWriter* a1, ::System::UInt16 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*, ::System::UInt16))((::PBYTE)hIl2Cpp + CLASS_1_97905325C6AA1FF6_METHOD_1_9F9809DF5AED58E5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_70745CD7CB17843F(::System::IO::BinaryWriter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + CLASS_1_97905325C6AA1FF6_METHOD_1_70745CD7CB17843F_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97905325C6AA1FF6_METHOD_1_A1C7122184516C18_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97905325C6AA1FF6_DISPOSE_OFFSET))(this);
	}
};
