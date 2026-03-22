#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E9FFD01658A48D5B.h"

namespace RPG::Client { class ActivityModule; }
namespace RPG::Client { class ActivityPanelData; }

#define CLASS_1_E9FFD01658A48D5B_CLASS_2_303B882B5D9BC0A3_METHOD_2_FB464648B8E2B471_OFFSET UNITYSDK_OFFSET(0x10AACB30)
#define CLASS_1_E9FFD01658A48D5B_CLASS_2_303B882B5D9BC0A3__CTOR_OFFSET UNITYSDK_OFFSET(0x10AAC950)

inline static constexpr unsigned int Class_1_E9FFD01658A48D5B_Class_2_303B882B5D9BC0A3_TypeDefinitionIndex = 48926;

class Class_1_E9FFD01658A48D5B_Class_2_303B882B5D9BC0A3 : public ::Class_1_E9FFD01658A48D5B
{
public:
	::System::UInt32 Field_2_0; // 0x18

	::System::Void _ctor(::RPG::Client::ActivityModule* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityModule*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E9FFD01658A48D5B_CLASS_2_303B882B5D9BC0A3__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::ActivityPanelData* Method_2_FB464648B8E2B471()
	{
		return ((::RPG::Client::ActivityPanelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E9FFD01658A48D5B_CLASS_2_303B882B5D9BC0A3_METHOD_2_FB464648B8E2B471_OFFSET))(this);
	}
};
