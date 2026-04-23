#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FloorSavedValueOverride; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TriggerPerformanceMask; }

#define CLASS_4_238F6B61DA4B8F1E_METHOD_4_965E093F3E1404F4_OFFSET UNITYSDK_OFFSET(0x1809C760)
#define CLASS_4_238F6B61DA4B8F1E_METHOD_4_F15654ABB049A0FA_OFFSET UNITYSDK_OFFSET(0x1809C840)
#define CLASS_4_238F6B61DA4B8F1E__CTOR_OFFSET UNITYSDK_OFFSET(0x1809C7E0)

inline static constexpr unsigned int Class_4_238F6B61DA4B8F1E_TypeDefinitionIndex = 19243;

class Class_4_238F6B61DA4B8F1E : public ::RPG::GameCore::AdvWaitingEventBase
{
public:
	::Il2CppArray<::RPG::GameCore::FloorSavedValueOverride*>* Field_4_6; // 0x20
	::RPG::GameCore::TriggerPerformanceMask* Field_4_5; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_4_7; // 0x30
	::System::UInt32 Field_4_1; // 0x38
	::System::UInt32 Field_4_4; // 0x3C
	::RPG::GameCore::ELevelPerformanceType Field_4_3; // 0x40
	::System::UInt32 Field_4_2; // 0x44
	::System::UInt32 Field_4_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_238F6B61DA4B8F1E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_965E093F3E1404F4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_238F6B61DA4B8F1E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_238F6B61DA4B8F1E*&))((::PBYTE)hIl2Cpp + CLASS_4_238F6B61DA4B8F1E_METHOD_4_965E093F3E1404F4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F15654ABB049A0FA(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_238F6B61DA4B8F1E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_238F6B61DA4B8F1E*))((::PBYTE)hIl2Cpp + CLASS_4_238F6B61DA4B8F1E_METHOD_4_F15654ABB049A0FA_OFFSET))(a1, a2);
	}
};
