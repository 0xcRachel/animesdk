#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEACTIONCONFIGBASE_METHOD_4_7B0D758A2EA67671_OFFSET UNITYSDK_OFFSET(0x16E05930)
#define RPG_GAMECORE_ROGUEACTIONCONFIGBASE_METHOD_4_F283763E849691C4_OFFSET UNITYSDK_OFFSET(0x16E05770)
#define RPG_GAMECORE_ROGUEACTIONCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E05940)
#define RPG_GAMECORE_ROGUEACTIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF8110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActionConfigBase_TypeDefinitionIndex = 17533;

	class RogueActionConfigBase : public ::RPG::GameCore::PlayerActionConfigBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActionConfigBase*>*>** StaticGet__FromBinary_RogueActionConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActionConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(RogueActionConfigBase_TypeDefinitionIndex)->GetStaticField(0x2B780);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_4_F283763E849691C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONCONFIGBASE_METHOD_4_F283763E849691C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7B0D758A2EA67671(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIONCONFIGBASE_METHOD_4_7B0D758A2EA67671_OFFSET))(a1, a2);
		}
	};
}
