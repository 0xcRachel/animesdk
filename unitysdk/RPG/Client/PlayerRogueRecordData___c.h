#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_45;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PLAYERROGUERECORDDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B282D0)
#define RPG_CLIENT_PLAYERROGUERECORDDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B28310)
#define RPG_CLIENT_PLAYERROGUERECORDDATA___C___INITRECORDAVATARS_B__9_0_OFFSET UNITYSDK_OFFSET(0x9B28320)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerRogueRecordData___c_TypeDefinitionIndex = 51062;

	class PlayerRogueRecordData___c : public ::System::Object
	{
	public:
		static ::RPG::Client::PlayerRogueRecordData___c** StaticGet___9()
		{
			return (::RPG::Client::PlayerRogueRecordData___c**)Il2CppClass::FromTypeDefinitionIndex(PlayerRogueRecordData___c_TypeDefinitionIndex)->GetStaticField(0x467D0);
		}
		static ::System::Comparison_1<::Class_1_352A8B3482C80E7D_45*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::Class_1_352A8B3482C80E7D_45*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerRogueRecordData___c_TypeDefinitionIndex)->GetStaticField(0x467D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __InitRecordAvatars_b__9_0(::Class_1_352A8B3482C80E7D_45* x, ::Class_1_352A8B3482C80E7D_45* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_352A8B3482C80E7D_45*, ::Class_1_352A8B3482C80E7D_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA___C___INITRECORDAVATARS_B__9_0_OFFSET))(this, x, y);
		}
	};
}
