#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_06CA57680E115A32_5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_47673724FF3DE6A7_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10E6B2C0)
#define CLASS_3_47673724FF3DE6A7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10E6B290)

inline static constexpr unsigned int Class_3_47673724FF3DE6A7_1_TypeDefinitionIndex = 46244;

class Class_3_47673724FF3DE6A7_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_06CA57680E115A32_5*>
{
public:
	::Class_3_06CA57680E115A32_5* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_5*))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47673724FF3DE6A7_1_ONTASKBEGIN_OFFSET))(this);
	}
};
