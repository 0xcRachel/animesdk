#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightHandBookEquipItemType.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_352;
namespace RPG::Client { class GridFightAugment; }
namespace RPG::Client { class GridFightEquipItemConfig; }
namespace RPG::Client { class GridFightHandBookEquipItemConfig; }
namespace RPG::Client { class GridFightHandbookRole; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class GridFightRoleRecommendEquipConfigRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x93B9D50)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x93B9D90)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__155_0_OFFSET UNITYSDK_OFFSET(0x93B9FE0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__155_2_OFFSET UNITYSDK_OFFSET(0x93BA030)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETEXPERTHANDBOOKROLECONFIG_B__145_1_OFFSET UNITYSDK_OFFSET(0x93B9E70)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETEXPERTHANDBOOKROLECONFIG_B__145_2_OFFSET UNITYSDK_OFFSET(0x93B9EC0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETFIRSTEQUIPITEMLISTBYROLEID_B__227_0_OFFSET UNITYSDK_OFFSET(0x93BA320)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__164_1_OFFSET UNITYSDK_OFFSET(0x93BA1B0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__164_2_OFFSET UNITYSDK_OFFSET(0x93BA1F0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__156_1_OFFSET UNITYSDK_OFFSET(0x93BA050)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__156_2_OFFSET UNITYSDK_OFFSET(0x93BA070)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLPORTALDATA_B__166_1_OFFSET UNITYSDK_OFFSET(0x93BA2B0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLROLECONFIG_B__146_1_OFFSET UNITYSDK_OFFSET(0x93B9EF0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLROLECONFIG_B__146_2_OFFSET UNITYSDK_OFFSET(0x93B9F40)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLROLECONFIG_B__146_3_OFFSET UNITYSDK_OFFSET(0x93B9F90)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__165_1_OFFSET UNITYSDK_OFFSET(0x93BA230)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__165_2_OFFSET UNITYSDK_OFFSET(0x93BA270)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__157_0_OFFSET UNITYSDK_OFFSET(0x93BA0A0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__157_1_OFFSET UNITYSDK_OFFSET(0x93BA0C0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKROLECONFIGBYPRICE_B__144_1_OFFSET UNITYSDK_OFFSET(0x93B9DA0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKROLECONFIGBYPRICE_B__144_2_OFFSET UNITYSDK_OFFSET(0x93B9DF0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKROLECONFIGBYPRICE_B__144_3_OFFSET UNITYSDK_OFFSET(0x93B9E40)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETMONSTERCAMPDATABYTYPEID_B__154_1_OFFSET UNITYSDK_OFFSET(0x93B9FC0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETNEWHANDBOOKQUESTIDSBYQUESTARR_B__169_0_OFFSET UNITYSDK_OFFSET(0x93BA2E0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__GETSECONDEQUIPITEMLISTBYROLEID_B__228_0_OFFSET UNITYSDK_OFFSET(0x93BA340)
#define RPG_CLIENT_GRIDFIGHTMODULE___C__SETHANDBOOKQUESTSEENBYQUESTARR_B__171_0_OFFSET UNITYSDK_OFFSET(0x93BA300)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKBASEEQUIPITEMDATA_B__159_0_OFFSET UNITYSDK_OFFSET(0x93BA110)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCONSUMABLEEQUIPITEMDATA_B__158_1_OFFSET UNITYSDK_OFFSET(0x93BA0E0)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCRAFTABLEEQUIPITEMDATA_B__160_0_OFFSET UNITYSDK_OFFSET(0x93BA130)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKEQUIPITEMDATA_B__162_1_OFFSET UNITYSDK_OFFSET(0x93BA180)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKSPECIALEQUIPITEMDATA_B__161_0_OFFSET UNITYSDK_OFFSET(0x93BA150)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___GETRECOMMENDEQUIPLISTBYROLEID_B__229_0_OFFSET UNITYSDK_OFFSET(0x93BA360)
#define RPG_CLIENT_GRIDFIGHTMODULE___C___ONGRIDFIGHTUPDATEPOSSCRSP_B__334_0_OFFSET UNITYSDK_OFFSET(0x93BA3E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModule___c_TypeDefinitionIndex = 51532;

	class GridFightModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__160_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x38E0);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__146_3()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x38E8);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>** StaticGet___9__165_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x38F0);
		}
		static ::System::Func_2<::RPG::Client::GridFightPortalData*, ::System::UInt32>** StaticGet___9__166_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightPortalData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x38F8);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>** StaticGet___9__165_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3900);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::Int32>** StaticGet___9__146_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3908);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__145_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3910);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::Int32>** StaticGet___9__144_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3918);
		}
		static ::System::Func_2<::Class_1_FA4F4A67B1C04320_352*, ::System::UInt32>** StaticGet___9__334_0()
		{
			return (::System::Func_2<::Class_1_FA4F4A67B1C04320_352*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3920);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>** StaticGet___9__155_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3928);
		}
		static ::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>** StaticGet___9__229_0()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::GridFightEquipItemConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3930);
		}
		static ::RPG::Client::GridFightModule___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightModule___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3938);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__156_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3940);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__227_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3948);
		}
		static ::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>** StaticGet___9__228_0()
		{
			return (::System::Func_2<::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*, ::Il2CppArray<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3950);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__157_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3958);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__169_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3960);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__145_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3968);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__158_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3970);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__157_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3978);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__144_3()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3980);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::RPG::Client::GridFightHandBookEquipItemType>** StaticGet___9__156_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::RPG::Client::GridFightHandBookEquipItemType>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3988);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>** StaticGet___9__164_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::RPG::GameCore::GridFightAugmentQuality>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3990);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>** StaticGet___9__162_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandBookEquipItemConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x3998);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>** StaticGet___9__155_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x39A0);
		}
		static ::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>** StaticGet___9__171_0()
		{
			return (::System::Func_2<::RPG::Client::QuestData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x39A8);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__161_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x39B0);
		}
		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>** StaticGet___9__154_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x39B8);
		}
		static ::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>** StaticGet___9__164_2()
		{
			return (::System::Func_2<::RPG::Client::GridFightAugment*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x39C0);
		}
		static ::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>** StaticGet___9__159_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x39C8);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__144_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x39D0);
		}
		static ::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>** StaticGet___9__146_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightHandbookRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightModule___c_TypeDefinitionIndex)->GetStaticField(0x39D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetHandBookRoleConfigByPrice_b__144_1(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKROLECONFIGBYPRICE_B__144_1_OFFSET))(this, x);
		}

		::System::Int32 _GetHandBookRoleConfigByPrice_b__144_2(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKROLECONFIGBYPRICE_B__144_2_OFFSET))(this, x);
		}

		::System::UInt32 _GetHandBookRoleConfigByPrice_b__144_3(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKROLECONFIGBYPRICE_B__144_3_OFFSET))(this, x);
		}

		::System::UInt32 _GetExpertHandbookRoleConfig_b__145_1(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETEXPERTHANDBOOKROLECONFIG_B__145_1_OFFSET))(this, x);
		}

		::System::UInt32 _GetExpertHandbookRoleConfig_b__145_2(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETEXPERTHANDBOOKROLECONFIG_B__145_2_OFFSET))(this, x);
		}

		::System::UInt32 _GetHandBookAllRoleConfig_b__146_1(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLROLECONFIG_B__146_1_OFFSET))(this, x);
		}

		::System::Int32 _GetHandBookAllRoleConfig_b__146_2(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLROLECONFIG_B__146_2_OFFSET))(this, x);
		}

		::System::UInt32 _GetHandBookAllRoleConfig_b__146_3(::RPG::Client::GridFightHandbookRole* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandbookRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLROLECONFIG_B__146_3_OFFSET))(this, x);
		}

		::System::UInt32 _GetMonsterCampDataByTypeID_b__154_1(::RPG::Client::GridFightMonsterCampConfig* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETMONSTERCAMPDATABYTYPEID_B__154_1_OFFSET))(this, x);
		}

		::System::Boolean _GetAllMonsterCampData_b__155_0(::RPG::Client::GridFightMonsterCampConfig* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__155_0_OFFSET))(this, x);
		}

		::System::UInt32 _GetAllMonsterCampData_b__155_2(::RPG::Client::GridFightMonsterCampConfig* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETALLMONSTERCAMPDATA_B__155_2_OFFSET))(this, x);
		}

		::RPG::Client::GridFightHandBookEquipItemType _GetHandBookAllEquipItemData_b__156_1(::RPG::Client::GridFightHandBookEquipItemConfig* item)
		{
			return ((::RPG::Client::GridFightHandBookEquipItemType(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__156_1_OFFSET))(this, item);
		}

		::System::UInt32 _GetHandBookAllEquipItemData_b__156_2(::RPG::Client::GridFightHandBookEquipItemConfig* item)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLEQUIPITEMDATA_B__156_2_OFFSET))(this, item);
		}

		::System::Boolean _GetHandBookEquipItemDataByType_b__157_0(::RPG::Client::GridFightEquipItemConfig* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__157_0_OFFSET))(this, x);
		}

		::System::Boolean _GetHandBookEquipItemDataByType_b__157_1(::RPG::Client::GridFightEquipItemConfig* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKEQUIPITEMDATABYTYPE_B__157_1_OFFSET))(this, x);
		}

		::System::UInt32 __GetHandBookConsumableEquipItemData_b__158_1(::RPG::Client::GridFightHandBookEquipItemConfig* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCONSUMABLEEQUIPITEMDATA_B__158_1_OFFSET))(this, x);
		}

		::System::Boolean __GetHandBookBaseEquipItemData_b__159_0(::RPG::Client::GridFightEquipItemConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKBASEEQUIPITEMDATA_B__159_0_OFFSET))(this, config);
		}

		::System::Boolean __GetHandBookCraftableEquipItemData_b__160_0(::RPG::Client::GridFightEquipItemConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKCRAFTABLEEQUIPITEMDATA_B__160_0_OFFSET))(this, config);
		}

		::System::Boolean __GetHandBookSpecialEquipItemData_b__161_0(::RPG::Client::GridFightEquipItemConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKSPECIALEQUIPITEMDATA_B__161_0_OFFSET))(this, config);
		}

		::System::UInt32 __GetHandBookEquipItemData_b__162_1(::RPG::Client::GridFightHandBookEquipItemConfig* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightHandBookEquipItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETHANDBOOKEQUIPITEMDATA_B__162_1_OFFSET))(this, x);
		}

		::RPG::GameCore::GridFightAugmentQuality _GetHandBookAllAugmentItemData_b__164_1(::RPG::Client::GridFightAugment* x)
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__164_1_OFFSET))(this, x);
		}

		::System::UInt32 _GetHandBookAllAugmentItemData_b__164_2(::RPG::Client::GridFightAugment* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLAUGMENTITEMDATA_B__164_2_OFFSET))(this, x);
		}

		::RPG::GameCore::GridFightAugmentQuality _GetHandBookAugmentItemDataByQuality_b__165_1(::RPG::Client::GridFightAugment* x)
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__165_1_OFFSET))(this, x);
		}

		::System::UInt32 _GetHandBookAugmentItemDataByQuality_b__165_2(::RPG::Client::GridFightAugment* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightAugment*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKAUGMENTITEMDATABYQUALITY_B__165_2_OFFSET))(this, x);
		}

		::System::UInt32 _GetHandBookAllPortalData_b__166_1(::RPG::Client::GridFightPortalData* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightPortalData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETHANDBOOKALLPORTALDATA_B__166_1_OFFSET))(this, x);
		}

		::System::UInt32 _GetNewHandBookQuestIDsByQuestArr_b__169_0(::RPG::Client::QuestData* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETNEWHANDBOOKQUESTIDSBYQUESTARR_B__169_0_OFFSET))(this, x);
		}

		::System::UInt32 _SetHandBookQuestSeenByQuestArr_b__171_0(::RPG::Client::QuestData* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::QuestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__SETHANDBOOKQUESTSEENBYQUESTARR_B__171_0_OFFSET))(this, x);
		}

		::Il2CppArray<::System::UInt32>* _GetFirstEquipItemListByRoleID_b__227_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* row)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETFIRSTEQUIPITEMLISTBYROLEID_B__227_0_OFFSET))(this, row);
		}

		::Il2CppArray<::System::UInt32>* _GetSecondEquipItemListByRoleID_b__228_0(::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* row)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C__GETSECONDEQUIPITEMLISTBYROLEID_B__228_0_OFFSET))(this, row);
		}

		::RPG::Client::GridFightEquipItemConfig* __GetRecommendEquipListByRoleID_b__229_0(::System::UInt32 itemID)
		{
			return ((::RPG::Client::GridFightEquipItemConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___GETRECOMMENDEQUIPLISTBYROLEID_B__229_0_OFFSET))(this, itemID);
		}

		::System::UInt32 __OnGridFightUpdatePosScRsp_b__334_0(::Class_1_FA4F4A67B1C04320_352* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_352*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMODULE___C___ONGRIDFIGHTUPDATEPOSSCRSP_B__334_0_OFFSET))(this, x);
		}
	};
}
