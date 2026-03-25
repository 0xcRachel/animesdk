#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChessAbilityConfig; }
namespace RPG::GameCore { class ChessModifierConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3820E78609AB7DCF_METHOD_1_0653F10CBA1DED7C_OFFSET UNITYSDK_OFFSET(0x108D72D0)
#define CLASS_1_3820E78609AB7DCF_METHOD_1_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x108D6FB0)
#define CLASS_1_3820E78609AB7DCF_METHOD_1_3DFCA4C89D58D97F_OFFSET UNITYSDK_OFFSET(0x108D6CB0)
#define CLASS_1_3820E78609AB7DCF_METHOD_1_D5AC075C8F70B681_OFFSET UNITYSDK_OFFSET(0x108D7410)
#define CLASS_1_3820E78609AB7DCF_METHOD_1_DB1AA8D3E82418E2_OFFSET UNITYSDK_OFFSET(0x108D7100)
#define CLASS_1_3820E78609AB7DCF_METHOD_1_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x108D6BE0)
#define CLASS_1_3820E78609AB7DCF__CCTOR_OFFSET UNITYSDK_OFFSET(0x108D7550)

inline static constexpr unsigned int Class_1_3820E78609AB7DCF_TypeDefinitionIndex = 45426;

class Class_1_3820E78609AB7DCF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ChessAbilityConfig*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ChessAbilityConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3820E78609AB7DCF_TypeDefinitionIndex)->GetStaticField(0x28C80);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ChessModifierConfig*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ChessModifierConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3820E78609AB7DCF_TypeDefinitionIndex)->GetStaticField(0x28C88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3820E78609AB7DCF__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_F5447CD65612575D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3820E78609AB7DCF_METHOD_1_F5447CD65612575D_OFFSET))();
	}

	static ::System::Void Method_1_0868EF727040C390()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3820E78609AB7DCF_METHOD_1_0868EF727040C390_OFFSET))();
	}

	static ::System::Void Method_1_3DFCA4C89D58D97F(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3820E78609AB7DCF_METHOD_1_3DFCA4C89D58D97F_OFFSET))(a1);
	}

	static ::System::Void Method_1_DB1AA8D3E82418E2(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ChessModifierConfig*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ChessModifierConfig*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3820E78609AB7DCF_METHOD_1_DB1AA8D3E82418E2_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::ChessAbilityConfig* Method_1_0653F10CBA1DED7C(::System::String* a1)
	{
		return ((::RPG::GameCore::ChessAbilityConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3820E78609AB7DCF_METHOD_1_0653F10CBA1DED7C_OFFSET))(a1);
	}

	static ::RPG::GameCore::ChessModifierConfig* Method_1_D5AC075C8F70B681(::System::String* a1)
	{
		return ((::RPG::GameCore::ChessModifierConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3820E78609AB7DCF_METHOD_1_D5AC075C8F70B681_OFFSET))(a1);
	}
};
