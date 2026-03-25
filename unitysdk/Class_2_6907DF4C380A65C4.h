#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class ElationBattleBuffGroupViewData; }
namespace RPG::Client { class ElationBuffPresenter; }
namespace RPG::Client { class ElationBuffPresenterUIParam; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_6907DF4C380A65C4_METHOD_2_9256B4946C27AD99_OFFSET UNITYSDK_OFFSET(0x1151F5D0)
#define CLASS_2_6907DF4C380A65C4_METHOD_2_D2E1E3E869E172E9_OFFSET UNITYSDK_OFFSET(0x1151F470)
#define CLASS_2_6907DF4C380A65C4_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x1151F580)
#define CLASS_2_6907DF4C380A65C4__CTOR_OFFSET UNITYSDK_OFFSET(0x1151F5F0)
#define CLASS_2_6907DF4C380A65C4__ONBIND_OFFSET UNITYSDK_OFFSET(0x1151EFC0)
#define CLASS_2_6907DF4C380A65C4___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1151F660)
#define CLASS_2_6907DF4C380A65C4___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0x1151F620)
#define CLASS_2_6907DF4C380A65C4___ONBIND_B__0_1_OFFSET UNITYSDK_OFFSET(0x1151F640)

inline static constexpr unsigned int Class_2_6907DF4C380A65C4_TypeDefinitionIndex = 58320;

class Class_2_6907DF4C380A65C4 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::ElationBuffPresenterUIParam* Field_2_1; // 0x60
	::UnityEngine::UI::Button* Field_2_3; // 0x68
	::RPG::Client::ElationBuffPresenter* Field_2_0; // 0x70
	::UnityEngine::UI::Button* Field_2_2; // 0x78
	::UnityEngine::Animation* Field_2_4; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6907DF4C380A65C4__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6907DF4C380A65C4__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_D2E1E3E869E172E9(::RPG::Client::ElationBattleBuffGroupViewData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ElationBattleBuffGroupViewData*))((::PBYTE)hIl2Cpp + CLASS_2_6907DF4C380A65C4_METHOD_2_D2E1E3E869E172E9_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6907DF4C380A65C4_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_9256B4946C27AD99()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6907DF4C380A65C4_METHOD_2_9256B4946C27AD99_OFFSET))(this);
	}

	::System::Void __OnBind_b__0_0(::System::Object* o)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6907DF4C380A65C4___ONBIND_B__0_0_OFFSET))(this, o);
	}

	::System::Void __OnBind_b__0_1(::System::Object* o)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6907DF4C380A65C4___ONBIND_B__0_1_OFFSET))(this, o);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6907DF4C380A65C4___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
