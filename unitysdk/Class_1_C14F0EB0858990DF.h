#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournPersonaRoomBgColorType.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_C14F0EB0858990DF_METHOD_1_0E3C9CE42200F670_OFFSET UNITYSDK_OFFSET(0x192ED0C0)
#define CLASS_1_C14F0EB0858990DF__CTOR_OFFSET UNITYSDK_OFFSET(0x192ED4D0)

inline static constexpr unsigned int Class_1_C14F0EB0858990DF_TypeDefinitionIndex = 14319;

class Class_1_C14F0EB0858990DF : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::UInt32 Field_1_2; // 0x20
	::RPG::GameCore::RogueTournPersonaRoomBgColorType Field_1_3; // 0x24
	::RPG::Client::TextID Field_1_4; // 0x28
	::RPG::Client::TextID Field_1_5; // 0x38
	::RPG::Client::TextID Field_1_6; // 0x48
	::RPG::GameCore::RogueTournRoomType Field_1_7; // 0x58
	::System::Boolean Field_1_8; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C14F0EB0858990DF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_0E3C9CE42200F670(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_C14F0EB0858990DF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_C14F0EB0858990DF*&))((::PBYTE)hIl2Cpp + CLASS_1_C14F0EB0858990DF_METHOD_1_0E3C9CE42200F670_OFFSET))(a1, a2);
	}
};
