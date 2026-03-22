#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_45;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ROGUEFINISHINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9DE6050)
#define RPG_CLIENT_ROGUEFINISHINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9DE6090)
#define RPG_CLIENT_ROGUEFINISHINFO___C__GET_RECORDAVATARDATAS_B__62_0_OFFSET UNITYSDK_OFFSET(0x9DE60A0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFinishInfo___c_TypeDefinitionIndex = 53614;

	class RogueFinishInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueFinishInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueFinishInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueFinishInfo___c_TypeDefinitionIndex)->GetStaticField(0x45A80);
		}
		static ::System::Comparison_1<::Class_1_352A8B3482C80E7D_45*>** StaticGet___9__62_0()
		{
			return (::System::Comparison_1<::Class_1_352A8B3482C80E7D_45*>**)Il2CppClass::FromTypeDefinitionIndex(RogueFinishInfo___c_TypeDefinitionIndex)->GetStaticField(0x45A88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _get_RecordAvatarDatas_b__62_0(::Class_1_352A8B3482C80E7D_45* x, ::Class_1_352A8B3482C80E7D_45* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_352A8B3482C80E7D_45*, ::Class_1_352A8B3482C80E7D_45*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFINISHINFO___C__GET_RECORDAVATARDATAS_B__62_0_OFFSET))(this, x, y);
		}
	};
}
