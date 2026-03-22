#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A_1;
class Class_3_44EDAE37250FA2DB;
namespace System { class String; }
namespace UnityEngine { class Coroutine; }

#define CLASS_1_721A4579857AF31E_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10D03780)
#define CLASS_1_721A4579857AF31E_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10D02890)
#define CLASS_1_721A4579857AF31E_METHOD_1_0E00D903BD55E67C_OFFSET UNITYSDK_OFFSET(0x10D02150)
#define CLASS_1_721A4579857AF31E_METHOD_1_178812F674E8B05A_OFFSET UNITYSDK_OFFSET(0x10D02DB0)
#define CLASS_1_721A4579857AF31E_METHOD_1_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x10D02470)
#define CLASS_1_721A4579857AF31E_METHOD_1_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x10D02D60)
#define CLASS_1_721A4579857AF31E_METHOD_1_4A1CD05F902837C8_OFFSET UNITYSDK_OFFSET(0x10D02810)
#define CLASS_1_721A4579857AF31E_METHOD_1_7D905CC30A55BF61_1_OFFSET UNITYSDK_OFFSET(0x10D03950)
#define CLASS_1_721A4579857AF31E_METHOD_1_7D905CC30A55BF61_OFFSET UNITYSDK_OFFSET(0x10D037F0)
#define CLASS_1_721A4579857AF31E_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x10D034A0)
#define CLASS_1_721A4579857AF31E__CTOR_OFFSET UNITYSDK_OFFSET(0x10D02140)

inline static constexpr unsigned int Class_1_721A4579857AF31E_TypeDefinitionIndex = 60555;

class Class_1_721A4579857AF31E : public ::System::Object
{
public:
	::Class_1_867B6CE75953535A_1* Field_1_0; // 0x10
	::Class_3_44EDAE37250FA2DB* Field_1_1; // 0x18
	::UnityEngine::Coroutine* Field_1_4; // 0x20
	::System::Int32 Field_1_2; // 0x28
	::System::Single Field_1_3; // 0x2C

	::System::Void _ctor(::Class_1_867B6CE75953535A_1* a1, ::Class_3_44EDAE37250FA2DB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A_1*, ::Class_3_44EDAE37250FA2DB*))((::PBYTE)hIl2Cpp + CLASS_1_721A4579857AF31E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0E00D903BD55E67C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_721A4579857AF31E_METHOD_1_0E00D903BD55E67C_OFFSET))(this, a1);
	}

	::System::Void Method_1_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_721A4579857AF31E_METHOD_1_3BCF0226A6CDC13B_OFFSET))(this);
	}

	::System::Void Method_1_4A1CD05F902837C8(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_721A4579857AF31E_METHOD_1_4A1CD05F902837C8_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_721A4579857AF31E_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_721A4579857AF31E_METHOD_1_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_721A4579857AF31E_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_178812F674E8B05A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_721A4579857AF31E_METHOD_1_178812F674E8B05A_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_721A4579857AF31E_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_7D905CC30A55BF61(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_721A4579857AF31E_METHOD_1_7D905CC30A55BF61_OFFSET))(this, a1);
	}

	::System::Void Method_1_7D905CC30A55BF61_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_721A4579857AF31E_METHOD_1_7D905CC30A55BF61_1_OFFSET))(this, a1);
	}
};
