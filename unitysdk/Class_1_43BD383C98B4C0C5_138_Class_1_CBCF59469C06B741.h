#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class EquipmentItemData; }

#define CLASS_1_43BD383C98B4C0C5_138_CLASS_1_CBCF59469C06B741_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x861F550)
#define CLASS_1_43BD383C98B4C0C5_138_CLASS_1_CBCF59469C06B741__CTOR_OFFSET UNITYSDK_OFFSET(0x861F540)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_138_Class_1_CBCF59469C06B741_TypeDefinitionIndex = 52074;

class Class_1_43BD383C98B4C0C5_138_Class_1_CBCF59469C06B741 : public ::System::Object
{
public:
	::RPG::Client::EquipmentItemData* Field_1_1; // 0x10
	::RPG::Client::AvatarData* Field_1_0; // 0x18

	::System::Void _ctor(::RPG::Client::AvatarData* a1, ::RPG::Client::EquipmentItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*, ::RPG::Client::EquipmentItemData*))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_138_CLASS_1_CBCF59469C06B741__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_138_CLASS_1_CBCF59469C06B741_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}
};
