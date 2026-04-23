#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class ST_Side_ElfInteractCurrentSlot; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3C263D4961A88F66_METHOD_3_F859CE601F919CF3_OFFSET UNITYSDK_OFFSET(0xC4B4ED0)
#define CLASS_3_3C263D4961A88F66_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC4B49A0)
#define CLASS_3_3C263D4961A88F66_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC4B51E0)
#define CLASS_3_3C263D4961A88F66_TICK_OFFSET UNITYSDK_OFFSET(0xC4B5230)
#define CLASS_3_3C263D4961A88F66__CTOR_OFFSET UNITYSDK_OFFSET(0xC4B4970)
#define CLASS_3_3C263D4961A88F66___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xC4B53E0)

inline static constexpr unsigned int Class_3_3C263D4961A88F66_TypeDefinitionIndex = 48167;

class Class_3_3C263D4961A88F66 : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_ElfInteractCurrentSlot*>
{
public:
	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Field_3_0; // 0x28
	::UnityEngine::Vector3 Field_3_3; // 0x30
	::System::Single Field_3_2; // 0x3C
	::UnityEngine::Quaternion Field_3_5; // 0x40
	::UnityEngine::Quaternion Field_3_6; // 0x50
	::UnityEngine::Vector3 Field_3_4; // 0x60
	::System::Single Field_3_1; // 0x6C

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
