#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraSkillScreenEffectType.h"

class Class_2_DB9CAAB5758BEDF0;
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define CLASS_2_042DB77B5DB52C69_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB573420)
#define CLASS_2_042DB77B5DB52C69_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB5734C0)
#define CLASS_2_042DB77B5DB52C69_METHOD_2_C1C0CB2C8B6124DE_OFFSET UNITYSDK_OFFSET(0xB573350)
#define CLASS_2_042DB77B5DB52C69_METHOD_2_F99637186C2C7806_OFFSET UNITYSDK_OFFSET(0xB5732A0)
#define CLASS_2_042DB77B5DB52C69_METHOD_2_FB0CC4A7FCE4A5BA_OFFSET UNITYSDK_OFFSET(0xB5731B0)
#define CLASS_2_042DB77B5DB52C69__CTOR_OFFSET UNITYSDK_OFFSET(0xB573540)
#define CLASS_2_042DB77B5DB52C69__ONBIND_OFFSET UNITYSDK_OFFSET(0xB573140)
#define CLASS_2_042DB77B5DB52C69___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB573610)
#define CLASS_2_042DB77B5DB52C69___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB573670)
#define CLASS_2_042DB77B5DB52C69___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xB5735B0)

inline static constexpr unsigned int Class_2_042DB77B5DB52C69_TypeDefinitionIndex = 66178;

class Class_2_042DB77B5DB52C69 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::Animator* Field_2_1; // 0x60
	::Class_2_DB9CAAB5758BEDF0* Field_2_2; // 0x68
	::System::Int32 Field_2_4; // 0x70
	::System::Int32 Field_2_3; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_042DB77B5DB52C69__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_042DB77B5DB52C69__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_FB0CC4A7FCE4A5BA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_042DB77B5DB52C69_METHOD_2_FB0CC4A7FCE4A5BA_OFFSET))(this, a1);
	}

	::System::Void Method_2_F99637186C2C7806(::RPG::GameCore::SilverWolf999UltraSkillScreenEffectType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SilverWolf999UltraSkillScreenEffectType))((::PBYTE)hIl2Cpp + CLASS_2_042DB77B5DB52C69_METHOD_2_F99637186C2C7806_OFFSET))(this, a1);
	}

	::System::Void Method_2_C1C0CB2C8B6124DE(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_042DB77B5DB52C69_METHOD_2_C1C0CB2C8B6124DE_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_042DB77B5DB52C69_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_042DB77B5DB52C69_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_042DB77B5DB52C69___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_042DB77B5DB52C69___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_042DB77B5DB52C69___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
