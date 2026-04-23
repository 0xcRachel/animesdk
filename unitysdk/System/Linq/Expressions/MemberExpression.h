#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/Expressions/Expression.h"
#include "unitysdk/System/Linq/Expressions/ExpressionType.h"

namespace System::Linq::Expressions { class ExpressionVisitor; }
namespace System::Linq::Expressions { class FieldExpression; }
namespace System::Linq::Expressions { class PropertyExpression; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class PropertyInfo; }

#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_ACCEPT_OFFSET UNITYSDK_OFFSET(0x19C82500)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_GETMEMBER_OFFSET UNITYSDK_OFFSET(0x19C824B0)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_GET_EXPRESSION_OFFSET UNITYSDK_OFFSET(0x19C822A0)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x19C82290)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x19C824A0)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_MAKE_1_OFFSET UNITYSDK_OFFSET(0x19C82410)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_MAKE_OFFSET UNITYSDK_OFFSET(0x19C82310)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_UPDATE_OFFSET UNITYSDK_OFFSET(0x19C82530)
#define SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19C822B0)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int MemberExpression_TypeDefinitionIndex = 3230;

	class MemberExpression : public ::System::Linq::Expressions::Expression
	{
	public:
		::System::Linq::Expressions::Expression* _Expression_k__BackingField; // 0x10

		::System::Void _ctor(::System::Linq::Expressions::Expression* expression)
		{
			return ((::System::Void(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION__CTOR_OFFSET))(this, expression);
		}

		::System::Reflection::MemberInfo* get_Member()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_GET_MEMBER_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* get_Expression()
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_GET_EXPRESSION_OFFSET))(this);
		}

		static ::System::Linq::Expressions::PropertyExpression* Make(::System::Linq::Expressions::Expression* expression, ::System::Reflection::PropertyInfo* property)
		{
			return ((::System::Linq::Expressions::PropertyExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_MAKE_OFFSET))(expression, property);
		}

		static ::System::Linq::Expressions::FieldExpression* Make_1(::System::Linq::Expressions::Expression* expression, ::System::Reflection::FieldInfo* field)
		{
			return ((::System::Linq::Expressions::FieldExpression*(*)(::System::Linq::Expressions::Expression*, ::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_MAKE_1_OFFSET))(expression, field);
		}

		::System::Linq::Expressions::ExpressionType get_NodeType()
		{
			return ((::System::Linq::Expressions::ExpressionType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_GET_NODETYPE_OFFSET))(this);
		}

		::System::Reflection::MemberInfo* GetMember()
		{
			return ((::System::Reflection::MemberInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_GETMEMBER_OFFSET))(this);
		}

		::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor)
		{
			return ((::System::Linq::Expressions::Expression*(*)(::PVOID, ::System::Linq::Expressions::ExpressionVisitor*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_ACCEPT_OFFSET))(this, visitor);
		}

		::System::Linq::Expressions::MemberExpression* Update(::System::Linq::Expressions::Expression* expression)
		{
			return ((::System::Linq::Expressions::MemberExpression*(*)(::PVOID, ::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_MEMBEREXPRESSION_UPDATE_OFFSET))(this, expression);
		}
	};
}
