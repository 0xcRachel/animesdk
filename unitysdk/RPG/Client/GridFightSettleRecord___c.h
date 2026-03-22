#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_12B8DCC04CBEB49F;
class Class_1_6EBEA8069CDA622C_6;
class Class_1_6EBEA8069CDA622C_7;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x93FC580)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x93FC5C0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_ROLES_B__141_0_OFFSET UNITYSDK_OFFSET(0x93FC630)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__46_0_OFFSET UNITYSDK_OFFSET(0x93FC5D0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__46_1_OFFSET UNITYSDK_OFFSET(0x93FC5F0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__46_2_OFFSET UNITYSDK_OFFSET(0x93FC610)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c_TypeDefinitionIndex = 51814;

	class GridFightSettleRecord___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightSettleRecord___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightSettleRecord___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x8C60);
		}
		static ::System::Func_2<::Class_1_6EBEA8069CDA622C_6*, ::System::Double>** StaticGet___9__46_1()
		{
			return (::System::Func_2<::Class_1_6EBEA8069CDA622C_6*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x8C68);
		}
		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__141_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x8C70);
		}
		static ::System::Func_2<::Class_1_6EBEA8069CDA622C_7*, ::System::Double>** StaticGet___9__46_2()
		{
			return (::System::Func_2<::Class_1_6EBEA8069CDA622C_7*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x8C78);
		}
		static ::System::Func_2<::Class_1_12B8DCC04CBEB49F*, ::System::Double>** StaticGet___9__46_0()
		{
			return (::System::Func_2<::Class_1_12B8DCC04CBEB49F*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(GridFightSettleRecord___c_TypeDefinitionIndex)->GetStaticField(0x8C80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__CTOR_OFFSET))(this);
		}

		::System::Double __SyncDamageStatistics_b__46_0(::Class_1_12B8DCC04CBEB49F* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_12B8DCC04CBEB49F*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__46_0_OFFSET))(this, x);
		}

		::System::Double __SyncDamageStatistics_b__46_1(::Class_1_6EBEA8069CDA622C_6* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__46_1_OFFSET))(this, x);
		}

		::System::Double __SyncDamageStatistics_b__46_2(::Class_1_6EBEA8069CDA622C_7* x)
		{
			return ((::System::Double(*)(::PVOID, ::Class_1_6EBEA8069CDA622C_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__46_2_OFFSET))(this, x);
		}

		::RPG::Client::GridFightRole* _get_Roles_b__141_0(::RPG::Client::GridFightSeasonRole* x)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_ROLES_B__141_0_OFFSET))(this, x);
		}
	};
}
