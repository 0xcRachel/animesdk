#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C1EF032BF58D5C23___c__DisplayClass3_0.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DamageByAttackProperty; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_C1EF032BF58D5C23_DISPOSE_OFFSET UNITYSDK_OFFSET(0x86BB160)
#define CLASS_1_C1EF032BF58D5C23_METHOD_1_072E43354A419128_OFFSET UNITYSDK_OFFSET(0x86BA670)
#define CLASS_1_C1EF032BF58D5C23__CTOR_OFFSET UNITYSDK_OFFSET(0x86BA610)
#define CLASS_1_C1EF032BF58D5C23__PERSISTDATA_G___PERSISTDYNAMICFLOAT_3_0_OFFSET UNITYSDK_OFFSET(0x86BB0C0)

inline static constexpr unsigned int Class_1_C1EF032BF58D5C23_TypeDefinitionIndex = 42959;

class Class_1_C1EF032BF58D5C23 : public ::System::Object
{
public:
	::RPG::GameCore::DamageByAttackProperty* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::DamageByAttackProperty* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DamageByAttackProperty*))((::PBYTE)hIl2Cpp + CLASS_1_C1EF032BF58D5C23__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_072E43354A419128(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DamageByAttackProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DamageByAttackProperty*))((::PBYTE)hIl2Cpp + CLASS_1_C1EF032BF58D5C23_METHOD_1_072E43354A419128_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C1EF032BF58D5C23_DISPOSE_OFFSET))(this);
	}

	static ::RPG::GameCore::DynamicFloat* _PersistData_g___PersistDynamicFloat_3_0(::RPG::GameCore::DynamicFloat* pRawDynValue, ::Class_1_C1EF032BF58D5C23___c__DisplayClass3_0& a2)
	{
		return ((::RPG::GameCore::DynamicFloat*(*)(::RPG::GameCore::DynamicFloat*, ::Class_1_C1EF032BF58D5C23___c__DisplayClass3_0&))((::PBYTE)hIl2Cpp + CLASS_1_C1EF032BF58D5C23__PERSISTDATA_G___PERSISTDYNAMICFLOAT_3_0_OFFSET))(pRawDynValue, a2);
	}
};
