#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_D9E989B298282E16;
class Class_3_1A6A6EF120955241;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_608A5358D88CD54F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1717EE40)
#define CLASS_3_608A5358D88CD54F_METHOD_3_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1717EEF0)
#define CLASS_3_608A5358D88CD54F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1717EE80)
#define CLASS_3_608A5358D88CD54F__CTOR_OFFSET UNITYSDK_OFFSET(0x1717EDC0)
#define CLASS_3_608A5358D88CD54F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1717EF10)

inline static constexpr unsigned int Class_3_608A5358D88CD54F_TypeDefinitionIndex = 50284;

class Class_3_608A5358D88CD54F : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_1A6A6EF120955241*>
{
public:
	::Class_1_D9E989B298282E16* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_1A6A6EF120955241* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_1A6A6EF120955241*))((::PBYTE)hIl2Cpp + CLASS_3_608A5358D88CD54F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_608A5358D88CD54F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_608A5358D88CD54F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::String* Method_3_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_608A5358D88CD54F_METHOD_3_128774387667156B_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_608A5358D88CD54F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
