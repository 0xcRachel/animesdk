#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicTypeExtra.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_8632A9A99C579E84_GET_ANIMATORSTATEHASH_OFFSET UNITYSDK_OFFSET(0xCAEEDB0)
#define CLASS_1_8632A9A99C579E84_GET_ISFIXEDTRANSITION_OFFSET UNITYSDK_OFFSET(0xCAEED90)
#define CLASS_1_8632A9A99C579E84_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xCAEEB40)
#define CLASS_1_8632A9A99C579E84_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xCAEEBE0)
#define CLASS_1_8632A9A99C579E84_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0xCAEED30)
#define CLASS_1_8632A9A99C579E84_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xCAEECC0)
#define CLASS_1_8632A9A99C579E84_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0xCAEED20)
#define CLASS_1_8632A9A99C579E84_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xCAEECB0)
#define CLASS_1_8632A9A99C579E84_METHOD_1_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0xCAEEBF0)
#define CLASS_1_8632A9A99C579E84_SET_ANIMATORSTATEHASH_OFFSET UNITYSDK_OFFSET(0xCAEEDC0)
#define CLASS_1_8632A9A99C579E84_SET_ISFIXEDTRANSITION_OFFSET UNITYSDK_OFFSET(0xCAEEDA0)
#define CLASS_1_8632A9A99C579E84__CTOR_OFFSET UNITYSDK_OFFSET(0xCAEEDD0)

inline static constexpr unsigned int Class_1_8632A9A99C579E84_TypeDefinitionIndex = 51593;

class Class_1_8632A9A99C579E84 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::AnimStateLogicTypeExtra>* Field_1_4; // 0x10
	::System::String* Field_1_11; // 0x18
	::System::Boolean _IsFixedTransition_k__BackingField; // 0x20
	::System::Boolean Field_1_1; // 0x21
	::System::Single Field_1_12; // 0x24
	::System::Int32 _AnimatorStateHash_k__BackingField; // 0x28
	::System::Single Field_1_6; // 0x2C
	::System::Single Field_1_8; // 0x30
	::RPG::GameCore::AnimStateLogicType Field_1_2; // 0x34
	::System::Int32 Field_1_5; // 0x38
	::System::Single Field_1_7; // 0x3C
	::System::UInt32 Field_1_0; // 0x40
	::RPG::GameCore::AnimStateLogicTypeExtra Field_1_3; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8632A9A99C579E84__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_8632A9A99C579E84* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8632A9A99C579E84*))((::PBYTE)hIl2Cpp + CLASS_1_8632A9A99C579E84_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8632A9A99C579E84_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8632A9A99C579E84_METHOD_1_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8632A9A99C579E84_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8632A9A99C579E84_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8632A9A99C579E84_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8632A9A99C579E84_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Boolean get_IsFixedTransition()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8632A9A99C579E84_GET_ISFIXEDTRANSITION_OFFSET))(this);
	}

	::System::Void set_IsFixedTransition(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8632A9A99C579E84_SET_ISFIXEDTRANSITION_OFFSET))(this, value);
	}

	::System::Int32 get_AnimatorStateHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8632A9A99C579E84_GET_ANIMATORSTATEHASH_OFFSET))(this);
	}

	::System::Void set_AnimatorStateHash(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8632A9A99C579E84_SET_ANIMATORSTATEHASH_OFFSET))(this, value);
	}
};
