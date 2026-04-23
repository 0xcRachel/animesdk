#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_7BBC5D81DAA7A516;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_63D30683C5188FC7_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xF0D80B0)
#define CLASS_2_63D30683C5188FC7_METHOD_2_259547D04E5F5D79_OFFSET UNITYSDK_OFFSET(0xF0D86D0)
#define CLASS_2_63D30683C5188FC7_METHOD_2_2CB61A3FE9A71C6A_OFFSET UNITYSDK_OFFSET(0xF0D8810)
#define CLASS_2_63D30683C5188FC7_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xF0D8B00)
#define CLASS_2_63D30683C5188FC7_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0xF0D8230)
#define CLASS_2_63D30683C5188FC7_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0xF0D8150)
#define CLASS_2_63D30683C5188FC7_METHOD_2_BB9E84D4A0178E06_OFFSET UNITYSDK_OFFSET(0xF0D82A0)
#define CLASS_2_63D30683C5188FC7_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0xF0D8A30)
#define CLASS_2_63D30683C5188FC7_METHOD_2_D5F29A5FAC8FAF2C_OFFSET UNITYSDK_OFFSET(0xF0D8640)
#define CLASS_2_63D30683C5188FC7_METHOD_2_E2D4F5678F261E8A_OFFSET UNITYSDK_OFFSET(0xF0D8480)
#define CLASS_2_63D30683C5188FC7_METHOD_2_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xF0D8590)
#define CLASS_2_63D30683C5188FC7_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xF0D8100)
#define CLASS_2_63D30683C5188FC7_ONRETURN_OFFSET UNITYSDK_OFFSET(0xF0D8040)
#define CLASS_2_63D30683C5188FC7__CTOR_OFFSET UNITYSDK_OFFSET(0xF0D89E0)
#define CLASS_2_63D30683C5188FC7__ONBIND_OFFSET UNITYSDK_OFFSET(0xF0D81A0)
#define CLASS_2_63D30683C5188FC7___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xF0D8AA0)

inline static constexpr unsigned int Class_2_63D30683C5188FC7_TypeDefinitionIndex = 66000;

class Class_2_63D30683C5188FC7 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::UnityEngine::Transform* Field_2_5; // 0x60
	::Il2CppArray<::System::String*>* Field_2_7; // 0x68
	::System::Collections::Generic::List_1<::Class_2_7BBC5D81DAA7A516*>* Field_2_6; // 0x70
	::System::Int32 Field_2_4; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63D30683C5188FC7__CTOR_OFFSET))(this);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63D30683C5188FC7_ONRETURN_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_63D30683C5188FC7_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_63D30683C5188FC7_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63D30683C5188FC7__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63D30683C5188FC7_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63D30683C5188FC7_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_BB9E84D4A0178E06(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_63D30683C5188FC7_METHOD_2_BB9E84D4A0178E06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_259547D04E5F5D79(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_63D30683C5188FC7_METHOD_2_259547D04E5F5D79_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E2D4F5678F261E8A(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_63D30683C5188FC7_METHOD_2_E2D4F5678F261E8A_OFFSET))(this, a1);
	}

	::System::Void Method_2_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63D30683C5188FC7_METHOD_2_E3DE31A03057E055_OFFSET))(this);
	}

	::System::String* Method_2_D5F29A5FAC8FAF2C(::Il2CppArray<::System::String*>* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_63D30683C5188FC7_METHOD_2_D5F29A5FAC8FAF2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2CB61A3FE9A71C6A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_63D30683C5188FC7_METHOD_2_2CB61A3FE9A71C6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_63D30683C5188FC7_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63D30683C5188FC7___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63D30683C5188FC7_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
