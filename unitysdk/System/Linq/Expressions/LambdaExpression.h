#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Linq::Expressions { class ParameterExpression; }
namespace System::Runtime::CompilerServices { class DebugInfoGenerator; }

#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILE_1_OFFSET UNITYSDK_OFFSET(0x17CFF3F0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILE_2_OFFSET UNITYSDK_OFFSET(0x17CFF460)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILE_OFFSET UNITYSDK_OFFSET(0x17CFF380)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x17CFF2C0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_BODY_OFFSET UNITYSDK_OFFSET(0x17CFF1B0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NAMECORE_OFFSET UNITYSDK_OFFSET(0x17CFF1A0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17CFF180)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x17CFF170)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x17CFF330)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x17CFF1C0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TAILCALLCORE_OFFSET UNITYSDK_OFFSET(0x17CFF290)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TAILCALL_OFFSET UNITYSDK_OFFSET(0x17CFF270)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17CFF150)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IPARAMETERPROVIDER_GETPARAMETER_OFFSET UNITYSDK_OFFSET(0x17CFF2A0)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IPARAMETERPROVIDER_GET_PARAMETERCOUNT_OFFSET UNITYSDK_OFFSET(0x17CFF310)
#define SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x17CFF0F0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int LambdaExpression_TypeDefinitionIndex = 3205;

	class LambdaExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::Expression* _body; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::Expression* body)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION__CTOR_OFFSET))(this, body);
		}

		::System::Type* get_Type()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TYPE_OFFSET))(this);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NAME_OFFSET))(this);
		}

		::System::String* get_NameCore()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_NAMECORE_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Body()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_BODY_OFFSET))(this);
		}

		::System::Type* get_ReturnType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_RETURNTYPE_OFFSET))(this);
		}

		::System::Boolean get_TailCall()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TAILCALL_OFFSET))(this);
		}

		::System::Boolean get_TailCallCore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_TAILCALLCORE_OFFSET))(this);
		}

		::System::Linq::Expressions::ParameterExpression* System_Linq_Expressions_IParameterProvider_GetParameter(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IPARAMETERPROVIDER_GETPARAMETER_OFFSET))(this, index);
		}

		::System::Linq::Expressions::ParameterExpression* GetParameter(::System::Int32 index)
		{
			return ((::System::Linq::Expressions::ParameterExpression*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GETPARAMETER_OFFSET))(this, index);
		}

		::System::Int32 System_Linq_Expressions_IParameterProvider_get_ParameterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_SYSTEM_LINQ_EXPRESSIONS_IPARAMETERPROVIDER_GET_PARAMETERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_ParameterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_GET_PARAMETERCOUNT_OFFSET))(this);
		}

		::System::Delegate* Compile()
		{
			return ((::System::Delegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILE_OFFSET))(this);
		}

		::System::Delegate* Compile_1(::System::Boolean preferInterpretation)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILE_1_OFFSET))(this, preferInterpretation);
		}

		::System::Delegate* Compile_2(::System::Runtime::CompilerServices::DebugInfoGenerator* debugInfoGenerator)
		{
			return ((::System::Delegate*(*)(::PVOID, ::System::Runtime::CompilerServices::DebugInfoGenerator*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_LAMBDAEXPRESSION_COMPILE_2_OFFSET))(this, debugInfoGenerator);
		}
	};
}
