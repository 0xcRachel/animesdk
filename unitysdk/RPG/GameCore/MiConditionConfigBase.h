#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MICONDITIONCONFIGBASE_METHOD_2_2EFB46832B07D3B5_OFFSET UNITYSDK_OFFSET(0x16C9BC50)
#define RPG_GAMECORE_MICONDITIONCONFIGBASE_METHOD_2_E535F40F402A1D28_OFFSET UNITYSDK_OFFSET(0x16C9BE10)
#define RPG_GAMECORE_MICONDITIONCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C9BEE0)
#define RPG_GAMECORE_MICONDITIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16C9BED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiConditionConfigBase_TypeDefinitionIndex = 15363;

	class MiConditionConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiConditionConfigBase*>*>** StaticGet__FromBinary_MiConditionConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiConditionConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiConditionConfigBase_TypeDefinitionIndex)->GetStaticField(0x37D90);
		}
		::System::Boolean Inverse; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_2EFB46832B07D3B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiConditionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiConditionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONCONFIGBASE_METHOD_2_2EFB46832B07D3B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_E535F40F402A1D28(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONCONFIGBASE_METHOD_2_E535F40F402A1D28_OFFSET))(a1, a2);
		}
	};
}
