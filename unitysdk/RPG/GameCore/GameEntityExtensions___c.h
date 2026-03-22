#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4237C0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA4237F0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0xA423800)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__83_1_OFFSET UNITYSDK_OFFSET(0xA4238B0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__83_2_OFFSET UNITYSDK_OFFSET(0xA423950)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__83_3_OFFSET UNITYSDK_OFFSET(0xA4239E0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__83_4_OFFSET UNITYSDK_OFFSET(0xA423B40)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__83_5_OFFSET UNITYSDK_OFFSET(0xA423BD0)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__83_6_OFFSET UNITYSDK_OFFSET(0xA423C00)
#define RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__83_7_OFFSET UNITYSDK_OFFSET(0xA423D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntityExtensions___c_TypeDefinitionIndex = 45537;

	class GameEntityExtensions___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::GameEntityExtensions___c** StaticGet___9()
		{
			return (::RPG::GameCore::GameEntityExtensions___c**)Il2CppClass::FromTypeDefinitionIndex(GameEntityExtensions___c_TypeDefinitionIndex)->GetStaticField(0x432D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__83_0(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__83_0_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__83_1(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__83_1_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__83_2(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__83_2_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__83_3(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__83_3_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__83_4(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__83_4_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__83_5(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__83_5_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__83_6(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__83_6_OFFSET))(this, entity);
		}

		::System::Boolean __cctor_b__83_7(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTITYEXTENSIONS___C___CCTOR_B__83_7_OFFSET))(this, entity);
		}
	};
}
