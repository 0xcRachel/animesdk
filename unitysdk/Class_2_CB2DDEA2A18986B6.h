#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_CB2DDEA2A18986B6_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xFF9FD00)
#define CLASS_2_CB2DDEA2A18986B6_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xFF9FDE0)
#define CLASS_2_CB2DDEA2A18986B6_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0xFF9F980)
#define CLASS_2_CB2DDEA2A18986B6_METHOD_2_870AF3CD1D0A67B1_OFFSET UNITYSDK_OFFSET(0xFF9FA90)
#define CLASS_2_CB2DDEA2A18986B6_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xFF9FBA0)
#define CLASS_2_CB2DDEA2A18986B6_METHOD_2_A57FA722AB2A8938_OFFSET UNITYSDK_OFFSET(0xFF9FAE0)
#define CLASS_2_CB2DDEA2A18986B6_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0xFF9FC30)
#define CLASS_2_CB2DDEA2A18986B6_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xFF9F630)
#define CLASS_2_CB2DDEA2A18986B6__CTOR_OFFSET UNITYSDK_OFFSET(0xFF9F5F0)
#define CLASS_2_CB2DDEA2A18986B6__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xFF9F680)
#define CLASS_2_CB2DDEA2A18986B6__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xFF9F930)
#define CLASS_2_CB2DDEA2A18986B6__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xFF9F8F0)
#define CLASS_2_CB2DDEA2A18986B6___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xFFA0040)
#define CLASS_2_CB2DDEA2A18986B6___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xFFA00A0)
#define CLASS_2_CB2DDEA2A18986B6___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0xFF9FE90)
#define CLASS_2_CB2DDEA2A18986B6___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xFF9FF20)
#define CLASS_2_CB2DDEA2A18986B6___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xFF9FFE0)
#define CLASS_2_CB2DDEA2A18986B6___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xFF9FF80)

inline static constexpr unsigned int Class_2_CB2DDEA2A18986B6_TypeDefinitionIndex = 66083;

class Class_2_CB2DDEA2A18986B6 : public ::RPG::Client::UIController
{
public:
	// static const ::System::Single Field_2_3; // 0x0
	// static const ::System::Single Field_2_4; // 0x0
	::RPG::GameCore::LevelUIComponent* Field_2_2; // 0x180
	::UnityEngine::UI::Image* Field_2_1; // 0x188
	::UnityEngine::Transform* Field_2_0; // 0x190

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6__CTOR_OFFSET))(this);
	}

	::System::String* ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6__SETUPVIEW_OFFSET))(this);
	}

	::System::Void Method_2_870AF3CD1D0A67B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6_METHOD_2_870AF3CD1D0A67B1_OFFSET))(this);
	}

	::System::Void Method_2_A57FA722AB2A8938(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6_METHOD_2_A57FA722AB2A8938_OFFSET))(this, a1);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB2DDEA2A18986B6___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
