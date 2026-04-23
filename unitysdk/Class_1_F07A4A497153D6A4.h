#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }

#define CLASS_1_F07A4A497153D6A4_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x124547F0)
#define CLASS_1_F07A4A497153D6A4_GET_ISEQUIPMENTFULLYTRAINED_OFFSET UNITYSDK_OFFSET(0x12454810)
#define CLASS_1_F07A4A497153D6A4_GET_ISLEVELFULLYTRAINED_OFFSET UNITYSDK_OFFSET(0x12454800)
#define CLASS_1_F07A4A497153D6A4_GET_ISRELICFULLYTRAINED_OFFSET UNITYSDK_OFFSET(0x12454830)
#define CLASS_1_F07A4A497153D6A4_GET_ISSKILLTREEFULLYTRAINED_OFFSET UNITYSDK_OFFSET(0x12454820)
#define CLASS_1_F07A4A497153D6A4_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x124546B0)
#define CLASS_1_F07A4A497153D6A4_METHOD_1_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0x12454720)
#define CLASS_1_F07A4A497153D6A4_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x12454640)
#define CLASS_1_F07A4A497153D6A4_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x12454790)
#define CLASS_1_F07A4A497153D6A4__CTOR_OFFSET UNITYSDK_OFFSET(0x124545C0)

inline static constexpr unsigned int Class_1_F07A4A497153D6A4_TypeDefinitionIndex = 58280;

class Class_1_F07A4A497153D6A4 : public ::System::Object
{
public:
	::RPG::Client::AvatarData* _Avatar_k__BackingField; // 0x10
	::System::Boolean _IsLevelFullyTrained_k__BackingField; // 0x18
	::System::Boolean _IsSkillTreeFullyTrained_k__BackingField; // 0x19
	::System::Boolean _IsEquipmentFullyTrained_k__BackingField; // 0x1A
	::System::Boolean _IsRelicFullyTrained_k__BackingField; // 0x1B

	::System::Void _ctor(::RPG::Client::AvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + CLASS_1_F07A4A497153D6A4__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F07A4A497153D6A4_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F07A4A497153D6A4_METHOD_1_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F07A4A497153D6A4_METHOD_1_1808E1CF7A125519_2_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F07A4A497153D6A4_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::RPG::Client::AvatarData* get_Avatar()
	{
		return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F07A4A497153D6A4_GET_AVATAR_OFFSET))(this);
	}

	::System::Boolean get_IsLevelFullyTrained()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F07A4A497153D6A4_GET_ISLEVELFULLYTRAINED_OFFSET))(this);
	}

	::System::Boolean get_IsEquipmentFullyTrained()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F07A4A497153D6A4_GET_ISEQUIPMENTFULLYTRAINED_OFFSET))(this);
	}

	::System::Boolean get_IsSkillTreeFullyTrained()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F07A4A497153D6A4_GET_ISSKILLTREEFULLYTRAINED_OFFSET))(this);
	}

	::System::Boolean get_IsRelicFullyTrained()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F07A4A497153D6A4_GET_ISRELICFULLYTRAINED_OFFSET))(this);
	}
};
