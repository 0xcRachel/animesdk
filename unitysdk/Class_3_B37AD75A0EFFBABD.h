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

#define CLASS_3_B37AD75A0EFFBABD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1010F1A0)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_05DBE83F8B5D6163_OFFSET UNITYSDK_OFFSET(0x1010F510)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_0A68C812815B75DA_OFFSET UNITYSDK_OFFSET(0x10111980)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_4B95663C16A02708_OFFSET UNITYSDK_OFFSET(0x101115C0)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_56D8C8BA32305461_OFFSET UNITYSDK_OFFSET(0x10111890)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_A3EF4ED894EBFFC3_OFFSET UNITYSDK_OFFSET(0x101114E0)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x10111780)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_ACD91D865E237BC7_OFFSET UNITYSDK_OFFSET(0x10111BD0)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_D0BD1377F2594D33_1_OFFSET UNITYSDK_OFFSET(0x1010F2C0)
#define CLASS_3_B37AD75A0EFFBABD_METHOD_3_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1010F200)
#define CLASS_3_B37AD75A0EFFBABD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1010F380)
#define CLASS_3_B37AD75A0EFFBABD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x101111D0)
#define CLASS_3_B37AD75A0EFFBABD_TICK_OFFSET UNITYSDK_OFFSET(0x10111280)
#define CLASS_3_B37AD75A0EFFBABD__CCTOR_OFFSET UNITYSDK_OFFSET(0x101121A0)
#define CLASS_3_B37AD75A0EFFBABD__CTOR_OFFSET UNITYSDK_OFFSET(0x1010F0F0)
#define CLASS_3_B37AD75A0EFFBABD___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x101121E0)
#define CLASS_3_B37AD75A0EFFBABD___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x10112240)

inline static constexpr unsigned int Class_3_B37AD75A0EFFBABD_TypeDefinitionIndex = 48193;

class Class_3_B37AD75A0EFFBABD : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Main_Escape*>
{
public:
	static ::System::Single* StaticGet_Field_3_8()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_3_B37AD75A0EFFBABD_TypeDefinitionIndex)->GetStaticField(0xEF10);
	}
	::RPG::GameCore::AdventureAbilityComponent* Field_3_10; // 0x28
	::Class_2_A0580152EB393340* Field_3_1; // 0x30
	::RPG::GameCore::TransformComponent* Field_3_0; // 0x38
	::System::Nullable_1<::UnityEngine::Vector3> Field_3_7; // 0x40
	::System::Single Field_3_2; // 0x50
	::UnityEngine::Vector3 Field_3_5; // 0x54
	::UnityEngine::Vector3 Field_3_6; // 0x60
	::System::Boolean Field_3_9; // 0x6C
	::System::Int32 Field_3_4; // 0x70
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

	::System::Boolean Method_3_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_ABFE6A357B89C69A_OFFSET))(this);
	}

	::System::Boolean Method_3_4B95663C16A02708()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_4B95663C16A02708_OFFSET))(this);
	}

	::System::Boolean Method_3_05DBE83F8B5D6163()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_05DBE83F8B5D6163_OFFSET))(this);
	}

	::System::Boolean Method_3_ACD91D865E237BC7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B37AD75A0EFFBABD_METHOD_3_ACD91D865E237BC7_OFFSET))(this);
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
