#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_16214D4BC9EF44B9;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2E687B98F61BD107_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD529500)
#define CLASS_1_2E687B98F61BD107_GET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0xD529730)
#define CLASS_1_2E687B98F61BD107_GET_SORTFILTERITEMS_OFFSET UNITYSDK_OFFSET(0xD529750)
#define CLASS_1_2E687B98F61BD107_METHOD_1_25DEBC0111DB56B4_OFFSET UNITYSDK_OFFSET(0xD5295F0)
#define CLASS_1_2E687B98F61BD107_METHOD_1_60A1EBE4AA36C891_OFFSET UNITYSDK_OFFSET(0xD529580)
#define CLASS_1_2E687B98F61BD107_SET_GROUPINDEX_OFFSET UNITYSDK_OFFSET(0xD529740)
#define CLASS_1_2E687B98F61BD107_SET_SORTFILTERITEMS_OFFSET UNITYSDK_OFFSET(0xD529760)
#define CLASS_1_2E687B98F61BD107__CTOR_OFFSET UNITYSDK_OFFSET(0xD5294C0)

inline static constexpr unsigned int Class_1_2E687B98F61BD107_TypeDefinitionIndex = 60524;

class Class_1_2E687B98F61BD107 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2E687B98F61BD107_TypeDefinitionIndex)->GetStaticField(0x11680);
	}
	::System::Collections::Generic::List_1<::Class_1_16214D4BC9EF44B9*>* _SortFilterItems_k__BackingField; // 0x10
	::System::UInt32 _GroupIndex_k__BackingField; // 0x18

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2E687B98F61BD107__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E687B98F61BD107_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_60A1EBE4AA36C891(::Class_1_16214D4BC9EF44B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_16214D4BC9EF44B9*))((::PBYTE)hIl2Cpp + CLASS_1_2E687B98F61BD107_METHOD_1_60A1EBE4AA36C891_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_25DEBC0111DB56B4(::System::UInt32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2E687B98F61BD107_METHOD_1_25DEBC0111DB56B4_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupIndex()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E687B98F61BD107_GET_GROUPINDEX_OFFSET))(this);
	}

	::System::Void set_GroupIndex(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2E687B98F61BD107_SET_GROUPINDEX_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::Class_1_16214D4BC9EF44B9*>* get_SortFilterItems()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_16214D4BC9EF44B9*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2E687B98F61BD107_GET_SORTFILTERITEMS_OFFSET))(this);
	}

	::System::Void set_SortFilterItems(::System::Collections::Generic::List_1<::Class_1_16214D4BC9EF44B9*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_16214D4BC9EF44B9*>*))((::PBYTE)hIl2Cpp + CLASS_1_2E687B98F61BD107_SET_SORTFILTERITEMS_OFFSET))(this, value);
	}
};
