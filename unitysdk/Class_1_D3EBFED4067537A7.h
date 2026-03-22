#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusTypeMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SaveCharacterStateMask.h"
#include "unitysdk/Struct_2_DF9778AC478FFF27.h"
#include "unitysdk/System/Object.h"

class Class_1_70697F531F566942_1;
class Class_2_1DB6C02CA182EEBA;
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D3EBFED4067537A7_METHOD_1_5F6398776E49CD87_OFFSET UNITYSDK_OFFSET(0x10BC4320)
#define CLASS_1_D3EBFED4067537A7_METHOD_1_712EFB80FE27BB74_OFFSET UNITYSDK_OFFSET(0x10BC2610)
#define CLASS_1_D3EBFED4067537A7_METHOD_1_A2526B2FE5052039_OFFSET UNITYSDK_OFFSET(0x10BC3110)
#define CLASS_1_D3EBFED4067537A7_METHOD_1_CDF6D8B285FA7F49_OFFSET UNITYSDK_OFFSET(0x10BC4270)
#define CLASS_1_D3EBFED4067537A7_METHOD_1_E824431C22EF9361_OFFSET UNITYSDK_OFFSET(0x10BC2FE0)
#define CLASS_1_D3EBFED4067537A7__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC4380)

inline static constexpr unsigned int Class_1_D3EBFED4067537A7_TypeDefinitionIndex = 44783;

class Class_1_D3EBFED4067537A7 : public ::System::Object
{
public:
	::Class_1_70697F531F566942_1* Field_1_10; // 0x10
	::RPG::GameCore::AvatarEnergyBarState* Field_1_9; // 0x18
	::System::String* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_DF9778AC478FFF27>* Field_1_8; // 0x28
	::RPG::GameCore::FixPoint Field_1_3; // 0x30
	::RPG::GameCore::EnumStatusTypeMask Field_1_2; // 0x38
	::System::Int32 Field_1_5; // 0x3C
	::RPG::GameCore::FixPoint Field_1_6; // 0x40
	::System::Int32 Field_1_7; // 0x48
	::RPG::GameCore::SaveCharacterStateMask Field_1_1; // 0x4C
	::RPG::GameCore::FixPoint Field_1_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3EBFED4067537A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_712EFB80FE27BB74(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SaveCharacterStateMask a2, ::RPG::GameCore::EnumStatusTypeMask a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SaveCharacterStateMask, ::RPG::GameCore::EnumStatusTypeMask))((::PBYTE)hIl2Cpp + CLASS_1_D3EBFED4067537A7_METHOD_1_712EFB80FE27BB74_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_E824431C22EF9361()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3EBFED4067537A7_METHOD_1_E824431C22EF9361_OFFSET))(this);
	}

	::System::Void Method_1_A2526B2FE5052039(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D3EBFED4067537A7_METHOD_1_A2526B2FE5052039_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5F6398776E49CD87(::System::Int32& a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D3EBFED4067537A7_METHOD_1_5F6398776E49CD87_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::TurnBasedModifierConfig* Method_1_CDF6D8B285FA7F49(::Class_2_1DB6C02CA182EEBA* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::TurnBasedModifierConfig*(*)(::PVOID, ::Class_2_1DB6C02CA182EEBA*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D3EBFED4067537A7_METHOD_1_CDF6D8B285FA7F49_OFFSET))(this, a1, a2);
	}
};
