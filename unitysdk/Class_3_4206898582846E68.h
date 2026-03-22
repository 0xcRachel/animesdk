#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_1_5F51D4049EA87B7B;
class Class_2_F1C3EBA366E084A2;
namespace RPG::GameCore { class ST_ByDistanceToEnchantTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_4206898582846E68_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1FFF60)
#define CLASS_3_4206898582846E68_EVALUATE_OFFSET UNITYSDK_OFFSET(0xD1FFC30)
#define CLASS_3_4206898582846E68__CTOR_OFFSET UNITYSDK_OFFSET(0xD1FFB20)
#define CLASS_3_4206898582846E68___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD1FFFD0)

inline static constexpr unsigned int Class_3_4206898582846E68_TypeDefinitionIndex = 41160;

class Class_3_4206898582846E68 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByDistanceToEnchantTarget*>
{
public:
	::Class_2_F1C3EBA366E084A2* Field_3_0; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByDistanceToEnchantTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByDistanceToEnchantTarget*))((::PBYTE)hIl2Cpp + CLASS_3_4206898582846E68__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4206898582846E68_EVALUATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4206898582846E68_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4206898582846E68___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
