#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class TraceWithDetectProjectileData; }
namespace UnityEngine { class Collider; }

#define CLASS_2_2FC1A2167197028F_METHOD_2_4D7415801DC140C5_OFFSET UNITYSDK_OFFSET(0xEB76040)
#define CLASS_2_2FC1A2167197028F_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xEB76B80)
#define CLASS_2_2FC1A2167197028F_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xEB76B20)
#define CLASS_2_2FC1A2167197028F_METHOD_2_92B7AB3F53AD7803_OFFSET UNITYSDK_OFFSET(0xEB76180)
#define CLASS_2_2FC1A2167197028F_METHOD_2_E876C8B6D3B840A6_1_OFFSET UNITYSDK_OFFSET(0xEB75ED0)
#define CLASS_2_2FC1A2167197028F_METHOD_2_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0xEB75BC0)
#define CLASS_2_2FC1A2167197028F__CTOR_OFFSET UNITYSDK_OFFSET(0xEB75B60)

inline static constexpr unsigned int Class_2_2FC1A2167197028F_TypeDefinitionIndex = 50524;

class Class_2_2FC1A2167197028F : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::TraceWithDetectProjectileData* Field_2_0; // 0x48
	::UnityEngine::Collider* Field_2_1; // 0x50
	::System::Boolean Field_2_3; // 0x58
	::System::Boolean Field_2_5; // 0x59
	::System::Boolean Field_2_2; // 0x5A
	::System::Int32 Field_2_4; // 0x5C

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_2FC1A2167197028F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FC1A2167197028F_METHOD_2_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_2_E876C8B6D3B840A6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FC1A2167197028F_METHOD_2_E876C8B6D3B840A6_1_OFFSET))(this);
	}

	::System::Void Method_2_4D7415801DC140C5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_2FC1A2167197028F_METHOD_2_4D7415801DC140C5_OFFSET))(this, a1);
	}

	::System::Void Method_2_92B7AB3F53AD7803(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2FC1A2167197028F_METHOD_2_92B7AB3F53AD7803_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FC1A2167197028F_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2FC1A2167197028F_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}
};
