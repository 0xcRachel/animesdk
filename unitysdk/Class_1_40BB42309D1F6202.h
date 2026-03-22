#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/LimaoNewsContentType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_40BB42309D1F6202_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x1706AC80)
#define CLASS_1_40BB42309D1F6202__CTOR_OFFSET UNITYSDK_OFFSET(0x1706AEF0)

inline static constexpr unsigned int Class_1_40BB42309D1F6202_TypeDefinitionIndex = 12673;

class Class_1_40BB42309D1F6202 : public ::System::Object
{
public:
	::System::String* Field_1_5; // 0x10
	::System::String* Field_1_4; // 0x18
	::System::UInt32 Field_1_0; // 0x20
	::RPG::GameCore::LimaoNewsContentType Field_1_1; // 0x24
	::System::UInt32 Field_1_3; // 0x28
	::RPG::Client::TextID Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40BB42309D1F6202__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_40BB42309D1F6202*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_40BB42309D1F6202*&))((::PBYTE)hIl2Cpp + CLASS_1_40BB42309D1F6202_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
