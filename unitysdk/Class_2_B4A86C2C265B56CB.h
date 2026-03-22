#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47.h"

class Class_0_16E4307DCC419505_746;
class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_56FF45D7B2C55655;
class Class_1_8A6989C352B0F0F0;
class Class_1_DE4C6B309308A230;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_B4A86C2C265B56CB_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x8791100)
#define CLASS_2_B4A86C2C265B56CB_METHOD_2_001E6A5843D87992_OFFSET UNITYSDK_OFFSET(0x8791E80)
#define CLASS_2_B4A86C2C265B56CB_METHOD_2_2658A1BA84098413_OFFSET UNITYSDK_OFFSET(0x8790FB0)
#define CLASS_2_B4A86C2C265B56CB_METHOD_2_66170159D89D3CBE_OFFSET UNITYSDK_OFFSET(0x87915C0)
#define CLASS_2_B4A86C2C265B56CB_METHOD_2_6ED5BB9E67497920_OFFSET UNITYSDK_OFFSET(0x8791CA0)
#define CLASS_2_B4A86C2C265B56CB_METHOD_2_9E15D83BA029ED4B_OFFSET UNITYSDK_OFFSET(0x87913D0)
#define CLASS_2_B4A86C2C265B56CB_METHOD_2_BA68B552356E6ED5_OFFSET UNITYSDK_OFFSET(0x8791EA0)
#define CLASS_2_B4A86C2C265B56CB_METHOD_2_BF7F293AEAA5E93F_OFFSET UNITYSDK_OFFSET(0x8791E50)
#define CLASS_2_B4A86C2C265B56CB_METHOD_2_F2ADF4387B38B00E_OFFSET UNITYSDK_OFFSET(0x8791E70)
#define CLASS_2_B4A86C2C265B56CB__CTOR_OFFSET UNITYSDK_OFFSET(0x8790F60)
#define CLASS_2_B4A86C2C265B56CB__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0x8791820)
#define CLASS_2_B4A86C2C265B56CB___IFIXBASEPROXY_GETITEMLODLEVEL_OFFSET UNITYSDK_OFFSET(0x8791E60)
#define CLASS_2_B4A86C2C265B56CB___IFIXBASEPROXY__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0x8791E90)

inline static constexpr unsigned int Class_2_B4A86C2C265B56CB_TypeDefinitionIndex = 58772;

class Class_2_B4A86C2C265B56CB : public ::Class_1_5B228A4605C15E47
{
public:
	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_56FF45D7B2C55655* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_56FF45D7B2C55655*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_B4A86C2C265B56CB__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_2658A1BA84098413(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_B4A86C2C265B56CB_METHOD_2_2658A1BA84098413_OFFSET))(this, a1);
	}

	::System::Int32 GetItemLodLevel(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::RPG::Client::OpenWorld::StreamingItemData* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B4A86C2C265B56CB_GETITEMLODLEVEL_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_9E15D83BA029ED4B(::Class_0_16E4307DCC419505_746* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_746*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_B4A86C2C265B56CB_METHOD_2_9E15D83BA029ED4B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_66170159D89D3CBE(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_B4A86C2C265B56CB_METHOD_2_66170159D89D3CBE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B4A86C2C265B56CB__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_6ED5BB9E67497920(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B4A86C2C265B56CB_METHOD_2_6ED5BB9E67497920_OFFSET))(this, a1, a2);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_BF7F293AEAA5E93F(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_B4A86C2C265B56CB_METHOD_2_BF7F293AEAA5E93F_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetItemLodLevel(::Class_1_3F28033F34305C46* P0, ::Class_1_DE4C6B309308A230* P1, ::RPG::Client::OpenWorld::StreamingItemData* P2, ::RPG::Client::OpenWorld::StreamingItemData* P3, ::System::Int32 P4, ::System::Boolean P5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B4A86C2C265B56CB___IFIXBASEPROXY_GETITEMLODLEVEL_OFFSET))(this, P0, P1, P2, P3, P4, P5);
	}

	::System::Boolean Method_2_F2ADF4387B38B00E(::Class_0_16E4307DCC419505_746* P0, ::System::Boolean P1, ::Class_1_3F28033F34305C46* P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_746*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_B4A86C2C265B56CB_METHOD_2_F2ADF4387B38B00E_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_001E6A5843D87992(::Class_1_DE4C6B309308A230* P0, ::System::Boolean P1, ::System::Single P2, ::Class_1_3F28033F34305C46* P3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_B4A86C2C265B56CB_METHOD_2_001E6A5843D87992_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void __iFixBaseProxy__SolveInstanceLodCalc(::Class_1_3F28033F34305C46* P0, ::Class_1_DE4C6B309308A230* P1, ::RPG::Client::OpenWorld::StreamingItemData* P2, ::Class_1_8A6989C352B0F0F0* P3, ::System::Int32 P4, ::System::Boolean P5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B4A86C2C265B56CB___IFIXBASEPROXY__SOLVEINSTANCELODCALC_OFFSET))(this, P0, P1, P2, P3, P4, P5);
	}

	::System::Boolean Method_2_BA68B552356E6ED5(::Class_1_8A6989C352B0F0F0* P0, ::System::Int32 P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B4A86C2C265B56CB_METHOD_2_BA68B552356E6ED5_OFFSET))(this, P0, P1);
	}
};
