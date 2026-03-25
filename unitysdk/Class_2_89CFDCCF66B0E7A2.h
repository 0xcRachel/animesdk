#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PressureSwitchBaseSystem_1.h"
#include "unitysdk/RPG/GCFreeClosure/FuncClosureR_2.h"

class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define CLASS_2_89CFDCCF66B0E7A2_METHOD_2_58BEA1F06C0CB5B9_OFFSET UNITYSDK_OFFSET(0x106437F0)
#define CLASS_2_89CFDCCF66B0E7A2_METHOD_2_667EE29C97072F9D_OFFSET UNITYSDK_OFFSET(0x10643990)
#define CLASS_2_89CFDCCF66B0E7A2__CREATETRIGGER_OFFSET UNITYSDK_OFFSET(0x10643230)
#define CLASS_2_89CFDCCF66B0E7A2__CTOR_OFFSET UNITYSDK_OFFSET(0x10642C00)
#define CLASS_2_89CFDCCF66B0E7A2__GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x106431D0)
#define CLASS_2_89CFDCCF66B0E7A2__LOGERROR_OFFSET UNITYSDK_OFFSET(0x10643170)
#define CLASS_2_89CFDCCF66B0E7A2__ONTRIGGERIN_OFFSET UNITYSDK_OFFSET(0x10643000)
#define CLASS_2_89CFDCCF66B0E7A2__ONTRIGGEROUT_OFFSET UNITYSDK_OFFSET(0x106430C0)
#define CLASS_2_89CFDCCF66B0E7A2__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x10642ED0)
#define CLASS_2_89CFDCCF66B0E7A2___IFIXBASEPROXY__LOGERROR_OFFSET UNITYSDK_OFFSET(0x10643C90)
#define CLASS_2_89CFDCCF66B0E7A2___IFIXBASEPROXY__TEARDOWN_OFFSET UNITYSDK_OFFSET(0x10643C80)

inline static constexpr unsigned int Class_2_89CFDCCF66B0E7A2_TypeDefinitionIndex = 62818;

class Class_2_89CFDCCF66B0E7A2 : public ::RPG::Client::LittleGame::FiveDim::PressureSwitchBaseSystem_1<::Class_2_9DD8A46984F1AFFD*>
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	::Class_1_24C2E7EF22229C6A* Field_2_0; // 0x40
	::Class_3_1A92845FAFA5EC77* Field_2_1; // 0x48

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_89CFDCCF66B0E7A2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89CFDCCF66B0E7A2__TEARDOWN_OFFSET))(this);
	}

	::System::Void _OnTriggerIn(::Class_2_9DD8A46984F1AFFD* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_89CFDCCF66B0E7A2__ONTRIGGERIN_OFFSET))(this, a1, a2);
	}

	::System::Void _OnTriggerOut(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_89CFDCCF66B0E7A2__ONTRIGGEROUT_OFFSET))(this, a1);
	}

	::System::Void _LogError(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_89CFDCCF66B0E7A2__LOGERROR_OFFSET))(this, a1);
	}

	::Class_2_9DD8A46984F1AFFD* _GetEntityByRuntimeID(::System::Int32 a1)
	{
		return ((::Class_2_9DD8A46984F1AFFD*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_89CFDCCF66B0E7A2__GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
	}

	::System::Void _CreateTrigger(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_2_89CFDCCF66B0E7A2__CREATETRIGGER_OFFSET))(this, a1);
	}

	::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean> Method_2_58BEA1F06C0CB5B9()
	{
		return ((::RPG::GCFreeClosure::FuncClosureR_2<::UnityEngine::Collider*, ::System::Boolean>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89CFDCCF66B0E7A2_METHOD_2_58BEA1F06C0CB5B9_OFFSET))(this);
	}

	::System::Boolean Method_2_667EE29C97072F9D(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_89CFDCCF66B0E7A2_METHOD_2_667EE29C97072F9D_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_89CFDCCF66B0E7A2___IFIXBASEPROXY__TEARDOWN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__LogError(::System::String* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_89CFDCCF66B0E7A2___IFIXBASEPROXY__LOGERROR_OFFSET))(this, P0);
	}
};
