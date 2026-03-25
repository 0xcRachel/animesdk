#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_654A1B801DEFD99B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1182C2C0)
#define CLASS_1_654A1B801DEFD99B_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1182C2A0)
#define CLASS_1_654A1B801DEFD99B_METHOD_1_6055A93732CC885D_OFFSET UNITYSDK_OFFSET(0x1182BF00)
#define CLASS_1_654A1B801DEFD99B_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1182C250)
#define CLASS_1_654A1B801DEFD99B_METHOD_1_ABAD5F3FA90FCC52_OFFSET UNITYSDK_OFFSET(0x1182C200)
#define CLASS_1_654A1B801DEFD99B_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1182C2B0)
#define CLASS_1_654A1B801DEFD99B__CTOR_OFFSET UNITYSDK_OFFSET(0x1182BE90)

inline static constexpr unsigned int Class_1_654A1B801DEFD99B_TypeDefinitionIndex = 61385;

class Class_1_654A1B801DEFD99B : public ::System::Object
{
public:
	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x18
	::System::Int32 _Current_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + CLASS_1_654A1B801DEFD99B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABAD5F3FA90FCC52(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_654A1B801DEFD99B_METHOD_1_ABAD5F3FA90FCC52_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_654A1B801DEFD99B_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 get_Current()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_654A1B801DEFD99B_GET_CURRENT_OFFSET))(this);
	}

	::System::Void set_Current(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_654A1B801DEFD99B_SET_CURRENT_OFFSET))(this, value);
	}

	::System::Void Method_1_6055A93732CC885D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_654A1B801DEFD99B_METHOD_1_6055A93732CC885D_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_654A1B801DEFD99B_DISPOSE_OFFSET))(this);
	}
};
