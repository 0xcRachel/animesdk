#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }

#define CLASS_1_43BD383C98B4C0C5_138_CLASS_1_0CCBB1881E7A9C27_METHOD_1_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x861E300)
#define CLASS_1_43BD383C98B4C0C5_138_CLASS_1_0CCBB1881E7A9C27__CTOR_OFFSET UNITYSDK_OFFSET(0x861E2F0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_138_Class_1_0CCBB1881E7A9C27_TypeDefinitionIndex = 52076;

class Class_1_43BD383C98B4C0C5_138_Class_1_0CCBB1881E7A9C27 : public ::System::Object
{
public:
	::RPG::Client::AvatarData* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor(::RPG::Client::AvatarData* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AvatarData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_138_CLASS_1_0CCBB1881E7A9C27__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_138_CLASS_1_0CCBB1881E7A9C27_METHOD_1_18982EFD3B740683_OFFSET))(this);
	}
};
