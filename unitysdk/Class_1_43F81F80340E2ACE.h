#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MockAnimator; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::GameCore { class ChimeraSetAnimatorParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_43F81F80340E2ACE_METHOD_1_4566A0EFFA7A7804_OFFSET UNITYSDK_OFFSET(0xD185E60)
#define CLASS_1_43F81F80340E2ACE_METHOD_1_7F4EBEC55EBE2D81_OFFSET UNITYSDK_OFFSET(0xD185730)
#define CLASS_1_43F81F80340E2ACE_METHOD_1_8F9DF3D751E1E0BF_OFFSET UNITYSDK_OFFSET(0xD1856F0)
#define CLASS_1_43F81F80340E2ACE_METHOD_1_BA10C1CBBE6B41F6_OFFSET UNITYSDK_OFFSET(0xD185CA0)
#define CLASS_1_43F81F80340E2ACE_METHOD_1_E08BF359F423D9A8_OFFSET UNITYSDK_OFFSET(0xD185980)
#define CLASS_1_43F81F80340E2ACE__CTOR_OFFSET UNITYSDK_OFFSET(0xD1856A0)

inline static constexpr unsigned int Class_1_43F81F80340E2ACE_TypeDefinitionIndex = 63866;

class Class_1_43F81F80340E2ACE : public ::System::Object
{
public:
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_1; // 0x10
	::RPG::Client::Promises::Promise* Field_1_2; // 0x18
	::RPG::GameCore::ChimeraSetAnimatorParam* Field_1_0; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x2C

	::System::Void _ctor(::RPG::GameCore::ChimeraSetAnimatorParam* a1, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraSetAnimatorParam*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_43F81F80340E2ACE__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::Client::Promises::Promise* Method_1_8F9DF3D751E1E0BF()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43F81F80340E2ACE_METHOD_1_8F9DF3D751E1E0BF_OFFSET))(this);
	}

	::System::Void Method_1_7F4EBEC55EBE2D81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43F81F80340E2ACE_METHOD_1_7F4EBEC55EBE2D81_OFFSET))(this);
	}

	::System::Void Method_1_E08BF359F423D9A8(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_43F81F80340E2ACE_METHOD_1_E08BF359F423D9A8_OFFSET))(this, a1);
	}

	::System::Void Method_1_4566A0EFFA7A7804(::RPG::Client::MockAnimator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CLASS_1_43F81F80340E2ACE_METHOD_1_4566A0EFFA7A7804_OFFSET))(this, a1);
	}

	::System::Void Method_1_BA10C1CBBE6B41F6(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_43F81F80340E2ACE_METHOD_1_BA10C1CBBE6B41F6_OFFSET))(this, a1);
	}
};
