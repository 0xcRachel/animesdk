#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0D8C9ED8919282E9_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x168C9330)
#define CLASS_1_0D8C9ED8919282E9_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x168C92F0)
#define CLASS_1_0D8C9ED8919282E9_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x168C9310)
#define CLASS_1_0D8C9ED8919282E9_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0x168C92D0)
#define CLASS_1_0D8C9ED8919282E9_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x168C9340)
#define CLASS_1_0D8C9ED8919282E9_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x168C9300)
#define CLASS_1_0D8C9ED8919282E9_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x168C9320)
#define CLASS_1_0D8C9ED8919282E9_SET_ISSELF_OFFSET UNITYSDK_OFFSET(0x168C92E0)
#define CLASS_1_0D8C9ED8919282E9__CTOR_OFFSET UNITYSDK_OFFSET(0x168C9350)

inline static constexpr unsigned int Class_1_0D8C9ED8919282E9_TypeDefinitionIndex = 58866;

class Class_1_0D8C9ED8919282E9 : public ::System::Object
{
public:
	::System::UInt32 _GroupID_k__BackingField; // 0x10
	::System::UInt32 _InstanceID_k__BackingField; // 0x14
	::System::UInt32 _EntityID_k__BackingField; // 0x18
	::System::Boolean _IsSelf_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9__CTOR_OFFSET))(this);
	}

	::System::Boolean get_IsSelf()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_GET_ISSELF_OFFSET))(this);
	}

	::System::Void set_IsSelf(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_SET_ISSELF_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_SET_GROUPID_OFFSET))(this, a1);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_SET_INSTANCEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_EntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_GET_ENTITYID_OFFSET))(this);
	}

	::System::Void set_EntityID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0D8C9ED8919282E9_SET_ENTITYID_OFFSET))(this, a1);
	}
};
