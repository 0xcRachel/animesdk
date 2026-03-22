#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BAC064D277DD99F1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_308;
class Class_0_16E4307DCC419505_309;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_090AB0EAA610410E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB2F30E0)
#define CLASS_1_090AB0EAA610410E_EQUALS_OFFSET UNITYSDK_OFFSET(0xB2F3050)
#define CLASS_1_090AB0EAA610410E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB2F31F0)
#define CLASS_1_090AB0EAA610410E_GET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0xB2F2FB0)
#define CLASS_1_090AB0EAA610410E_GET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0xB2F2FD0)
#define CLASS_1_090AB0EAA610410E_GET_EQUIPPEDLIGHTCONE_OFFSET UNITYSDK_OFFSET(0xB2F3010)
#define CLASS_1_090AB0EAA610410E_GET_EQUIPPEDRELICS_OFFSET UNITYSDK_OFFSET(0xB2F2FF0)
#define CLASS_1_090AB0EAA610410E_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB2F2F50)
#define CLASS_1_090AB0EAA610410E_GET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xB2F2F70)
#define CLASS_1_090AB0EAA610410E_GET_RANKLEVEL_OFFSET UNITYSDK_OFFSET(0xB2F2F90)
#define CLASS_1_090AB0EAA610410E_GET_TRACENODES_OFFSET UNITYSDK_OFFSET(0xB2F3030)
#define CLASS_1_090AB0EAA610410E_METHOD_1_09C3DBB624A973FC_OFFSET UNITYSDK_OFFSET(0xB2F33C0)
#define CLASS_1_090AB0EAA610410E_METHOD_1_E85CA50D622B92B5_OFFSET UNITYSDK_OFFSET(0xB2F3340)
#define CLASS_1_090AB0EAA610410E_SET_CURRENTEXP_OFFSET UNITYSDK_OFFSET(0xB2F2FC0)
#define CLASS_1_090AB0EAA610410E_SET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0xB2F2FE0)
#define CLASS_1_090AB0EAA610410E_SET_EQUIPPEDLIGHTCONE_OFFSET UNITYSDK_OFFSET(0xB2F3020)
#define CLASS_1_090AB0EAA610410E_SET_EQUIPPEDRELICS_OFFSET UNITYSDK_OFFSET(0xB2F3000)
#define CLASS_1_090AB0EAA610410E_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB2F2F60)
#define CLASS_1_090AB0EAA610410E_SET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xB2F2F80)
#define CLASS_1_090AB0EAA610410E_SET_RANKLEVEL_OFFSET UNITYSDK_OFFSET(0xB2F2FA0)
#define CLASS_1_090AB0EAA610410E_SET_TRACENODES_OFFSET UNITYSDK_OFFSET(0xB2F3040)
#define CLASS_1_090AB0EAA610410E__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2F3450)
#define CLASS_1_090AB0EAA610410E__CTOR_OFFSET UNITYSDK_OFFSET(0xB2F3440)
#define CLASS_1_090AB0EAA610410E___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0xB2F34B0)
#define CLASS_1_090AB0EAA610410E___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB2F34C0)

inline static constexpr unsigned int Class_1_090AB0EAA610410E_TypeDefinitionIndex = 40897;

class Class_1_090AB0EAA610410E : public ::System::Object
{
public:
	static ::Class_1_090AB0EAA610410E** StaticGet_Field_1_0()
	{
		return (::Class_1_090AB0EAA610410E**)Il2CppClass::FromTypeDefinitionIndex(Class_1_090AB0EAA610410E_TypeDefinitionIndex)->GetStaticField(0x44060);
	}
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_308*>* _EquippedRelics_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_BAC064D277DD99F1>* _TraceNodes_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_309* _EquippedLightCone_k__BackingField; // 0x20
	::System::UInt32 _Level_k__BackingField; // 0x28
	::System::UInt32 _PromotionLevel_k__BackingField; // 0x2C
	::System::UInt32 _CurrentExp_k__BackingField; // 0x30
	::System::UInt32 _DressedSkinID_k__BackingField; // 0x34
	::System::UInt32 _RankLevel_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E__CCTOR_OFFSET))();
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_SET_LEVEL_OFFSET))(this, value);
	}

	::System::UInt32 get_PromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GET_PROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Void set_PromotionLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_SET_PROMOTIONLEVEL_OFFSET))(this, value);
	}

	::System::UInt32 get_RankLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GET_RANKLEVEL_OFFSET))(this);
	}

	::System::Void set_RankLevel(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_SET_RANKLEVEL_OFFSET))(this, value);
	}

	::System::UInt32 get_CurrentExp()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GET_CURRENTEXP_OFFSET))(this);
	}

	::System::Void set_CurrentExp(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_SET_CURRENTEXP_OFFSET))(this, value);
	}

	::System::UInt32 get_DressedSkinID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GET_DRESSEDSKINID_OFFSET))(this);
	}

	::System::Void set_DressedSkinID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_SET_DRESSEDSKINID_OFFSET))(this, value);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_308*>* get_EquippedRelics()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_308*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GET_EQUIPPEDRELICS_OFFSET))(this);
	}

	::System::Void set_EquippedRelics(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_308*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_308*>*))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_SET_EQUIPPEDRELICS_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_309* get_EquippedLightCone()
	{
		return ((::Class_0_16E4307DCC419505_309*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GET_EQUIPPEDLIGHTCONE_OFFSET))(this);
	}

	::System::Void set_EquippedLightCone(::Class_0_16E4307DCC419505_309* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_309*))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_SET_EQUIPPEDLIGHTCONE_OFFSET))(this, value);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_BAC064D277DD99F1>* get_TraceNodes()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Struct_2_BAC064D277DD99F1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GET_TRACENODES_OFFSET))(this);
	}

	::System::Void set_TraceNodes(::System::Collections::Generic::IReadOnlyList_1<::Struct_2_BAC064D277DD99F1>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_BAC064D277DD99F1>*))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_SET_TRACENODES_OFFSET))(this, value);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_090AB0EAA610410E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_1_E85CA50D622B92B5(::Class_1_090AB0EAA610410E* a1, ::Class_1_090AB0EAA610410E* a2)
	{
		return ((::System::Boolean(*)(::Class_1_090AB0EAA610410E*, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_METHOD_1_E85CA50D622B92B5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_09C3DBB624A973FC(::Class_1_090AB0EAA610410E* a1, ::Class_1_090AB0EAA610410E* a2)
	{
		return ((::System::Boolean(*)(::Class_1_090AB0EAA610410E*, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E_METHOD_1_09C3DBB624A973FC_OFFSET))(a1, a2);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_090AB0EAA610410E___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
