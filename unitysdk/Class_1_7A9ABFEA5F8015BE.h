#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_87C8F594A107C13B.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_426;
class Class_1_DFF28B1BAA582E14;

#define CLASS_1_7A9ABFEA5F8015BE_CLEAR_OFFSET UNITYSDK_OFFSET(0x169DA5C0)
#define CLASS_1_7A9ABFEA5F8015BE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x169DAAC0)
#define CLASS_1_7A9ABFEA5F8015BE_METHOD_1_586EB3004CA81B57_OFFSET UNITYSDK_OFFSET(0x169DA4C0)
#define CLASS_1_7A9ABFEA5F8015BE_METHOD_1_88B639C4254BEB6F_OFFSET UNITYSDK_OFFSET(0x169DA810)
#define CLASS_1_7A9ABFEA5F8015BE_METHOD_1_8EDB7FE5AA37C50F_1_OFFSET UNITYSDK_OFFSET(0x169DAAF0)
#define CLASS_1_7A9ABFEA5F8015BE_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x169DAAE0)
#define CLASS_1_7A9ABFEA5F8015BE_METHOD_1_D5AC44B0CC3F3063_OFFSET UNITYSDK_OFFSET(0x169DA660)
#define CLASS_1_7A9ABFEA5F8015BE_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x169DAAD0)
#define CLASS_1_7A9ABFEA5F8015BE__CTOR_OFFSET UNITYSDK_OFFSET(0x169DAB00)

inline static constexpr unsigned int Class_1_7A9ABFEA5F8015BE_TypeDefinitionIndex = 50472;

class Class_1_7A9ABFEA5F8015BE : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_426* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_426* _Owner_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_426* Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28
	::RPG::GameCore::FixPoint Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_586EB3004CA81B57(::Class_0_16E4307DCC419505_426* a1, ::Class_0_16E4307DCC419505_426* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_426*, ::Class_0_16E4307DCC419505_426*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_METHOD_1_586EB3004CA81B57_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_D5AC44B0CC3F3063(::RPG::GameCore::FixPoint& a1, ::Struct_2_87C8F594A107C13B& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::Struct_2_87C8F594A107C13B&))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_METHOD_1_D5AC44B0CC3F3063_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_88B639C4254BEB6F(::Class_1_DFF28B1BAA582E14* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DFF28B1BAA582E14*))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_METHOD_1_88B639C4254BEB6F_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_426* get_Owner()
	{
		return ((::Class_0_16E4307DCC419505_426*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::Class_0_16E4307DCC419505_426* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_426*))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_SET_OWNER_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_METHOD_1_8EDB7FE5AA37C50F_1_OFFSET))(this);
	}
};
