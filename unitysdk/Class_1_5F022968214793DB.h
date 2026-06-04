#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1F84CFE380A91B33;
class Class_1_D33B7D6901AE39E9;
class Class_3_1A9D32B2B1D681B8;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_5F022968214793DB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x183538D0)
#define CLASS_1_5F022968214793DB_METHOD_1_138508F5F5843035_OFFSET UNITYSDK_OFFSET(0x18354680)
#define CLASS_1_5F022968214793DB_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x18353AF0)
#define CLASS_1_5F022968214793DB_METHOD_1_36D20622B6E50FD6_OFFSET UNITYSDK_OFFSET(0x183558F0)
#define CLASS_1_5F022968214793DB_METHOD_1_471DE2274AF991C0_OFFSET UNITYSDK_OFFSET(0x18355120)
#define CLASS_1_5F022968214793DB_METHOD_1_514504F252C645B0_OFFSET UNITYSDK_OFFSET(0x18354A00)
#define CLASS_1_5F022968214793DB_METHOD_1_5C9C00039770DDEA_OFFSET UNITYSDK_OFFSET(0x18356D80)
#define CLASS_1_5F022968214793DB_METHOD_1_6112A48C9E0801E1_OFFSET UNITYSDK_OFFSET(0x183563C0)
#define CLASS_1_5F022968214793DB_METHOD_1_8B59D7F636464C6D_OFFSET UNITYSDK_OFFSET(0x18356EC0)
#define CLASS_1_5F022968214793DB_METHOD_1_9C72894CB5D45A5A_OFFSET UNITYSDK_OFFSET(0x183561C0)
#define CLASS_1_5F022968214793DB_METHOD_1_9D6C85109864ED0C_OFFSET UNITYSDK_OFFSET(0x18353A60)
#define CLASS_1_5F022968214793DB_METHOD_1_AF60D10E8BC623DF_OFFSET UNITYSDK_OFFSET(0x18354B70)
#define CLASS_1_5F022968214793DB_METHOD_1_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0x183544E0)
#define CLASS_1_5F022968214793DB_METHOD_1_BEA785FF5503F2A8_OFFSET UNITYSDK_OFFSET(0x18356A40)
#define CLASS_1_5F022968214793DB_METHOD_1_E4DC29FDF68EBA85_OFFSET UNITYSDK_OFFSET(0x18355340)
#define CLASS_1_5F022968214793DB_METHOD_1_FAF6B2EBCBEEA5B9_OFFSET UNITYSDK_OFFSET(0x183562F0)
#define CLASS_1_5F022968214793DB_METHOD_1_FDE98962EC6197E2_OFFSET UNITYSDK_OFFSET(0x18353E40)
#define CLASS_1_5F022968214793DB__CTOR_OFFSET UNITYSDK_OFFSET(0x18353850)
#define CLASS_1_5F022968214793DB___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x18356F80)

inline static constexpr unsigned int Class_1_5F022968214793DB_TypeDefinitionIndex = 39327;

class Class_1_5F022968214793DB : public ::System::Object
{
public:
	::Class_1_D33B7D6901AE39E9* Field_1_0; // 0x10
	::Class_3_1A9D32B2B1D681B8* Field_1_1; // 0x18
	::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Boolean>* Field_1_2; // 0x20
	::RPG::GameCore::MatchThreePropType Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_D33B7D6901AE39E9* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D33B7D6901AE39E9*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_1_FDE98962EC6197E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB_METHOD_1_FDE98962EC6197E2_OFFSET))(this);
	}

	::System::Void Method_1_138508F5F5843035(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB_METHOD_1_138508F5F5843035_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_471DE2274AF991C0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB_METHOD_1_471DE2274AF991C0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E4DC29FDF68EBA85(::RPG::GameCore::MatchThreePropType a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MatchThreePropType, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB_METHOD_1_E4DC29FDF68EBA85_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_36D20622B6E50FD6(::RPG::GameCore::MatchThreePropType a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MatchThreePropType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB_METHOD_1_36D20622B6E50FD6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9C72894CB5D45A5A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB_METHOD_1_9C72894CB5D45A5A_OFFSET))(this);
	}

	::System::Boolean Method_1_514504F252C645B0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB_METHOD_1_514504F252C645B0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_AF60D10E8BC623DF(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB_METHOD_1_AF60D10E8BC623DF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FAF6B2EBCBEEA5B9(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB_METHOD_1_FAF6B2EBCBEEA5B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6112A48C9E0801E1(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB_METHOD_1_6112A48C9E0801E1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BEA785FF5503F2A8(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB_METHOD_1_BEA785FF5503F2A8_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_8B59D7F636464C6D(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB_METHOD_1_8B59D7F636464C6D_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C9C00039770DDEA(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB_METHOD_1_5C9C00039770DDEA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB_METHOD_1_B768DA94E3FD91D9_OFFSET))(this);
	}

	::Class_1_1F84CFE380A91B33* Method_1_9D6C85109864ED0C()
	{
		return ((::Class_1_1F84CFE380A91B33*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB_METHOD_1_9D6C85109864ED0C_OFFSET))(this);
	}

	::System::Boolean __ctor_b__0_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_5F022968214793DB___CTOR_B__0_0_OFFSET))(this, a1);
	}
};
