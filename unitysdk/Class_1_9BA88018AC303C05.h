#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C58549E83E2A95B6;
class Class_1_F1C57540A2293C7F;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_1_9BA88018AC303C05_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10471000)
#define CLASS_1_9BA88018AC303C05_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x10471060)
#define CLASS_1_9BA88018AC303C05_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x104702A0)
#define CLASS_1_9BA88018AC303C05_METHOD_1_A576F328C56C105D_OFFSET UNITYSDK_OFFSET(0x10470380)
#define CLASS_1_9BA88018AC303C05_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0x10470250)
#define CLASS_1_9BA88018AC303C05_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x10471070)
#define CLASS_1_9BA88018AC303C05__CTOR_OFFSET UNITYSDK_OFFSET(0x10470200)

inline static constexpr unsigned int Class_1_9BA88018AC303C05_TypeDefinitionIndex = 44870;

class Class_1_9BA88018AC303C05 : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* Field_1_8; // 0x10
	::RPG::GameCore::TransformComponent* Field_1_4; // 0x18
	::Class_1_F1C57540A2293C7F* Field_1_2; // 0x20
	::Class_1_C58549E83E2A95B6* Field_1_6; // 0x28
	::Il2CppArray<::System::Single>* Field_1_9; // 0x30
	::RPG::GameCore::GameEntity* Field_1_3; // 0x38
	::UnityEngine::Vector3 Field_1_11; // 0x40
	::System::Single Field_1_7; // 0x4C
	::UnityEngine::Vector3 Field_1_10; // 0x50
	::System::Boolean Field_1_1; // 0x5C
	::System::Boolean _IsActive_k__BackingField; // 0x5D
	::System::Single Field_1_5; // 0x60

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05__CTOR_OFFSET))(this, a1);
	}

	::Class_1_F1C57540A2293C7F* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_F1C57540A2293C7F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_A576F328C56C105D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05_METHOD_1_A576F328C56C105D_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9BA88018AC303C05_SET_ISACTIVE_OFFSET))(this, value);
	}
};
