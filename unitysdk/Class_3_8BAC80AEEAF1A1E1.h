#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowBattleScreenEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_1798FAFF45053267_OFFSET UNITYSDK_OFFSET(0xF7AA530)
#define CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_6929C20FCC70C1A3_OFFSET UNITYSDK_OFFSET(0xF7AA600)
#define CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0xF7AA350)
#define CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_DCB1C6CDC61D91E8_OFFSET UNITYSDK_OFFSET(0xF7AA3A0)
#define CLASS_3_8BAC80AEEAF1A1E1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF7AA2A0)
#define CLASS_3_8BAC80AEEAF1A1E1__CTOR_OFFSET UNITYSDK_OFFSET(0xF7AA270)

inline static constexpr unsigned int Class_3_8BAC80AEEAF1A1E1_TypeDefinitionIndex = 51269;

class Class_3_8BAC80AEEAF1A1E1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowBattleScreenEffect*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowBattleScreenEffect* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowBattleScreenEffect*))((::PBYTE)hIl2Cpp + CLASS_3_8BAC80AEEAF1A1E1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BAC80AEEAF1A1E1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Boolean Method_3_DCB1C6CDC61D91E8()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_DCB1C6CDC61D91E8_OFFSET))(this);
	}

	::System::String* Method_3_1798FAFF45053267()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_1798FAFF45053267_OFFSET))(this);
	}

	::System::String* Method_3_6929C20FCC70C1A3()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8BAC80AEEAF1A1E1_METHOD_3_6929C20FCC70C1A3_OFFSET))(this);
	}
};
