#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraSkillUIState.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class BattleSilverWolf999CustomUIData; }
namespace RPG::Client { class BattleSilverWolf999UltraSkillUIData; }
namespace RPG::Client { class UIStateCtrl; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_0DB47114BB773F2A_METHOD_2_0EBFD2E2FCAC7276_OFFSET UNITYSDK_OFFSET(0x1550F4D0)
#define CLASS_2_0DB47114BB773F2A_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1550F460)
#define CLASS_2_0DB47114BB773F2A_METHOD_2_1F130271093617A5_OFFSET UNITYSDK_OFFSET(0x1550F290)
#define CLASS_2_0DB47114BB773F2A_METHOD_2_2F0F99A12DB93F30_OFFSET UNITYSDK_OFFSET(0x1550F240)
#define CLASS_2_0DB47114BB773F2A_METHOD_2_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x1550F3D0)
#define CLASS_2_0DB47114BB773F2A_METHOD_2_3CF43707BF2E9BBA_OFFSET UNITYSDK_OFFSET(0x1550F790)
#define CLASS_2_0DB47114BB773F2A_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1550FCB0)
#define CLASS_2_0DB47114BB773F2A_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x1550FC50)
#define CLASS_2_0DB47114BB773F2A_METHOD_2_98CD66A7F3C102A5_OFFSET UNITYSDK_OFFSET(0x1550F540)
#define CLASS_2_0DB47114BB773F2A_METHOD_2_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x1550F890)
#define CLASS_2_0DB47114BB773F2A_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x1550F1B0)
#define CLASS_2_0DB47114BB773F2A_METHOD_2_BFB00779E460D7A3_OFFSET UNITYSDK_OFFSET(0x1550F5B0)
#define CLASS_2_0DB47114BB773F2A_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1550F4F0)
#define CLASS_2_0DB47114BB773F2A__CTOR_OFFSET UNITYSDK_OFFSET(0x1550F940)
#define CLASS_2_0DB47114BB773F2A__ONBIND_OFFSET UNITYSDK_OFFSET(0x1550F090)
#define CLASS_2_0DB47114BB773F2A___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1550FBF0)

inline static constexpr unsigned int Class_2_0DB47114BB773F2A_TypeDefinitionIndex = 67226;

class Class_2_0DB47114BB773F2A : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Image* Field_2_1; // 0x60
	::RPG::Client::UIStateCtrl* Field_2_2; // 0x68
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SilverWolf999UltraSkillUIState, ::System::String*>* Field_2_3; // 0x70
	::RPG::Client::BattleSilverWolf999CustomUIData* Field_2_4; // 0x78
	::UnityEngine::Animation* Field_2_5; // 0x80
	::RPG::GameCore::SilverWolf999UltraSkillUIState Field_2_6; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB47114BB773F2A__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB47114BB773F2A__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_0DB47114BB773F2A_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_2F0F99A12DB93F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB47114BB773F2A_METHOD_2_2F0F99A12DB93F30_OFFSET))(this);
	}

	::System::Void Method_2_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB47114BB773F2A_METHOD_2_3B7145E79424FB75_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB47114BB773F2A_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_1F130271093617A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB47114BB773F2A_METHOD_2_1F130271093617A5_OFFSET))(this);
	}

	::System::Void Method_2_98CD66A7F3C102A5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB47114BB773F2A_METHOD_2_98CD66A7F3C102A5_OFFSET))(this);
	}

	::System::Void Method_2_BFB00779E460D7A3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB47114BB773F2A_METHOD_2_BFB00779E460D7A3_OFFSET))(this);
	}

	::System::Void Method_2_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB47114BB773F2A_METHOD_2_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB47114BB773F2A_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3CF43707BF2E9BBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB47114BB773F2A_METHOD_2_3CF43707BF2E9BBA_OFFSET))(this);
	}

	::RPG::Client::BattleSilverWolf999UltraSkillUIData* Method_2_0EBFD2E2FCAC7276()
	{
		return ((::RPG::Client::BattleSilverWolf999UltraSkillUIData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB47114BB773F2A_METHOD_2_0EBFD2E2FCAC7276_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB47114BB773F2A___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_0DB47114BB773F2A_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DB47114BB773F2A_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
