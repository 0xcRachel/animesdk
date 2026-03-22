#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_746;
class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_56FF45D7B2C55655;
class Class_1_8A6989C352B0F0F0;
class Class_1_DE4C6B309308A230;
class Class_2_38412AC2D626BEE3;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::Client::OpenWorld { template <typename T> class AOIBase_1; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_C7353016387F9A86_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0x1057E0F0)
#define CLASS_2_C7353016387F9A86_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1057C3E0)
#define CLASS_2_C7353016387F9A86_INACTIVEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1057DF80)
#define CLASS_2_C7353016387F9A86_METHOD_2_031C5A23422D4BE8_OFFSET UNITYSDK_OFFSET(0x1057CC50)
#define CLASS_2_C7353016387F9A86_METHOD_2_0BB5DE3BEB963948_OFFSET UNITYSDK_OFFSET(0x1057E700)
#define CLASS_2_C7353016387F9A86_METHOD_2_1626D6FA8E8D11C7_OFFSET UNITYSDK_OFFSET(0x1057E6E0)
#define CLASS_2_C7353016387F9A86_METHOD_2_1DCD0EB57F2B3CF9_OFFSET UNITYSDK_OFFSET(0x1057E1B0)
#define CLASS_2_C7353016387F9A86_METHOD_2_2618A2405B570796_OFFSET UNITYSDK_OFFSET(0x1057E910)
#define CLASS_2_C7353016387F9A86_METHOD_2_26BE450038393AC5_OFFSET UNITYSDK_OFFSET(0x1057CEC0)
#define CLASS_2_C7353016387F9A86_METHOD_2_382FB8E18C7BBA24_OFFSET UNITYSDK_OFFSET(0x1057CFD0)
#define CLASS_2_C7353016387F9A86_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1057E2D0)
#define CLASS_2_C7353016387F9A86_METHOD_2_5271545E19753C49_OFFSET UNITYSDK_OFFSET(0x1057D290)
#define CLASS_2_C7353016387F9A86_METHOD_2_529176E12CEF1A3E_OFFSET UNITYSDK_OFFSET(0x1057C4C0)
#define CLASS_2_C7353016387F9A86_METHOD_2_53EE3217A30FF6BA_OFFSET UNITYSDK_OFFSET(0x1057DE30)
#define CLASS_2_C7353016387F9A86_METHOD_2_5AE65BC66F5834C0_OFFSET UNITYSDK_OFFSET(0x1057E3D0)
#define CLASS_2_C7353016387F9A86_METHOD_2_5AFFA079DA8B20AA_1_OFFSET UNITYSDK_OFFSET(0x1057E890)
#define CLASS_2_C7353016387F9A86_METHOD_2_5AFFA079DA8B20AA_OFFSET UNITYSDK_OFFSET(0x1057D970)
#define CLASS_2_C7353016387F9A86_METHOD_2_610CC44B5A1B9AE0_OFFSET UNITYSDK_OFFSET(0x1057C880)
#define CLASS_2_C7353016387F9A86_METHOD_2_78A7F6AA222F9724_OFFSET UNITYSDK_OFFSET(0x1057E6F0)
#define CLASS_2_C7353016387F9A86_METHOD_2_7D491329FA7D7B73_OFFSET UNITYSDK_OFFSET(0x1057E710)
#define CLASS_2_C7353016387F9A86_METHOD_2_81E2470A68E3D80B_OFFSET UNITYSDK_OFFSET(0x1057D3E0)
#define CLASS_2_C7353016387F9A86_METHOD_2_98B06FDAFABC6F47_OFFSET UNITYSDK_OFFSET(0x1057EA20)
#define CLASS_2_C7353016387F9A86_METHOD_2_9E9C8BD1128A2E9D_OFFSET UNITYSDK_OFFSET(0x1057E6B0)
#define CLASS_2_C7353016387F9A86_METHOD_2_A7297CA88DE22D58_OFFSET UNITYSDK_OFFSET(0x1057E850)
#define CLASS_2_C7353016387F9A86_METHOD_2_B25AE6CE3CCE4CC9_OFFSET UNITYSDK_OFFSET(0x1057E730)
#define CLASS_2_C7353016387F9A86_METHOD_2_BA68B552356E6ED5_OFFSET UNITYSDK_OFFSET(0x1057E870)
#define CLASS_2_C7353016387F9A86_METHOD_2_BFA195F09950C507_OFFSET UNITYSDK_OFFSET(0x1057D9E0)
#define CLASS_2_C7353016387F9A86_METHOD_2_C168B9DE7DC85F72_OFFSET UNITYSDK_OFFSET(0x1057DAE0)
#define CLASS_2_C7353016387F9A86_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1057CF80)
#define CLASS_2_C7353016387F9A86_METHOD_2_D32A5475BAED534D_OFFSET UNITYSDK_OFFSET(0x1057D7A0)
#define CLASS_2_C7353016387F9A86_METHOD_2_E8077BB5F63D9F47_OFFSET UNITYSDK_OFFSET(0x1057E6C0)
#define CLASS_2_C7353016387F9A86_METHOD_2_F2ADF4387B38B00E_OFFSET UNITYSDK_OFFSET(0x1057E720)
#define CLASS_2_C7353016387F9A86_METHOD_2_F3C83B2CAC9EAE37_OFFSET UNITYSDK_OFFSET(0x1057E9E0)
#define CLASS_2_C7353016387F9A86_METHOD_2_FA0119DD445A672F_OFFSET UNITYSDK_OFFSET(0x1057EA50)
#define CLASS_2_C7353016387F9A86_METHOD_2_FFE87EC7E422FD18_OFFSET UNITYSDK_OFFSET(0x1057CCD0)
#define CLASS_2_C7353016387F9A86_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0x1057D920)
#define CLASS_2_C7353016387F9A86__CTOR_OFFSET UNITYSDK_OFFSET(0x1057C240)
#define CLASS_2_C7353016387F9A86__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0x1057D570)
#define CLASS_2_C7353016387F9A86___IFIXBASEPROXY_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0x1057E9F0)
#define CLASS_2_C7353016387F9A86___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1057E6D0)
#define CLASS_2_C7353016387F9A86___IFIXBASEPROXY_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0x1057E880)
#define CLASS_2_C7353016387F9A86___IFIXBASEPROXY__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0x1057E860)

inline static constexpr unsigned int Class_2_C7353016387F9A86_TypeDefinitionIndex = 58794;

class Class_2_C7353016387F9A86 : public ::Class_1_5B228A4605C15E47
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_1; // 0x168
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Field_2_0; // 0x170

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_56FF45D7B2C55655* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_56FF45D7B2C55655*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_529176E12CEF1A3E(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_529176E12CEF1A3E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_610CC44B5A1B9AE0(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_610CC44B5A1B9AE0_OFFSET))(this, a1);
	}

	::System::Void Method_2_031C5A23422D4BE8(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_031C5A23422D4BE8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FFE87EC7E422FD18(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_FFE87EC7E422FD18_OFFSET))(this, a1);
	}

	::System::Void Method_2_26BE450038393AC5(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_26BE450038393AC5_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_382FB8E18C7BBA24(::Class_0_16E4307DCC419505_746* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_746*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_382FB8E18C7BBA24_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5271545E19753C49(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_5271545E19753C49_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_81E2470A68E3D80B(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_81E2470A68E3D80B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_D32A5475BAED534D(::Class_1_8A6989C352B0F0F0* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_D32A5475BAED534D_OFFSET))(this, a1, a2);
	}

	::System::Void QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_QUADTREEOP_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_2_5AFFA079DA8B20AA()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_5AFFA079DA8B20AA_OFFSET))(this);
	}

	::System::Int32 Method_2_BFA195F09950C507(::Class_1_DE4C6B309308A230* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_BFA195F09950C507_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_C168B9DE7DC85F72(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_C168B9DE7DC85F72_OFFSET))(this, a1, a2);
	}

	::System::Boolean InActiveInstance(::Class_1_8A6989C352B0F0F0* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_INACTIVEINSTANCE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void CheckStreaming(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_CHECKSTREAMING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_1DCD0EB57F2B3CF9(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_1DCD0EB57F2B3CF9_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_38412AC2D626BEE3* Method_2_53EE3217A30FF6BA(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_2_38412AC2D626BEE3*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_53EE3217A30FF6BA_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_5AE65BC66F5834C0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_5AE65BC66F5834C0_OFFSET))(this, a1);
	}

	::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Method_2_9E9C8BD1128A2E9D()
	{
		return ((::Collections::Pooled::PooledDictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_9E9C8BD1128A2E9D_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>* Method_2_E8077BB5F63D9F47()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_E8077BB5F63D9F47_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1626D6FA8E8D11C7(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_1626D6FA8E8D11C7_OFFSET))(this, P0);
	}

	::System::Boolean Method_2_78A7F6AA222F9724(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_78A7F6AA222F9724_OFFSET))(this, P0);
	}

	::System::Void Method_2_0BB5DE3BEB963948(::Class_1_8A6989C352B0F0F0* P0, ::System::Boolean P1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_0BB5DE3BEB963948_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_7D491329FA7D7B73(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_7D491329FA7D7B73_OFFSET))(this, P0);
	}

	::System::Boolean Method_2_F2ADF4387B38B00E(::Class_0_16E4307DCC419505_746* P0, ::System::Boolean P1, ::Class_1_3F28033F34305C46* P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_746*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_F2ADF4387B38B00E_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_B25AE6CE3CCE4CC9(::Class_1_3F28033F34305C46* P0, ::Class_1_DE4C6B309308A230* P1, ::System::Boolean P2, ::System::Single P3, ::System::Boolean P4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_B25AE6CE3CCE4CC9_OFFSET))(this, P0, P1, P2, P3, P4);
	}

	::System::Void Method_2_A7297CA88DE22D58(::Class_1_DE4C6B309308A230* P0, ::System::Boolean P1, ::System::Single P2, ::Class_1_3F28033F34305C46* P3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_A7297CA88DE22D58_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void __iFixBaseProxy__SolveInstanceLodCalc(::Class_1_3F28033F34305C46* P0, ::Class_1_DE4C6B309308A230* P1, ::RPG::Client::OpenWorld::StreamingItemData* P2, ::Class_1_8A6989C352B0F0F0* P3, ::System::Int32 P4, ::System::Boolean P5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86___IFIXBASEPROXY__SOLVEINSTANCELODCALC_OFFSET))(this, P0, P1, P2, P3, P4, P5);
	}

	::System::Boolean Method_2_BA68B552356E6ED5(::Class_1_8A6989C352B0F0F0* P0, ::System::Int32 P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_BA68B552356E6ED5_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86___IFIXBASEPROXY_QUADTREEOP_OFFSET))(this, P0);
	}

	::System::Collections::IEnumerator* Method_2_5AFFA079DA8B20AA_1()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_5AFFA079DA8B20AA_1_OFFSET))(this);
	}

	::System::Int32 Method_2_2618A2405B570796(::Class_1_DE4C6B309308A230* P0, ::RPG::Client::OpenWorld::StreamingItemData* P1, ::RPG::Client::OpenWorld::StreamingItemData* P2, ::System::Int32 P3, ::System::Boolean P4)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_2618A2405B570796_OFFSET))(this, P0, P1, P2, P3, P4);
	}

	::System::Boolean Method_2_F3C83B2CAC9EAE37(::RPG::Client::OpenWorld::StreamingItemData* P0, ::System::Boolean P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_F3C83B2CAC9EAE37_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_CheckStreaming(::UnityEngine::Vector3 P0, ::System::Single P1, ::System::Single& P2, ::System::Single& P3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86___IFIXBASEPROXY_CHECKSTREAMING_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Boolean Method_2_98B06FDAFABC6F47(::UnityEngine::Vector3 P0, ::System::Boolean P1, ::System::Single P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_98B06FDAFABC6F47_OFFSET))(this, P0, P1, P2);
	}

	::System::Void Method_2_FA0119DD445A672F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C7353016387F9A86_METHOD_2_FA0119DD445A672F_OFFSET))(this);
	}
};
