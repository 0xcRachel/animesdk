#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02D30900317D93FD;
namespace System { class String; }

#define CLASS_1_813743369E0E31B2_1_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x10EAD300)
#define CLASS_1_813743369E0E31B2_1_GET_ISDUMMY_OFFSET UNITYSDK_OFFSET(0x10EAD320)
#define CLASS_1_813743369E0E31B2_1_GET_NODEID_OFFSET UNITYSDK_OFFSET(0x10EAD2E0)
#define CLASS_1_813743369E0E31B2_1_METHOD_1_9366A45A7F8C802A_OFFSET UNITYSDK_OFFSET(0x10EAD230)
#define CLASS_1_813743369E0E31B2_1_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x10EAD310)
#define CLASS_1_813743369E0E31B2_1_SET_NODEID_OFFSET UNITYSDK_OFFSET(0x10EAD2F0)
#define CLASS_1_813743369E0E31B2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10EAD2D0)

inline static constexpr unsigned int Class_1_813743369E0E31B2_1_TypeDefinitionIndex = 57498;

class Class_1_813743369E0E31B2_1 : public ::System::Object
{
public:
	::System::String* _IconPath_k__BackingField; // 0x10
	::System::UInt32 _NodeID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1__CTOR_OFFSET))(this);
	}

	static ::Class_1_813743369E0E31B2_1* Method_1_9366A45A7F8C802A(::Class_1_02D30900317D93FD* a1)
	{
		return ((::Class_1_813743369E0E31B2_1*(*)(::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_METHOD_1_9366A45A7F8C802A_OFFSET))(a1);
	}

	::System::UInt32 get_NodeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_GET_NODEID_OFFSET))(this);
	}

	::System::Void set_NodeID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_SET_NODEID_OFFSET))(this, value);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_GET_ICONPATH_OFFSET))(this);
	}

	::System::Void set_IconPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_SET_ICONPATH_OFFSET))(this, value);
	}

	::System::Boolean get_IsDummy()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_GET_ISDUMMY_OFFSET))(this);
	}
};
