#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLAYERCONDCONFIGBASE_METHOD_3_821F0B474D3DEA6D_OFFSET UNITYSDK_OFFSET(0x16D64550)
#define RPG_GAMECORE_PLAYERCONDCONFIGBASE_METHOD_3_EDAECE67CA7E5C28_OFFSET UNITYSDK_OFFSET(0x16D64390)
#define RPG_GAMECORE_PLAYERCONDCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D645B0)
#define RPG_GAMECORE_PLAYERCONDCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D64560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerCondConfigBase_TypeDefinitionIndex = 17513;

	class PlayerCondConfigBase : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondConfigBase*>*>** StaticGet__FromBinary_PlayerCondConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerCondConfigBase_TypeDefinitionIndex)->GetStaticField(0x256F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_3_EDAECE67CA7E5C28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDCONFIGBASE_METHOD_3_EDAECE67CA7E5C28_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_821F0B474D3DEA6D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDCONFIGBASE_METHOD_3_821F0B474D3DEA6D_OFFSET))(a1, a2);
		}
	};
}
