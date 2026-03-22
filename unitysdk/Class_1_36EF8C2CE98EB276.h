#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_828;
namespace RPG::Client { class UIController; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_36EF8C2CE98EB276__CTOR_OFFSET UNITYSDK_OFFSET(0x110F0130)

inline static constexpr unsigned int Class_1_36EF8C2CE98EB276_TypeDefinitionIndex = 58277;

class Class_1_36EF8C2CE98EB276 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_828* Field_1_5; // 0x10
	::RPG::Client::UIController* Field_1_2; // 0x18
	::RPG::Client::UIController* Field_1_4; // 0x20
	::RPG::Client::UIController* Field_1_3; // 0x28
	::System::Action_1<::Class_1_36EF8C2CE98EB276*>* Field_1_6; // 0x30
	::System::Boolean Field_1_1; // 0x38
	::System::Boolean Field_1_0; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36EF8C2CE98EB276__CTOR_OFFSET))(this);
	}
};
