#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FACDDA8DA3FDFF6D;
namespace RPG::GameCore { class ItemConfig; }

#define CLASS_1_3F809B0201F51699_METHOD_1_015349EABB69984A_OFFSET UNITYSDK_OFFSET(0xBEF0040)
#define CLASS_1_3F809B0201F51699_METHOD_1_BAA18923E8E1A68B_OFFSET UNITYSDK_OFFSET(0xBEF0390)
#define CLASS_1_3F809B0201F51699__CTOR_OFFSET UNITYSDK_OFFSET(0xBEF0410)

inline static constexpr unsigned int Class_1_3F809B0201F51699_TypeDefinitionIndex = 52233;

class Class_1_3F809B0201F51699 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3F809B0201F51699__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_015349EABB69984A(::Class_1_FACDDA8DA3FDFF6D* a1, ::RPG::GameCore::ItemConfig* a2, ::System::UInt32 a3, ::System::UInt32& a4, ::System::UInt32& a5, ::System::UInt32& a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_FACDDA8DA3FDFF6D*, ::RPG::GameCore::ItemConfig*, ::System::UInt32, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_3F809B0201F51699_METHOD_1_015349EABB69984A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_BAA18923E8E1A68B(::Class_1_FACDDA8DA3FDFF6D* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FACDDA8DA3FDFF6D*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F809B0201F51699_METHOD_1_BAA18923E8E1A68B_OFFSET))(this, a1, a2, a3);
	}
};
