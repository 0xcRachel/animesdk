#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_51553107642C877A;
class Class_1_A7A4B83BB51BED0E;
namespace RPG::GameCore { class FiveDimMapFaceConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1B95C50862BF96BD_GET_FACEID_OFFSET UNITYSDK_OFFSET(0x104AFC80)
#define CLASS_1_1B95C50862BF96BD_GET_FOGOFWARCONFIG_OFFSET UNITYSDK_OFFSET(0x104AFD60)
#define CLASS_1_1B95C50862BF96BD_GET_ISSHOWEMPTYMAP_OFFSET UNITYSDK_OFFSET(0x104AFD20)
#define CLASS_1_1B95C50862BF96BD_GET_PATH_OFFSET UNITYSDK_OFFSET(0x104AFCC0)
#define CLASS_1_1B95C50862BF96BD_GET_SHOWLEVELVARNAME_OFFSET UNITYSDK_OFFSET(0x104AFCE0)
#define CLASS_1_1B95C50862BF96BD_GET_SHOWLEVELVARVALUES_OFFSET UNITYSDK_OFFSET(0x104AFD00)
#define CLASS_1_1B95C50862BF96BD_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x104AFCA0)
#define CLASS_1_1B95C50862BF96BD_GET_SURFACELIST_OFFSET UNITYSDK_OFFSET(0x104AFD40)
#define CLASS_1_1B95C50862BF96BD_METHOD_1_399CCE17B538E68A_OFFSET UNITYSDK_OFFSET(0x104AFD80)
#define CLASS_1_1B95C50862BF96BD_METHOD_1_3BB10D8AFBD077A1_OFFSET UNITYSDK_OFFSET(0x104AF970)
#define CLASS_1_1B95C50862BF96BD_METHOD_1_87C596CDD22516C5_OFFSET UNITYSDK_OFFSET(0x104AFBE0)
#define CLASS_1_1B95C50862BF96BD_METHOD_1_ED353324B8674B34_OFFSET UNITYSDK_OFFSET(0x104AF500)
#define CLASS_1_1B95C50862BF96BD_METHOD_1_F0B313FE8ADD51CF_OFFSET UNITYSDK_OFFSET(0x104AF8E0)
#define CLASS_1_1B95C50862BF96BD_METHOD_1_F72BBD82B554E5AA_OFFSET UNITYSDK_OFFSET(0x104AF700)
#define CLASS_1_1B95C50862BF96BD_SET_FACEID_OFFSET UNITYSDK_OFFSET(0x104AFC90)
#define CLASS_1_1B95C50862BF96BD_SET_FOGOFWARCONFIG_OFFSET UNITYSDK_OFFSET(0x104AFD70)
#define CLASS_1_1B95C50862BF96BD_SET_ISSHOWEMPTYMAP_OFFSET UNITYSDK_OFFSET(0x104AFD30)
#define CLASS_1_1B95C50862BF96BD_SET_PATH_OFFSET UNITYSDK_OFFSET(0x104AFCD0)
#define CLASS_1_1B95C50862BF96BD_SET_SHOWLEVELVARNAME_OFFSET UNITYSDK_OFFSET(0x104AFCF0)
#define CLASS_1_1B95C50862BF96BD_SET_SHOWLEVELVARVALUES_OFFSET UNITYSDK_OFFSET(0x104AFD10)
#define CLASS_1_1B95C50862BF96BD_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x104AFCB0)
#define CLASS_1_1B95C50862BF96BD_SET_SURFACELIST_OFFSET UNITYSDK_OFFSET(0x104AFD50)
#define CLASS_1_1B95C50862BF96BD__CTOR_OFFSET UNITYSDK_OFFSET(0x104AF6F0)

inline static constexpr unsigned int Class_1_1B95C50862BF96BD_TypeDefinitionIndex = 59635;

class Class_1_1B95C50862BF96BD : public ::System::Object
{
public:
	::Class_1_A7A4B83BB51BED0E* _FogOfWarConfig_k__BackingField; // 0x10
	::System::String* _Path_k__BackingField; // 0x18
	::Il2CppArray<::System::Int16>* _ShowLevelVarValues_k__BackingField; // 0x20
	::System::String* _ShowLevelVarName_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::Class_1_51553107642C877A*>* _SurfaceList_k__BackingField; // 0x30
	::RPG::MVector2 _Size_k__BackingField; // 0x38
	::System::UInt32 _FaceID_k__BackingField; // 0x40
	::System::Boolean _IsShowEmptyMap_k__BackingField; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD__CTOR_OFFSET))(this);
	}

	static ::Class_1_1B95C50862BF96BD* Method_1_ED353324B8674B34(::RPG::GameCore::FiveDimMapFaceConfig* a1)
	{
		return ((::Class_1_1B95C50862BF96BD*(*)(::RPG::GameCore::FiveDimMapFaceConfig*))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_METHOD_1_ED353324B8674B34_OFFSET))(a1);
	}

	::System::Nullable_1<::System::UInt32> Method_1_F72BBD82B554E5AA(::UnityEngine::Vector3 a1)
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_METHOD_1_F72BBD82B554E5AA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0B313FE8ADD51CF(::RPG::MVector2 a1, ::Il2CppArray<::RPG::MVector2>* a2, ::Il2CppArray<::System::UInt32>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2, ::Il2CppArray<::RPG::MVector2>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_METHOD_1_F0B313FE8ADD51CF_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_3BB10D8AFBD077A1(::RPG::MVector2 a1, ::Il2CppArray<::RPG::MVector2>* a2, ::Il2CppArray<::System::UInt32>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2, ::Il2CppArray<::RPG::MVector2>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_METHOD_1_3BB10D8AFBD077A1_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_87C596CDD22516C5(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_METHOD_1_87C596CDD22516C5_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 get_FaceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_GET_FACEID_OFFSET))(this);
	}

	::System::Void set_FaceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_SET_FACEID_OFFSET))(this, value);
	}

	::RPG::MVector2 get_Size()
	{
		return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_GET_SIZE_OFFSET))(this);
	}

	::System::Void set_Size(::RPG::MVector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_SET_SIZE_OFFSET))(this, value);
	}

	::System::String* get_Path()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_GET_PATH_OFFSET))(this);
	}

	::System::Void set_Path(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_SET_PATH_OFFSET))(this, value);
	}

	::System::String* get_ShowLevelVarName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_GET_SHOWLEVELVARNAME_OFFSET))(this);
	}

	::System::Void set_ShowLevelVarName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_SET_SHOWLEVELVARNAME_OFFSET))(this, value);
	}

	::Il2CppArray<::System::Int16>* get_ShowLevelVarValues()
	{
		return ((::Il2CppArray<::System::Int16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_GET_SHOWLEVELVARVALUES_OFFSET))(this);
	}

	::System::Void set_ShowLevelVarValues(::Il2CppArray<::System::Int16>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int16>*))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_SET_SHOWLEVELVARVALUES_OFFSET))(this, value);
	}

	::System::Boolean get_IsShowEmptyMap()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_GET_ISSHOWEMPTYMAP_OFFSET))(this);
	}

	::System::Void set_IsShowEmptyMap(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_SET_ISSHOWEMPTYMAP_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::Class_1_51553107642C877A*>* get_SurfaceList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_51553107642C877A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_GET_SURFACELIST_OFFSET))(this);
	}

	::System::Void set_SurfaceList(::System::Collections::Generic::List_1<::Class_1_51553107642C877A*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_51553107642C877A*>*))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_SET_SURFACELIST_OFFSET))(this, value);
	}

	::Class_1_A7A4B83BB51BED0E* get_FogOfWarConfig()
	{
		return ((::Class_1_A7A4B83BB51BED0E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_GET_FOGOFWARCONFIG_OFFSET))(this);
	}

	::System::Void set_FogOfWarConfig(::Class_1_A7A4B83BB51BED0E* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A7A4B83BB51BED0E*))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_SET_FOGOFWARCONFIG_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 Method_1_399CCE17B538E68A(::Class_1_51553107642C877A* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_51553107642C877A*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1B95C50862BF96BD_METHOD_1_399CCE17B538E68A_OFFSET))(this, a1, a2, a3);
	}
};
