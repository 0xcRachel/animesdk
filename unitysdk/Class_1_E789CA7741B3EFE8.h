#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChessAnimStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_B229BC73065D28E3_1;
class Class_1_E656914D5137BD7B;
class Class_2_13661480B6BE936D;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E789CA7741B3EFE8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x109FF900)
#define CLASS_1_E789CA7741B3EFE8_METHOD_1_193224924042070B_OFFSET UNITYSDK_OFFSET(0x109FF9F0)
#define CLASS_1_E789CA7741B3EFE8_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x109FFAD0)
#define CLASS_1_E789CA7741B3EFE8__CTOR_OFFSET UNITYSDK_OFFSET(0x109FF860)

inline static constexpr unsigned int Class_1_E789CA7741B3EFE8_TypeDefinitionIndex = 44156;

class Class_1_E789CA7741B3EFE8 : public ::System::Object
{
public:
	::Class_2_13661480B6BE936D* Field_1_1; // 0x10
	::Il2CppArray<::Class_1_E656914D5137BD7B*>* Field_1_2; // 0x18
	::Class_1_E656914D5137BD7B* Field_1_3; // 0x20
	::RPG::GameCore::GameEntity* Field_1_0; // 0x28

	::System::Void _ctor(::Class_2_13661480B6BE936D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_13661480B6BE936D*))((::PBYTE)hIl2Cpp + CLASS_1_E789CA7741B3EFE8__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E789CA7741B3EFE8_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_193224924042070B(::RPG::GameCore::ChessAnimStateType a1, ::Class_1_B229BC73065D28E3_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChessAnimStateType, ::Class_1_B229BC73065D28E3_1*))((::PBYTE)hIl2Cpp + CLASS_1_E789CA7741B3EFE8_METHOD_1_193224924042070B_OFFSET))(this, a1, a2);
	}

	::Class_1_E656914D5137BD7B* Method_1_24748FC20F375725()
	{
		return ((::Class_1_E656914D5137BD7B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E789CA7741B3EFE8_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
