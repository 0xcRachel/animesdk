#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTextMacroParamType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_4CEFB88B4AAB3F6A_METHOD_1_D44B7F51DEAAFB41_OFFSET UNITYSDK_OFFSET(0x166ED0E0)
#define CLASS_1_4CEFB88B4AAB3F6A__CTOR_OFFSET UNITYSDK_OFFSET(0x166ED1F0)

inline static constexpr unsigned int Class_1_4CEFB88B4AAB3F6A_TypeDefinitionIndex = 13355;

class Class_1_4CEFB88B4AAB3F6A : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::RPG::GameCore::RogueTextMacroParamType Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4CEFB88B4AAB3F6A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_D44B7F51DEAAFB41(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_4CEFB88B4AAB3F6A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_4CEFB88B4AAB3F6A*&))((::PBYTE)hIl2Cpp + CLASS_1_4CEFB88B4AAB3F6A_METHOD_1_D44B7F51DEAAFB41_OFFSET))(a1, a2);
	}
};
