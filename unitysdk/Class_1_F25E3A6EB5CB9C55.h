#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class LambdaExpression; }

#define CLASS_1_F25E3A6EB5CB9C55_METHOD_1_26EFD379820449B8_OFFSET UNITYSDK_OFFSET(0x17B7F8E0)
#define CLASS_1_F25E3A6EB5CB9C55_METHOD_1_FD8510BA2ADFE3A2_OFFSET UNITYSDK_OFFSET(0x17B7F960)

inline static constexpr unsigned int Class_1_F25E3A6EB5CB9C55_TypeDefinitionIndex = 32985;

class Class_1_F25E3A6EB5CB9C55 : public ::System::Object
{
public:
	static ::System::String* Method_1_26EFD379820449B8(::System::Linq::Expressions::LambdaExpression* a1)
	{
		return ((::System::String*(*)(::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + CLASS_1_F25E3A6EB5CB9C55_METHOD_1_26EFD379820449B8_OFFSET))(a1);
	}

	static ::System::String* Method_1_FD8510BA2ADFE3A2(::System::Linq::Expressions::Expression* a1)
	{
		return ((::System::String*(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + CLASS_1_F25E3A6EB5CB9C55_METHOD_1_FD8510BA2ADFE3A2_OFFSET))(a1);
	}
};
