#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureMoveDestType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_347;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CLASS_1_E4FA7133ABAF3904_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x10D9A080)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_053942551B871792_OFFSET UNITYSDK_OFFSET(0x10D99A30)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x10D99CA0)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_31F139006510646B_OFFSET UNITYSDK_OFFSET(0x10D992C0)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x10D99D00)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_44BBC94B0FE09175_OFFSET UNITYSDK_OFFSET(0x10D99890)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_49A6B4B3D5617E03_OFFSET UNITYSDK_OFFSET(0x10D99D70)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_5B0531D5B96D6B96_OFFSET UNITYSDK_OFFSET(0x10D99F90)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_6080732EBB757F55_OFFSET UNITYSDK_OFFSET(0x10D99BC0)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_A3CB7D3409843D89_OFFSET UNITYSDK_OFFSET(0x10D99220)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x10D99F40)
#define CLASS_1_E4FA7133ABAF3904_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10D9A070)
#define CLASS_1_E4FA7133ABAF3904_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x10D9A090)
#define CLASS_1_E4FA7133ABAF3904__CTOR_OFFSET UNITYSDK_OFFSET(0x10D9A0A0)

inline static constexpr unsigned int Class_1_E4FA7133ABAF3904_TypeDefinitionIndex = 44865;

class Class_1_E4FA7133ABAF3904 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_5; // 0x10
	::RPG::GameCore::GameEntity* Field_1_4; // 0x18
	::System::Single Field_1_2; // 0x20
	::RPG::GameCore::AdventureMoveDestType _Type_k__BackingField; // 0x24
	::UnityEngine::Vector3 Field_1_3; // 0x28
	::System::Single Field_1_1; // 0x34
	::UnityEngine::Vector3 Field_1_6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A3CB7D3409843D89(::UnityEngine::Transform* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_A3CB7D3409843D89_OFFSET))(this, a1);
	}

	::System::Void Method_1_053942551B871792(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_053942551B871792_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_6080732EBB757F55(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_6080732EBB757F55_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_31F139006510646B(::UnityEngine::Transform* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_31F139006510646B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_49A6B4B3D5617E03(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_49A6B4B3D5617E03_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_D799715F2EF979EA_OFFSET))(this);
	}

	::System::Void Method_1_5B0531D5B96D6B96(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_5B0531D5B96D6B96_OFFSET))(this, a1);
	}

	::System::Void Method_1_44BBC94B0FE09175(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_44BBC94B0FE09175_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::RPG::GameCore::AdventureMoveDestType get_Type()
	{
		return ((::RPG::GameCore::AdventureMoveDestType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::AdventureMoveDestType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureMoveDestType))((::PBYTE)hIl2Cpp + CLASS_1_E4FA7133ABAF3904_SET_TYPE_OFFSET))(this, value);
	}
};
