#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_89B326182DD9AB58.h"

class Class_0_16E4307DCC419505_27;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_95C21AC1899D2130_METHOD_2_977A6D5548886CED_OFFSET UNITYSDK_OFFSET(0x15FFF850)
#define CLASS_2_95C21AC1899D2130__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFF810)

inline static constexpr unsigned int Class_2_95C21AC1899D2130_TypeDefinitionIndex = 27894;

class Class_2_95C21AC1899D2130 : public ::Class_1_89B326182DD9AB58
{
public:
	::RPG::Client::RPGProfilerMarker* Field_2_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_27* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_27*))((::PBYTE)hIl2Cpp + CLASS_2_95C21AC1899D2130__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_977A6D5548886CED(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_95C21AC1899D2130_METHOD_2_977A6D5548886CED_OFFSET))(this, a1, a2);
	}
};
