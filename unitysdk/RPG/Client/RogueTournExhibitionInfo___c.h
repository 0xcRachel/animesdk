#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournExhibitionData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9E6E8A0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9E6E8E0)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C__GET_UNLOCKEDEXHIBITIONCOUNT_B__26_0_OFFSET UNITYSDK_OFFSET(0x9E6E8F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournExhibitionInfo___c_TypeDefinitionIndex = 53724;

	class RogueTournExhibitionInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueTournExhibitionData*, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::RPG::Client::RogueTournExhibitionData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournExhibitionInfo___c_TypeDefinitionIndex)->GetStaticField(0xB6C0);
		}
		static ::RPG::Client::RogueTournExhibitionInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournExhibitionInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournExhibitionInfo___c_TypeDefinitionIndex)->GetStaticField(0xB6C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_UnlockedExhibitionCount_b__26_0(::RPG::Client::RogueTournExhibitionData* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournExhibitionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C__GET_UNLOCKEDEXHIBITIONCOUNT_B__26_0_OFFSET))(this, e);
		}
	};
}
