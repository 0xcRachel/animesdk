#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Side_ElfInteractCurrentSlot; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3C263D4961A88F66_METHOD_3_F859CE601F919CF3_OFFSET UNITYSDK_OFFSET(0x878C9E0)
#define CLASS_3_3C263D4961A88F66_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x878C490)
#define CLASS_3_3C263D4961A88F66_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x878CCF0)
#define CLASS_3_3C263D4961A88F66_TICK_OFFSET UNITYSDK_OFFSET(0x878CD40)
#define CLASS_3_3C263D4961A88F66__CTOR_OFFSET UNITYSDK_OFFSET(0x878C460)
#define CLASS_3_3C263D4961A88F66___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x878CEF0)

inline static constexpr unsigned int Class_3_3C263D4961A88F66_TypeDefinitionIndex = 41151;

class Class_3_3C263D4961A88F66 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_ElfInteractCurrentSlot*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_0; // 0x28
	::UnityEngine::Vector3 Field_3_4; // 0x30
	::UnityEngine::Vector3 Field_3_3; // 0x3C
	::UnityEngine::Quaternion Field_3_5; // 0x48
	::System::Single Field_3_2; // 0x58
	::System::Single Field_3_1; // 0x5C
	::UnityEngine::Quaternion Field_3_6; // 0x60

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_ElfInteractCurrentSlot*))((::PBYTE)hIl2Cpp + CLASS_3_3C263D4961A88F66__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C263D4961A88F66_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C263D4961A88F66_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3C263D4961A88F66_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_F859CE601F919CF3(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3C263D4961A88F66_METHOD_3_F859CE601F919CF3_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3C263D4961A88F66___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
