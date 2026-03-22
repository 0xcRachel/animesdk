#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceBaseNtfMessage_1.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/CakeRaceMsgId.h"

class Class_1_0E6F4E71F2CF112C;
class Class_1_0E9EED74A778662A_2;
class Class_1_E7C4009BCC22497A_26;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_4_E8F4610EF0D87EE0_6_METHOD_4_416B12CFEB291691_OFFSET UNITYSDK_OFFSET(0x8A41FD0)
#define CLASS_4_E8F4610EF0D87EE0_6_METHOD_4_D2EDCCCF37B5B6E5_OFFSET UNITYSDK_OFFSET(0x8A41F70)
#define CLASS_4_E8F4610EF0D87EE0_6_METHOD_4_F5D02CB63424FC5A_OFFSET UNITYSDK_OFFSET(0x8A41F80)
#define CLASS_4_E8F4610EF0D87EE0_6__CTOR_OFFSET UNITYSDK_OFFSET(0x8A42080)

inline static constexpr unsigned int Class_4_E8F4610EF0D87EE0_6_TypeDefinitionIndex = 61337;

class Class_4_E8F4610EF0D87EE0_6 : public ::RPG::Client::LittleGame::CakeRace::CakeRaceBaseNtfMessage_1<::Class_1_E7C4009BCC22497A_26*>
{
public:
	::System::Void _ctor(::Class_1_0E9EED74A778662A_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0E9EED74A778662A_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_6__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId Method_4_D2EDCCCF37B5B6E5()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::CakeRaceMsgId(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_6_METHOD_4_D2EDCCCF37B5B6E5_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_0E6F4E71F2CF112C*>* Method_4_F5D02CB63424FC5A()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_0E6F4E71F2CF112C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_6_METHOD_4_F5D02CB63424FC5A_OFFSET))(this);
	}

	static ::Class_4_E8F4610EF0D87EE0_6* Method_4_416B12CFEB291691(::Class_1_0E9EED74A778662A_2* a1)
	{
		return ((::Class_4_E8F4610EF0D87EE0_6*(*)(::Class_1_0E9EED74A778662A_2*))((::PBYTE)hIl2Cpp + CLASS_4_E8F4610EF0D87EE0_6_METHOD_4_416B12CFEB291691_OFFSET))(a1);
	}
};
