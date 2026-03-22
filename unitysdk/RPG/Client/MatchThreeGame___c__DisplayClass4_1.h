#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_3A7B270FE0BE90AE;
class Class_1_3AD2528CD53B1639_5;

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x965CFD0)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_1__INITPLAYERS_B__2_OFFSET UNITYSDK_OFFSET(0x9664F90)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame___c__DisplayClass4_1_TypeDefinitionIndex = 52428;

	class MatchThreeGame___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::Class_1_3A7B270FE0BE90AE* playerBasicData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _InitPlayers_b__2(::Class_1_3AD2528CD53B1639_5* elem)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_3AD2528CD53B1639_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS4_1__INITPLAYERS_B__2_OFFSET))(this, elem);
		}
	};
}
