#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE_METHOD_3_A4AE3FCCEC35580A_OFFSET UNITYSDK_OFFSET(0x16C51980)
#define RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE_METHOD_3_AFF4B2B41CA5E921_OFFSET UNITYSDK_OFFSET(0x16C51B00)
#define RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C51B60)
#define RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x16C4F040)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int Match3ActionBase_TypeDefinitionIndex = 22161;

	class Match3ActionBase : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3ActionBase*>*>** StaticGet__FromBinary_RPG_GameCore_Match3_Match3ActionBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3ActionBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(Match3ActionBase_TypeDefinitionIndex)->GetStaticField(0x36820);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_3_A4AE3FCCEC35580A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3ActionBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3ActionBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE_METHOD_3_A4AE3FCCEC35580A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AFF4B2B41CA5E921(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Match3::Match3ActionBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Match3::Match3ActionBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3ACTIONBASE_METHOD_3_AFF4B2B41CA5E921_OFFSET))(a1, a2);
		}
	};
}
