#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19934B00)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19934B40)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBattleWindow___c_TypeDefinitionIndex = 73561;

	class PixAirBattleWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PixAir::PixAirBattleWindow___c** StaticGet___9()
		{
			return (::RPG::Client::PixAir::PixAirBattleWindow___c**)Il2CppClass::FromTypeDefinitionIndex(PixAirBattleWindow___c_TypeDefinitionIndex)->GetStaticField(0x6510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
