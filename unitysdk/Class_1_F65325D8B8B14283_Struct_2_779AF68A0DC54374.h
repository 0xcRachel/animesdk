#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class AvatarLinkRow; }
namespace System { class String; }

#define CLASS_1_F65325D8B8B14283_STRUCT_2_779AF68A0DC54374_METHOD_2_6192496CF19FCCBF_OFFSET UNITYSDK_OFFSET(0x145C040)
#define CLASS_1_F65325D8B8B14283_STRUCT_2_779AF68A0DC54374__CTOR_OFFSET UNITYSDK_OFFSET(0x145C030)

inline static constexpr unsigned int Class_1_F65325D8B8B14283_Struct_2_779AF68A0DC54374_TypeDefinitionIndex = 54046;

struct alignas(4) Class_1_F65325D8B8B14283_Struct_2_779AF68A0DC54374
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::UInt32 Field_2_2; // 0x18

	::System::Void _ctor(::RPG::GameCore::AvatarLinkRow* a1, ::RPG::GameCore::GenderType a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarLinkRow*, ::RPG::GameCore::GenderType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F65325D8B8B14283_STRUCT_2_779AF68A0DC54374__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_2_6192496CF19FCCBF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F65325D8B8B14283_STRUCT_2_779AF68A0DC54374_METHOD_2_6192496CF19FCCBF_OFFSET))(this);
	}
};
