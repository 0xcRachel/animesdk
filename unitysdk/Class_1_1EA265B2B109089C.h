#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_823;
namespace System::Reflection { class MethodInfo; }

#define CLASS_1_1EA265B2B109089C_CREATE_OFFSET UNITYSDK_OFFSET(0x89291F0)
#define CLASS_1_1EA265B2B109089C__CTOR_OFFSET UNITYSDK_OFFSET(0x8929300)

inline static constexpr unsigned int Class_1_1EA265B2B109089C_TypeDefinitionIndex = 58314;

class Class_1_1EA265B2B109089C : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1EA265B2B109089C__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_823* Create(::System::Object* a1, ::System::Reflection::MethodInfo* a2, ::RPG::GameCore::EventType a3, ::System::UInt32 a4)
	{
		return ((::Class_0_16E4307DCC419505_823*(*)(::PVOID, ::System::Object*, ::System::Reflection::MethodInfo*, ::RPG::GameCore::EventType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1EA265B2B109089C_CREATE_OFFSET))(this, a1, a2, a3, a4);
	}
};
