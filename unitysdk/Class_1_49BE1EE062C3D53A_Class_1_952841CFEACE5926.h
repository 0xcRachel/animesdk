#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnviromentControlPriority.h"
#include "unitysdk/System/Object.h"

class Class_1_49BE1EE062C3D53A;
class Class_1_EAF7984A8FAD6BE4;
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_49BE1EE062C3D53A_CLASS_1_952841CFEACE5926_METHOD_1_4DD2714896566E81_OFFSET UNITYSDK_OFFSET(0x9EF7990)
#define CLASS_1_49BE1EE062C3D53A_CLASS_1_952841CFEACE5926_METHOD_1_62D75ADFFEE4BD8B_OFFSET UNITYSDK_OFFSET(0x9EF7B10)
#define CLASS_1_49BE1EE062C3D53A_CLASS_1_952841CFEACE5926__CTOR_OFFSET UNITYSDK_OFFSET(0x9EF8460)

inline static constexpr unsigned int Class_1_49BE1EE062C3D53A_Class_1_952841CFEACE5926_TypeDefinitionIndex = 39161;

class Class_1_49BE1EE062C3D53A_Class_1_952841CFEACE5926 : public ::System::Object
{
public:
	::System::Collections::Generic::Stack_1<::Class_1_49BE1EE062C3D53A*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_49BE1EE062C3D53A_CLASS_1_952841CFEACE5926__CTOR_OFFSET))(this, a1);
	}

	::Class_1_49BE1EE062C3D53A* Method_1_4DD2714896566E81(::RPG::GameCore::EnviromentControlPriority a1, ::Class_1_EAF7984A8FAD6BE4* a2)
	{
		return ((::Class_1_49BE1EE062C3D53A*(*)(::PVOID, ::RPG::GameCore::EnviromentControlPriority, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_1_49BE1EE062C3D53A_CLASS_1_952841CFEACE5926_METHOD_1_4DD2714896566E81_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_62D75ADFFEE4BD8B(::Class_1_49BE1EE062C3D53A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_49BE1EE062C3D53A*))((::PBYTE)hIl2Cpp + CLASS_1_49BE1EE062C3D53A_CLASS_1_952841CFEACE5926_METHOD_1_62D75ADFFEE4BD8B_OFFSET))(this, a1);
	}
};
