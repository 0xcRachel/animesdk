#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Text/RegularExpressions/RegexOptions.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x17F40F80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_CHILDCOUNT_OFFSET UNITYSDK_OFFSET(0x17F388E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_CHILD_OFFSET UNITYSDK_OFFSET(0x17F388F0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEQUANTIFIER_OFFSET UNITYSDK_OFFSET(0x17F40E20)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEREP_OFFSET UNITYSDK_OFFSET(0x17F3FF90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEALTERNATION_OFFSET UNITYSDK_OFFSET(0x17F400B0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCECONCATENATION_OFFSET UNITYSDK_OFFSET(0x17F406A0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEGROUP_OFFSET UNITYSDK_OFFSET(0x17F40C40)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEREP_OFFSET UNITYSDK_OFFSET(0x17F40A80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCESET_OFFSET UNITYSDK_OFFSET(0x17F40C90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCE_OFFSET UNITYSDK_OFFSET(0x17F3FFB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REVERSELEFT_OFFSET UNITYSDK_OFFSET(0x17F3FF00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_STRIPENATION_OFFSET UNITYSDK_OFFSET(0x17F40DD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_TYPE_OFFSET UNITYSDK_OFFSET(0x17F41060)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_USEOPTIONR_OFFSET UNITYSDK_OFFSET(0x17F3FEF0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F3FEA0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17F3FEB0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x17F3FEC0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x17F3FED0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x17F3FE90)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexNode_TypeDefinitionIndex = 2506;

	class RegexNode : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Text::RegularExpressions::RegexNode*>* _children; // 0x10
		::System::String* _str; // 0x18
		::System::Text::RegularExpressions::RegexNode* _next; // 0x20
		::System::Char _ch; // 0x28
		::System::Int32 _n; // 0x2C
		::System::Int32 _m; // 0x30
		::System::Text::RegularExpressions::RegexOptions _options; // 0x34
		::System::Int32 _type; // 0x38

		::System::Void _ctor(::System::Int32 type, ::System::Text::RegularExpressions::RegexOptions options)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexOptions))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_OFFSET))(this, type, options);
		}

		::System::Void _ctor_1(::System::Int32 type, ::System::Text::RegularExpressions::RegexOptions options, ::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexOptions, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_1_OFFSET))(this, type, options, ch);
		}

		::System::Void _ctor_2(::System::Int32 type, ::System::Text::RegularExpressions::RegexOptions options, ::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexOptions, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_2_OFFSET))(this, type, options, str);
		}

		::System::Void _ctor_3(::System::Int32 type, ::System::Text::RegularExpressions::RegexOptions options, ::System::Int32 m)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexOptions, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_3_OFFSET))(this, type, options, m);
		}

		::System::Void _ctor_4(::System::Int32 type, ::System::Text::RegularExpressions::RegexOptions options, ::System::Int32 m, ::System::Int32 n)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexOptions, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE__CTOR_4_OFFSET))(this, type, options, m, n);
		}

		::System::Boolean UseOptionR()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_USEOPTIONR_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ReverseLeft()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REVERSELEFT_OFFSET))(this);
		}

		::System::Void MakeRep(::System::Int32 type, ::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEREP_OFFSET))(this, type, min, max);
		}

		::System::Text::RegularExpressions::RegexNode* Reduce()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCE_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* StripEnation(::System::Int32 emptyType)
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_STRIPENATION_OFFSET))(this, emptyType);
		}

		::System::Text::RegularExpressions::RegexNode* ReduceGroup()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEGROUP_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ReduceRep()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEREP_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ReduceSet()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCESET_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ReduceAlternation()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCEALTERNATION_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* ReduceConcatenation()
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_REDUCECONCATENATION_OFFSET))(this);
		}

		::System::Text::RegularExpressions::RegexNode* MakeQuantifier(::System::Boolean lazy, ::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_MAKEQUANTIFIER_OFFSET))(this, lazy, min, max);
		}

		::System::Void AddChild(::System::Text::RegularExpressions::RegexNode* newChild)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::RegularExpressions::RegexNode*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_ADDCHILD_OFFSET))(this, newChild);
		}

		::System::Text::RegularExpressions::RegexNode* Child(::System::Int32 i)
		{
			return ((::System::Text::RegularExpressions::RegexNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_CHILD_OFFSET))(this, i);
		}

		::System::Int32 ChildCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_CHILDCOUNT_OFFSET))(this);
		}

		::System::Int32 Type()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXNODE_TYPE_OFFSET))(this);
		}
	};
}
