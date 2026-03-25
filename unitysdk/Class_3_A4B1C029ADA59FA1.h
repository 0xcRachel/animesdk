#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define CLASS_3_A4B1C029ADA59FA1_METHOD_3_428CB3C2C99844DC_OFFSET UNITYSDK_OFFSET(0x170E3BB0)
#define CLASS_3_A4B1C029ADA59FA1_METHOD_3_660F257C3D2E4349_OFFSET UNITYSDK_OFFSET(0x170E3B30)
#define CLASS_3_A4B1C029ADA59FA1__CTOR_OFFSET UNITYSDK_OFFSET(0x170E3B80)

inline static constexpr unsigned int Class_3_A4B1C029ADA59FA1_TypeDefinitionIndex = 19642;

class Class_3_A4B1C029ADA59FA1 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x18
	::RPG::GameCore::DynamicString* Field_3_0; // 0x20
	::System::String* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A4B1C029ADA59FA1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_660F257C3D2E4349(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A4B1C029ADA59FA1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A4B1C029ADA59FA1*&))((::PBYTE)hIl2Cpp + CLASS_3_A4B1C029ADA59FA1_METHOD_3_660F257C3D2E4349_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_428CB3C2C99844DC(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A4B1C029ADA59FA1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A4B1C029ADA59FA1*))((::PBYTE)hIl2Cpp + CLASS_3_A4B1C029ADA59FA1_METHOD_3_428CB3C2C99844DC_OFFSET))(a1, a2);
	}
};
