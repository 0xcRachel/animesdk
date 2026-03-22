#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/RendererMoveReason.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0A24888DF04C995E_1;
class Class_1_6DE8726ADEF173A7_4;
class Class_1_E5DFDD7C057D0C86;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_06AD3F39AE01F837_CLEAR_OFFSET UNITYSDK_OFFSET(0x160BD860)
#define CLASS_1_06AD3F39AE01F837_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x160BD800)
#define CLASS_1_06AD3F39AE01F837_METHOD_1_3F6435A17B157AFD_OFFSET UNITYSDK_OFFSET(0x160BD0B0)
#define CLASS_1_06AD3F39AE01F837_METHOD_1_47680E2642F37A1B_OFFSET UNITYSDK_OFFSET(0x160BD570)
#define CLASS_1_06AD3F39AE01F837_METHOD_1_60A1EBE4AA36C891_OFFSET UNITYSDK_OFFSET(0x160BD490)
#define CLASS_1_06AD3F39AE01F837_METHOD_1_73560EEB9780F38F_OFFSET UNITYSDK_OFFSET(0x160BD1E0)
#define CLASS_1_06AD3F39AE01F837_METHOD_1_7C91CE8047BE24E8_OFFSET UNITYSDK_OFFSET(0x160BD290)
#define CLASS_1_06AD3F39AE01F837_METHOD_1_952453844D88CADD_OFFSET UNITYSDK_OFFSET(0x160BD500)
#define CLASS_1_06AD3F39AE01F837_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x160BD790)
#define CLASS_1_06AD3F39AE01F837_METHOD_1_D605F1EFFC4B0D43_OFFSET UNITYSDK_OFFSET(0x160BCFE0)
#define CLASS_1_06AD3F39AE01F837_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x160BD6C0)
#define CLASS_1_06AD3F39AE01F837_METHOD_1_E8868ECCE7FD7062_OFFSET UNITYSDK_OFFSET(0x160BD380)
#define CLASS_1_06AD3F39AE01F837_ONALLOC_OFFSET UNITYSDK_OFFSET(0x160BDBA0)
#define CLASS_1_06AD3F39AE01F837_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x160BDC10)
#define CLASS_1_06AD3F39AE01F837__CTOR_OFFSET UNITYSDK_OFFSET(0x160BDC50)

inline static constexpr unsigned int Class_1_06AD3F39AE01F837_TypeDefinitionIndex = 32414;

class Class_1_06AD3F39AE01F837 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_1_0A24888DF04C995E_1*>* Field_1_7; // 0x10
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::Class_1_E5DFDD7C057D0C86*>* Field_1_4; // 0x18
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::RendererMoveReason, ::Class_1_6DE8726ADEF173A7_4*>* Field_1_3; // 0x20
	::UnityEngine::Quaternion Field_1_1; // 0x28
	::System::Boolean Field_1_6; // 0x38
	::System::Boolean Field_1_5; // 0x39
	::UnityEngine::Quaternion Field_1_2; // 0x3C
	::UnityEngine::Vector3 Field_1_0; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06AD3F39AE01F837__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D605F1EFFC4B0D43(::Class_1_6DE8726ADEF173A7_4* a1, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6DE8726ADEF173A7_4*, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + CLASS_1_06AD3F39AE01F837_METHOD_1_D605F1EFFC4B0D43_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_73560EEB9780F38F(::Class_1_E5DFDD7C057D0C86* a1, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E5DFDD7C057D0C86*, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + CLASS_1_06AD3F39AE01F837_METHOD_1_73560EEB9780F38F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_E8868ECCE7FD7062(::UnityEngine::Vector3 a1, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + CLASS_1_06AD3F39AE01F837_METHOD_1_E8868ECCE7FD7062_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_60A1EBE4AA36C891(::Class_1_0A24888DF04C995E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A24888DF04C995E_1*))((::PBYTE)hIl2Cpp + CLASS_1_06AD3F39AE01F837_METHOD_1_60A1EBE4AA36C891_OFFSET))(this, a1);
	}

	::System::Void Method_1_3F6435A17B157AFD(::RPG::Client::LittleGame::FiveDim::RendererMoveReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + CLASS_1_06AD3F39AE01F837_METHOD_1_3F6435A17B157AFD_OFFSET))(this, a1);
	}

	::System::Void Method_1_7C91CE8047BE24E8(::RPG::Client::LittleGame::FiveDim::RendererMoveReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::RendererMoveReason))((::PBYTE)hIl2Cpp + CLASS_1_06AD3F39AE01F837_METHOD_1_7C91CE8047BE24E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_952453844D88CADD(::Class_1_0A24888DF04C995E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0A24888DF04C995E_1*))((::PBYTE)hIl2Cpp + CLASS_1_06AD3F39AE01F837_METHOD_1_952453844D88CADD_OFFSET))(this, a1);
	}

	::System::Void Method_1_47680E2642F37A1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06AD3F39AE01F837_METHOD_1_47680E2642F37A1B_OFFSET))(this);
	}

	::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06AD3F39AE01F837_METHOD_1_DFF98536D8B4074F_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06AD3F39AE01F837_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06AD3F39AE01F837_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06AD3F39AE01F837_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06AD3F39AE01F837_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_06AD3F39AE01F837_ONRECYCLE_OFFSET))(this);
	}
};
