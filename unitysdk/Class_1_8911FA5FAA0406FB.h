#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }

#define CLASS_1_8911FA5FAA0406FB_GET_DEPENDENCY_OFFSET UNITYSDK_OFFSET(0xCD51E40)
#define CLASS_1_8911FA5FAA0406FB_METHOD_1_2FA6CEE70ABB60EF_OFFSET UNITYSDK_OFFSET(0xCD51BF0)
#define CLASS_1_8911FA5FAA0406FB_METHOD_1_90A9DC77F6A1323B_OFFSET UNITYSDK_OFFSET(0xCD51DF0)
#define CLASS_1_8911FA5FAA0406FB_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCD51DA0)
#define CLASS_1_8911FA5FAA0406FB_METHOD_1_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xCD51C40)
#define CLASS_1_8911FA5FAA0406FB_SET_DEPENDENCY_OFFSET UNITYSDK_OFFSET(0xCD51E50)
#define CLASS_1_8911FA5FAA0406FB__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCD51BE0)
#define CLASS_1_8911FA5FAA0406FB__CTOR_OFFSET UNITYSDK_OFFSET(0xCD51B80)

inline static constexpr unsigned int Class_1_8911FA5FAA0406FB_TypeDefinitionIndex = 52095;

class Class_1_8911FA5FAA0406FB : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::RPG::GameCore::TurnBasedModifierConfig* Field_1_1; // 0x18
	::Il2CppArray<::System::String*>* _Dependency_k__BackingField; // 0x20
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8911FA5FAA0406FB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::RPG::GameCore::TurnBasedModifierConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8911FA5FAA0406FB__CTOR_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::TurnBasedModifierConfig* Method_1_2FA6CEE70ABB60EF()
	{
		return ((::RPG::GameCore::TurnBasedModifierConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8911FA5FAA0406FB_METHOD_1_2FA6CEE70ABB60EF_OFFSET))(this);
	}

	::System::Void Method_1_E3DE31A03057E055()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8911FA5FAA0406FB_METHOD_1_E3DE31A03057E055_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8911FA5FAA0406FB_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_90A9DC77F6A1323B(::RPG::GameCore::TurnBasedModifierConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8911FA5FAA0406FB_METHOD_1_90A9DC77F6A1323B_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::String*>* get_Dependency()
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8911FA5FAA0406FB_GET_DEPENDENCY_OFFSET))(this);
	}

	::System::Void set_Dependency(::Il2CppArray<::System::String*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_8911FA5FAA0406FB_SET_DEPENDENCY_OFFSET))(this, value);
	}
};
