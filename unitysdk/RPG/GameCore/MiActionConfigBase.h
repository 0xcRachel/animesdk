#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MIACTIONCONFIGBASE_METHOD_2_130A794B50D48A4A_OFFSET UNITYSDK_OFFSET(0x16C89A70)
#define RPG_GAMECORE_MIACTIONCONFIGBASE_METHOD_2_F95EEF10A0F485C2_OFFSET UNITYSDK_OFFSET(0x16C89C30)
#define RPG_GAMECORE_MIACTIONCONFIGBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C89CA0)
#define RPG_GAMECORE_MIACTIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16C89C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiActionConfigBase_TypeDefinitionIndex = 15356;

	class MiActionConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiActionConfigBase*>*>** StaticGet__FromBinary_MiActionConfigBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiActionConfigBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(MiActionConfigBase_TypeDefinitionIndex)->GetStaticField(0x37AA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIACTIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIACTIONCONFIGBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_130A794B50D48A4A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiActionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiActionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIACTIONCONFIGBASE_METHOD_2_130A794B50D48A4A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_F95EEF10A0F485C2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiActionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MIACTIONCONFIGBASE_METHOD_2_F95EEF10A0F485C2_OFFSET))(a1, a2);
		}
	};
}
