#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_7912BA534EDCEE86.h"

namespace RPG::Client { class BattleSilverWolf999CustomUIData; }
namespace System { class String; }

#define CLASS_4_C6341C0CA6DED03F_METHOD_4_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xE143820)
#define CLASS_4_C6341C0CA6DED03F_METHOD_4_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0xE143630)
#define CLASS_4_C6341C0CA6DED03F__CTOR_OFFSET UNITYSDK_OFFSET(0xE1437F0)
#define CLASS_4_C6341C0CA6DED03F__ONBIND_OFFSET UNITYSDK_OFFSET(0xE143740)
#define CLASS_4_C6341C0CA6DED03F___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xE143880)

inline static constexpr unsigned int Class_4_C6341C0CA6DED03F_TypeDefinitionIndex = 65712;

class Class_4_C6341C0CA6DED03F : public ::Class_3_7912BA534EDCEE86
{
public:
	// static const ::System::String* Field_4_0; // 0x0
	::RPG::Client::BattleSilverWolf999CustomUIData* Field_4_1; // 0x160

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C6341C0CA6DED03F__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C6341C0CA6DED03F_METHOD_4_79830F666EE579C0_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C6341C0CA6DED03F__ONBIND_OFFSET))(this);
	}

	::System::Void Method_4_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C6341C0CA6DED03F_METHOD_4_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C6341C0CA6DED03F___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
