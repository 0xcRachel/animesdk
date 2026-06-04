#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BF7A075734D15E98.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/ModifierDeathSource.h"

class Class_2_24193089A4D2255F;

#define CLASS_2_32ECE6AF815EB6B7_CLEAR_OFFSET UNITYSDK_OFFSET(0x1535C600)
#define CLASS_2_32ECE6AF815EB6B7_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1535C6A0)
#define CLASS_2_32ECE6AF815EB6B7_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1535C650)
#define CLASS_2_32ECE6AF815EB6B7_GET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0x1535C710)
#define CLASS_2_32ECE6AF815EB6B7_GET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x1535C6F0)
#define CLASS_2_32ECE6AF815EB6B7_METHOD_2_4BAE44F81E432ECB_OFFSET UNITYSDK_OFFSET(0x1535C5A0)
#define CLASS_2_32ECE6AF815EB6B7_SET_DEATHSOURCE_OFFSET UNITYSDK_OFFSET(0x1535C720)
#define CLASS_2_32ECE6AF815EB6B7_SET_MODIFIERINSTANCE_OFFSET UNITYSDK_OFFSET(0x1535C700)
#define CLASS_2_32ECE6AF815EB6B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1535C730)
#define CLASS_2_32ECE6AF815EB6B7___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x1535C740)

inline static constexpr unsigned int Class_2_32ECE6AF815EB6B7_TypeDefinitionIndex = 50527;

class Class_2_32ECE6AF815EB6B7 : public ::Class_1_BF7A075734D15E98
{
public:
	::Class_2_24193089A4D2255F* _ModifierInstance_k__BackingField; // 0x18
	::RPG::GameCore::ModifierDeathSource _DeathSource_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7__CTOR_OFFSET))(this);
	}

	::Class_2_32ECE6AF815EB6B7* Method_2_4BAE44F81E432ECB(::Class_2_24193089A4D2255F* a1, ::RPG::GameCore::ModifierDeathSource a2)
	{
		return ((::Class_2_32ECE6AF815EB6B7*(*)(::PVOID, ::Class_2_24193089A4D2255F*, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_METHOD_2_4BAE44F81E432ECB_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_CLEAR_OFFSET))(this);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_GETEVENTTYPE_OFFSET))(this);
	}

	::Class_2_24193089A4D2255F* get_ModifierInstance()
	{
		return ((::Class_2_24193089A4D2255F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_GET_MODIFIERINSTANCE_OFFSET))(this);
	}

	::System::Void set_ModifierInstance(::Class_2_24193089A4D2255F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_24193089A4D2255F*))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_SET_MODIFIERINSTANCE_OFFSET))(this, a1);
	}

	::RPG::GameCore::ModifierDeathSource get_DeathSource()
	{
		return ((::RPG::GameCore::ModifierDeathSource(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_GET_DEATHSOURCE_OFFSET))(this);
	}

	::System::Void set_DeathSource(::RPG::GameCore::ModifierDeathSource a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierDeathSource))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7_SET_DEATHSOURCE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32ECE6AF815EB6B7___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
