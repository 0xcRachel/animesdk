#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_09ED07420E5BC3AB;
namespace RPG::Client { class UIController; }
namespace RPG::GameCore { class ShowUIPage; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_6F15CF561E3C6426_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x109AEA80)
#define CLASS_2_6F15CF561E3C6426_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x109AEB60)
#define CLASS_2_6F15CF561E3C6426_METHOD_2_08F7DA55E3E70859_OFFSET UNITYSDK_OFFSET(0x109AE8D0)
#define CLASS_2_6F15CF561E3C6426_METHOD_2_25EC451C0EA68F53_OFFSET UNITYSDK_OFFSET(0x109AE6C0)
#define CLASS_2_6F15CF561E3C6426_METHOD_2_6D53CFBC920232CE_OFFSET UNITYSDK_OFFSET(0x109ADE90)
#define CLASS_2_6F15CF561E3C6426_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x109AE9C0)
#define CLASS_2_6F15CF561E3C6426_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x109AE920)
#define CLASS_2_6F15CF561E3C6426_METHOD_2_A856A8EE43F76D14_OFFSET UNITYSDK_OFFSET(0x109AE5A0)
#define CLASS_2_6F15CF561E3C6426_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x109AE880)
#define CLASS_2_6F15CF561E3C6426_METHOD_2_D5E53CEBAE045ABB_OFFSET UNITYSDK_OFFSET(0x109AE740)
#define CLASS_2_6F15CF561E3C6426__CTOR_OFFSET UNITYSDK_OFFSET(0x109AEC10)
#define CLASS_2_6F15CF561E3C6426___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x109AEC40)
#define CLASS_2_6F15CF561E3C6426___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x109AECA0)

inline static constexpr unsigned int Class_2_6F15CF561E3C6426_TypeDefinitionIndex = 57245;

class Class_2_6F15CF561E3C6426 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::Client::UIController* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F15CF561E3C6426__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6D53CFBC920232CE(::Class_1_09ED07420E5BC3AB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_09ED07420E5BC3AB*))((::PBYTE)hIl2Cpp + CLASS_2_6F15CF561E3C6426_METHOD_2_6D53CFBC920232CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_25EC451C0EA68F53()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F15CF561E3C6426_METHOD_2_25EC451C0EA68F53_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*>* Method_2_A856A8EE43F76D14(::RPG::GameCore::ShowUIPage* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*>*(*)(::PVOID, ::RPG::GameCore::ShowUIPage*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_6F15CF561E3C6426_METHOD_2_A856A8EE43F76D14_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>* Method_2_D5E53CEBAE045ABB(::RPG::GameCore::UITextNode* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::RPG::GameCore::UITextNode*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_2_6F15CF561E3C6426_METHOD_2_D5E53CEBAE045ABB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F15CF561E3C6426_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_08F7DA55E3E70859(::UnityEngine::UI::Text* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + CLASS_2_6F15CF561E3C6426_METHOD_2_08F7DA55E3E70859_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6F15CF561E3C6426_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_6F15CF561E3C6426_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F15CF561E3C6426_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F15CF561E3C6426_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F15CF561E3C6426___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6F15CF561E3C6426___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
