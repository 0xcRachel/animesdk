#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_303D5A33D1401D59;
class Class_1_C4FFB95AA4FB577F_Class_1_A00C4B3DFD416D9F;
namespace RPG::GameCore { class TrainPartyBuildItemSlot; }
namespace RPG::GameCore { class TrainPartyBuildStaticItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_C4FFB95AA4FB577F_CLASS_1_191036C5664F0792__CTOR_OFFSET UNITYSDK_OFFSET(0xA6C2FB0)

inline static constexpr unsigned int Class_1_C4FFB95AA4FB577F_Class_1_191036C5664F0792_TypeDefinitionIndex = 47695;

class Class_1_C4FFB95AA4FB577F_Class_1_191036C5664F0792 : public ::System::Object
{
public:
	::Il2CppArray<::System::Boolean>* Field_1_8; // 0x10
	::Class_1_303D5A33D1401D59* Field_1_2; // 0x18
	::Class_1_C4FFB95AA4FB577F_Class_1_A00C4B3DFD416D9F* Field_1_6; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::TrainPartyBuildItemSlot*>* Field_1_3; // 0x28
	::System::String* Field_1_0; // 0x30
	::System::String* Field_1_1; // 0x38
	::System::Collections::Generic::List_1<::RPG::GameCore::TrainPartyBuildStaticItem*>* Field_1_4; // 0x40
	::UnityEngine::Transform* Field_1_5; // 0x48
	::System::Boolean Field_1_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4FFB95AA4FB577F_CLASS_1_191036C5664F0792__CTOR_OFFSET))(this);
	}
};
