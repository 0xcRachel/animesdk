#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FD052D94560CC32A_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xD23FBA0)
#define CLASS_1_FD052D94560CC32A_METHOD_1_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0xD23FA20)
#define CLASS_1_FD052D94560CC32A_METHOD_1_69D1A71FA8454BC8_OFFSET UNITYSDK_OFFSET(0xD23F630)
#define CLASS_1_FD052D94560CC32A_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0xD23F910)
#define CLASS_1_FD052D94560CC32A_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0xD23F490)
#define CLASS_1_FD052D94560CC32A_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xD23FBB0)
#define CLASS_1_FD052D94560CC32A__CTOR_OFFSET UNITYSDK_OFFSET(0xD23F240)

inline static constexpr unsigned int Class_1_FD052D94560CC32A_TypeDefinitionIndex = 61707;

class Class_1_FD052D94560CC32A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_3; // 0x10
	::RPG::Client::Prop::ChimeraBattlePuzzleBoard* Field_1_2; // 0x18
	::System::Action* Field_1_4; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_5; // 0x28
	::System::Single Field_1_0; // 0x30
	::System::Single Field_1_1; // 0x34
	::System::Boolean _IsFinished_k__BackingField; // 0x38

	::System::Void _ctor(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1, ::System::Action* a2, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Action*, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD052D94560CC32A__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_69D1A71FA8454BC8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD052D94560CC32A_METHOD_1_69D1A71FA8454BC8_OFFSET))(this, a1);
	}

	::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD052D94560CC32A_METHOD_1_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Void Method_1_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD052D94560CC32A_METHOD_1_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_1_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD052D94560CC32A_METHOD_1_51AC7912135C5E23_OFFSET))(this);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD052D94560CC32A_GET_ISFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinished(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD052D94560CC32A_SET_ISFINISHED_OFFSET))(this, value);
	}
};
