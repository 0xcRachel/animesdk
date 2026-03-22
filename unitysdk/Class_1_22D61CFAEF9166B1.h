#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_11;
class Class_1_8A3C2FE068793E61;
class Class_2_0A142DC5409043BE;
namespace Entitas { class IEntity; }
namespace RPG::GameCore { class AIConfig; }
namespace RPG::GameCore { class AIVariable; }
namespace System { class String; }

#define CLASS_1_22D61CFAEF9166B1_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x15FD6290)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_42E1A7D2FA0D43F3_OFFSET UNITYSDK_OFFSET(0x15FD6850)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_457717A0CF438A7C_OFFSET UNITYSDK_OFFSET(0x15FD6640)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_5CC26CBA27117D48_OFFSET UNITYSDK_OFFSET(0x15FD64F0)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_5E65B056BB31C3B8_OFFSET UNITYSDK_OFFSET(0x15FD69A0)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_6E6F865C6BBBA8DD_OFFSET UNITYSDK_OFFSET(0x15FD6450)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_893814ED967AF5E7_OFFSET UNITYSDK_OFFSET(0x15FD61F0)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x15FD6320)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_C784934903D1CFFC_OFFSET UNITYSDK_OFFSET(0x15FD63B0)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_D49CA5EC31388564_OFFSET UNITYSDK_OFFSET(0x15FD66C0)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x15FD6680)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_E745C3E3C9E98642_OFFSET UNITYSDK_OFFSET(0x15FD65E0)
#define CLASS_1_22D61CFAEF9166B1_METHOD_1_FCB5DD007DD6A417_OFFSET UNITYSDK_OFFSET(0x15FD6560)
#define CLASS_1_22D61CFAEF9166B1__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD6A60)

inline static constexpr unsigned int Class_1_22D61CFAEF9166B1_TypeDefinitionIndex = 27989;

class Class_1_22D61CFAEF9166B1 : public ::System::Object
{
public:
	::Class_1_8A3C2FE068793E61* Field_1_3; // 0x10
	::System::String* Field_1_1; // 0x18
	::Class_2_0A142DC5409043BE* Field_1_0; // 0x20
	::Entitas::IEntity* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_893814ED967AF5E7(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_893814ED967AF5E7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_C784934903D1CFFC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_C784934903D1CFFC_OFFSET))(this, a1);
	}

	::System::Void Method_1_6E6F865C6BBBA8DD(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_6E6F865C6BBBA8DD_OFFSET))(this, a1);
	}

	::System::Void Method_1_5CC26CBA27117D48(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_5CC26CBA27117D48_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FCB5DD007DD6A417(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_FCB5DD007DD6A417_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AIVariable* Method_1_E745C3E3C9E98642(::System::String* a1)
	{
		return ((::RPG::GameCore::AIVariable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_E745C3E3C9E98642_OFFSET))(this, a1);
	}

	::Class_2_0A142DC5409043BE* Method_1_457717A0CF438A7C()
	{
		return ((::Class_2_0A142DC5409043BE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_457717A0CF438A7C_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_1_D49CA5EC31388564(::Class_1_43BD383C98B4C0C5_11* a1, ::Entitas::IEntity* a2, ::System::String* a3, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_11*, ::Entitas::IEntity*, ::System::String*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_D49CA5EC31388564_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_42E1A7D2FA0D43F3(::Class_1_43BD383C98B4C0C5_11* a1, ::Entitas::IEntity* a2, ::System::String* a3, ::RPG::GameCore::AIConfig* a4, ::Il2CppArray<::RPG::GameCore::AIVariable*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_43BD383C98B4C0C5_11*, ::Entitas::IEntity*, ::System::String*, ::RPG::GameCore::AIConfig*, ::Il2CppArray<::RPG::GameCore::AIVariable*>*))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_42E1A7D2FA0D43F3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_1_5E65B056BB31C3B8(::Class_1_8A3C2FE068793E61* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Class_1_8A3C2FE068793E61*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_22D61CFAEF9166B1_METHOD_1_5E65B056BB31C3B8_OFFSET))(a1, a2);
	}
};
