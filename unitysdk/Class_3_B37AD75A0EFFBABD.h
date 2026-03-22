#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_A0580152EB393340;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_Escape; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_3_B37AD75A0EFFBABD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x109FFF10)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_05DBE83F8B5D6163_OFFSET UNITYSDK_OFFSET(0x10A00280)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_0A68C812815B75DA_OFFSET UNITYSDK_OFFSET(0x10A02680)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_4B95663C16A02708_OFFSET UNITYSDK_OFFSET(0x10A022F0)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_4DB14E9CF0E552EE_OFFSET UNITYSDK_OFFSET(0x10A028D0)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_56D8C8BA32305461_OFFSET UNITYSDK_OFFSET(0x10A02590)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_A3EF4ED894EBFFC3_OFFSET UNITYSDK_OFFSET(0x10A02210)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0x10A024B0)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_D0BD1377F2594D33_1_OFFSET UNITYSDK_OFFSET(0x10A00030)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x109FFF70)
#define CLASS_3_B37AD75A0EFFBABD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10A000F0)
#define CLASS_3_B37AD75A0EFFBABD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10A01F00)
#define CLASS_3_B37AD75A0EFFBABD_TICK_OFFSET UNITYSDK_OFFSET(0x10A01FB0)
#define CLASS_3_B37AD75A0EFFBABD__CCTOR_OFFSET UNITYSDK_OFFSET(0x10A02E90)
#define CLASS_3_B37AD75A0EFFBABD__CTOR_OFFSET UNITYSDK_OFFSET(0x109FFE60)
#define CLASS_3_B37AD75A0EFFBABD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A02EA0)
#define CLASS_3_B37AD75A0EFFBABD___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10A02F00)

inline static constexpr unsigned int Class_3_B37AD75A0EFFBABD_TypeDefinitionIndex = 41190;

class Class_3_B37AD75A0EFFBABD : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_Escape*>
{
public:
	static ::System::Single* StaticGet_Field_3_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_B37AD75A0EFFBABD_TypeDefinitionIndex)->GetStaticField(0xF110);
	}
	::Class_2_A0580152EB393340* Field_3_1; // 0x28
	::RPG::GameCore::TransformComponent* Field_3_0; // 0x30
	::RPG::GameCore::AdventureAbilityComponent* Field_3_10; // 0x38
	::System::Boolean Field_3_9; // 0x40
	::System::Single Field_3_2; // 0x44
	::UnityEngine::Vector3 Field_3_5; // 0x48
	::UnityEngine::Vector3 Field_3_6; // 0x54
	::System::Int32 Field_3_4; // 0x60
	::System::Nullable_1<::UnityEngine::Vector3> Field_3_7; // 0x64
	::UnityEngine::Vector3 Field_3_3; // 0x74

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_Escape* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_Escape*))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_3_D0BD1377F2594D33_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_D0BD1377F2594D33_1_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_TICK_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Single> Method_3_56D8C8BA32305461(::RPG::GameCore::TransformComponent* a1)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_56D8C8BA32305461_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_AA972BE565DAF9E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_AA972BE565DAF9E3_OFFSET))(this);
	}

	::System::Boolean Method_3_4B95663C16A02708()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_4B95663C16A02708_OFFSET))(this);
	}

	::System::Boolean Method_3_05DBE83F8B5D6163()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_05DBE83F8B5D6163_OFFSET))(this);
	}

	::System::Boolean Method_3_4DB14E9CF0E552EE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_4DB14E9CF0E552EE_OFFSET))(this);
	}

	::System::Boolean Method_3_A3EF4ED894EBFFC3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_A3EF4ED894EBFFC3_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_0A68C812815B75DA(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_0A68C812815B75DA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
