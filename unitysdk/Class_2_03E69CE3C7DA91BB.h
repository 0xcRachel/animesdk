#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_746;
class Class_1_2C35EEA98A016E79;
class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_56FF45D7B2C55655;
class Class_1_8A6989C352B0F0F0;
class Class_1_DE4C6B309308A230;
class Class_2_03E69CE3C7DA91BB_Class_1_C5C828CA4F446C22;
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace RPG::Client::OpenWorld { template <typename T> class AOIBase_1; }
namespace RPG::Client::OpenWorld { template <typename T> class CellStruct_1; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_03E69CE3C7DA91BB_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0xDEA7930)
#define CLASS_2_03E69CE3C7DA91BB_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0xDEA7690)
#define CLASS_2_03E69CE3C7DA91BB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD8B0B40)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_1FFB392329DBE0D7_OFFSET UNITYSDK_OFFSET(0xDEA7D00)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_25BADF8EF1EF381C_OFFSET UNITYSDK_OFFSET(0xD8B11A0)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_2618A2405B570796_OFFSET UNITYSDK_OFFSET(0xDEA7C30)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_30A213C4922956EC_OFFSET UNITYSDK_OFFSET(0xD8B1750)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_356A8AB268440A1F_OFFSET UNITYSDK_OFFSET(0xDEA7A40)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_369D471BB09642DE_OFFSET UNITYSDK_OFFSET(0xDEA5900)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_5B0E7645775E7384_OFFSET UNITYSDK_OFFSET(0xDEA6AD0)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_75DEE7A74EA0F7C2_OFFSET UNITYSDK_OFFSET(0xDEA6BB0)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_78A7F6AA222F9724_OFFSET UNITYSDK_OFFSET(0xDEA7D20)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_7F5CA8E7BEEFA729_OFFSET UNITYSDK_OFFSET(0xDEA7D10)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_8E4BA57C3E028A8B_OFFSET UNITYSDK_OFFSET(0xDEA5480)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_98B06FDAFABC6F47_OFFSET UNITYSDK_OFFSET(0xDEA7DB0)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_AA51D98E74A4D871_OFFSET UNITYSDK_OFFSET(0xDEA7D40)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_B25AE6CE3CCE4CC9_OFFSET UNITYSDK_OFFSET(0xDEA7B10)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_BFA195F09950C507_OFFSET UNITYSDK_OFFSET(0xDEA61C0)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_C7D0E24443F285BF_OFFSET UNITYSDK_OFFSET(0xDEA73D0)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_CE83175C534F2FB9_OFFSET UNITYSDK_OFFSET(0xDEA62C0)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_D09E445D5507753D_OFFSET UNITYSDK_OFFSET(0xDEA7E10)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_D72C220B8A72C20B_OFFSET UNITYSDK_OFFSET(0xD8B1630)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_D9F96BE98AD4A861_OFFSET UNITYSDK_OFFSET(0xDEA6CF0)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_F2ADF4387B38B00E_OFFSET UNITYSDK_OFFSET(0xDEA7D60)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_F3C83B2CAC9EAE37_OFFSET UNITYSDK_OFFSET(0xDEA7D30)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_F77BA80DABE87FCB_OFFSET UNITYSDK_OFFSET(0xDEA50E0)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_FA36319A46D72876_OFFSET UNITYSDK_OFFSET(0xD8B0BF0)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_FC0E13587F119004_OFFSET UNITYSDK_OFFSET(0xDEA7750)
#define CLASS_2_03E69CE3C7DA91BB_METHOD_2_FCD3AEE931EAF09B_OFFSET UNITYSDK_OFFSET(0xD8B0CA0)
#define CLASS_2_03E69CE3C7DA91BB_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0xDEA7600)
#define CLASS_2_03E69CE3C7DA91BB__CCTOR_OFFSET UNITYSDK_OFFSET(0xDEA7AE0)
#define CLASS_2_03E69CE3C7DA91BB__CTOR_OFFSET UNITYSDK_OFFSET(0xD8B08C0)
#define CLASS_2_03E69CE3C7DA91BB__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0xDEA7120)
#define CLASS_2_03E69CE3C7DA91BB___IFIXBASEPROXY_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0xDEA7DE0)
#define CLASS_2_03E69CE3C7DA91BB___IFIXBASEPROXY_CHECKSTREAMING_OFFSET UNITYSDK_OFFSET(0xDEA7D80)
#define CLASS_2_03E69CE3C7DA91BB___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDEA7B00)
#define CLASS_2_03E69CE3C7DA91BB___IFIXBASEPROXY_QUADTREEOP_OFFSET UNITYSDK_OFFSET(0xDEA7D70)
#define CLASS_2_03E69CE3C7DA91BB___IFIXBASEPROXY__SOLVEINSTANCELODCALC_OFFSET UNITYSDK_OFFSET(0xDEA7D50)

inline static constexpr unsigned int Class_2_03E69CE3C7DA91BB_TypeDefinitionIndex = 58799;

class Class_2_03E69CE3C7DA91BB : public ::Class_1_5B228A4605C15E47
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_9()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_03E69CE3C7DA91BB_TypeDefinitionIndex)->GetStaticField(0x43C10);
	}
	::Class_1_2C35EEA98A016E79* Field_2_0; // 0x168
	::Class_2_03E69CE3C7DA91BB_Class_1_C5C828CA4F446C22* Field_2_5; // 0x170
	::System::Collections::Generic::List_1<::System::Tuple_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>*>* Field_2_8; // 0x178
	::Class_2_03E69CE3C7DA91BB_Class_1_C5C828CA4F446C22* Field_2_6; // 0x180
	::Class_2_03E69CE3C7DA91BB_Class_1_C5C828CA4F446C22* Field_2_7; // 0x188
	::System::Collections::Generic::Dictionary_2<::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*>* Field_2_1; // 0x190
	::RPG::Client::OpenWorld::CellStruct_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_4; // 0x198
	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Field_2_2; // 0x1A0
	::System::Boolean Field_2_3; // 0x1A8

	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_56FF45D7B2C55655* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_56FF45D7B2C55655*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_FA36319A46D72876(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_FA36319A46D72876_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCD3AEE931EAF09B(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_FCD3AEE931EAF09B_OFFSET))(this, a1, a2);
	}

	::System::Single Method_2_25BADF8EF1EF381C(::RPG::Client::OpenWorld::StreamingItemData* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_25BADF8EF1EF381C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D72C220B8A72C20B(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_D72C220B8A72C20B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30A213C4922956EC(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_30A213C4922956EC_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F77BA80DABE87FCB(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_F77BA80DABE87FCB_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_8E4BA57C3E028A8B(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_8E4BA57C3E028A8B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_369D471BB09642DE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_369D471BB09642DE_OFFSET))(this);
	}

	::System::Int32 Method_2_BFA195F09950C507(::Class_1_DE4C6B309308A230* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_BFA195F09950C507_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Int32 Method_2_CE83175C534F2FB9(::RPG::Client::OpenWorld::StreamingItemData* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2, ::Class_1_DE4C6B309308A230* a3, ::System::Boolean a4)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_DE4C6B309308A230*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_CE83175C534F2FB9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_5B0E7645775E7384(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_5B0E7645775E7384_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_D9F96BE98AD4A861(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::System::Boolean a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_D9F96BE98AD4A861_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _SolveInstanceLodCalc(::Class_1_3F28033F34305C46* a1, ::Class_1_DE4C6B309308A230* a2, ::RPG::Client::OpenWorld::StreamingItemData* a3, ::Class_1_8A6989C352B0F0F0* a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB__SOLVEINSTANCELODCALC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_C7D0E24443F285BF(::Class_0_16E4307DCC419505_746* a1, ::System::Boolean a2, ::Class_1_3F28033F34305C46* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_746*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_C7D0E24443F285BF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_QUADTREEOP_OFFSET))(this, a1);
	}

	::System::Void CheckStreaming(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_CHECKSTREAMING_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>* Method_2_FC0E13587F119004(::UnityEngine::Rect a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::OpenWorld::StreamingItemData*>*(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_FC0E13587F119004_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_75DEE7A74EA0F7C2(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_75DEE7A74EA0F7C2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_356A8AB268440A1F(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_356A8AB268440A1F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B25AE6CE3CCE4CC9(::Class_1_3F28033F34305C46* P0, ::Class_1_DE4C6B309308A230* P1, ::System::Boolean P2, ::System::Single P3, ::System::Boolean P4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_B25AE6CE3CCE4CC9_OFFSET))(this, P0, P1, P2, P3, P4);
	}

	::System::Int32 Method_2_2618A2405B570796(::Class_1_DE4C6B309308A230* P0, ::RPG::Client::OpenWorld::StreamingItemData* P1, ::RPG::Client::OpenWorld::StreamingItemData* P2, ::System::Int32 P3, ::System::Boolean P4)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_2618A2405B570796_OFFSET))(this, P0, P1, P2, P3, P4);
	}

	::System::Void Method_2_1FFB392329DBE0D7(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_1FFB392329DBE0D7_OFFSET))(this, P0);
	}

	::System::Void Method_2_7F5CA8E7BEEFA729(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_7F5CA8E7BEEFA729_OFFSET))(this, P0);
	}

	::System::Boolean Method_2_78A7F6AA222F9724(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_78A7F6AA222F9724_OFFSET))(this, P0);
	}

	::System::Boolean Method_2_F3C83B2CAC9EAE37(::RPG::Client::OpenWorld::StreamingItemData* P0, ::System::Boolean P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_F3C83B2CAC9EAE37_OFFSET))(this, P0, P1);
	}

	::System::Void Method_2_AA51D98E74A4D871(::Class_1_3F28033F34305C46* P0, ::Class_1_DE4C6B309308A230* P1, ::System::Boolean P2, ::System::Single P3, ::System::Boolean P4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_AA51D98E74A4D871_OFFSET))(this, P0, P1, P2, P3, P4);
	}

	::System::Void __iFixBaseProxy__SolveInstanceLodCalc(::Class_1_3F28033F34305C46* P0, ::Class_1_DE4C6B309308A230* P1, ::RPG::Client::OpenWorld::StreamingItemData* P2, ::Class_1_8A6989C352B0F0F0* P3, ::System::Int32 P4, ::System::Boolean P5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3F28033F34305C46*, ::Class_1_DE4C6B309308A230*, ::RPG::Client::OpenWorld::StreamingItemData*, ::Class_1_8A6989C352B0F0F0*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB___IFIXBASEPROXY__SOLVEINSTANCELODCALC_OFFSET))(this, P0, P1, P2, P3, P4, P5);
	}

	::System::Boolean Method_2_F2ADF4387B38B00E(::Class_0_16E4307DCC419505_746* P0, ::System::Boolean P1, ::Class_1_3F28033F34305C46* P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_746*, ::System::Boolean, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_F2ADF4387B38B00E_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_QuadTreeOp(::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::AOIBase_1<::RPG::Client::OpenWorld::StreamingItemData*>*))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB___IFIXBASEPROXY_QUADTREEOP_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_CheckStreaming(::UnityEngine::Vector3 P0, ::System::Single P1, ::System::Single& P2, ::System::Single& P3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB___IFIXBASEPROXY_CHECKSTREAMING_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Boolean Method_2_98B06FDAFABC6F47(::UnityEngine::Vector3 P0, ::System::Boolean P1, ::System::Single P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_98B06FDAFABC6F47_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __iFixBaseProxy_CheckStreamingLod(::UnityEngine::Vector3 P0, ::System::Single P1, ::System::Single& P2, ::System::Single& P3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB___IFIXBASEPROXY_CHECKSTREAMINGLOD_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Boolean Method_2_D09E445D5507753D(::UnityEngine::Vector3 P0, ::System::Boolean P1, ::System::Single P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_03E69CE3C7DA91BB_METHOD_2_D09E445D5507753D_OFFSET))(this, P0, P1, P2);
	}
};
