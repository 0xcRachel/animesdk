#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_3_44EDAE37250FA2DB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x111964E0)
#define CLASS_3_44EDAE37250FA2DB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11196520)
#define CLASS_3_44EDAE37250FA2DB___C__REPORTGAMEEND_B__176_0_OFFSET UNITYSDK_OFFSET(0x11196530)

inline static constexpr unsigned int Class_3_44EDAE37250FA2DB___c_TypeDefinitionIndex = 60467;

class Class_3_44EDAE37250FA2DB___c : public ::System::Object
{
public:
	static ::Class_3_44EDAE37250FA2DB___c** StaticGet___9()
	{
		return (::Class_3_44EDAE37250FA2DB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_44EDAE37250FA2DB___c_TypeDefinitionIndex)->GetStaticField(0x43B30);
	}
	static ::System::Func_2<::RPG::GameCore::LittleGameEntityConfig*, ::System::String*>** StaticGet___9__176_0()
	{
		return (::System::Func_2<::RPG::GameCore::LittleGameEntityConfig*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_44EDAE37250FA2DB___c_TypeDefinitionIndex)->GetStaticField(0x43B38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_44EDAE37250FA2DB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_44EDAE37250FA2DB___C__CTOR_OFFSET))(this);
	}

	::System::String* _ReportGameEnd_b__176_0(::RPG::GameCore::LittleGameEntityConfig* v)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + CLASS_3_44EDAE37250FA2DB___C__REPORTGAMEEND_B__176_0_OFFSET))(this, v);
	}
};
