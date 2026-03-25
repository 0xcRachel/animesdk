#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B;
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightGameRefTrait; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x983F8E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x983F920)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET UNITYSDK_OFFSET(0x983F930)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__124_0_OFFSET UNITYSDK_OFFSET(0x983F950)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__124_1_OFFSET UNITYSDK_OFFSET(0x983F960)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__126_0_OFFSET UNITYSDK_OFFSET(0x983FA10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__126_1_OFFSET UNITYSDK_OFFSET(0x983FA20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_EMBLEMEQUIPS_B__128_0_OFFSET UNITYSDK_OFFSET(0x983FAD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_HASEMBLEM_B__155_0_OFFSET UNITYSDK_OFFSET(0x983FAF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDROLES_B__179_1_OFFSET UNITYSDK_OFFSET(0x983FCD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__180_1_OFFSET UNITYSDK_OFFSET(0x983FD30)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__181_0_OFFSET UNITYSDK_OFFSET(0x983FF80)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_0_OFFSET UNITYSDK_OFFSET(0x98402C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_10_OFFSET UNITYSDK_OFFSET(0x9840910)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_11_OFFSET UNITYSDK_OFFSET(0x98409F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_12_OFFSET UNITYSDK_OFFSET(0x9840AD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_13_OFFSET UNITYSDK_OFFSET(0x9840BB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_14_OFFSET UNITYSDK_OFFSET(0x9840C20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_15_OFFSET UNITYSDK_OFFSET(0x9840C90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_16_OFFSET UNITYSDK_OFFSET(0x9840D70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_17_OFFSET UNITYSDK_OFFSET(0x9840E60)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_18_OFFSET UNITYSDK_OFFSET(0x9840F40)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_19_OFFSET UNITYSDK_OFFSET(0x9841020)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_1_OFFSET UNITYSDK_OFFSET(0x9840330)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_2_OFFSET UNITYSDK_OFFSET(0x98403A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_3_OFFSET UNITYSDK_OFFSET(0x9840410)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_4_OFFSET UNITYSDK_OFFSET(0x98404B0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_5_OFFSET UNITYSDK_OFFSET(0x9840520)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_6_OFFSET UNITYSDK_OFFSET(0x9840600)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_7_OFFSET UNITYSDK_OFFSET(0x98406E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_8_OFFSET UNITYSDK_OFFSET(0x9840750)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_9_OFFSET UNITYSDK_OFFSET(0x9840830)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__164_0_OFFSET UNITYSDK_OFFSET(0x983FB10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__164_1_OFFSET UNITYSDK_OFFSET(0x983FBB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_0_OFFSET UNITYSDK_OFFSET(0x983FFC0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_1_OFFSET UNITYSDK_OFFSET(0x983FFD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_2_OFFSET UNITYSDK_OFFSET(0x9840080)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_3_OFFSET UNITYSDK_OFFSET(0x9840090)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_4_OFFSET UNITYSDK_OFFSET(0x9840140)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_5_OFFSET UNITYSDK_OFFSET(0x9840150)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_6_OFFSET UNITYSDK_OFFSET(0x9840200)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_7_OFFSET UNITYSDK_OFFSET(0x9840210)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___ISTRAITEXPIRED_B__168_0_OFFSET UNITYSDK_OFFSET(0x983FC50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATEEXPIREDTRAITLAYER_B__169_0_OFFSET UNITYSDK_OFFSET(0x983FC70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATETRAITLAYER_B__170_0_OFFSET UNITYSDK_OFFSET(0x983FCA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c_TypeDefinitionIndex = 52542;

	class GridFightGameRefData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__169_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E840);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__126_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E848);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::UInt32>** StaticGet___9__168_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E850);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__182_4()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E858);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E860);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__126_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E868);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__182_5()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E870);
		}
		static ::System::Comparison_1<::RPG::Client::GridFightRole*>** StaticGet___9__179_1()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E878);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__182_2()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E880);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__124_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E888);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__182_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E890);
		}
		static ::RPG::Client::GridFightGameRefData___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameRefData___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E898);
		}
		static ::System::Func_2<::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B*, ::System::Boolean>** StaticGet___9__164_1()
		{
			return (::System::Func_2<::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E8A0);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__182_6()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E8A8);
		}
		static ::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>** StaticGet___9__180_1()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E8B0);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__182_3()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E8B8);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__182_7()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E8C0);
		}
		static ::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>** StaticGet___9__181_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E8C8);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__124_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E8D0);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__128_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E8D8);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__182_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E8E0);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__170_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E8E8);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__155_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E8F0);
		}
		static ::System::Func_2<::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B*, ::System::Boolean>** StaticGet___9__164_0()
		{
			return (::System::Func_2<::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x1E8F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_ActivatedTraits_b__9_0(::RPG::Client::GridFightGameRefTrait* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET))(this, x);
		}

		::System::Boolean _get_BasicEquips_b__124_0(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__124_0_OFFSET))(this, id);
		}

		::RPG::Client::GridFightEquipItemData* _get_BasicEquips_b__124_1(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__124_1_OFFSET))(this, id);
		}

		::System::Boolean _get_CoreEquips_b__126_0(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__126_0_OFFSET))(this, id);
		}

		::RPG::Client::GridFightEquipItemData* _get_CoreEquips_b__126_1(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__126_1_OFFSET))(this, id);
		}

		::System::Boolean _get_EmblemEquips_b__128_0(::RPG::Client::GridFightEquipItemConfig* equip)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_EMBLEMEQUIPS_B__128_0_OFFSET))(this, equip);
		}

		::System::Boolean _get_HasEmblem_b__155_0(::RPG::Client::GridFightEquipItemConfig* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_HASEMBLEM_B__155_0_OFFSET))(this, x);
		}

		::System::Boolean __CheckIsExpert_b__164_0(::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__164_0_OFFSET))(this, x);
		}

		::System::Boolean __CheckIsExpert_b__164_1(::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F22B920916A3710A_Class_1_3E75962FCD9FB58B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__164_1_OFFSET))(this, x);
		}

		::System::UInt32 __IsTraitExpired_b__168_0(::RPG::Client::GridFightGameRefTrait* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightGameRefTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___ISTRAITEXPIRED_B__168_0_OFFSET))(this, x);
		}

		::RPG::Client::GridFightEquipItemConfig* __UpdateExpiredTraitLayer_b__169_0(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATEEXPIREDTRAITLAYER_B__169_0_OFFSET))(this, x);
		}

		::RPG::Client::GridFightEquipItemConfig* __UpdateTraitLayer_b__170_0(::System::UInt32 x)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATETRAITLAYER_B__170_0_OFFSET))(this, x);
		}

		::System::Int32 __BuildRoles_b__179_1(::RPG::Client::GridFightRole* role1, ::RPG::Client::GridFightRole* role2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightRole*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDROLES_B__179_1_OFFSET))(this, role1, role2);
		}

		::System::Int32 __BuildSeasonRoles_b__180_1(::RPG::Client::GridFightSeasonRole* role1, ::RPG::Client::GridFightSeasonRole* role2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__180_1_OFFSET))(this, role1, role2);
		}

		::System::Int32 __BuildSeasonRoles_b__181_0(::RPG::Client::GridFightSeasonRole* role1, ::RPG::Client::GridFightSeasonRole* role2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__181_0_OFFSET))(this, role1, role2);
		}

		::System::Boolean __GetRecommends_b__182_0(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_0_OFFSET))(this, id);
		}

		::RPG::Client::GridFightEquipItemData* __GetRecommends_b__182_1(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_1_OFFSET))(this, id);
		}

		::System::Boolean __GetRecommends_b__182_2(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_2_OFFSET))(this, id);
		}

		::RPG::Client::GridFightEquipItemData* __GetRecommends_b__182_3(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_3_OFFSET))(this, id);
		}

		::System::Boolean __GetRecommends_b__182_4(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_4_OFFSET))(this, id);
		}

		::RPG::Client::GridFightEquipItemData* __GetRecommends_b__182_5(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_5_OFFSET))(this, id);
		}

		::System::Boolean __GetRecommends_b__182_6(::System::UInt32 id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_6_OFFSET))(this, id);
		}

		::RPG::Client::GridFightEquipItemData* __GetRecommends_b__182_7(::System::UInt32 id)
		{
			return ((::RPG::Client::GridFightEquipItemData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_7_OFFSET))(this, id);
		}

		::System::Void __cctor_b__191_0(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_0_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_1(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_1_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_2(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_2_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_3(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_3_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_4(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_4_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_5(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_5_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_6(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_6_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_7(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_7_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_8(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_8_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_9(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_9_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_10(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_10_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_11(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_11_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_12(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_12_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_13(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_13_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_14(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_14_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_15(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_15_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_16(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_16_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_17(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_17_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_18(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_18_OFFSET))(this, refData, serializer, reader);
		}

		::System::Void __cctor_b__191_19(::RPG::Client::GridFightGameRefData* refData, ::Newtonsoft::Json::JsonSerializer* serializer, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameRefData*, ::Newtonsoft::Json::JsonSerializer*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_19_OFFSET))(this, refData, serializer, reader);
		}
	};
}
