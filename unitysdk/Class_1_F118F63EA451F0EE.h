#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8C3AC9786B6764EF;
namespace System { class String; }

#define CLASS_1_F118F63EA451F0EE_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8850D40)
#define CLASS_1_F118F63EA451F0EE_METHOD_1_C73D895D04A6382A_OFFSET UNITYSDK_OFFSET(0x8850C20)
#define CLASS_1_F118F63EA451F0EE_METHOD_1_EB230BE012BCEEB2_OFFSET UNITYSDK_OFFSET(0x8850A30)
#define CLASS_1_F118F63EA451F0EE_METHOD_1_F5D19D54B71B8622_1_OFFSET UNITYSDK_OFFSET(0x8850E00)
#define CLASS_1_F118F63EA451F0EE_METHOD_1_F5D19D54B71B8622_2_OFFSET UNITYSDK_OFFSET(0x8850E60)
#define CLASS_1_F118F63EA451F0EE_METHOD_1_F5D19D54B71B8622_OFFSET UNITYSDK_OFFSET(0x8850DA0)
#define CLASS_1_F118F63EA451F0EE__CTOR_OFFSET UNITYSDK_OFFSET(0x8850EC0)

inline static constexpr unsigned int Class_1_F118F63EA451F0EE_TypeDefinitionIndex = 48280;

class Class_1_F118F63EA451F0EE : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_8C3AC9786B6764EF* Field_1_3; // 0x18
	::System::Single Field_1_1; // 0x20
	::System::Boolean Field_1_2; // 0x24
	::System::Boolean Field_1_4; // 0x25

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F118F63EA451F0EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EB230BE012BCEEB2(::Class_1_8C3AC9786B6764EF* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8C3AC9786B6764EF*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F118F63EA451F0EE_METHOD_1_EB230BE012BCEEB2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F118F63EA451F0EE_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_F5D19D54B71B8622()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F118F63EA451F0EE_METHOD_1_F5D19D54B71B8622_OFFSET))(this);
	}

	::System::Void Method_1_F5D19D54B71B8622_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F118F63EA451F0EE_METHOD_1_F5D19D54B71B8622_1_OFFSET))(this);
	}

	::System::Void Method_1_F5D19D54B71B8622_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F118F63EA451F0EE_METHOD_1_F5D19D54B71B8622_2_OFFSET))(this);
	}

	::System::Void Method_1_C73D895D04A6382A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F118F63EA451F0EE_METHOD_1_C73D895D04A6382A_OFFSET))(this, a1);
	}
};
