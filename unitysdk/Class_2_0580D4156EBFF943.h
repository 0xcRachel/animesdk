#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace RPG::Client { class GridFightTraitEffectConfig; }
namespace RPG::Client { class PlanetFesPileToast; }
namespace RPG::Client { class PlanetFesToastItem; }
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }
namespace XLua { class LuaTable; }

#define CLASS_2_0580D4156EBFF943_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x146322E0)
#define CLASS_2_0580D4156EBFF943_METHOD_2_0A7D2AAE8FDADFC4_OFFSET UNITYSDK_OFFSET(0x14632610)
#define CLASS_2_0580D4156EBFF943_METHOD_2_0CAC8436EC78EB6B_OFFSET UNITYSDK_OFFSET(0x14631E60)
#define CLASS_2_0580D4156EBFF943_METHOD_2_1B8A7D152370AD2C_OFFSET UNITYSDK_OFFSET(0x146321C0)
#define CLASS_2_0580D4156EBFF943_METHOD_2_4FAC1D5038CE3FDC_OFFSET UNITYSDK_OFFSET(0x146325C0)
#define CLASS_2_0580D4156EBFF943_METHOD_2_51365A33D4539460_OFFSET UNITYSDK_OFFSET(0x14632820)
#define CLASS_2_0580D4156EBFF943_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x14632B90)
#define CLASS_2_0580D4156EBFF943_METHOD_2_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x146324E0)
#define CLASS_2_0580D4156EBFF943_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x146326E0)
#define CLASS_2_0580D4156EBFF943_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x146320A0)
#define CLASS_2_0580D4156EBFF943_METHOD_2_B214F97C7AAA732F_OFFSET UNITYSDK_OFFSET(0x14632440)
#define CLASS_2_0580D4156EBFF943_METHOD_2_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x14632330)
#define CLASS_2_0580D4156EBFF943_METHOD_2_D148B5D9B2EC21BB_OFFSET UNITYSDK_OFFSET(0x146320F0)
#define CLASS_2_0580D4156EBFF943_METHOD_2_D63735FB49794316_OFFSET UNITYSDK_OFFSET(0x146327A0)
#define CLASS_2_0580D4156EBFF943_METHOD_2_EBAE36A6264F45D6_OFFSET UNITYSDK_OFFSET(0x146323B0)
#define CLASS_2_0580D4156EBFF943__CTOR_OFFSET UNITYSDK_OFFSET(0x14632A60)
#define CLASS_2_0580D4156EBFF943__ONBIND_OFFSET UNITYSDK_OFFSET(0x146315A0)
#define CLASS_2_0580D4156EBFF943___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x14632B30)
#define CLASS_2_0580D4156EBFF943___ONBIND_B__1_0_OFFSET UNITYSDK_OFFSET(0x14632AD0)
#define CLASS_2_0580D4156EBFF943___ONBIND_B__1_1_OFFSET UNITYSDK_OFFSET(0x14632AE0)

inline static constexpr unsigned int Class_2_0580D4156EBFF943_TypeDefinitionIndex = 67540;

class Class_2_0580D4156EBFF943 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Int32 Field_2_1 = 0x4; // 0x0
	::UnityEngine::UI::Text* Field_2_2; // 0x60
	::UnityEngine::Animation* Field_2_3; // 0x68
	::UnityEngine::UI::Text* Field_2_4; // 0x70
	::RPG::Client::GridFightTraitEffectConfig* Field_2_5; // 0x78
	::RPG::Client::PlanetFesPileToast* Field_2_6; // 0x80
	::UnityEngine::UI::Text* Field_2_7; // 0x88
	::RPG::Client::PlanetFesPileToast* Field_2_8; // 0x90
	::UnityEngine::UI::Text* Field_2_9; // 0x98
	::UnityEngine::Animation* Field_2_10; // 0xA0
	::UnityEngine::UI::Image* Field_2_11; // 0xA8
	::UnityEngine::Transform* Field_2_12; // 0xB0
	::RPG::Client::GridFightTrait* Field_2_13; // 0xB8
	::UnityEngine::Transform* Field_2_14; // 0xC0
	::UnityEngine::UI::Text* Field_2_15; // 0xC8
	::UnityEngine::UI::Text* Field_2_16; // 0xD0
	::System::String* Field_2_17; // 0xD8
	::RPG::Client::AnimatorButton* Field_2_18; // 0xE0
	::System::Action_1<::System::Object*>* Field_2_19; // 0xE8
	::RPG::Client::SPProgress* Field_2_20; // 0xF0
	::UnityEngine::Transform* Field_2_21; // 0xF8
	::UnityEngine::Transform* Field_2_22; // 0x100
	::RPG::Client::GridFightTraitConfigBase* Field_2_23; // 0x108
	::System::String* Field_2_24; // 0x110
	::RPG::GameCore::BattleGridFightTeamTraitData* Field_2_25; // 0x118

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_0CAC8436EC78EB6B(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_0CAC8436EC78EB6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_D148B5D9B2EC21BB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_D148B5D9B2EC21BB_OFFSET))(this);
	}

	::System::Void Method_2_1B8A7D152370AD2C(::System::Boolean a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_1B8A7D152370AD2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_2_EBAE36A6264F45D6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_EBAE36A6264F45D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_B214F97C7AAA732F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_B214F97C7AAA732F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_4FAC1D5038CE3FDC(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_4FAC1D5038CE3FDC_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A7D2AAE8FDADFC4(::RPG::Client::TextID a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_0A7D2AAE8FDADFC4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_D63735FB49794316(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_D63735FB49794316_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_51365A33D4539460(::XLua::LuaTable* a1, ::RPG::Client::PlanetFesToastItem* a2, ::System::Object* a3)
	{
		return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::RPG::Client::PlanetFesToastItem*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_51365A33D4539460_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __OnBind_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943___ONBIND_B__1_0_OFFSET))(this);
	}

	::System::Void __OnBind_b__1_1(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943___ONBIND_B__1_1_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_0580D4156EBFF943_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}
};
