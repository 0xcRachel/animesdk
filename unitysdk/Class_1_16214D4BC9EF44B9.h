#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ItemDisplaySortType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemDisplaySortNewRow; }
namespace RPG::GameCore { class ItemRow; }

#define CLASS_1_16214D4BC9EF44B9_METHOD_1_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0xC54BDE0)
#define CLASS_1_16214D4BC9EF44B9_METHOD_1_DCF228513A926303_OFFSET UNITYSDK_OFFSET(0xC54BE30)
#define CLASS_1_16214D4BC9EF44B9__CTOR_OFFSET UNITYSDK_OFFSET(0xC54BDB0)

inline static constexpr unsigned int Class_1_16214D4BC9EF44B9_TypeDefinitionIndex = 52246;

class Class_1_16214D4BC9EF44B9 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::System::UInt32 Field_1_3; // 0x18
	::RPG::GameCore::ItemDisplaySortType Field_1_2; // 0x1C

	::System::Void _ctor(::RPG::GameCore::ItemDisplaySortNewRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ItemDisplaySortNewRow*))((::PBYTE)hIl2Cpp + CLASS_1_16214D4BC9EF44B9__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_04DE4FBB293DFBD6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16214D4BC9EF44B9_METHOD_1_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}

	::RPG::GameCore::ItemRow* Method_1_DCF228513A926303(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ItemRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16214D4BC9EF44B9_METHOD_1_DCF228513A926303_OFFSET))(this, a1);
	}
};
