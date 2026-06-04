#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/PriorityLinkableNodeList_1.h"
#include "unitysdk/Struct_2_BA11F281BD100FCC.h"

class Class_0_16E4307DCC419505_506;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_AD6F994744B55857_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x13F57DF0)
#define CLASS_2_AD6F994744B55857_1_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x13F57BE0)
#define CLASS_2_AD6F994744B55857_1_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x13F57C10)
#define CLASS_2_AD6F994744B55857_1_GET_PREV_OFFSET UNITYSDK_OFFSET(0x13F57BC0)
#define CLASS_2_AD6F994744B55857_1_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x13F57C00)
#define CLASS_2_AD6F994744B55857_1_METHOD_2_8B848E52913DFCE9_OFFSET UNITYSDK_OFFSET(0x13F57C30)
#define CLASS_2_AD6F994744B55857_1_METHOD_2_9E191814CA887059_OFFSET UNITYSDK_OFFSET(0x13F57C90)
#define CLASS_2_AD6F994744B55857_1_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x13F57BF0)
#define CLASS_2_AD6F994744B55857_1_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x13F57C20)
#define CLASS_2_AD6F994744B55857_1_SET_PREV_OFFSET UNITYSDK_OFFSET(0x13F57BD0)
#define CLASS_2_AD6F994744B55857_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13F58020)

inline static constexpr unsigned int Class_2_AD6F994744B55857_1_TypeDefinitionIndex = 52484;

class Class_2_AD6F994744B55857_1 : public ::RPG::PriorityLinkableNodeList_1<::Class_0_16E4307DCC419505_506*>
{
public:
	::RPG::GameCore::GameEntity* _Owner_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_506* _Next_k__BackingField; // 0x30
	::Class_0_16E4307DCC419505_506* _Prev_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD6F994744B55857_1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_506* get_Prev()
	{
		return ((::Class_0_16E4307DCC419505_506*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD6F994744B55857_1_GET_PREV_OFFSET))(this);
	}

	::System::Void set_Prev(::Class_0_16E4307DCC419505_506* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_506*))((::PBYTE)hIl2Cpp + CLASS_2_AD6F994744B55857_1_SET_PREV_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_506* get_Next()
	{
		return ((::Class_0_16E4307DCC419505_506*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD6F994744B55857_1_GET_NEXT_OFFSET))(this);
	}

	::System::Void set_Next(::Class_0_16E4307DCC419505_506* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_506*))((::PBYTE)hIl2Cpp + CLASS_2_AD6F994744B55857_1_SET_NEXT_OFFSET))(this, a1);
	}

	::System::Int32 get_Priority()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD6F994744B55857_1_GET_PRIORITY_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* get_Owner()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD6F994744B55857_1_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_AD6F994744B55857_1_SET_OWNER_OFFSET))(this, a1);
	}

	::System::Void Method_2_8B848E52913DFCE9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD6F994744B55857_1_METHOD_2_8B848E52913DFCE9_OFFSET))(this);
	}

	::System::Boolean Method_2_9E191814CA887059()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AD6F994744B55857_1_METHOD_2_9E191814CA887059_OFFSET))(this);
	}

	::System::Void Execute(::Struct_2_BA11F281BD100FCC& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BA11F281BD100FCC&))((::PBYTE)hIl2Cpp + CLASS_2_AD6F994744B55857_1_EXECUTE_OFFSET))(this, a1);
	}
};
