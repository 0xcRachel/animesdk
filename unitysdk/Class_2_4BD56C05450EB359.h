#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_760;
class Class_2_1AAAA15BCF2E3D4B;
class Class_2_9C9B343BAD38C7E4;
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace RPG::GameCore { class ElationCharacterUIConfig; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_4BD56C05450EB359_METHOD_2_439C7C960308B0ED_OFFSET UNITYSDK_OFFSET(0x10B9FE00)
#define CLASS_2_4BD56C05450EB359_METHOD_2_53F44F8C3A33524C_OFFSET UNITYSDK_OFFSET(0x10BA0040)
#define CLASS_2_4BD56C05450EB359_METHOD_2_73FD5BBE218B4242_OFFSET UNITYSDK_OFFSET(0x10BA0390)
#define CLASS_2_4BD56C05450EB359_METHOD_2_E4CE44D3AD62FE6B_OFFSET UNITYSDK_OFFSET(0x10B9FED0)
#define CLASS_2_4BD56C05450EB359_METHOD_2_EAEE709CDB8651A7_OFFSET UNITYSDK_OFFSET(0x10BA0180)
#define CLASS_2_4BD56C05450EB359__CTOR_OFFSET UNITYSDK_OFFSET(0x10BA03E0)
#define CLASS_2_4BD56C05450EB359__ONBIND_OFFSET UNITYSDK_OFFSET(0x10B9FCF0)
#define CLASS_2_4BD56C05450EB359___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10BA0410)

inline static constexpr unsigned int Class_2_4BD56C05450EB359_TypeDefinitionIndex = 56737;

class Class_2_4BD56C05450EB359 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_6; // 0x60
	::RPG::Client::NodeListViewPanel_1<::Class_2_9C9B343BAD38C7E4*>* Field_2_1; // 0x68
	::UnityEngine::UI::Text* Field_2_3; // 0x70
	::Class_2_1AAAA15BCF2E3D4B* Field_2_0; // 0x78
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_5; // 0x80
	::RPG::Client::NodeListViewPanel_1<::Class_2_9C9B343BAD38C7E4*>* Field_2_2; // 0x88
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_7; // 0x90
	::UnityEngine::UI::Text* Field_2_4; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_439C7C960308B0ED(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a2, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a3, ::RPG::GameCore::TurnBasedAbilityComponent* a4, ::RPG::GameCore::ElationCharacterUIConfig* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::ElationCharacterUIConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359_METHOD_2_439C7C960308B0ED_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_E4CE44D3AD62FE6B(::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a1, ::RPG::GameCore::TurnBasedAbilityComponent* a2, ::RPG::GameCore::ElationCharacterUIConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::ElationCharacterUIConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359_METHOD_2_E4CE44D3AD62FE6B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_53F44F8C3A33524C(::RPG::Client::NodeListViewPanel_1<::Class_2_9C9B343BAD38C7E4*>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* a2, ::UnityEngine::UI::Text* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NodeListViewPanel_1<::Class_2_9C9B343BAD38C7E4*>*, ::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359_METHOD_2_53F44F8C3A33524C_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_760* Method_2_EAEE709CDB8651A7(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_0_16E4307DCC419505_760*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359_METHOD_2_EAEE709CDB8651A7_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_760* Method_2_73FD5BBE218B4242()
	{
		return ((::Class_0_16E4307DCC419505_760*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359_METHOD_2_73FD5BBE218B4242_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD56C05450EB359___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
