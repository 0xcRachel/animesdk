#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B;
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

#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9381BA0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9381BE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_ACTIVATEDTRAITS_B__9_0_OFFSET UNITYSDK_OFFSET(0x9381BF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__124_0_OFFSET UNITYSDK_OFFSET(0x9381C10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_BASICEQUIPS_B__124_1_OFFSET UNITYSDK_OFFSET(0x9381C20)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__126_0_OFFSET UNITYSDK_OFFSET(0x9381CD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_COREEQUIPS_B__126_1_OFFSET UNITYSDK_OFFSET(0x9381CE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_EMBLEMEQUIPS_B__128_0_OFFSET UNITYSDK_OFFSET(0x9381D90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C__GET_HASEMBLEM_B__155_0_OFFSET UNITYSDK_OFFSET(0x9381DB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDROLES_B__179_1_OFFSET UNITYSDK_OFFSET(0x9381F90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__180_1_OFFSET UNITYSDK_OFFSET(0x9381FF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___BUILDSEASONROLES_B__181_0_OFFSET UNITYSDK_OFFSET(0x9382240)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_0_OFFSET UNITYSDK_OFFSET(0x9382580)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_10_OFFSET UNITYSDK_OFFSET(0x9382BD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_11_OFFSET UNITYSDK_OFFSET(0x9382CB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_12_OFFSET UNITYSDK_OFFSET(0x9382D90)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_13_OFFSET UNITYSDK_OFFSET(0x9382E70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_14_OFFSET UNITYSDK_OFFSET(0x9382EE0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_15_OFFSET UNITYSDK_OFFSET(0x9382F50)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_16_OFFSET UNITYSDK_OFFSET(0x9383030)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_17_OFFSET UNITYSDK_OFFSET(0x9383120)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_18_OFFSET UNITYSDK_OFFSET(0x9383200)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_19_OFFSET UNITYSDK_OFFSET(0x93832E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_1_OFFSET UNITYSDK_OFFSET(0x93825F0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_2_OFFSET UNITYSDK_OFFSET(0x9382660)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_3_OFFSET UNITYSDK_OFFSET(0x93826D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_4_OFFSET UNITYSDK_OFFSET(0x9382770)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_5_OFFSET UNITYSDK_OFFSET(0x93827E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_6_OFFSET UNITYSDK_OFFSET(0x93828C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_7_OFFSET UNITYSDK_OFFSET(0x93829A0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_8_OFFSET UNITYSDK_OFFSET(0x9382A10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CCTOR_B__191_9_OFFSET UNITYSDK_OFFSET(0x9382AF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__164_0_OFFSET UNITYSDK_OFFSET(0x9381DD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__164_1_OFFSET UNITYSDK_OFFSET(0x9381E70)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_0_OFFSET UNITYSDK_OFFSET(0x9382280)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_1_OFFSET UNITYSDK_OFFSET(0x9382290)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_2_OFFSET UNITYSDK_OFFSET(0x9382340)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_3_OFFSET UNITYSDK_OFFSET(0x9382350)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_4_OFFSET UNITYSDK_OFFSET(0x9382400)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_5_OFFSET UNITYSDK_OFFSET(0x9382410)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_6_OFFSET UNITYSDK_OFFSET(0x93824C0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___GETRECOMMENDS_B__182_7_OFFSET UNITYSDK_OFFSET(0x93824D0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___ISTRAITEXPIRED_B__168_0_OFFSET UNITYSDK_OFFSET(0x9381F10)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATEEXPIREDTRAITLAYER_B__169_0_OFFSET UNITYSDK_OFFSET(0x9381F30)
#define RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___UPDATETRAITLAYER_B__170_0_OFFSET UNITYSDK_OFFSET(0x9381F60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefData___c_TypeDefinitionIndex = 51409;

	class GridFightGameRefData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__182_3()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44F70);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__182_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44F78);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__170_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44F80);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__169_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44F88);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__182_6()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44F90);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__126_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44F98);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__124_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44FA0);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__182_5()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44FA8);
		}
		static ::System::Func_2<::Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B*, ::System::Boolean>** StaticGet___9__164_0()
		{
			return (::System::Func_2<::Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44FB0);
		}
		static ::System::Func_2<::Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B*, ::System::Boolean>** StaticGet___9__164_1()
		{
			return (::System::Func_2<::Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44FB8);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__182_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44FC0);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::UInt32>** StaticGet___9__168_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44FC8);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__155_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44FD0);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__182_7()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44FD8);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>** StaticGet___9__124_1()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemData*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44FE0);
		}
		static ::System::Comparison_1<::RPG::Client::GridFightRole*>** StaticGet___9__179_1()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44FE8);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__182_2()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44FF0);
		}
		static ::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefTrait*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x44FF8);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__182_4()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x45000);
		}
		static ::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>** StaticGet___9__181_0()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x45008);
		}
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__126_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x45010);
		}
		static ::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>** StaticGet___9__180_1()
		{
			return (::System::Comparison_1<::RPG::Client::GridFightSeasonRole*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x45018);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__128_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x45020);
		}
		static ::RPG::Client::GridFightGameRefData___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightGameRefData___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightGameRefData___c_TypeDefinitionIndex)->GetStaticField(0x45028);
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

		::System::Boolean __CheckIsExpert_b__164_0(::Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__164_0_OFFSET))(this, x);
		}

		::System::Boolean __CheckIsExpert_b__164_1(::Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_76AEB9F7CCE28B4E_Class_1_3E75962FCD9FB58B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFDATA___C___CHECKISEXPERT_B__164_1_OFFSET))(this, x);
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
