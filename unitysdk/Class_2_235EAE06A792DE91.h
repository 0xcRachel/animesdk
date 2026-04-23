#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/SimpleViewService_1.h"
#include "unitysdk/RPG/GameCore/RestaurantFacilityType.h"
#include "unitysdk/RPG/GameCore/RestaurantSuperEventType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_ADC27DBA8547EDD7;
class Class_2_43D1AA62A6D00FFF;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client { class ElfRestaurantEmployeeData; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::GameCore { class CharacterReplaceMaterialRenderList; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelNPCInfo; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class RestaurantCustomerRow; }
namespace RPG::GameCore { class RestaurantEmployeeRow; }
namespace RPG::GameCore { class RestaurantSpecialCustomerRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_235EAE06A792DE91_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0E0950)
#define CLASS_2_235EAE06A792DE91_GET_ENTRYPOSITION_OFFSET UNITYSDK_OFFSET(0xE0E9D70)
#define CLASS_2_235EAE06A792DE91_GET_ENTRYROTATION_OFFSET UNITYSDK_OFFSET(0xE0E9DA0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_04DB56F2FDF55A44_OFFSET UNITYSDK_OFFSET(0xE0E5340)
#define CLASS_2_235EAE06A792DE91_METHOD_2_0BCAB7E812F96A9A_OFFSET UNITYSDK_OFFSET(0xE0E3390)
#define CLASS_2_235EAE06A792DE91_METHOD_2_0DE20920A20DC5C6_OFFSET UNITYSDK_OFFSET(0xE0E8710)
#define CLASS_2_235EAE06A792DE91_METHOD_2_1108E4162020BFB4_OFFSET UNITYSDK_OFFSET(0xE0E7BE0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_11131D02C11DF6CB_OFFSET UNITYSDK_OFFSET(0xE0E4750)
#define CLASS_2_235EAE06A792DE91_METHOD_2_14285EF51C6027C6_OFFSET UNITYSDK_OFFSET(0xE0E9970)
#define CLASS_2_235EAE06A792DE91_METHOD_2_1665286EC9959266_OFFSET UNITYSDK_OFFSET(0xE0E4800)
#define CLASS_2_235EAE06A792DE91_METHOD_2_1A6A4B766D9ED7B2_OFFSET UNITYSDK_OFFSET(0xE0E4F70)
#define CLASS_2_235EAE06A792DE91_METHOD_2_1E9624F772249C88_OFFSET UNITYSDK_OFFSET(0xE0E6940)
#define CLASS_2_235EAE06A792DE91_METHOD_2_3A8C025796B96AED_OFFSET UNITYSDK_OFFSET(0xE0E58E0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_452B5B092C3BE78A_OFFSET UNITYSDK_OFFSET(0xE0E4DB0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_4EA1941ECFCE1F02_OFFSET UNITYSDK_OFFSET(0xE0E1470)
#define CLASS_2_235EAE06A792DE91_METHOD_2_76D6A92B996F4F67_OFFSET UNITYSDK_OFFSET(0xE0E8DD0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_76FE32F81D21C2C7_1_OFFSET UNITYSDK_OFFSET(0xE0E5520)
#define CLASS_2_235EAE06A792DE91_METHOD_2_76FE32F81D21C2C7_OFFSET UNITYSDK_OFFSET(0xE0E0E60)
#define CLASS_2_235EAE06A792DE91_METHOD_2_7C68461F9C985D7E_OFFSET UNITYSDK_OFFSET(0xE0E2890)
#define CLASS_2_235EAE06A792DE91_METHOD_2_8B60647C42B5325B_OFFSET UNITYSDK_OFFSET(0xE0E37A0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_8C54EA8B0C7D0A02_OFFSET UNITYSDK_OFFSET(0xE0E4240)
#define CLASS_2_235EAE06A792DE91_METHOD_2_8F12C1CECBAB5687_OFFSET UNITYSDK_OFFSET(0xE0E7510)
#define CLASS_2_235EAE06A792DE91_METHOD_2_99E958150EF58A00_OFFSET UNITYSDK_OFFSET(0xE0E8B30)
#define CLASS_2_235EAE06A792DE91_METHOD_2_9A7531CE64BE51FF_OFFSET UNITYSDK_OFFSET(0xE0E11D0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_AD80BF475A7B5AC7_OFFSET UNITYSDK_OFFSET(0xE0E0AC0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_B211C970FAE0A76A_OFFSET UNITYSDK_OFFSET(0xE0E95F0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xE0E40B0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_D20DE86217D00385_OFFSET UNITYSDK_OFFSET(0xE0E17D0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_D2CE74D280954825_OFFSET UNITYSDK_OFFSET(0xE0D4A90)
#define CLASS_2_235EAE06A792DE91_METHOD_2_D39733AC259CBE01_OFFSET UNITYSDK_OFFSET(0xE0E1A40)
#define CLASS_2_235EAE06A792DE91_METHOD_2_D3B6A3B6B8E9E6F5_OFFSET UNITYSDK_OFFSET(0xE0E0B40)
#define CLASS_2_235EAE06A792DE91_METHOD_2_D4F301BA5EAC50B8_OFFSET UNITYSDK_OFFSET(0xE0E6C20)
#define CLASS_2_235EAE06A792DE91_METHOD_2_D7C23D26A99F5611_OFFSET UNITYSDK_OFFSET(0xE0E1FD0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_D932D36A241796D9_OFFSET UNITYSDK_OFFSET(0xE0E2F30)
#define CLASS_2_235EAE06A792DE91_METHOD_2_DE2BC44ACB86CE8C_OFFSET UNITYSDK_OFFSET(0xE0E09F0)
#define CLASS_2_235EAE06A792DE91_METHOD_2_F25F58ACCE5240DB_OFFSET UNITYSDK_OFFSET(0xE0E3610)
#define CLASS_2_235EAE06A792DE91_METHOD_2_F7A981239F3BA361_OFFSET UNITYSDK_OFFSET(0xE0E6060)
#define CLASS_2_235EAE06A792DE91_SET_ENTRYPOSITION_OFFSET UNITYSDK_OFFSET(0xE0E9D60)
#define CLASS_2_235EAE06A792DE91_SET_ENTRYROTATION_OFFSET UNITYSDK_OFFSET(0xE0E9D90)
#define CLASS_2_235EAE06A792DE91__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E0790)
#define CLASS_2_235EAE06A792DE91___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE0E9DC0)

inline static constexpr unsigned int Class_2_235EAE06A792DE91_TypeDefinitionIndex = 70964;

class Class_2_235EAE06A792DE91 : public ::RPG::Client::LittleGame::SimpleViewService_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x30
	::Class_3_F4528A5C0F861AF2* Field_2_4; // 0x38
	::RPG::GameCore::GameEntity* Field_2_5; // 0x40
	::Class_2_43D1AA62A6D00FFF* Field_2_3; // 0x48
	::UnityEngine::Vector3 _EntryRotation_k__BackingField; // 0x50
	::UnityEngine::Vector3 _EntryPosition_k__BackingField; // 0x5C

	::System::Void _ctor(::Class_3_F4528A5C0F861AF2* a1, ::Class_2_43D1AA62A6D00FFF* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F4528A5C0F861AF2*, ::Class_2_43D1AA62A6D00FFF*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_DISPOSE_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_DE2BC44ACB86CE8C(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_DE2BC44ACB86CE8C_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_2_AD80BF475A7B5AC7()
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_AD80BF475A7B5AC7_OFFSET))(this);
	}

	::System::Void Method_2_D3B6A3B6B8E9E6F5(::System::String* a1, ::System::Single a2, ::UnityEngine::Transform* a3, ::System::Nullable_1<::UnityEngine::Vector3> a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::UnityEngine::Transform*, ::System::Nullable_1<::UnityEngine::Vector3>, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_D3B6A3B6B8E9E6F5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_76FE32F81D21C2C7(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_76FE32F81D21C2C7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9A7531CE64BE51FF(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_9A7531CE64BE51FF_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::ElfRestaurantGameEntity* Method_2_4EA1941ECFCE1F02(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::RPG::Client::LittleGame::ElfRestaurantGameEntity*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_4EA1941ECFCE1F02_OFFSET))(this, a1);
	}

	::System::Void Method_2_D20DE86217D00385(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_D20DE86217D00385_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D39733AC259CBE01(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_D39733AC259CBE01_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7C23D26A99F5611(::RPG::GameCore::RestaurantSpecialCustomerRow* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantSpecialCustomerRow*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_D7C23D26A99F5611_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7C68461F9C985D7E(::RPG::GameCore::RestaurantCustomerRow* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantCustomerRow*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_7C68461F9C985D7E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D932D36A241796D9(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_D932D36A241796D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F25F58ACCE5240DB(::RPG::Client::ElfRestaurantEmployeeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantEmployeeData*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_F25F58ACCE5240DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_11131D02C11DF6CB(::RPG::Client::ElfRestaurantEmployeeData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantEmployeeData*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_11131D02C11DF6CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C54EA8B0C7D0A02(::RPG::GameCore::RestaurantEmployeeRow* a1, ::Class_1_ADC27DBA8547EDD7* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantEmployeeRow*, ::Class_1_ADC27DBA8547EDD7*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_8C54EA8B0C7D0A02_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8B60647C42B5325B(::RPG::Client::ElfRestaurantEmployeeData* a1, ::Class_1_ADC27DBA8547EDD7* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ElfRestaurantEmployeeData*, ::Class_1_ADC27DBA8547EDD7*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_8B60647C42B5325B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1665286EC9959266(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_1665286EC9959266_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0BCAB7E812F96A9A(::UnityEngine::GameObject* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_0BCAB7E812F96A9A_OFFSET))(this, a1, a2, a3, a4);
	}

	::RPG::GameCore::LevelNPCInfo* Method_2_452B5B092C3BE78A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::LevelNPCInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_452B5B092C3BE78A_OFFSET))(this, a1, a2);
	}

	::Il2CppArray<::System::String*>* Method_2_1A6A4B766D9ED7B2(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::Il2CppArray<::System::String*>* a3)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_1A6A4B766D9ED7B2_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_04DB56F2FDF55A44(::RPG::GameCore::CharacterReplaceMaterialRenderList* a1, ::RPG::GameCore::CharacterReplaceMaterialRenderList* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CharacterReplaceMaterialRenderList*, ::RPG::GameCore::CharacterReplaceMaterialRenderList*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_04DB56F2FDF55A44_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D2CE74D280954825(::Class_1_ADC27DBA8547EDD7* a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Collections::Generic::List_1<::System::UInt32>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADC27DBA8547EDD7*, ::System::Int32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_D2CE74D280954825_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_76FE32F81D21C2C7_1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_76FE32F81D21C2C7_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_3A8C025796B96AED(::RPG::GameCore::RestaurantSuperEventType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RestaurantSuperEventType))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_3A8C025796B96AED_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7A981239F3BA361(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LittleGameEntityConfig* a3, ::System::Boolean a4, ::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean, ::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_F7A981239F3BA361_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_D4F301BA5EAC50B8(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::LittleGameEntityConfig* a3, ::System::Boolean a4, ::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean, ::System::Action_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_D4F301BA5EAC50B8_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_1E9624F772249C88(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_1E9624F772249C88_OFFSET))(this, a1, a2);
	}

	::UnityEngine::GameObject* Method_2_8F12C1CECBAB5687(::System::UInt32 a1, ::RPG::GameCore::LittleGameEntityConfig* a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_8F12C1CECBAB5687_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::GameObject* Method_2_1108E4162020BFB4(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::RestaurantFacilityType a3, ::RPG::GameCore::LittleGameEntityConfig* a4, ::System::Boolean a5)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::RestaurantFacilityType, ::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_1108E4162020BFB4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_0DE20920A20DC5C6(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_0DE20920A20DC5C6_OFFSET))(this, a1);
	}

	::System::Void Method_2_99E958150EF58A00(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_99E958150EF58A00_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_76D6A92B996F4F67(::RPG::GameCore::LittleGameEntityConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_76D6A92B996F4F67_OFFSET))(this, a1);
	}

	::System::Void Method_2_B211C970FAE0A76A(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_B211C970FAE0A76A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_14285EF51C6027C6(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_METHOD_2_14285EF51C6027C6_OFFSET))(this, a1);
	}

	::System::Void set_EntryPosition(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_SET_ENTRYPOSITION_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_EntryPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_GET_ENTRYPOSITION_OFFSET))(this);
	}

	::System::Void set_EntryRotation(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_SET_ENTRYROTATION_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_EntryRotation()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91_GET_ENTRYROTATION_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_235EAE06A792DE91___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
