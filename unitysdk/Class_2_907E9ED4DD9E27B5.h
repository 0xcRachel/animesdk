#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PriorityLinkableNodeList_1.h"
#include "unitysdk/Struct_2_BA11F281BD100FCC.h"

class Class_0_16E4307DCC419505_375;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_907E9ED4DD9E27B5_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10F88F10)
#define CLASS_2_907E9ED4DD9E27B5_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x10F88D10)
#define CLASS_2_907E9ED4DD9E27B5_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x10F88D40)
#define CLASS_2_907E9ED4DD9E27B5_GET_PREV_OFFSET UNITYSDK_OFFSET(0x10F88CF0)
#define CLASS_2_907E9ED4DD9E27B5_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x10F88D30)
#define CLASS_2_907E9ED4DD9E27B5_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x10F88D60)
#define CLASS_2_907E9ED4DD9E27B5_METHOD_2_BDE80AA7605FF8CE_OFFSET UNITYSDK_OFFSET(0x10F88DC0)
#define CLASS_2_907E9ED4DD9E27B5_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x10F88D20)
#define CLASS_2_907E9ED4DD9E27B5_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x10F88D50)
#define CLASS_2_907E9ED4DD9E27B5_SET_PREV_OFFSET UNITYSDK_OFFSET(0x10F88D00)
#define CLASS_2_907E9ED4DD9E27B5__CTOR_OFFSET UNITYSDK_OFFSET(0x10F89140)

inline static constexpr unsigned int Class_2_907E9ED4DD9E27B5_TypeDefinitionIndex = 44001;

class Class_2_907E9ED4DD9E27B5 : public ::RPG::PriorityLinkableNodeList_1<::Class_0_16E4307DCC419505_375*>
{
public:
	::Class_0_16E4307DCC419505_375* _Next_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_375* _Prev_k__BackingField; // 0x30
	::RPG::GameCore::GameEntity* _Owner_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_375* get_Prev()
	{
		return ((::Class_0_16E4307DCC419505_375*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_GET_PREV_OFFSET))(this);
	}

	::System::Void set_Prev(::Class_0_16E4307DCC419505_375* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_SET_PREV_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_375* get_Next()
	{
		return ((::Class_0_16E4307DCC419505_375*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_GET_NEXT_OFFSET))(this);
	}

	::System::Void set_Next(::Class_0_16E4307DCC419505_375* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_SET_NEXT_OFFSET))(this, value);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_GET_PRIORITY_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_Owner()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_SET_OWNER_OFFSET))(this, value);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Boolean Method_2_BDE80AA7605FF8CE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_METHOD_2_BDE80AA7605FF8CE_OFFSET))(this);
	}

	::System::Void Execute(::Struct_2_BA11F281BD100FCC& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BA11F281BD100FCC&))((::PBYTE)hIl2Cpp + CLASS_2_907E9ED4DD9E27B5_EXECUTE_OFFSET))(this, a1);
	}
};
