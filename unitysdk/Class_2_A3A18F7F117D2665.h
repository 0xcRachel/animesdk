#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"
#include "unitysdk/Enum_3_75A5C8C4100A8E33_1.h"

class Class_1_BD3679861BD0C676;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_A3A18F7F117D2665_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x10F8A5A0)
#define CLASS_2_A3A18F7F117D2665_METHOD_2_413351932F8E5F3D_OFFSET UNITYSDK_OFFSET(0x10F8A6B0)
#define CLASS_2_A3A18F7F117D2665_METHOD_2_E2CDB6B22CCEBA97_OFFSET UNITYSDK_OFFSET(0x10F8AEE0)
#define CLASS_2_A3A18F7F117D2665_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x10F8AB00)
#define CLASS_2_A3A18F7F117D2665_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x10F8A600)
#define CLASS_2_A3A18F7F117D2665__CTOR_OFFSET UNITYSDK_OFFSET(0x10F8AD60)
#define CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x10F8AE00)
#define CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x10F8AF50)
#define CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x10F8AE70)

inline static constexpr unsigned int Class_2_A3A18F7F117D2665_TypeDefinitionIndex = 51933;

class Class_2_A3A18F7F117D2665 : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_2_1; // 0x10
	::System::UInt32 Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665__CTOR_OFFSET))(this);
	}

	::System::Boolean IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665_ISCONCERNEDWITH_OFFSET))(this, a1);
	}

	::System::Void UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665_UPDATEBEFORE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_413351932F8E5F3D(::Class_1_BD3679861BD0C676* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD3679861BD0C676*))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665_METHOD_2_413351932F8E5F3D_OFFSET))(this, a1);
	}

	::System::Void UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665_UPDATEAFTER_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy_IsConcernedWith(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_ISCONCERNEDWITH_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateBefore(::Enum_3_75A5C8C4100A8E33_1 P0, ::System::Collections::Generic::IList_1<::System::UInt32>* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_UPDATEBEFORE_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_E2CDB6B22CCEBA97(::Class_1_BD3679861BD0C676* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BD3679861BD0C676*))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665_METHOD_2_E2CDB6B22CCEBA97_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_UpdateAfter(::Enum_3_75A5C8C4100A8E33_1 P0)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_75A5C8C4100A8E33_1))((::PBYTE)hIl2Cpp + CLASS_2_A3A18F7F117D2665___IFIXBASEPROXY_UPDATEAFTER_OFFSET))(this, P0);
	}
};
