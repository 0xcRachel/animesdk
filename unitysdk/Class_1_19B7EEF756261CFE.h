#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_347;
class Class_0_16E4307DCC419505_387;
class Class_0_16E4307DCC419505_431;
class Class_1_19B7EEF756261CFE_Class_1_22B659AB4566E9C0;
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EntityManager; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class InfiniteBattleData; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_19B7EEF756261CFE_METHOD_1_15DD4655203DF8CF_OFFSET UNITYSDK_OFFSET(0x871BFC0)
#define CLASS_1_19B7EEF756261CFE_METHOD_1_17A64793383BA419_OFFSET UNITYSDK_OFFSET(0x871B360)
#define CLASS_1_19B7EEF756261CFE_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x871AD90)
#define CLASS_1_19B7EEF756261CFE_METHOD_1_482585695B0D7680_OFFSET UNITYSDK_OFFSET(0x871C0F0)
#define CLASS_1_19B7EEF756261CFE_METHOD_1_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0x871BDD0)
#define CLASS_1_19B7EEF756261CFE_METHOD_1_A95DC8FB0A8EEF19_OFFSET UNITYSDK_OFFSET(0x871B270)
#define CLASS_1_19B7EEF756261CFE_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x871B080)
#define CLASS_1_19B7EEF756261CFE_METHOD_1_B71ED647792518B0_OFFSET UNITYSDK_OFFSET(0x871B9E0)
#define CLASS_1_19B7EEF756261CFE_METHOD_1_C9410670454663FB_OFFSET UNITYSDK_OFFSET(0x871C290)
#define CLASS_1_19B7EEF756261CFE_METHOD_1_E21AC6EE08DC160A_OFFSET UNITYSDK_OFFSET(0x871B100)
#define CLASS_1_19B7EEF756261CFE__CTOR_OFFSET UNITYSDK_OFFSET(0x871ABF0)

inline static constexpr unsigned int Class_1_19B7EEF756261CFE_TypeDefinitionIndex = 45369;

class Class_1_19B7EEF756261CFE : public ::System::Object
{
public:
	::RPG::GameCore::EntityManager* Field_1_2; // 0x10
	::RPG::GameCore::EventManager* Field_1_1; // 0x18
	::RPG::GameCore::InfiniteBattleData* Field_1_3; // 0x20
	::Class_1_19B7EEF756261CFE_Class_1_22B659AB4566E9C0* Field_1_4; // 0x28
	::System::Action_1<::Class_0_16E4307DCC419505_387*>* Field_1_5; // 0x30
	::System::Boolean Field_1_0; // 0x38

	::System::Void _ctor(::RPG::GameCore::BattleInstance* a1, ::Class_0_16E4307DCC419505_431* a2, ::System::Action_1<::Class_0_16E4307DCC419505_387*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleInstance*, ::Class_0_16E4307DCC419505_431*, ::System::Action_1<::Class_0_16E4307DCC419505_387*>*))((::PBYTE)hIl2Cpp + CLASS_1_19B7EEF756261CFE__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19B7EEF756261CFE_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_1_E21AC6EE08DC160A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19B7EEF756261CFE_METHOD_1_E21AC6EE08DC160A_OFFSET))(this);
	}

	::System::Void Method_1_A95DC8FB0A8EEF19(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_1_19B7EEF756261CFE_METHOD_1_A95DC8FB0A8EEF19_OFFSET))(this, a1);
	}

	::System::Void Method_1_B71ED647792518B0(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_1_19B7EEF756261CFE_METHOD_1_B71ED647792518B0_OFFSET))(this, a1);
	}

	::System::Void Method_1_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_1_19B7EEF756261CFE_METHOD_1_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19B7EEF756261CFE_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Boolean Method_1_17A64793383BA419(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_19B7EEF756261CFE_METHOD_1_17A64793383BA419_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_15DD4655203DF8CF()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19B7EEF756261CFE_METHOD_1_15DD4655203DF8CF_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_482585695B0D7680()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19B7EEF756261CFE_METHOD_1_482585695B0D7680_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_C9410670454663FB()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_19B7EEF756261CFE_METHOD_1_C9410670454663FB_OFFSET))(this);
	}
};
