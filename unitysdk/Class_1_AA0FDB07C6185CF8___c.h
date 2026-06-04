#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/CustomPropMoveType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/EntityTag.h"
#include "unitysdk/RPG/GameCore/FiveDimCameraPriority.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_17EDF3520C9FC3DE;
class Class_2_4706D3AD6019CD01;
class Class_2_5436AF4270279182;
class Class_2_B8E38BF47138A2E5;
class Class_2_B9E8C2EEAA5C96EC;
class Class_2_FD51057495DB654F;
namespace Entitas { class IComponent; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_0_OFFSET UNITYSDK_OFFSET(0x16805F00)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_10_OFFSET UNITYSDK_OFFSET(0x168062E0)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_11_OFFSET UNITYSDK_OFFSET(0x16806380)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_12_OFFSET UNITYSDK_OFFSET(0x168063D0)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_13_OFFSET UNITYSDK_OFFSET(0x16806420)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_14_OFFSET UNITYSDK_OFFSET(0x16806470)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_15_OFFSET UNITYSDK_OFFSET(0x168064C0)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_1_OFFSET UNITYSDK_OFFSET(0x16805F50)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_2_OFFSET UNITYSDK_OFFSET(0x16805FD0)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_3_OFFSET UNITYSDK_OFFSET(0x16806020)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_4_OFFSET UNITYSDK_OFFSET(0x16806070)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_5_OFFSET UNITYSDK_OFFSET(0x168060C0)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_6_OFFSET UNITYSDK_OFFSET(0x16806140)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_7_OFFSET UNITYSDK_OFFSET(0x16806190)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_8_OFFSET UNITYSDK_OFFSET(0x168061E0)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_9_OFFSET UNITYSDK_OFFSET(0x16806260)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__1_0_OFFSET UNITYSDK_OFFSET(0x16806510)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__1_1_OFFSET UNITYSDK_OFFSET(0x16806590)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__1_2_OFFSET UNITYSDK_OFFSET(0x168065E0)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__1_3_OFFSET UNITYSDK_OFFSET(0x16806630)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__2_0_OFFSET UNITYSDK_OFFSET(0x16806680)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__2_1_OFFSET UNITYSDK_OFFSET(0x168066F0)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__2_2_OFFSET UNITYSDK_OFFSET(0x16806760)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__2_3_OFFSET UNITYSDK_OFFSET(0x168067D0)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__2_4_OFFSET UNITYSDK_OFFSET(0x16806840)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__2_5_OFFSET UNITYSDK_OFFSET(0x168068B0)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__2_6_OFFSET UNITYSDK_OFFSET(0x16806920)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__2_7_OFFSET UNITYSDK_OFFSET(0x16806990)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__3_0_OFFSET UNITYSDK_OFFSET(0x16806A00)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__4_0_OFFSET UNITYSDK_OFFSET(0x16806A50)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__4_1_OFFSET UNITYSDK_OFFSET(0x16806AA0)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__4_2_OFFSET UNITYSDK_OFFSET(0x16806B10)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_0_OFFSET UNITYSDK_OFFSET(0x16806B60)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_1_OFFSET UNITYSDK_OFFSET(0x16806C00)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_2_OFFSET UNITYSDK_OFFSET(0x16806C70)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_3_OFFSET UNITYSDK_OFFSET(0x16806CE0)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_4_OFFSET UNITYSDK_OFFSET(0x16806D50)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_5_OFFSET UNITYSDK_OFFSET(0x16806DC0)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_6_OFFSET UNITYSDK_OFFSET(0x16806E30)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_7_OFFSET UNITYSDK_OFFSET(0x16806EA0)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_8_OFFSET UNITYSDK_OFFSET(0x16806F10)
#define CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_9_OFFSET UNITYSDK_OFFSET(0x16806F80)
#define CLASS_1_AA0FDB07C6185CF8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16805EC0)
#define CLASS_1_AA0FDB07C6185CF8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16805EF0)

inline static constexpr unsigned int Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex = 38946;

class Class_1_AA0FDB07C6185CF8___c : public ::System::Object
{
public:
	static ::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_1()
	{
		return (::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F600);
	}
	static ::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__2_5()
	{
		return (::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F608);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>** StaticGet___9__0_1()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F610);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_0()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F618);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_15()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F620);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_14()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F628);
	}
	static ::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__2_6()
	{
		return (::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F630);
	}
	static ::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_2()
	{
		return (::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F638);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_5()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F640);
	}
	static ::System::Func_3<::Class_2_5436AF4270279182*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__3_0()
	{
		return (::System::Func_3<::Class_2_5436AF4270279182*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F648);
	}
	static ::System::Func_3<::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_1()
	{
		return (::System::Func_3<::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F650);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_9()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F658);
	}
	static ::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_0()
	{
		return (::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F660);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__0_5()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F668);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_3()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F670);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__0_7()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F678);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_8()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F680);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__5_7()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F688);
	}
	static ::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_4()
	{
		return (::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F690);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__0_10()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F698);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_6()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F6A0);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::CustomPropMoveType>** StaticGet___9__0_2()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::CustomPropMoveType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F6A8);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_6()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F6B0);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__5_2()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F6B8);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::EntityTag>** StaticGet___9__0_4()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::RPG::Client::LittleGame::FiveDim::EntityTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F6C0);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_0()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F6C8);
	}
	static ::System::Func_3<::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>** StaticGet___9__1_0()
	{
		return (::System::Func_3<::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*, ::RPG::GameCore::FiveDimCameraPriority>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F6D0);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_3()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F6D8);
	}
	static ::Class_1_AA0FDB07C6185CF8___c** StaticGet___9()
	{
		return (::Class_1_AA0FDB07C6185CF8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F6E0);
	}
	static ::System::Func_3<::Class_2_FD51057495DB654F*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__4_0()
	{
		return (::System::Func_3<::Class_2_FD51057495DB654F*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F6E8);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_8()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F6F0);
	}
	static ::System::Func_3<::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__1_3()
	{
		return (::System::Func_3<::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F6F8);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__5_1()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F700);
	}
	static ::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_3()
	{
		return (::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F708);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_11()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F710);
	}
	static ::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>** StaticGet___9__5_4()
	{
		return (::System::Func_3<::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F718);
	}
	static ::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__2_7()
	{
		return (::System::Func_3<::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F720);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_13()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F728);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>** StaticGet___9__0_12()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F730);
	}
	static ::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__0_9()
	{
		return (::System::Func_3<::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F738);
	}
	static ::System::Func_3<::Class_2_FD51057495DB654F*, ::Entitas::IComponent*, ::System::String*>** StaticGet___9__4_2()
	{
		return (::System::Func_3<::Class_2_FD51057495DB654F*, ::Entitas::IComponent*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F740);
	}
	static ::System::Func_3<::Class_2_FD51057495DB654F*, ::Entitas::IComponent*, ::System::UInt16>** StaticGet___9__4_1()
	{
		return (::System::Func_3<::Class_2_FD51057495DB654F*, ::Entitas::IComponent*, ::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F748);
	}
	static ::System::Func_3<::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*, ::System::Int32>** StaticGet___9__1_2()
	{
		return (::System::Func_3<::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AA0FDB07C6185CF8___c_TypeDefinitionIndex)->GetStaticField(0x2F750);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _AddEntityIndices_b__0_0(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_0_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FiveDimCameraPriority _AddEntityIndices_b__0_1(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::RPG::GameCore::FiveDimCameraPriority(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_1_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::FiveDim::CustomPropMoveType _AddEntityIndices_b__0_2(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::RPG::Client::LittleGame::FiveDim::CustomPropMoveType(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_2_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__0_3(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_3_OFFSET))(this, a1, a2);
	}

	::RPG::Client::LittleGame::FiveDim::EntityTag _AddEntityIndices_b__0_4(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::RPG::Client::LittleGame::FiveDim::EntityTag(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_4_OFFSET))(this, a1, a2);
	}

	::System::String* _AddEntityIndices_b__0_5(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_5_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__0_6(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_6_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__0_7(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_7_OFFSET))(this, a1, a2);
	}

	::System::Int32 _AddEntityIndices_b__0_8(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_8_OFFSET))(this, a1, a2);
	}

	::System::Int32 _AddEntityIndices_b__0_9(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_9_OFFSET))(this, a1, a2);
	}

	::System::String* _AddEntityIndices_b__0_10(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_10_OFFSET))(this, a1, a2);
	}

	::System::Int32 _AddEntityIndices_b__0_11(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_11_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__0_12(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_12_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__0_13(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_13_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__0_14(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_14_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__0_15(::Class_2_B9E8C2EEAA5C96EC* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__0_15_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FiveDimCameraPriority _AddEntityIndices_b__1_0(::Class_2_B8E38BF47138A2E5* a1, ::Entitas::IComponent* a2)
	{
		return ((::RPG::GameCore::FiveDimCameraPriority(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__1_0_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__1_1(::Class_2_B8E38BF47138A2E5* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__1_1_OFFSET))(this, a1, a2);
	}

	::System::Int32 _AddEntityIndices_b__1_2(::Class_2_B8E38BF47138A2E5* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__1_2_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__1_3(::Class_2_B8E38BF47138A2E5* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_B8E38BF47138A2E5*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__1_3_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__2_0(::Class_2_17EDF3520C9FC3DE* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__2_0_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__2_1(::Class_2_17EDF3520C9FC3DE* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__2_1_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__2_2(::Class_2_17EDF3520C9FC3DE* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__2_2_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__2_3(::Class_2_17EDF3520C9FC3DE* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__2_3_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__2_4(::Class_2_17EDF3520C9FC3DE* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__2_4_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__2_5(::Class_2_17EDF3520C9FC3DE* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__2_5_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__2_6(::Class_2_17EDF3520C9FC3DE* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__2_6_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__2_7(::Class_2_17EDF3520C9FC3DE* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_17EDF3520C9FC3DE*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__2_7_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__3_0(::Class_2_5436AF4270279182* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_5436AF4270279182*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__3_0_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__4_0(::Class_2_FD51057495DB654F* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_FD51057495DB654F*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__4_0_OFFSET))(this, a1, a2);
	}

	::System::UInt16 _AddEntityIndices_b__4_1(::Class_2_FD51057495DB654F* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt16(*)(::PVOID, ::Class_2_FD51057495DB654F*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__4_1_OFFSET))(this, a1, a2);
	}

	::System::String* _AddEntityIndices_b__4_2(::Class_2_FD51057495DB654F* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_FD51057495DB654F*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__4_2_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_0(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_0_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__5_1(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_1_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__5_2(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_2_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_3(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_3_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_4(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_4_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_5(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_5_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_6(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_6_OFFSET))(this, a1, a2);
	}

	::System::UInt32 _AddEntityIndices_b__5_7(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_7_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_8(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_8_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::UInt32, ::System::UInt32> _AddEntityIndices_b__5_9(::Class_2_4706D3AD6019CD01* a1, ::Entitas::IComponent* a2)
	{
		return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID, ::Class_2_4706D3AD6019CD01*, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_AA0FDB07C6185CF8___C__ADDENTITYINDICES_B__5_9_OFFSET))(this, a1, a2);
	}
};
