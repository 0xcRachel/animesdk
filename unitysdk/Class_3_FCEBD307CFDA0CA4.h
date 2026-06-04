#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesTargetType.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingFesDialogConfig; }
namespace RPG::GameCore { class ChenLingFesTargetConfig; }
namespace RPG::GameCore { class ChenLingFesToastConfig; }
namespace System { class String; }

#define CLASS_3_FCEBD307CFDA0CA4_METHOD_3_620F752B8758282A_OFFSET UNITYSDK_OFFSET(0x19475820)
#define CLASS_3_FCEBD307CFDA0CA4_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x194758B0)
#define CLASS_3_FCEBD307CFDA0CA4__CTOR_OFFSET UNITYSDK_OFFSET(0x19475880)

inline static constexpr unsigned int Class_3_FCEBD307CFDA0CA4_TypeDefinitionIndex = 20313;

class Class_3_FCEBD307CFDA0CA4 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::ChenLingFesDialogConfig* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::RPG::GameCore::ChenLingFesToastConfig* Field_3_2; // 0x28
	::RPG::GameCore::ChenLingFesTargetConfig* Field_3_3; // 0x30
	::System::String* Field_3_4; // 0x38
	::System::UInt32 Field_3_5; // 0x40
	::RPG::GameCore::LittleGameEntityType Field_3_6; // 0x44
	::System::Single Field_3_7; // 0x48
	::System::Boolean Field_3_8; // 0x4C
	::System::Boolean Field_3_9; // 0x4D
	::RPG::GameCore::ChenLingFesTargetType Field_3_10; // 0x50
	::System::UInt32 Field_3_11; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FCEBD307CFDA0CA4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_620F752B8758282A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FCEBD307CFDA0CA4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FCEBD307CFDA0CA4*&))((::PBYTE)hIl2Cpp + CLASS_3_FCEBD307CFDA0CA4_METHOD_3_620F752B8758282A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FCEBD307CFDA0CA4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FCEBD307CFDA0CA4*))((::PBYTE)hIl2Cpp + CLASS_3_FCEBD307CFDA0CA4_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
