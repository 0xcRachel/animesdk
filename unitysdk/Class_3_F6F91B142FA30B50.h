#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_6BFAFA494F2D1E4B;
namespace RPG::GameCore { class ST_ByAIHangUp; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F6F91B142FA30B50_EVALUATE_OFFSET UNITYSDK_OFFSET(0xEEC3F10)
#define CLASS_3_F6F91B142FA30B50__CTOR_OFFSET UNITYSDK_OFFSET(0xEEC3EB0)

inline static constexpr unsigned int Class_3_F6F91B142FA30B50_TypeDefinitionIndex = 41153;

class Class_3_F6F91B142FA30B50 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByAIHangUp*>
{
public:
	::Class_2_6BFAFA494F2D1E4B* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByAIHangUp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByAIHangUp*))((::PBYTE)hIl2Cpp + CLASS_3_F6F91B142FA30B50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F6F91B142FA30B50_EVALUATE_OFFSET))(this);
	}
};
