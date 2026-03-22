#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop::CoilPuzzle { class RigCoilPuzzleBoard; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_1ACE0263147688BB_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x102FA8D0)
#define CLASS_1_1ACE0263147688BB_METHOD_1_31FFEEDCDA06DC9B_OFFSET UNITYSDK_OFFSET(0x102FA9D0)
#define CLASS_1_1ACE0263147688BB_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x102FA700)
#define CLASS_1_1ACE0263147688BB_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x102FADE0)
#define CLASS_1_1ACE0263147688BB_METHOD_1_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x102FACE0)
#define CLASS_1_1ACE0263147688BB_METHOD_1_54757B8B62FBF467_OFFSET UNITYSDK_OFFSET(0x102FAF20)
#define CLASS_1_1ACE0263147688BB_METHOD_1_54C8654A7A9113B5_OFFSET UNITYSDK_OFFSET(0x102FA5B0)
#define CLASS_1_1ACE0263147688BB_METHOD_1_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x102FA7C0)
#define CLASS_1_1ACE0263147688BB_METHOD_1_CAFA167EB82E09FC_OFFSET UNITYSDK_OFFSET(0x102FAE60)
#define CLASS_1_1ACE0263147688BB_METHOD_1_CED7A2E9A352C6FD_OFFSET UNITYSDK_OFFSET(0x102FA930)
#define CLASS_1_1ACE0263147688BB_METHOD_1_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x102FAC80)
#define CLASS_1_1ACE0263147688BB__CTOR_OFFSET UNITYSDK_OFFSET(0x102FA570)

inline static constexpr unsigned int Class_1_1ACE0263147688BB_TypeDefinitionIndex = 62241;

class Class_1_1ACE0263147688BB : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_1; // 0x10
	::UnityEngine::Collider* Field_1_2; // 0x18
	::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard* Field_1_0; // 0x20
	::UnityEngine::Transform* Field_1_4; // 0x28
	::UnityEngine::Vector3 Field_1_3; // 0x30
	::System::Boolean Field_1_6; // 0x3C
	::UnityEngine::Vector3 Field_1_5; // 0x40

	::System::Void _ctor(::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard*, ::UnityEngine::Vector3, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_1ACE0263147688BB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ACE0263147688BB_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_54C8654A7A9113B5(::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::CoilPuzzle::RigCoilPuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_1_1ACE0263147688BB_METHOD_1_54C8654A7A9113B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1ACE0263147688BB_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ACE0263147688BB_METHOD_1_C561FF611C07A44C_OFFSET))(this);
	}

	::System::Void Method_1_31FFEEDCDA06DC9B(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_1ACE0263147688BB_METHOD_1_31FFEEDCDA06DC9B_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ACE0263147688BB_METHOD_1_FA662896843C137A_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_CED7A2E9A352C6FD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ACE0263147688BB_METHOD_1_CED7A2E9A352C6FD_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ACE0263147688BB_METHOD_1_4AB9012B5D01108B_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ACE0263147688BB_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_CAFA167EB82E09FC(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_1ACE0263147688BB_METHOD_1_CAFA167EB82E09FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_54757B8B62FBF467()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1ACE0263147688BB_METHOD_1_54757B8B62FBF467_OFFSET))(this);
	}
};
