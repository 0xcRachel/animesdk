#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitRemarkLineEffectBase; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x94281D0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9428210)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C___GETSHOWINGLINEPARSERS_B__3_0_OFFSET UNITYSDK_OFFSET(0x9428220)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C___GETSHOWINGLINEPARSERS_B__3_1_OFFSET UNITYSDK_OFFSET(0x9428250)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C___GETSHOWINGLINEPARSERS_B__3_2_OFFSET UNITYSDK_OFFSET(0x9428280)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C___GETSHOWINGLINEPARSERS_B__3_3_OFFSET UNITYSDK_OFFSET(0x94282B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkParser___c_TypeDefinitionIndex = 52021;

	class GridFightTraitRemarkParser___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightTraitRemarkLineEffectBase*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitRemarkLineEffectBase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitRemarkParser___c_TypeDefinitionIndex)->GetStaticField(0x9CD0);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitRemarkLineEffectBase*, ::System::Boolean>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitRemarkLineEffectBase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitRemarkParser___c_TypeDefinitionIndex)->GetStaticField(0x9CD8);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitRemarkLineEffectBase*, ::System::UInt32>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitRemarkLineEffectBase*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitRemarkParser___c_TypeDefinitionIndex)->GetStaticField(0x9CE0);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitRemarkLineEffectBase*, ::System::UInt32>** StaticGet___9__3_3()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitRemarkLineEffectBase*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitRemarkParser___c_TypeDefinitionIndex)->GetStaticField(0x9CE8);
		}
		static ::RPG::Client::GridFightTraitRemarkParser___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTraitRemarkParser___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitRemarkParser___c_TypeDefinitionIndex)->GetStaticField(0x9CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetShowingLineParsers_b__3_0(::RPG::Client::GridFightTraitRemarkLineEffectBase* parser)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitRemarkLineEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C___GETSHOWINGLINEPARSERS_B__3_0_OFFSET))(this, parser);
		}

		::System::UInt32 __GetShowingLineParsers_b__3_1(::RPG::Client::GridFightTraitRemarkLineEffectBase* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTraitRemarkLineEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C___GETSHOWINGLINEPARSERS_B__3_1_OFFSET))(this, x);
		}

		::System::Boolean __GetShowingLineParsers_b__3_2(::RPG::Client::GridFightTraitRemarkLineEffectBase* parser)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitRemarkLineEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C___GETSHOWINGLINEPARSERS_B__3_2_OFFSET))(this, parser);
		}

		::System::UInt32 __GetShowingLineParsers_b__3_3(::RPG::Client::GridFightTraitRemarkLineEffectBase* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTraitRemarkLineEffectBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKPARSER___C___GETSHOWINGLINEPARSERS_B__3_3_OFFSET))(this, x);
		}
	};
}
