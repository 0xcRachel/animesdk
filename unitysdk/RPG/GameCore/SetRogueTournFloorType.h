#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournTitanFloorType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETROGUETOURNFLOORTYPE_METHOD_3_A609EC9E9BC5A48E_OFFSET UNITYSDK_OFFSET(0x16F3C330)
#define RPG_GAMECORE_SETROGUETOURNFLOORTYPE_METHOD_3_C712905A0A8E55DF_OFFSET UNITYSDK_OFFSET(0x16F3C2B0)
#define RPG_GAMECORE_SETROGUETOURNFLOORTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F3C300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetRogueTournFloorType_TypeDefinitionIndex = 20783;

	class SetRogueTournFloorType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::RogueTournTitanFloorType FloorType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUETOURNFLOORTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C712905A0A8E55DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetRogueTournFloorType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetRogueTournFloorType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUETOURNFLOORTYPE_METHOD_3_C712905A0A8E55DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A609EC9E9BC5A48E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetRogueTournFloorType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetRogueTournFloorType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETROGUETOURNFLOORTYPE_METHOD_3_A609EC9E9BC5A48E_OFFSET))(a1, a2);
		}
	};
}
