#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D27BF54F25500E5F;
namespace RPG::Client { class CharacterShaderPropertyTransition; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_E32CDD50C4B344A5_GET_ISINFADE_OFFSET UNITYSDK_OFFSET(0x8A78A70)
#define CLASS_1_E32CDD50C4B344A5_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x8A51780)
#define CLASS_1_E32CDD50C4B344A5_METHOD_1_158524051C13420D_OFFSET UNITYSDK_OFFSET(0x8A78A90)
#define CLASS_1_E32CDD50C4B344A5_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x8A78F90)
#define CLASS_1_E32CDD50C4B344A5_METHOD_1_6105334A729F22E3_OFFSET UNITYSDK_OFFSET(0x8A51030)
#define CLASS_1_E32CDD50C4B344A5_METHOD_1_71912DBB0D113575_OFFSET UNITYSDK_OFFSET(0x8A78D60)
#define CLASS_1_E32CDD50C4B344A5_METHOD_1_B86122B0EE4F8679_OFFSET UNITYSDK_OFFSET(0x8A78AA0)
#define CLASS_1_E32CDD50C4B344A5_METHOD_1_BA904CAFF6C7217F_OFFSET UNITYSDK_OFFSET(0x8A51A00)
#define CLASS_1_E32CDD50C4B344A5_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8A51610)
#define CLASS_1_E32CDD50C4B344A5_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8A50F10)
#define CLASS_1_E32CDD50C4B344A5_METHOD_1_CE46216E65BA9837_OFFSET UNITYSDK_OFFSET(0x8A78B80)
#define CLASS_1_E32CDD50C4B344A5_METHOD_1_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x8A78E80)
#define CLASS_1_E32CDD50C4B344A5_METHOD_1_F671A90183524AF2_OFFSET UNITYSDK_OFFSET(0x8A51320)
#define CLASS_1_E32CDD50C4B344A5_METHOD_1_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x8A51470)
#define CLASS_1_E32CDD50C4B344A5_SET_ISINFADE_OFFSET UNITYSDK_OFFSET(0x8A78A80)
#define CLASS_1_E32CDD50C4B344A5__CTOR_OFFSET UNITYSDK_OFFSET(0x8A50B40)

inline static constexpr unsigned int Class_1_E32CDD50C4B344A5_TypeDefinitionIndex = 45132;

class Class_1_E32CDD50C4B344A5 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_5; // 0x0
	// static const ::System::Single Field_1_6; // 0x0
	// static const ::System::Single Field_1_7; // 0x0
	::RPG::Client::CharacterShaderPropertyTransition* Field_1_1; // 0x10
	::System::Action* Field_1_3; // 0x18
	::Class_1_D27BF54F25500E5F* Field_1_0; // 0x20
	::System::Boolean _IsInFade_k__BackingField; // 0x28
	::System::Boolean Field_1_4; // 0x29

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E32CDD50C4B344A5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean get_IsInFade()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E32CDD50C4B344A5_GET_ISINFADE_OFFSET))(this);
	}

	::System::Void set_IsInFade(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E32CDD50C4B344A5_SET_ISINFADE_OFFSET))(this, value);
	}

	::RPG::Client::CharacterShaderPropertyTransition* Method_1_158524051C13420D()
	{
		return ((::RPG::Client::CharacterShaderPropertyTransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E32CDD50C4B344A5_METHOD_1_158524051C13420D_OFFSET))(this);
	}

	::System::Single Method_1_FC5102551AF3CB1A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E32CDD50C4B344A5_METHOD_1_FC5102551AF3CB1A_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E32CDD50C4B344A5_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F671A90183524AF2(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E32CDD50C4B344A5_METHOD_1_F671A90183524AF2_OFFSET))(this, a1);
	}

	::System::Void Method_1_6105334A729F22E3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E32CDD50C4B344A5_METHOD_1_6105334A729F22E3_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E32CDD50C4B344A5_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E32CDD50C4B344A5_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA904CAFF6C7217F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E32CDD50C4B344A5_METHOD_1_BA904CAFF6C7217F_OFFSET))(this, a1);
	}

	::System::Void Method_1_B86122B0EE4F8679(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E32CDD50C4B344A5_METHOD_1_B86122B0EE4F8679_OFFSET))(this, a1);
	}

	::System::Void Method_1_71912DBB0D113575()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E32CDD50C4B344A5_METHOD_1_71912DBB0D113575_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E32CDD50C4B344A5_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E32CDD50C4B344A5_METHOD_1_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE46216E65BA9837(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_E32CDD50C4B344A5_METHOD_1_CE46216E65BA9837_OFFSET))(this, a1, a2, a3, a4);
	}
};
