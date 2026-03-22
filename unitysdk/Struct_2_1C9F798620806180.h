#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }

#define STRUCT_2_1C9F798620806180_METHOD_2_61A8029CA1C2BC8B_OFFSET UNITYSDK_OFFSET(0x74B50)
#define STRUCT_2_1C9F798620806180_METHOD_2_89AE3FDE25BEC3FA_OFFSET UNITYSDK_OFFSET(0x74B00)
#define STRUCT_2_1C9F798620806180_METHOD_2_BF4DF35A49B0985C_OFFSET UNITYSDK_OFFSET(0x74AF0)
#define STRUCT_2_1C9F798620806180_METHOD_2_EED3A6C909CC0101_OFFSET UNITYSDK_OFFSET(0x74AE0)
#define STRUCT_2_1C9F798620806180_METHOD_2_FD27E7A37C791203_OFFSET UNITYSDK_OFFSET(0x74AD0)

inline static constexpr unsigned int Struct_2_1C9F798620806180_TypeDefinitionIndex = 46636;

struct alignas(8) Struct_2_1C9F798620806180
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::RPG::GameCore::GameEntity* Field_2_1; // 0x18
	::RPG::GameCore::GameEntity* Field_2_2; // 0x20
	::RPG::GameCore::GameEntity* Field_2_3; // 0x28
	::System::Int32 Field_2_4; // 0x30

	::System::Void Method_2_FD27E7A37C791203(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_1C9F798620806180_METHOD_2_FD27E7A37C791203_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_EED3A6C909CC0101(::RPG::GameCore::GameEntityList* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + STRUCT_2_1C9F798620806180_METHOD_2_EED3A6C909CC0101_OFFSET))(this, a1);
	}

	::System::Void Method_2_BF4DF35A49B0985C(::RPG::GameCore::GameEntityList* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_1C9F798620806180_METHOD_2_BF4DF35A49B0985C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_89AE3FDE25BEC3FA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_1C9F798620806180_METHOD_2_89AE3FDE25BEC3FA_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_2_61A8029CA1C2BC8B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_1C9F798620806180_METHOD_2_61A8029CA1C2BC8B_OFFSET))(this, a1);
	}
};
