#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelFeatureType.h"
#include "unitysdk/Struct_2_F1DDB6E36FBC609F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_63F17A19771E3B47;
class Class_1_C06752CD2A701BDD;
namespace RPG::Client { class FloorSavedData; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDistrictDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class MapRotationInfo; }
namespace RPG::GameCore { class EraFlipperConfig; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LevelDimensionBakedInfo; }
namespace RPG::GameCore { class LevelDimensionCrossMapBriefInfo; }
namespace RPG::GameCore { class LevelFloorBakedInfo; }
namespace RPG::GameCore { class LevelFloorCrossMapBriefInfo; }
namespace RPG::GameCore { class LevelMonsterInfo; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LevelNavmapConfig; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace RPG::GameCore { class LevelValidNavmapSubmapConfig; }
namespace RPG::GameCore { class RtLevelGroupInstanceCommonInfo; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

#define CLASS_1_C4D1F4932C690DC4_GET_DIMENSIONBAKEDINFO_OFFSET UNITYSDK_OFFSET(0xF3D9830)
#define CLASS_1_C4D1F4932C690DC4_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0xF3D9970)
#define CLASS_1_C4D1F4932C690DC4_GET_ENVIRONMENTPROFILEPATH_OFFSET UNITYSDK_OFFSET(0xF3D99C0)
#define CLASS_1_C4D1F4932C690DC4_GET_ERAFLIPCONFIG_OFFSET UNITYSDK_OFFSET(0xF3D9890)
#define CLASS_1_C4D1F4932C690DC4_GET_FLOORBAKEDINFOCONFIG_OFFSET UNITYSDK_OFFSET(0xF3D9870)
#define CLASS_1_C4D1F4932C690DC4_GET_FLOORCONSTVALUES_OFFSET UNITYSDK_OFFSET(0xF3D9980)
#define CLASS_1_C4D1F4932C690DC4_GET_FLOORSAVEDVALUES_OFFSET UNITYSDK_OFFSET(0xF3D9810)
#define CLASS_1_C4D1F4932C690DC4_GET_HASLEVELLITTLEGAME_OFFSET UNITYSDK_OFFSET(0xF3D9910)
#define CLASS_1_C4D1F4932C690DC4_GET_MAPFIVEDIMINFO_OFFSET UNITYSDK_OFFSET(0xF3D98D0)
#define CLASS_1_C4D1F4932C690DC4_GET_MAPROTATIONINFO_OFFSET UNITYSDK_OFFSET(0xF3D98B0)
#define CLASS_1_C4D1F4932C690DC4_GET_NAVMAPCONFIG_OFFSET UNITYSDK_OFFSET(0xF3D9850)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0xF3D79D0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_00F69ACA1AF68B42_OFFSET UNITYSDK_OFFSET(0xF3D5BF0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_0D1CE77C2D731696_OFFSET UNITYSDK_OFFSET(0xF3D9450)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_2A7F0BD4A5C44AFA_OFFSET UNITYSDK_OFFSET(0xF3D9180)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xF3D69F0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_31FC8552DE7857A2_OFFSET UNITYSDK_OFFSET(0xF3D8E40)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_3583AE42D2D70389_OFFSET UNITYSDK_OFFSET(0xF3D8F00)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_384A952E81BD95C6_OFFSET UNITYSDK_OFFSET(0xF3D9010)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_3C29C2F0B4E2C894_OFFSET UNITYSDK_OFFSET(0xF3D99E0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_41F62958F16FC489_OFFSET UNITYSDK_OFFSET(0xF3D4F10)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_486E62A68E7F379E_OFFSET UNITYSDK_OFFSET(0xF3D9950)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_500799FED7F447D7_OFFSET UNITYSDK_OFFSET(0xF3D6AB0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_5F92F94B373BFDF0_OFFSET UNITYSDK_OFFSET(0xF3D9940)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_656B6CBE7CC1D720_OFFSET UNITYSDK_OFFSET(0xF3D88C0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_6DC60149A270E0D4_1_OFFSET UNITYSDK_OFFSET(0xF3D8510)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0xF3D6220)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_6FA534480ABD7781_OFFSET UNITYSDK_OFFSET(0xF3D89E0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_7299E1B16BDE8F93_OFFSET UNITYSDK_OFFSET(0xF3D90A0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_760B84880F37D146_OFFSET UNITYSDK_OFFSET(0xF3D8BC0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_77F1D81FEA38965A_OFFSET UNITYSDK_OFFSET(0xF3D9930)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_7A698BD0FF27142D_OFFSET UNITYSDK_OFFSET(0xF3D8D00)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xF3D5460)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0xF3D6570)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_924160ACC90F4A8F_OFFSET UNITYSDK_OFFSET(0xF3D99A0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_93F582E578D1BB08_OFFSET UNITYSDK_OFFSET(0xF3D93A0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_A44AB0BF69D3EF98_OFFSET UNITYSDK_OFFSET(0xF3D91F0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_BE4EBC8FF4054312_OFFSET UNITYSDK_OFFSET(0xF3D6D40)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_C93EBD7B6B94F61E_OFFSET UNITYSDK_OFFSET(0xF3D9620)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0xF3D5540)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0xF3D6140)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0xF3D56F0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_DFB3E3DF5DAF95EF_OFFSET UNITYSDK_OFFSET(0xF3D53A0)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_E2C50A34F75A039D_OFFSET UNITYSDK_OFFSET(0xF3D9110)
#define CLASS_1_C4D1F4932C690DC4_METHOD_1_EA9020CE6798B31D_OFFSET UNITYSDK_OFFSET(0xF3D8840)
#define CLASS_1_C4D1F4932C690DC4_SET_DIMENSIONBAKEDINFO_OFFSET UNITYSDK_OFFSET(0xF3D9840)
#define CLASS_1_C4D1F4932C690DC4_SET_ENVIRONMENTPROFILEPATH_OFFSET UNITYSDK_OFFSET(0xF3D99D0)
#define CLASS_1_C4D1F4932C690DC4_SET_ERAFLIPCONFIG_OFFSET UNITYSDK_OFFSET(0xF3D98A0)
#define CLASS_1_C4D1F4932C690DC4_SET_FLOORBAKEDINFOCONFIG_OFFSET UNITYSDK_OFFSET(0xF3D9880)
#define CLASS_1_C4D1F4932C690DC4_SET_FLOORCONSTVALUES_OFFSET UNITYSDK_OFFSET(0xF3D9990)
#define CLASS_1_C4D1F4932C690DC4_SET_FLOORSAVEDVALUES_OFFSET UNITYSDK_OFFSET(0xF3D9820)
#define CLASS_1_C4D1F4932C690DC4_SET_HASLEVELLITTLEGAME_OFFSET UNITYSDK_OFFSET(0xF3D9920)
#define CLASS_1_C4D1F4932C690DC4_SET_MAPFIVEDIMINFO_OFFSET UNITYSDK_OFFSET(0xF3D98F0)
#define CLASS_1_C4D1F4932C690DC4_SET_MAPROTATIONINFO_OFFSET UNITYSDK_OFFSET(0xF3D98C0)
#define CLASS_1_C4D1F4932C690DC4_SET_NAVMAPCONFIG_OFFSET UNITYSDK_OFFSET(0xF3D9860)
#define CLASS_1_C4D1F4932C690DC4__CTOR_OFFSET UNITYSDK_OFFSET(0xF3D50D0)

inline static constexpr unsigned int Class_1_C4D1F4932C690DC4_TypeDefinitionIndex = 69664;

class Class_1_C4D1F4932C690DC4 : public ::System::Object
{
public:
	::RPG::GameCore::LevelNavmapConfig* _NavmapConfig_k__BackingField; // 0x10
	::RPG::GameCore::EraFlipperConfig* _EraFlipConfig_k__BackingField; // 0x18
	::Class_1_63F17A19771E3B47* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>* Field_1_3; // 0x28
	::System::Collections::Generic::SortedList_2<::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*>* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::String*>, ::System::Int16>* Field_1_5; // 0x38
	::Class_1_C06752CD2A701BDD* _FloorConstValues_k__BackingField; // 0x40
	::RPG::GameCore::LevelDimensionBakedInfo* _DimensionBakedInfo_k__BackingField; // 0x48
	::RPG::Client::MapRotationInfo* _MapRotationInfo_k__BackingField; // 0x50
	::RPG::GameCore::LevelFloorCrossMapBriefInfo* Field_1_9; // 0x58
	::RPG::GameCore::LevelFloorBakedInfo* _FloorBakedInfoConfig_k__BackingField; // 0x60
	::RPG::GameCore::LevelDimensionCrossMapBriefInfo* Field_1_11; // 0x68
	::System::String* _EnvironmentProfilePath_k__BackingField; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapEntityDef*>* Field_1_13; // 0x78
	::RPG::Client::FloorSavedData* _FloorSavedValues_k__BackingField; // 0x80
	::Struct_2_F1DDB6E36FBC609F _MapFiveDimInfo_k__BackingField; // 0x88
	::System::UInt32 Field_1_16; // 0xA0
	::System::UInt32 Field_1_17; // 0xA4
	::System::UInt32 Field_1_18; // 0xA8
	::System::UInt32 _DimensionID_k__BackingField; // 0xAC
	::System::UInt32 Field_1_20; // 0xB0
	::System::Boolean _HasLevelLittleGame_k__BackingField; // 0xB4

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Class_1_C4D1F4932C690DC4* Method_1_41F62958F16FC489(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
	{
		return ((::Class_1_C4D1F4932C690DC4*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_41F62958F16FC489_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::RPG::GameCore::RuntimeGroupInfo* Method_1_EA9020CE6798B31D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RuntimeGroupInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_EA9020CE6798B31D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_656B6CBE7CC1D720(::System::UInt32 a1, ::System::String* a2, ::System::Int16& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::Int16&))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_656B6CBE7CC1D720_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::MapAnchorDef* Method_1_6FA534480ABD7781()
	{
		return ((::RPG::Client::MapAnchorDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_6FA534480ABD7781_OFFSET))(this);
	}

	::RPG::Client::MapPropDef* Method_1_760B84880F37D146(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::MapPropDef*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_760B84880F37D146_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapDistrictDef* Method_1_7A698BD0FF27142D(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::MapDistrictDef*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_7A698BD0FF27142D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DFB3E3DF5DAF95EF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_DFB3E3DF5DAF95EF_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_31FC8552DE7857A2(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
	{
		return ((::System::String*(*)(::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_31FC8552DE7857A2_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_1_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_1_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_DE52BD42C4B0B772_OFFSET))(this);
	}

	::RPG::GameCore::RtLevelGroupInstanceCommonInfo* Method_1_3583AE42D2D70389(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RtLevelGroupInstanceCommonInfo*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_3583AE42D2D70389_OFFSET))(this, a1);
	}

	::System::Void Method_1_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_384A952E81BD95C6(::RPG::GameCore::LevelFeatureType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LevelFeatureType))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_384A952E81BD95C6_OFFSET))(this, a1);
	}

	::System::Void Method_1_00F69ACA1AF68B42(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_00F69ACA1AF68B42_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_500799FED7F447D7(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_500799FED7F447D7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::System::Void Method_1_6DC60149A270E0D4_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_6DC60149A270E0D4_1_OFFSET))(this);
	}

	::System::Void Method_1_BE4EBC8FF4054312()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_BE4EBC8FF4054312_OFFSET))(this);
	}

	::System::Void Method_1_2A7F0BD4A5C44AFA(::System::UInt32 a1, ::RPG::GameCore::LevelMonsterInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_2A7F0BD4A5C44AFA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E2C50A34F75A039D(::System::UInt32 a1, ::RPG::GameCore::LevelNPCInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_E2C50A34F75A039D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7299E1B16BDE8F93(::System::UInt32 a1, ::RPG::GameCore::LevelPropInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_7299E1B16BDE8F93_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_93F582E578D1BB08(::RPG::Client::MapEntityDef* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityDef*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_93F582E578D1BB08_OFFSET))(this, a1);
	}

	::RPG::Client::MapNpcDef* Method_1_A44AB0BF69D3EF98(::System::UInt32 a1, ::RPG::GameCore::LevelMonsterInfo* a2)
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelMonsterInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_A44AB0BF69D3EF98_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapNpcDef* Method_1_0D1CE77C2D731696(::System::UInt32 a1, ::RPG::GameCore::LevelNPCInfo* a2)
	{
		return ((::RPG::Client::MapNpcDef*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelNPCInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_0D1CE77C2D731696_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MapPropDef* Method_1_C93EBD7B6B94F61E(::System::UInt32 a1, ::RPG::GameCore::LevelPropInfo* a2)
	{
		return ((::RPG::Client::MapPropDef*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LevelPropInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_C93EBD7B6B94F61E_OFFSET))(this, a1, a2);
	}

	::RPG::Client::FloorSavedData* get_FloorSavedValues()
	{
		return ((::RPG::Client::FloorSavedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_FLOORSAVEDVALUES_OFFSET))(this);
	}

	::System::Void set_FloorSavedValues(::RPG::Client::FloorSavedData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FloorSavedData*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_FLOORSAVEDVALUES_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelDimensionBakedInfo* get_DimensionBakedInfo()
	{
		return ((::RPG::GameCore::LevelDimensionBakedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_DIMENSIONBAKEDINFO_OFFSET))(this);
	}

	::System::Void set_DimensionBakedInfo(::RPG::GameCore::LevelDimensionBakedInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelDimensionBakedInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_DIMENSIONBAKEDINFO_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelNavmapConfig* get_NavmapConfig()
	{
		return ((::RPG::GameCore::LevelNavmapConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_NAVMAPCONFIG_OFFSET))(this);
	}

	::System::Void set_NavmapConfig(::RPG::GameCore::LevelNavmapConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelNavmapConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_NAVMAPCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelFloorBakedInfo* get_FloorBakedInfoConfig()
	{
		return ((::RPG::GameCore::LevelFloorBakedInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_FLOORBAKEDINFOCONFIG_OFFSET))(this);
	}

	::System::Void set_FloorBakedInfoConfig(::RPG::GameCore::LevelFloorBakedInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelFloorBakedInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_FLOORBAKEDINFOCONFIG_OFFSET))(this, a1);
	}

	::RPG::GameCore::EraFlipperConfig* get_EraFlipConfig()
	{
		return ((::RPG::GameCore::EraFlipperConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_ERAFLIPCONFIG_OFFSET))(this);
	}

	::System::Void set_EraFlipConfig(::RPG::GameCore::EraFlipperConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EraFlipperConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_ERAFLIPCONFIG_OFFSET))(this, a1);
	}

	::RPG::Client::MapRotationInfo* get_MapRotationInfo()
	{
		return ((::RPG::Client::MapRotationInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_MAPROTATIONINFO_OFFSET))(this);
	}

	::System::Void set_MapRotationInfo(::RPG::Client::MapRotationInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapRotationInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_MAPROTATIONINFO_OFFSET))(this, a1);
	}

	::Struct_2_F1DDB6E36FBC609F get_MapFiveDimInfo()
	{
		return ((::Struct_2_F1DDB6E36FBC609F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_MAPFIVEDIMINFO_OFFSET))(this);
	}

	::System::Void set_MapFiveDimInfo(::Struct_2_F1DDB6E36FBC609F a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F1DDB6E36FBC609F))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_MAPFIVEDIMINFO_OFFSET))(this, a1);
	}

	::System::Boolean get_HasLevelLittleGame()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_HASLEVELLITTLEGAME_OFFSET))(this);
	}

	::System::Void set_HasLevelLittleGame(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_HASLEVELLITTLEGAME_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapEntityDef*>* Method_1_77F1D81FEA38965A()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapEntityDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_77F1D81FEA38965A_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>* Method_1_5F92F94B373BFDF0()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::Client::MapAnchorDef*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_5F92F94B373BFDF0_OFFSET))(this);
	}

	::Il2CppArray<::System::Int32>* Method_1_486E62A68E7F379E()
	{
		return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_486E62A68E7F379E_OFFSET))(this);
	}

	::System::UInt32 get_DimensionID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_DIMENSIONID_OFFSET))(this);
	}

	::Class_1_C06752CD2A701BDD* get_FloorConstValues()
	{
		return ((::Class_1_C06752CD2A701BDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_FLOORCONSTVALUES_OFFSET))(this);
	}

	::System::Void set_FloorConstValues(::Class_1_C06752CD2A701BDD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C06752CD2A701BDD*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_FLOORCONSTVALUES_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>* Method_1_924160ACC90F4A8F()
	{
		return ((::Il2CppArray<::RPG::GameCore::LevelValidNavmapSubmapConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_924160ACC90F4A8F_OFFSET))(this);
	}

	::System::String* get_EnvironmentProfilePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_GET_ENVIRONMENTPROFILEPATH_OFFSET))(this);
	}

	::System::Void set_EnvironmentProfilePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_SET_ENVIRONMENTPROFILEPATH_OFFSET))(this, a1);
	}

	::RPG::GameCore::HoyoTagContainer* Method_1_3C29C2F0B4E2C894()
	{
		return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4D1F4932C690DC4_METHOD_1_3C29C2F0B4E2C894_OFFSET))(this);
	}
};
