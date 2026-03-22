#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F8697751FCF1A080_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0xEEC0630)
#define CLASS_1_F8697751FCF1A080_METHOD_1_DB571F8D591CAAD1_OFFSET UNITYSDK_OFFSET(0xEEC04C0)
#define CLASS_1_F8697751FCF1A080__CTOR_OFFSET UNITYSDK_OFFSET(0xEEC04B0)

inline static constexpr unsigned int Class_1_F8697751FCF1A080_TypeDefinitionIndex = 54158;

class Class_1_F8697751FCF1A080 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8697751FCF1A080__CTOR_OFFSET))(this);
	}

	static ::Class_1_F8697751FCF1A080* Method_1_DB571F8D591CAAD1(::Il2CppArray<::RPG::GameCore::BattleOperationType>* a1, ::System::Int32 a2)
	{
		return ((::Class_1_F8697751FCF1A080*(*)(::Il2CppArray<::RPG::GameCore::BattleOperationType>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F8697751FCF1A080_METHOD_1_DB571F8D591CAAD1_OFFSET))(a1, a2);
	}

	::System::Void Method_1_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8697751FCF1A080_METHOD_1_652F3820D8B242FF_OFFSET))(this);
	}
};
