#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/Tierce/ChallengeTierceAttackDamageType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_44884E8651008039_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x13F2FEF0)
#define CLASS_1_44884E8651008039_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x13F2FB70)
#define CLASS_1_44884E8651008039_EQUALS_OFFSET UNITYSDK_OFFSET(0x13F2FB00)
#define CLASS_1_44884E8651008039_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x13F2F800)
#define CLASS_1_44884E8651008039_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x13F2F2D0)
#define CLASS_1_44884E8651008039_GET_EVENTIDS_OFFSET UNITYSDK_OFFSET(0x13F2F3A0)
#define CLASS_1_44884E8651008039_GET_EXTRAMONSTERIDS_OFFSET UNITYSDK_OFFSET(0x13F2F360)
#define CLASS_1_44884E8651008039_GET_MAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0x13F2F300)
#define CLASS_1_44884E8651008039_GET_MAZECONFIGS_OFFSET UNITYSDK_OFFSET(0x13F2F340)
#define CLASS_1_44884E8651008039_GET_MAZEGROUPID_OFFSET UNITYSDK_OFFSET(0x13F2F320)
#define CLASS_1_44884E8651008039_GET_NPCMONSTERIDS_OFFSET UNITYSDK_OFFSET(0x13F2F380)
#define CLASS_1_44884E8651008039_GET_RECOMMENDEDDAMAGETYPES_OFFSET UNITYSDK_OFFSET(0x13F2F3C0)
#define CLASS_1_44884E8651008039_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x13F2F7E0)
#define CLASS_1_44884E8651008039_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x13F2F7B0)
#define CLASS_1_44884E8651008039_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x13F2F5B0)
#define CLASS_1_44884E8651008039_SET_EVENTIDS_OFFSET UNITYSDK_OFFSET(0x13F2F3B0)
#define CLASS_1_44884E8651008039_SET_EXTRAMONSTERIDS_OFFSET UNITYSDK_OFFSET(0x13F2F370)
#define CLASS_1_44884E8651008039_SET_MAPENTRANCEID_OFFSET UNITYSDK_OFFSET(0x13F2F310)
#define CLASS_1_44884E8651008039_SET_MAZECONFIGS_OFFSET UNITYSDK_OFFSET(0x13F2F350)
#define CLASS_1_44884E8651008039_SET_MAZEGROUPID_OFFSET UNITYSDK_OFFSET(0x13F2F330)
#define CLASS_1_44884E8651008039_SET_NPCMONSTERIDS_OFFSET UNITYSDK_OFFSET(0x13F2F390)
#define CLASS_1_44884E8651008039_SET_RECOMMENDEDDAMAGETYPES_OFFSET UNITYSDK_OFFSET(0x13F2F3D0)
#define CLASS_1_44884E8651008039_TOSTRING_OFFSET UNITYSDK_OFFSET(0x13F2F3E0)
#define CLASS_1_44884E8651008039__CLONE___OFFSET UNITYSDK_OFFSET(0x13F2FE60)
#define CLASS_1_44884E8651008039__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13F2FEB0)
#define CLASS_1_44884E8651008039__CTOR_OFFSET UNITYSDK_OFFSET(0x13F2F2A0)

inline static constexpr unsigned int Class_1_44884E8651008039_TypeDefinitionIndex = 74100;

class Class_1_44884E8651008039 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _NpcMonsterIDs_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _MazeConfigs_k__BackingField; // 0x18
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _EventIDs_k__BackingField; // 0x20
	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>* _RecommendedDamageTypes_k__BackingField; // 0x28
	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _ExtraMonsterIDs_k__BackingField; // 0x30
	::System::UInt32 _MapEntranceID_k__BackingField; // 0x38
	::System::UInt32 _MazeGroupID_k__BackingField; // 0x3C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a3, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a4, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a5, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a6, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>*))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Void _ctor_1(::Class_1_44884E8651008039* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_44884E8651008039*))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039__CTOR_1_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::System::UInt32 get_MapEntranceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_GET_MAPENTRANCEID_OFFSET))(this);
	}

	::System::Void set_MapEntranceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_SET_MAPENTRANCEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_MazeGroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_GET_MAZEGROUPID_OFFSET))(this);
	}

	::System::Void set_MazeGroupID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_SET_MAZEGROUPID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_MazeConfigs()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_GET_MAZECONFIGS_OFFSET))(this);
	}

	::System::Void set_MazeConfigs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_SET_MAZECONFIGS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_ExtraMonsterIDs()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_GET_EXTRAMONSTERIDS_OFFSET))(this);
	}

	::System::Void set_ExtraMonsterIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_SET_EXTRAMONSTERIDS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_NpcMonsterIDs()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_GET_NPCMONSTERIDS_OFFSET))(this);
	}

	::System::Void set_NpcMonsterIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_SET_NPCMONSTERIDS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_EventIDs()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_GET_EVENTIDS_OFFSET))(this);
	}

	::System::Void set_EventIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_SET_EVENTIDS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>* get_RecommendedDamageTypes()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_GET_RECOMMENDEDDAMAGETYPES_OFFSET))(this);
	}

	::System::Void set_RecommendedDamageTypes(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>*))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_SET_RECOMMENDEDDAMAGETYPES_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_44884E8651008039* a1, ::Class_1_44884E8651008039* a2)
	{
		return ((::System::Boolean(*)(::Class_1_44884E8651008039*, ::Class_1_44884E8651008039*))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_44884E8651008039* a1, ::Class_1_44884E8651008039* a2)
	{
		return ((::System::Boolean(*)(::Class_1_44884E8651008039*, ::Class_1_44884E8651008039*))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_44884E8651008039* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_44884E8651008039*))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_44884E8651008039* _Clone__()
	{
		return ((::Class_1_44884E8651008039*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039__CLONE___OFFSET))(this);
	}

	::System::Void Deconstruct(::System::UInt32& a1, ::System::UInt32& a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*& a3, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*& a4, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*& a5, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*& a6, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>*& a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*&, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*&, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*&, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*&, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType>*&))((::PBYTE)hIl2Cpp + CLASS_1_44884E8651008039_DECONSTRUCT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
