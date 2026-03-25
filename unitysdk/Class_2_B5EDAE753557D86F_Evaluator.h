#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_2_B5EDAE753557D86F_EVALUATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x895ED30)
#define CLASS_2_B5EDAE753557D86F_EVALUATOR_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x895EDA0)
#define CLASS_2_B5EDAE753557D86F_EVALUATOR_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x895ED80)
#define CLASS_2_B5EDAE753557D86F_EVALUATOR_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0x895ED70)
#define CLASS_2_B5EDAE753557D86F_EVALUATOR_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x895E890)
#define CLASS_2_B5EDAE753557D86F_EVALUATOR_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x895EDB0)
#define CLASS_2_B5EDAE753557D86F_EVALUATOR_SET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x895ED90)
#define CLASS_2_B5EDAE753557D86F_EVALUATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x895ED20)

inline static constexpr unsigned int Class_2_B5EDAE753557D86F_Evaluator_TypeDefinitionIndex = 46273;

class Class_2_B5EDAE753557D86F_Evaluator : public ::System::Object
{
public:
	::System::String* _UniqueName_k__BackingField; // 0x10
	::System::Boolean _IsFinished_k__BackingField; // 0x18
	::System::Boolean _IsPaused_k__BackingField; // 0x19

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_EVALUATOR__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_EVALUATOR_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_EVALUATOR_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::String* get_UniqueName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_EVALUATOR_GET_UNIQUENAME_OFFSET))(this);
	}

	::System::Boolean get_IsPaused()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_EVALUATOR_GET_ISPAUSED_OFFSET))(this);
	}

	::System::Void set_IsPaused(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_EVALUATOR_SET_ISPAUSED_OFFSET))(this, value);
	}

	::System::Boolean get_IsFinished()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_EVALUATOR_GET_ISFINISHED_OFFSET))(this);
	}

	::System::Void set_IsFinished(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B5EDAE753557D86F_EVALUATOR_SET_ISFINISHED_OFFSET))(this, value);
	}
};
