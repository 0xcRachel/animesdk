#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/LodTemplateSourceType.h"
#include "unitysdk/RPG/GameCore/StreamingLayerType.h"
#include "unitysdk/System/Object.h"

class Class_1_4F5CE5715D025883;
namespace RPG::GameCore { class LodDetail; }
namespace RPG::GameCore { class LodTemplate; }
namespace RPG::GameCore { class NormDistanceLodTemplate; }
namespace System { class String; }

#define CLASS_1_494BD190B553B399_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x135A81B0)
#define CLASS_1_494BD190B553B399_GET_DITHERSWITCH_OFFSET UNITYSDK_OFFSET(0x135A8210)
#define CLASS_1_494BD190B553B399_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x135A8190)
#define CLASS_1_494BD190B553B399_GET_ISAUTOGEN_OFFSET UNITYSDK_OFFSET(0x135A8230)
#define CLASS_1_494BD190B553B399_GET_ISPERSISTENT_OFFSET UNITYSDK_OFFSET(0x135A81A0)
#define CLASS_1_494BD190B553B399_GET_LAYERTYPE_OFFSET UNITYSDK_OFFSET(0x135A8200)
#define CLASS_1_494BD190B553B399_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x135A81F0)
#define CLASS_1_494BD190B553B399_GET_LODDETAILLIST_OFFSET UNITYSDK_OFFSET(0x135A81E0)
#define CLASS_1_494BD190B553B399_GET_NAME_OFFSET UNITYSDK_OFFSET(0x135A8180)
#define CLASS_1_494BD190B553B399_GET_NORMDISTANCE_OFFSET UNITYSDK_OFFSET(0x135A81C0)
#define CLASS_1_494BD190B553B399_GET_OBJECTSIZE_OFFSET UNITYSDK_OFFSET(0x135A81D0)
#define CLASS_1_494BD190B553B399_GET_SOURCELODTEMPLATE_OFFSET UNITYSDK_OFFSET(0x135A8250)
#define CLASS_1_494BD190B553B399_GET_SOURCENORMDISTANCETEMPLATE_OFFSET UNITYSDK_OFFSET(0x135A8260)
#define CLASS_1_494BD190B553B399_GET_SOURCETYPE_OFFSET UNITYSDK_OFFSET(0x135A8240)
#define CLASS_1_494BD190B553B399_GET_USEAABBDIST_OFFSET UNITYSDK_OFFSET(0x135A8220)
#define CLASS_1_494BD190B553B399_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x135A7F90)
#define CLASS_1_494BD190B553B399_METHOD_1_71989213F9C5EC8F_OFFSET UNITYSDK_OFFSET(0x135A8020)
#define CLASS_1_494BD190B553B399_METHOD_1_AA041EC2967F998A_1_OFFSET UNITYSDK_OFFSET(0x135A8290)
#define CLASS_1_494BD190B553B399_METHOD_1_AA041EC2967F998A_2_OFFSET UNITYSDK_OFFSET(0x135A8330)
#define CLASS_1_494BD190B553B399_METHOD_1_AA041EC2967F998A_OFFSET UNITYSDK_OFFSET(0x135A80E0)
#define CLASS_1_494BD190B553B399_METHOD_1_C9D6F9890A05C022_OFFSET UNITYSDK_OFFSET(0x135A7F00)
#define CLASS_1_494BD190B553B399_METHOD_1_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x135A83D0)
#define CLASS_1_494BD190B553B399_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x135A8430)
#define CLASS_1_494BD190B553B399_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x135A8270)
#define CLASS_1_494BD190B553B399__CTOR_1_OFFSET UNITYSDK_OFFSET(0x135A7CB0)
#define CLASS_1_494BD190B553B399__CTOR_OFFSET UNITYSDK_OFFSET(0x135A7BB0)

inline static constexpr unsigned int Class_1_494BD190B553B399_TypeDefinitionIndex = 68020;

class Class_1_494BD190B553B399 : public ::System::Object
{
public:
	::RPG::GameCore::NormDistanceLodTemplate* _SourceNormDistanceTemplate_k__BackingField; // 0x10
	::System::String* _Layer_k__BackingField; // 0x18
	::Class_1_4F5CE5715D025883* Field_1_15; // 0x20
	::RPG::GameCore::LodTemplate* _SourceLodTemplate_k__BackingField; // 0x28
	::Il2CppArray<::RPG::GameCore::LodDetail*>* _LodDetailList_k__BackingField; // 0x30
	::System::String* _Name_k__BackingField; // 0x38
	::System::Single _Distance_k__BackingField; // 0x40
	::System::Single _NormDistance_k__BackingField; // 0x44
	::System::Single _ObjectSize_k__BackingField; // 0x48
	::System::Int32 _Index_k__BackingField; // 0x4C
	::RPG::Client::OpenWorld::LodTemplateSourceType _SourceType_k__BackingField; // 0x50
	::RPG::GameCore::StreamingLayerType _LayerType_k__BackingField; // 0x54
	::System::Boolean _UseAABBDist_k__BackingField; // 0x58
	::System::Boolean _IsAutoGen_k__BackingField; // 0x59
	::System::Boolean _IsPersistent_k__BackingField; // 0x5A
	::System::Boolean _DitherSwitch_k__BackingField; // 0x5B

	::System::Void _ctor(::RPG::GameCore::LodTemplate* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LodTemplate*))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::RPG::GameCore::NormDistanceLodTemplate* a1, ::System::Single a2, ::Class_1_4F5CE5715D025883* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NormDistanceLodTemplate*, ::System::Single, ::Class_1_4F5CE5715D025883*))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C9D6F9890A05C022(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_METHOD_1_C9D6F9890A05C022_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Int32 Method_1_71989213F9C5EC8F(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_METHOD_1_71989213F9C5EC8F_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_AA041EC2967F998A()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_METHOD_1_AA041EC2967F998A_OFFSET))(this);
	}

	::System::String* get_Name()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_GET_NAME_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_GET_INDEX_OFFSET))(this);
	}

	::System::Boolean get_IsPersistent()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_GET_ISPERSISTENT_OFFSET))(this);
	}

	::System::Single get_Distance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_GET_DISTANCE_OFFSET))(this);
	}

	::System::Single get_NormDistance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_GET_NORMDISTANCE_OFFSET))(this);
	}

	::System::Single get_ObjectSize()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_GET_OBJECTSIZE_OFFSET))(this);
	}

	::Il2CppArray<::RPG::GameCore::LodDetail*>* get_LodDetailList()
	{
		return ((::Il2CppArray<::RPG::GameCore::LodDetail*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_GET_LODDETAILLIST_OFFSET))(this);
	}

	::System::String* get_Layer()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_GET_LAYER_OFFSET))(this);
	}

	::RPG::GameCore::StreamingLayerType get_LayerType()
	{
		return ((::RPG::GameCore::StreamingLayerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_GET_LAYERTYPE_OFFSET))(this);
	}

	::System::Boolean get_DitherSwitch()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_GET_DITHERSWITCH_OFFSET))(this);
	}

	::System::Boolean get_UseAABBDist()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_GET_USEAABBDIST_OFFSET))(this);
	}

	::System::Boolean get_IsAutoGen()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_GET_ISAUTOGEN_OFFSET))(this);
	}

	::RPG::Client::OpenWorld::LodTemplateSourceType get_SourceType()
	{
		return ((::RPG::Client::OpenWorld::LodTemplateSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_GET_SOURCETYPE_OFFSET))(this);
	}

	::RPG::GameCore::LodTemplate* get_SourceLodTemplate()
	{
		return ((::RPG::GameCore::LodTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_GET_SOURCELODTEMPLATE_OFFSET))(this);
	}

	::RPG::GameCore::NormDistanceLodTemplate* get_SourceNormDistanceTemplate()
	{
		return ((::RPG::GameCore::NormDistanceLodTemplate*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_GET_SOURCENORMDISTANCETEMPLATE_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Int32 Method_1_AA041EC2967F998A_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_METHOD_1_AA041EC2967F998A_1_OFFSET))(this);
	}

	::System::Int32 Method_1_AA041EC2967F998A_2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_METHOD_1_AA041EC2967F998A_2_OFFSET))(this);
	}

	::System::Int32 Method_1_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_METHOD_1_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::Class_1_4F5CE5715D025883* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_4F5CE5715D025883*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_494BD190B553B399_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}
};
