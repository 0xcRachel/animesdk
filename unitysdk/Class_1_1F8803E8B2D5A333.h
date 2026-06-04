#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1F8803E8B2D5A333_GET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x14F7AF30)
#define CLASS_1_1F8803E8B2D5A333_GET_LASTINSERTACTIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x14F7AED0)
#define CLASS_1_1F8803E8B2D5A333_GET_LASTONEMORETURNCOUNT_OFFSET UNITYSDK_OFFSET(0x14F7AEB0)
#define CLASS_1_1F8803E8B2D5A333_GET_OPERATIONCOUNTER_OFFSET UNITYSDK_OFFSET(0x14F7AF10)
#define CLASS_1_1F8803E8B2D5A333_GET_RANDOMCOUNTER_OFFSET UNITYSDK_OFFSET(0x14F7AEF0)
#define CLASS_1_1F8803E8B2D5A333_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x14F7AE60)
#define CLASS_1_1F8803E8B2D5A333_METHOD_1_CE81D059476B1F49_OFFSET UNITYSDK_OFFSET(0x14F7AF50)
#define CLASS_1_1F8803E8B2D5A333_SET_CURRENTTURNSTATE_OFFSET UNITYSDK_OFFSET(0x14F7AF40)
#define CLASS_1_1F8803E8B2D5A333_SET_LASTINSERTACTIONTURNCOUNT_OFFSET UNITYSDK_OFFSET(0x14F7AEE0)
#define CLASS_1_1F8803E8B2D5A333_SET_LASTONEMORETURNCOUNT_OFFSET UNITYSDK_OFFSET(0x14F7AEC0)
#define CLASS_1_1F8803E8B2D5A333_SET_OPERATIONCOUNTER_OFFSET UNITYSDK_OFFSET(0x14F7AF20)
#define CLASS_1_1F8803E8B2D5A333_SET_RANDOMCOUNTER_OFFSET UNITYSDK_OFFSET(0x14F7AF00)

inline static constexpr unsigned int Class_1_1F8803E8B2D5A333_TypeDefinitionIndex = 52462;

class Class_1_1F8803E8B2D5A333 : public ::System::Object
{
public:
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0x23C0);
	}
	static ::System::UInt32* StaticGet__LastInsertActionTurnCount_k__BackingField()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0x23C4);
	}
	static ::System::UInt32* StaticGet__OperationCounter_k__BackingField()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0x23C8);
	}
	static ::System::Int32* StaticGet__RandomCounter_k__BackingField()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0x23CC);
	}
	static ::System::UInt32* StaticGet__LastOneMoreTurnCount_k__BackingField()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0x23D0);
	}
	static ::RPG::GameCore::TurnState* StaticGet__CurrentTurnState_k__BackingField()
	{
		return (::RPG::GameCore::TurnState*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F8803E8B2D5A333_TypeDefinitionIndex)->GetStaticField(0x23D4);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::UInt32 get_LastOneMoreTurnCount()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_GET_LASTONEMORETURNCOUNT_OFFSET))();
	}

	static ::System::Void set_LastOneMoreTurnCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_SET_LASTONEMORETURNCOUNT_OFFSET))(a1);
	}

	static ::System::UInt32 get_LastInsertActionTurnCount()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_GET_LASTINSERTACTIONTURNCOUNT_OFFSET))();
	}

	static ::System::Void set_LastInsertActionTurnCount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_SET_LASTINSERTACTIONTURNCOUNT_OFFSET))(a1);
	}

	static ::System::Int32 get_RandomCounter()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_GET_RANDOMCOUNTER_OFFSET))();
	}

	static ::System::Void set_RandomCounter(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_SET_RANDOMCOUNTER_OFFSET))(a1);
	}

	static ::System::UInt32 get_OperationCounter()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_GET_OPERATIONCOUNTER_OFFSET))();
	}

	static ::System::Void set_OperationCounter(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_SET_OPERATIONCOUNTER_OFFSET))(a1);
	}

	static ::RPG::GameCore::TurnState get_CurrentTurnState()
	{
		return ((::RPG::GameCore::TurnState(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_GET_CURRENTTURNSTATE_OFFSET))();
	}

	static ::System::Void set_CurrentTurnState(::RPG::GameCore::TurnState a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TurnState))((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_SET_CURRENTTURNSTATE_OFFSET))(a1);
	}

	static ::System::UInt64 Method_1_CE81D059476B1F49()
	{
		return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F8803E8B2D5A333_METHOD_1_CE81D059476B1F49_OFFSET))();
	}
};
