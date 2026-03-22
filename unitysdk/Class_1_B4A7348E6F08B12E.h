#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_5E0FF7764DCED633;
class Class_1_867B6CE75953535A;
class Class_3_1A9D32B2B1D681B8;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_B4A7348E6F08B12E_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16082DB0)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_05022A5583A6D8E7_OFFSET UNITYSDK_OFFSET(0x16084450)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_138508F5F5843035_OFFSET UNITYSDK_OFFSET(0x16083B50)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x16082FE0)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_2D965250E71F6EFC_OFFSET UNITYSDK_OFFSET(0x16084010)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_36D20622B6E50FD6_OFFSET UNITYSDK_OFFSET(0x16084BD0)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_50A46EF80A524C98_OFFSET UNITYSDK_OFFSET(0x16083ED0)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_5C9C00039770DDEA_OFFSET UNITYSDK_OFFSET(0x16086120)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_995B4AEB9D9468D5_OFFSET UNITYSDK_OFFSET(0x16082F40)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_9C72894CB5D45A5A_OFFSET UNITYSDK_OFFSET(0x160856C0)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_AF8383E406337273_OFFSET UNITYSDK_OFFSET(0x16086270)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_B4F62DAE6410B22A_OFFSET UNITYSDK_OFFSET(0x160858C0)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_BBC94FFF3D82D39F_OFFSET UNITYSDK_OFFSET(0x16085E80)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_D1A9A27748E46319_OFFSET UNITYSDK_OFFSET(0x160839C0)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_F3FBF1431D678942_OFFSET UNITYSDK_OFFSET(0x16084650)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_FAF6B2EBCBEEA5B9_OFFSET UNITYSDK_OFFSET(0x160857F0)
#define CLASS_1_B4A7348E6F08B12E_METHOD_1_FDE98962EC6197E2_OFFSET UNITYSDK_OFFSET(0x16083330)
#define CLASS_1_B4A7348E6F08B12E__CTOR_OFFSET UNITYSDK_OFFSET(0x16082D40)
#define CLASS_1_B4A7348E6F08B12E___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x16086360)

inline static constexpr unsigned int Class_1_B4A7348E6F08B12E_TypeDefinitionIndex = 31860;

class Class_1_B4A7348E6F08B12E : public ::System::Object
{
public:
	::Class_3_1A9D32B2B1D681B8* Field_1_1; // 0x10
	::Class_1_867B6CE75953535A* Field_1_0; // 0x18
	::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Boolean>* Field_1_2; // 0x20
	::RPG::GameCore::MatchThreePropType Field_1_3; // 0x28

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_1A9D32B2B1D681B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_1A9D32B2B1D681B8*))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Boolean Method_1_FDE98962EC6197E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_FDE98962EC6197E2_OFFSET))(this);
	}

	::System::Void Method_1_138508F5F5843035(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_138508F5F5843035_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_05022A5583A6D8E7(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_05022A5583A6D8E7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F3FBF1431D678942(::RPG::GameCore::MatchThreePropType a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MatchThreePropType, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_F3FBF1431D678942_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_36D20622B6E50FD6(::RPG::GameCore::MatchThreePropType a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MatchThreePropType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_36D20622B6E50FD6_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_9C72894CB5D45A5A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_9C72894CB5D45A5A_OFFSET))(this);
	}

	::System::Boolean Method_1_50A46EF80A524C98(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_50A46EF80A524C98_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_2D965250E71F6EFC(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_2D965250E71F6EFC_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FAF6B2EBCBEEA5B9(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_FAF6B2EBCBEEA5B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B4F62DAE6410B22A(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_B4F62DAE6410B22A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_BBC94FFF3D82D39F(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_BBC94FFF3D82D39F_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_AF8383E406337273(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_AF8383E406337273_OFFSET))(this, a1);
	}

	::System::Void Method_1_5C9C00039770DDEA(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_5C9C00039770DDEA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D1A9A27748E46319()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_D1A9A27748E46319_OFFSET))(this);
	}

	::Class_1_5E0FF7764DCED633* Method_1_995B4AEB9D9468D5()
	{
		return ((::Class_1_5E0FF7764DCED633*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E_METHOD_1_995B4AEB9D9468D5_OFFSET))(this);
	}

	::System::Boolean __ctor_b__0_0(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> gridPos)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_B4A7348E6F08B12E___CTOR_B__0_0_OFFSET))(this, gridPos);
	}
};
