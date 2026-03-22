#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_760;
class Class_2_9C9B343BAD38C7E4;
class Class_2_E1E830ACEA2D2842;
namespace RPG::Client { class BeneficialBuffViewData; }
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_1AAAA15BCF2E3D4B_METHOD_2_0DCA45EDA639F38E_OFFSET UNITYSDK_OFFSET(0x855A550)
#define CLASS_2_1AAAA15BCF2E3D4B_METHOD_2_41D216090DFC1113_OFFSET UNITYSDK_OFFSET(0x855A290)
#define CLASS_2_1AAAA15BCF2E3D4B_METHOD_2_DA05F5995B1F9131_OFFSET UNITYSDK_OFFSET(0x855A430)
#define CLASS_2_1AAAA15BCF2E3D4B__CTOR_OFFSET UNITYSDK_OFFSET(0x855A5D0)
#define CLASS_2_1AAAA15BCF2E3D4B__ONBIND_OFFSET UNITYSDK_OFFSET(0x855A1F0)
#define CLASS_2_1AAAA15BCF2E3D4B__SETUPVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0x855A600)
#define CLASS_2_1AAAA15BCF2E3D4B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x855A660)

inline static constexpr unsigned int Class_2_1AAAA15BCF2E3D4B_TypeDefinitionIndex = 56729;

class Class_2_1AAAA15BCF2E3D4B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_4; // 0x0
	::RPG::Client::BeneficialBuffViewData* Field_2_3; // 0x60
	::RPG::Client::NodeListViewPanel_1<::Class_2_9C9B343BAD38C7E4*>* Field_2_1; // 0x68
	::Class_2_E1E830ACEA2D2842* Field_2_0; // 0x70
	::UnityEngine::UI::Text* Field_2_2; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AAAA15BCF2E3D4B__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AAAA15BCF2E3D4B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_41D216090DFC1113(::RPG::Client::BeneficialBuffViewData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BeneficialBuffViewData*))((::PBYTE)hIl2Cpp + CLASS_2_1AAAA15BCF2E3D4B_METHOD_2_41D216090DFC1113_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_760* Method_2_DA05F5995B1F9131(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_0_16E4307DCC419505_760*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_1AAAA15BCF2E3D4B_METHOD_2_DA05F5995B1F9131_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_760* Method_2_0DCA45EDA639F38E()
	{
		return ((::Class_0_16E4307DCC419505_760*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AAAA15BCF2E3D4B_METHOD_2_0DCA45EDA639F38E_OFFSET))(this);
	}

	::System::Void _SetupView_b__4_0(::Class_2_9C9B343BAD38C7E4* panel, ::System::Int32 i)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9C9B343BAD38C7E4*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1AAAA15BCF2E3D4B__SETUPVIEW_B__4_0_OFFSET))(this, panel, i);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1AAAA15BCF2E3D4B___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
