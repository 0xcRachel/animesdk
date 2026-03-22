#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_1_2CAAA2FDF9170110;
namespace RPG::Client { class CustomButton; }
namespace RPG::Client { class MonoTieMuQTE; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_2_C16270EAB78F2183_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9938C60)
#define CLASS_2_C16270EAB78F2183_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x9938BF0)
#define CLASS_2_C16270EAB78F2183_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9938920)
#define CLASS_2_C16270EAB78F2183_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x9938A40)
#define CLASS_2_C16270EAB78F2183_METHOD_2_D1305BC17A89C222_OFFSET UNITYSDK_OFFSET(0x9938D00)
#define CLASS_2_C16270EAB78F2183_METHOD_2_D951EE47D243444C_OFFSET UNITYSDK_OFFSET(0x9938830)
#define CLASS_2_C16270EAB78F2183_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x99385C0)
#define CLASS_2_C16270EAB78F2183__CTOR_OFFSET UNITYSDK_OFFSET(0x99387F0)
#define CLASS_2_C16270EAB78F2183__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9938630)
#define CLASS_2_C16270EAB78F2183__ONTICK_OFFSET UNITYSDK_OFFSET(0x99389E0)
#define CLASS_2_C16270EAB78F2183__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x9938890)
#define CLASS_2_C16270EAB78F2183__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9938990)
#define CLASS_2_C16270EAB78F2183___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x9938DE0)
#define CLASS_2_C16270EAB78F2183___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9938E70)
#define CLASS_2_C16270EAB78F2183___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x9938F90)
#define CLASS_2_C16270EAB78F2183___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x9938ED0)
#define CLASS_2_C16270EAB78F2183___IFIXBASEPROXY__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x9938F30)

inline static constexpr unsigned int Class_2_C16270EAB78F2183_TypeDefinitionIndex = 57606;

class Class_2_C16270EAB78F2183 : public ::RPG::Client::UIController
{
public:
	::UnityEngine::UI::Slider* Field_2_2; // 0x180
	::RPG::Client::CustomButton* Field_2_1; // 0x188
	::Class_1_2CAAA2FDF9170110* Field_2_3; // 0x190
	::RPG::Client::MonoTieMuQTE* Field_2_0; // 0x198
	::System::Single Field_2_7; // 0x1A0
	::System::Boolean Field_2_8; // 0x1A4
	::System::Single Field_2_6; // 0x1A8
	::RPG::GameCore::StringHash Field_2_4; // 0x1AC
	::System::Single Field_2_5; // 0x1B0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183__CTOR_OFFSET))(this);
	}

	::System::String* ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void Method_2_D951EE47D243444C(::Class_1_2CAAA2FDF9170110* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2CAAA2FDF9170110*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_D951EE47D243444C_OFFSET))(this, a1, a2);
	}

	::System::Void _SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183__SETUPVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_D1305BC17A89C222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183_METHOD_2_D1305BC17A89C222_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ViewPrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183___IFIXBASEPROXY_VIEWPREFABPATH_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__SetupView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183___IFIXBASEPROXY__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C16270EAB78F2183___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}
};
