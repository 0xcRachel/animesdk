#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::Client { class ShowAttackTimeParam; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_D1F354F267E93111_METHOD_2_E5E00F6D6B7AF450_OFFSET UNITYSDK_OFFSET(0x894EDD0)
#define CLASS_2_D1F354F267E93111__CTOR_OFFSET UNITYSDK_OFFSET(0x894EEC0)
#define CLASS_2_D1F354F267E93111__ONBIND_OFFSET UNITYSDK_OFFSET(0x894ED50)
#define CLASS_2_D1F354F267E93111___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x894EEF0)

inline static constexpr unsigned int Class_2_D1F354F267E93111_TypeDefinitionIndex = 56772;

class Class_2_D1F354F267E93111 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::UI::Text* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1F354F267E93111__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1F354F267E93111__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_E5E00F6D6B7AF450(::RPG::Client::ShowAttackTimeParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowAttackTimeParam*))((::PBYTE)hIl2Cpp + CLASS_2_D1F354F267E93111_METHOD_2_E5E00F6D6B7AF450_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D1F354F267E93111___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
