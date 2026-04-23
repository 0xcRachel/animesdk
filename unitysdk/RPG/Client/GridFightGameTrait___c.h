#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class GridFightTrait; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1754BF60)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1754BFA0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__GETALLTRAITCANEFFECTSLOT_B__15_0_OFFSET UNITYSDK_OFFSET(0x1754BFD0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__GETTRAITS_B__14_0_OFFSET UNITYSDK_OFFSET(0x1754BFB0)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__ISSHOWSPECIALFRONTBACKTYPETRAIT_B__22_0_OFFSET UNITYSDK_OFFSET(0x1754C020)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait___c_TypeDefinitionIndex = 60216;

	class GridFightGameTrait___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightGameTrait___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameTrait___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameTrait___c_TypeDefinitionIndex)->GetStaticField(0x28270);
		}
		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameTrait___c_TypeDefinitionIndex)->GetStaticField(0x28278);
		}
		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameTrait___c_TypeDefinitionIndex)->GetStaticField(0x28280);
		}
		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameTrait___c_TypeDefinitionIndex)->GetStaticField(0x28288);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetTraits_b__14_0(::RPG::Client::GridFightTrait* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__GETTRAITS_B__14_0_OFFSET))(this, x);
		}

		::System::Boolean _GetAllTraitCanEffectSlot_b__15_0(::RPG::Client::GridFightTrait* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__GETALLTRAITCANEFFECTSLOT_B__15_0_OFFSET))(this, x);
		}

		::System::Boolean _IsShowSpecialFrontBackTypeTrait_b__22_0(::RPG::Client::GridFightGridMember* member)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__ISSHOWSPECIALFRONTBACKTYPETRAIT_B__22_0_OFFSET))(this, member);
		}
	};
}
