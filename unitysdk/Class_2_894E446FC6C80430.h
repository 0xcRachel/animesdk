#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_984;
class Class_2_25E6C4F7C3D33A00;
class Class_2_E1E830ACEA2D2842;
namespace RPG::Client { class BeneficialBuffViewData; }
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_894E446FC6C80430_METHOD_2_0DCA45EDA639F38E_OFFSET UNITYSDK_OFFSET(0x15F14E80)
#define CLASS_2_894E446FC6C80430_METHOD_2_40584B808072C1C1_OFFSET UNITYSDK_OFFSET(0x15F14F90)
#define CLASS_2_894E446FC6C80430_METHOD_2_474D2EE1438CBADD_OFFSET UNITYSDK_OFFSET(0x15F14D20)
#define CLASS_2_894E446FC6C80430_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x15F14F00)
#define CLASS_2_894E446FC6C80430_METHOD_2_EAB1BE386CC4D972_OFFSET UNITYSDK_OFFSET(0x15F14AC0)
#define CLASS_2_894E446FC6C80430__CTOR_OFFSET UNITYSDK_OFFSET(0x15F15000)
#define CLASS_2_894E446FC6C80430__ONBIND_OFFSET UNITYSDK_OFFSET(0x15F14A20)
#define CLASS_2_894E446FC6C80430__SETUPVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0x15F15030)
#define CLASS_2_894E446FC6C80430___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x15F150A0)

inline static constexpr unsigned int Class_2_894E446FC6C80430_TypeDefinitionIndex = 66539;

class Class_2_894E446FC6C80430 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Text* Field_2_1; // 0x60
	::RPG::Client::BeneficialBuffViewData* Field_2_2; // 0x68
	::Class_2_E1E830ACEA2D2842* Field_2_3; // 0x70
	::RPG::Client::NodeListViewPanel_1<::Class_2_25E6C4F7C3D33A00*>* Field_2_4; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_894E446FC6C80430__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_894E446FC6C80430__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_EAB1BE386CC4D972(::RPG::Client::BeneficialBuffViewData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BeneficialBuffViewData*))((::PBYTE)hIl2Cpp + CLASS_2_894E446FC6C80430_METHOD_2_EAB1BE386CC4D972_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_984* Method_2_474D2EE1438CBADD(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_0_16E4307DCC419505_984*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_894E446FC6C80430_METHOD_2_474D2EE1438CBADD_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_984* Method_2_0DCA45EDA639F38E()
	{
		return ((::Class_0_16E4307DCC419505_984*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_894E446FC6C80430_METHOD_2_0DCA45EDA639F38E_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_894E446FC6C80430_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_40584B808072C1C1()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_894E446FC6C80430_METHOD_2_40584B808072C1C1_OFFSET))(this);
	}

	::System::Void _SetupView_b__4_0(::Class_2_25E6C4F7C3D33A00* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_25E6C4F7C3D33A00*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_894E446FC6C80430__SETUPVIEW_B__4_0_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_894E446FC6C80430___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
