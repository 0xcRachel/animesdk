#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::GameCore { class GridFightTraitBaseConfigRow; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9388140)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__CREATECOMPARER_B__4_0_OFFSET UNITYSDK_OFFSET(0x93881D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9388180)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__GETCURSEASONALLTRAITS_B__58_0_OFFSET UNITYSDK_OFFSET(0x9388560)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__GETCURSEASONALLTRAITS_B__58_1_OFFSET UNITYSDK_OFFSET(0x9388580)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__SORT_B__5_0_OFFSET UNITYSDK_OFFSET(0x93881F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___CTOR_B__2_0_OFFSET UNITYSDK_OFFSET(0x9388190)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___RELEATIVESORT_B__6_4_OFFSET UNITYSDK_OFFSET(0x9388400)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___RELEATIVESORT_B__6_5_OFFSET UNITYSDK_OFFSET(0x9388490)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___RELEATIVESORT_B__6_6_OFFSET UNITYSDK_OFFSET(0x9388520)
#define RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___RELEATIVESORT_B__6_7_OFFSET UNITYSDK_OFFSET(0x9388540)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefFilter___c_TypeDefinitionIndex = 51437;

	class GridFightGameRefFilter___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::GridFightGameRefData*>** StaticGet___9__5_0()
		{
			return (::System::Predicate_1<::RPG::Client::GridFightGameRefData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x45180);
		}
		static ::RPG::Client::GridFightGameRefFilter___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameRefFilter___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x45188);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int64>** StaticGet___9__6_6()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x45190);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int64>** StaticGet___9__6_7()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x45198);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int32>** StaticGet___9__6_4()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x451A0);
		}
		static ::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::AvatarData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x451A8);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::RPG::GameCore::GridFightTraitType>** StaticGet___9__58_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::RPG::GameCore::GridFightTraitType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x451B0);
		}
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int32>** StaticGet___9__6_5()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x451B8);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::RPG::Client::GridFightTraitConfig*>** StaticGet___9__58_1()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightTraitBaseConfigRow*, ::RPG::Client::GridFightTraitConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x451C0);
		}
		static ::System::Func_3<::RPG::Client::GridFightGameRefData*, ::RPG::Client::GridFightGameRefData*, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Func_3<::RPG::Client::GridFightGameRefData*, ::RPG::Client::GridFightGameRefData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefFilter___c_TypeDefinitionIndex)->GetStaticField(0x451C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__2_0(::RPG::Client::GridFightGameRefData* data1, ::RPG::Client::GridFightGameRefData* data2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___CTOR_B__2_0_OFFSET))(this, data1, data2);
		}

		::System::Boolean _CreateComparer_b__4_0(::RPG::Client::AvatarData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AvatarData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__CREATECOMPARER_B__4_0_OFFSET))(this, x);
		}

		::System::Boolean _Sort_b__5_0(::RPG::Client::GridFightGameRefData* refData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__SORT_B__5_0_OFFSET))(this, refData);
		}

		::System::Int32 __ReleativeSort_b__6_4(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___RELEATIVESORT_B__6_4_OFFSET))(this, role);
		}

		::System::Int32 __ReleativeSort_b__6_5(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___RELEATIVESORT_B__6_5_OFFSET))(this, role);
		}

		::System::Int64 __ReleativeSort_b__6_6(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___RELEATIVESORT_B__6_6_OFFSET))(this, role);
		}

		::System::Int64 __ReleativeSort_b__6_7(::RPG::Client::GridFightRole* role)
		{
			return ((::System::Int64(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C___RELEATIVESORT_B__6_7_OFFSET))(this, role);
		}

		::RPG::GameCore::GridFightTraitType _GetCurSeasonAllTraits_b__58_0(::RPG::GameCore::GridFightTraitBaseConfigRow* row)
		{
			return ((::RPG::GameCore::GridFightTraitType(*)(::PVOID, ::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__GETCURSEASONALLTRAITS_B__58_0_OFFSET))(this, row);
		}

		::RPG::Client::GridFightTraitConfig* _GetCurSeasonAllTraits_b__58_1(::RPG::GameCore::GridFightTraitBaseConfigRow* row)
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID, ::RPG::GameCore::GridFightTraitBaseConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFFILTER___C__GETCURSEASONALLTRAITS_B__58_1_OFFSET))(this, row);
		}
	};
}
