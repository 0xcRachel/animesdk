#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_D1797279B49332E9;
class Class_2_6E0B9E69D0FC929E;
class Class_2_D994353E21027540;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_103FE096F3BCFEC7_OFFSET UNITYSDK_OFFSET(0x15BA7DB0)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x15BA8230)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x15BA7BD0)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_193C90E4C6892FC2_OFFSET UNITYSDK_OFFSET(0x15BA81D0)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_1B9CC121BDC8766D_OFFSET UNITYSDK_OFFSET(0x15BA8050)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15BA7A80)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0x15BA7AE0)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x15BA7D60)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_494458CA7765DC42_OFFSET UNITYSDK_OFFSET(0x15BA82B0)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x15BA83C0)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_7AFC74ADCC2A9C7A_1_OFFSET UNITYSDK_OFFSET(0x15BA8170)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_7AFC74ADCC2A9C7A_OFFSET UNITYSDK_OFFSET(0x15BA7CF0)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x15BA7970)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_86738FBA5954F142_OFFSET UNITYSDK_OFFSET(0x15BA7C40)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x15BA7890)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_D5999BF4C232F1C9_OFFSET UNITYSDK_OFFSET(0x15BA80D0)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_EDE104A2956E181A_OFFSET UNITYSDK_OFFSET(0x15BA79F0)
#define CLASS_2_7DBD5CFD710E5F14_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x15BA7910)
#define CLASS_2_7DBD5CFD710E5F14__CTOR_OFFSET UNITYSDK_OFFSET(0x15BA8330)
#define CLASS_2_7DBD5CFD710E5F14__ONBIND_OFFSET UNITYSDK_OFFSET(0x15BA7670)
#define CLASS_2_7DBD5CFD710E5F14___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x15BA8360)

inline static constexpr unsigned int Class_2_7DBD5CFD710E5F14_TypeDefinitionIndex = 67264;

class Class_2_7DBD5CFD710E5F14 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::RPG::GameCore::SkillData* Field_2_2; // 0x60
	::Class_2_6E0B9E69D0FC929E* Field_2_3; // 0x68
	::Class_1_D1797279B49332E9* Field_2_4; // 0x70
	::Struct_2_96F8F0A04B900A9E Field_2_5; // 0x78
	::Class_2_D994353E21027540* Field_2_6; // 0x80
	::RPG::GameCore::BattleInstance* Field_2_7; // 0x88
	::UnityEngine::Transform* Field_2_8; // 0x90
	::RPG::Client::AnimatorButton* Field_2_9; // 0x98
	::UnityEngine::Transform* Field_2_10; // 0xA0
	::UnityEngine::Animator* Field_2_11; // 0xA8
	::System::Boolean Field_2_12; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE104A2956E181A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_EDE104A2956E181A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_86738FBA5954F142(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_86738FBA5954F142_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_103FE096F3BCFEC7(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_103FE096F3BCFEC7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B9CC121BDC8766D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_1B9CC121BDC8766D_OFFSET))(this, a1);
	}

	::System::Void Method_2_7AFC74ADCC2A9C7A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_7AFC74ADCC2A9C7A_OFFSET))(this, a1);
	}

	::System::Void Method_2_D5999BF4C232F1C9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_D5999BF4C232F1C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_7AFC74ADCC2A9C7A_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_7AFC74ADCC2A9C7A_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_193C90E4C6892FC2(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_193C90E4C6892FC2_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_494458CA7765DC42()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_494458CA7765DC42_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_7DBD5CFD710E5F14_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}
};
