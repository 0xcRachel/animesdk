#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_02D30900317D93FD;
class Class_1_83D980B81C9B9AFA;
class Class_1_D94CA56F333E077E_1;
namespace System { class String; }

#define CLASS_1_A62096624EE1683E_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xFEB52C0)
#define CLASS_1_A62096624EE1683E_GET_ISDUMMY_OFFSET UNITYSDK_OFFSET(0xFEB5310)
#define CLASS_1_A62096624EE1683E_GET_NODEID_OFFSET UNITYSDK_OFFSET(0xFEB52A0)
#define CLASS_1_A62096624EE1683E_METHOD_1_250203490119AF47_OFFSET UNITYSDK_OFFSET(0xFEB5220)
#define CLASS_1_A62096624EE1683E_METHOD_1_E4046F7A68A6D5B6_OFFSET UNITYSDK_OFFSET(0xFEB5190)
#define CLASS_1_A62096624EE1683E_SET_ISDUMMY_OFFSET UNITYSDK_OFFSET(0xFEB5320)
#define CLASS_1_A62096624EE1683E_SET_NODEID_OFFSET UNITYSDK_OFFSET(0xFEB52B0)
#define CLASS_1_A62096624EE1683E__CTOR_OFFSET UNITYSDK_OFFSET(0xFEB5210)

inline static constexpr unsigned int Class_1_A62096624EE1683E_TypeDefinitionIndex = 57497;

class Class_1_A62096624EE1683E : public ::System::Object
{
public:
	::Class_1_D94CA56F333E077E_1* Field_1_2; // 0x10
	::System::Boolean _IsDummy_k__BackingField; // 0x18
	::System::UInt32 _NodeID_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A62096624EE1683E__CTOR_OFFSET))(this);
	}

	static ::Class_1_A62096624EE1683E* Method_1_E4046F7A68A6D5B6(::Class_1_02D30900317D93FD* a1)
	{
		return ((::Class_1_A62096624EE1683E*(*)(::Class_1_02D30900317D93FD*))((::PBYTE)hIl2Cpp + CLASS_1_A62096624EE1683E_METHOD_1_E4046F7A68A6D5B6_OFFSET))(a1);
	}

	static ::Class_1_A62096624EE1683E* Method_1_250203490119AF47(::Class_1_83D980B81C9B9AFA* a1)
	{
		return ((::Class_1_A62096624EE1683E*(*)(::Class_1_83D980B81C9B9AFA*))((::PBYTE)hIl2Cpp + CLASS_1_A62096624EE1683E_METHOD_1_250203490119AF47_OFFSET))(a1);
	}

	::System::UInt32 get_NodeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A62096624EE1683E_GET_NODEID_OFFSET))(this);
	}

	::System::Void set_NodeID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A62096624EE1683E_SET_NODEID_OFFSET))(this, value);
	}

	::System::String* get_IconPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A62096624EE1683E_GET_ICONPATH_OFFSET))(this);
	}

	::System::Boolean get_IsDummy()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A62096624EE1683E_GET_ISDUMMY_OFFSET))(this);
	}

	::System::Void set_IsDummy(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A62096624EE1683E_SET_ISDUMMY_OFFSET))(this, value);
	}
};
