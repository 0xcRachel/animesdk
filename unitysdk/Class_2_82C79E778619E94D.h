#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PropertyStacking.h"
#include "unitysdk/RPG/GameCore/RogueMagicScepterPropertyType.h"
#include "unitysdk/RPG/GameCore/RogueMagicUnitCounterType.h"
#include "unitysdk/RPG/GameCore/TaskState.h"

class Class_1_83AB3963F9C15714;
class Class_2_82C79E778619E94D_Class_1_969D64C345B815AA;
class Class_3_C1B871875244D398;
namespace RPG::GameCore { class BattleRogueMagicData_Scepter; }
namespace RPG::GameCore { class RogueMagicScepterRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_2_82C79E778619E94D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BA3880)
#define CLASS_2_82C79E778619E94D_GET_ACTIVEUNITTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x8BA4E90)
#define CLASS_2_82C79E778619E94D_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x8BA4E30)
#define CLASS_2_82C79E778619E94D_GET_SCEPTERID_OFFSET UNITYSDK_OFFSET(0x8BA4E10)
#define CLASS_2_82C79E778619E94D_GET_SCEPTERROW_OFFSET UNITYSDK_OFFSET(0x8BA4E50)
#define CLASS_2_82C79E778619E94D_GET_SCEPTERSTATE_OFFSET UNITYSDK_OFFSET(0x8BA4E70)
#define CLASS_2_82C79E778619E94D_METHOD_2_0FF83FF7D01915A3_OFFSET UNITYSDK_OFFSET(0x8BA27F0)
#define CLASS_2_82C79E778619E94D_METHOD_2_12A809C3FEAC8208_OFFSET UNITYSDK_OFFSET(0x8BA4890)
#define CLASS_2_82C79E778619E94D_METHOD_2_2D6B5189575B5B1D_OFFSET UNITYSDK_OFFSET(0x8BA2450)
#define CLASS_2_82C79E778619E94D_METHOD_2_3C56C1AF247AC1EC_OFFSET UNITYSDK_OFFSET(0x8BA3480)
#define CLASS_2_82C79E778619E94D_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x8BA49C0)
#define CLASS_2_82C79E778619E94D_METHOD_2_4DB6EE5849050ACC_OFFSET UNITYSDK_OFFSET(0x8BA40F0)
#define CLASS_2_82C79E778619E94D_METHOD_2_5539BBF6C722CAF3_OFFSET UNITYSDK_OFFSET(0x8BA4220)
#define CLASS_2_82C79E778619E94D_METHOD_2_558A5C3FA2ED65F4_OFFSET UNITYSDK_OFFSET(0x8BA2E70)
#define CLASS_2_82C79E778619E94D_METHOD_2_8C71BC317F276EA5_OFFSET UNITYSDK_OFFSET(0x8BA3E40)
#define CLASS_2_82C79E778619E94D_METHOD_2_900F54BEC5A675B2_OFFSET UNITYSDK_OFFSET(0x8BA3DA0)
#define CLASS_2_82C79E778619E94D_METHOD_2_956AEE9BDB42F3E7_OFFSET UNITYSDK_OFFSET(0x8BA44F0)
#define CLASS_2_82C79E778619E94D_METHOD_2_9C05DE14215D544B_OFFSET UNITYSDK_OFFSET(0x8BA3D40)
#define CLASS_2_82C79E778619E94D_METHOD_2_A500B07E8C29F95A_OFFSET UNITYSDK_OFFSET(0x8BA4570)
#define CLASS_2_82C79E778619E94D_METHOD_2_A968E94CA97A159D_OFFSET UNITYSDK_OFFSET(0x8BA0330)
#define CLASS_2_82C79E778619E94D_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x8BA46F0)
#define CLASS_2_82C79E778619E94D_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x8BA3930)
#define CLASS_2_82C79E778619E94D_METHOD_2_CD7AEFCBBDCE7839_OFFSET UNITYSDK_OFFSET(0x8BA3B00)
#define CLASS_2_82C79E778619E94D_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8BA4EB0)
#define CLASS_2_82C79E778619E94D_METHOD_2_F29BC4DE10A2D54D_OFFSET UNITYSDK_OFFSET(0x8BA4DB0)
#define CLASS_2_82C79E778619E94D_METHOD_2_F4910A11D98F8F87_OFFSET UNITYSDK_OFFSET(0x8BA43D0)
#define CLASS_2_82C79E778619E94D_METHOD_2_FEF062A2DC4257FF_OFFSET UNITYSDK_OFFSET(0x8BA3F10)
#define CLASS_2_82C79E778619E94D_SET_ACTIVEUNITTRIGGERCOUNT_OFFSET UNITYSDK_OFFSET(0x8BA4EA0)
#define CLASS_2_82C79E778619E94D_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x8BA4E40)
#define CLASS_2_82C79E778619E94D_SET_SCEPTERID_OFFSET UNITYSDK_OFFSET(0x8BA4E20)
#define CLASS_2_82C79E778619E94D_SET_SCEPTERROW_OFFSET UNITYSDK_OFFSET(0x8BA4E60)
#define CLASS_2_82C79E778619E94D_SET_SCEPTERSTATE_OFFSET UNITYSDK_OFFSET(0x8BA4E80)
#define CLASS_2_82C79E778619E94D_TICK_OFFSET UNITYSDK_OFFSET(0x8BA38D0)
#define CLASS_2_82C79E778619E94D__CTOR_OFFSET UNITYSDK_OFFSET(0x8BA4EC0)
#define CLASS_2_82C79E778619E94D___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x8BA4ED0)

inline static constexpr unsigned int Class_2_82C79E778619E94D_TypeDefinitionIndex = 46470;

class Class_2_82C79E778619E94D : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::RPG::GameCore::BattleRogueMagicData_Scepter** StaticGet_Field_2_0()
	{
		return (::RPG::GameCore::BattleRogueMagicData_Scepter**)Il2CppClass::FromTypeDefinitionIndex(Class_2_82C79E778619E94D_TypeDefinitionIndex)->GetStaticField(0x45070);
	}
	::RPG::GameCore::RogueMagicScepterRow* _ScepterRow_k__BackingField; // 0x18
	::Class_2_82C79E778619E94D_Class_1_969D64C345B815AA* Field_2_10; // 0x20
	::Il2CppArray<::Class_2_82C79E778619E94D_Class_1_969D64C345B815AA*>* Field_2_8; // 0x28
	::Il2CppArray<::Class_1_83AB3963F9C15714*>* Field_2_11; // 0x30
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_6; // 0x38
	::Class_3_C1B871875244D398* Field_2_7; // 0x40
	::System::Boolean Field_2_9; // 0x48
	::System::UInt32 _ScepterID_k__BackingField; // 0x4C
	::RPG::GameCore::TaskState _ScepterState_k__BackingField; // 0x50
	::System::UInt32 _Level_k__BackingField; // 0x54
	::System::UInt32 _ActiveUnitTriggerCount_k__BackingField; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D6B5189575B5B1D(::RPG::GameCore::BattleRogueMagicData_Scepter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleRogueMagicData_Scepter*))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_2D6B5189575B5B1D_OFFSET))(this, a1);
	}

	::System::Void Method_2_0FF83FF7D01915A3(::RPG::GameCore::BattleRogueMagicData_Scepter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleRogueMagicData_Scepter*))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_0FF83FF7D01915A3_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskState Method_2_CD7AEFCBBDCE7839()
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_CD7AEFCBBDCE7839_OFFSET))(this);
	}

	::System::Void Method_2_A968E94CA97A159D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_A968E94CA97A159D_OFFSET))(this);
	}

	::System::Void Method_2_FEF062A2DC4257FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_FEF062A2DC4257FF_OFFSET))(this);
	}

	::System::Int32 Method_2_4DB6EE5849050ACC(::RPG::GameCore::RogueMagicScepterPropertyType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_4DB6EE5849050ACC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F4910A11D98F8F87(::RPG::GameCore::RogueMagicScepterPropertyType a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterPropertyType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_F4910A11D98F8F87_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_956AEE9BDB42F3E7(::RPG::GameCore::RogueMagicScepterPropertyType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_956AEE9BDB42F3E7_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_2_A500B07E8C29F95A(::RPG::GameCore::RogueMagicUnitCounterType a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RogueMagicUnitCounterType))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_A500B07E8C29F95A_OFFSET))(this, a1);
	}

	::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Boolean Method_2_9C05DE14215D544B(::Class_2_82C79E778619E94D_Class_1_969D64C345B815AA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_82C79E778619E94D_Class_1_969D64C345B815AA*))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_9C05DE14215D544B_OFFSET))(this, a1);
	}

	::System::Void Method_2_558A5C3FA2ED65F4(::Class_2_82C79E778619E94D_Class_1_969D64C345B815AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_82C79E778619E94D_Class_1_969D64C345B815AA*))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_558A5C3FA2ED65F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_900F54BEC5A675B2(::Class_2_82C79E778619E94D_Class_1_969D64C345B815AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_82C79E778619E94D_Class_1_969D64C345B815AA*))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_900F54BEC5A675B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C71BC317F276EA5(::Class_2_82C79E778619E94D_Class_1_969D64C345B815AA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_82C79E778619E94D_Class_1_969D64C345B815AA*))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_8C71BC317F276EA5_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C56C1AF247AC1EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_3C56C1AF247AC1EC_OFFSET))(this);
	}

	::System::Void Method_2_12A809C3FEAC8208(::RPG::GameCore::RogueMagicScepterPropertyType a1, ::RPG::GameCore::PropertyStacking a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterPropertyType, ::RPG::GameCore::PropertyStacking, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_12A809C3FEAC8208_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_5539BBF6C722CAF3()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_5539BBF6C722CAF3_OFFSET))(this);
	}

	::System::Boolean Method_2_F29BC4DE10A2D54D(::RPG::GameCore::RogueMagicScepterPropertyType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterPropertyType))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_F29BC4DE10A2D54D_OFFSET))(this, a1);
	}

	::System::UInt32 get_ScepterID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_GET_SCEPTERID_OFFSET))(this);
	}

	::System::Void set_ScepterID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_SET_SCEPTERID_OFFSET))(this, value);
	}

	::System::UInt32 get_Level()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_GET_LEVEL_OFFSET))(this);
	}

	::System::Void set_Level(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_SET_LEVEL_OFFSET))(this, value);
	}

	::RPG::GameCore::RogueMagicScepterRow* get_ScepterRow()
	{
		return ((::RPG::GameCore::RogueMagicScepterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_GET_SCEPTERROW_OFFSET))(this);
	}

	::System::Void set_ScepterRow(::RPG::GameCore::RogueMagicScepterRow* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueMagicScepterRow*))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_SET_SCEPTERROW_OFFSET))(this, value);
	}

	::RPG::GameCore::TaskState get_ScepterState()
	{
		return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_GET_SCEPTERSTATE_OFFSET))(this);
	}

	::System::Void set_ScepterState(::RPG::GameCore::TaskState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskState))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_SET_SCEPTERSTATE_OFFSET))(this, value);
	}

	::System::UInt32 get_ActiveUnitTriggerCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_GET_ACTIVEUNITTRIGGERCOUNT_OFFSET))(this);
	}

	::System::Void set_ActiveUnitTriggerCount(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_SET_ACTIVEUNITTRIGGERCOUNT_OFFSET))(this, value);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_82C79E778619E94D___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
