#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class ArgumentException; }
namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class RegexCode; }
namespace System::Text::RegularExpressions { class RegexNode; }
namespace System::Text::RegularExpressions { class RegexTree; }

#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_CURPOS_OFFSET UNITYSDK_OFFSET(0x16B679C0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMITFRAGMENT_OFFSET UNITYSDK_OFFSET(0x16B67E30)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_1_OFFSET UNITYSDK_OFFSET(0x16B67A80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_2_OFFSET UNITYSDK_OFFSET(0x16B67B10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_OFFSET UNITYSDK_OFFSET(0x16B67A10)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMPTYSTACK_OFFSET UNITYSDK_OFFSET(0x16B67970)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_MAKEEXCEPTION_OFFSET UNITYSDK_OFFSET(0x16B67D00)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_MAPCAPNUM_OFFSET UNITYSDK_OFFSET(0x16B67D80)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_PATCHJUMP_OFFSET UNITYSDK_OFFSET(0x16B679D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_POPINT_OFFSET UNITYSDK_OFFSET(0x16B67980)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_PUSHINT_OFFSET UNITYSDK_OFFSET(0x16B678D0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_REGEXCODEFROMREGEXTREE_OFFSET UNITYSDK_OFFSET(0x16B673E0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_STRINGCODE_OFFSET UNITYSDK_OFFSET(0x16B67BD0)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_WRITE_OFFSET UNITYSDK_OFFSET(0x16B48F90)
#define SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x16B67320)

namespace System::Text::RegularExpressions
{
	inline static constexpr unsigned int RegexWriter_TypeDefinitionIndex = 2519;

	class RegexWriter : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* _emitted; // 0x10
		::Il2CppArray<::System::Int32>* _intStack; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* _stringtable; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _stringhash; // 0x28
		::System::Collections::Hashtable* _caps; // 0x30
		::System::Int32 _depth; // 0x38
		::System::Int32 _curpos; // 0x3C
		::System::Int32 _count; // 0x40
		::System::Boolean _counting; // 0x44
		::System::Int32 _trackcount; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER__CTOR_OFFSET))(this);
		}

		static ::System::Text::RegularExpressions::RegexCode* Write(::System::Text::RegularExpressions::RegexTree* t)
		{
			return ((::System::Text::RegularExpressions::RegexCode*(*)(::System::Text::RegularExpressions::RegexTree*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_WRITE_OFFSET))(t);
		}

		::System::Void PushInt(::System::Int32 I)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_PUSHINT_OFFSET))(this, I);
		}

		::System::Boolean EmptyStack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMPTYSTACK_OFFSET))(this);
		}

		::System::Int32 PopInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_POPINT_OFFSET))(this);
		}

		::System::Int32 CurPos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_CURPOS_OFFSET))(this);
		}

		::System::Void PatchJump(::System::Int32 Offset, ::System::Int32 jumpDest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_PATCHJUMP_OFFSET))(this, Offset, jumpDest);
		}

		::System::Void Emit(::System::Int32 op)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_OFFSET))(this, op);
		}

		::System::Void Emit_1(::System::Int32 op, ::System::Int32 opd1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_1_OFFSET))(this, op, opd1);
		}

		::System::Void Emit_2(::System::Int32 op, ::System::Int32 opd1, ::System::Int32 opd2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMIT_2_OFFSET))(this, op, opd1, opd2);
		}

		::System::Int32 StringCode(::System::String* str)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_STRINGCODE_OFFSET))(this, str);
		}

		::System::ArgumentException* MakeException(::System::String* message)
		{
			return ((::System::ArgumentException*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_MAKEEXCEPTION_OFFSET))(this, message);
		}

		::System::Int32 MapCapnum(::System::Int32 capnum)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_MAPCAPNUM_OFFSET))(this, capnum);
		}

		::System::Text::RegularExpressions::RegexCode* RegexCodeFromRegexTree(::System::Text::RegularExpressions::RegexTree* tree)
		{
			return ((::System::Text::RegularExpressions::RegexCode*(*)(::PVOID, ::System::Text::RegularExpressions::RegexTree*))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_REGEXCODEFROMREGEXTREE_OFFSET))(this, tree);
		}

		::System::Void EmitFragment(::System::Int32 nodetype, ::System::Text::RegularExpressions::RegexNode* node, ::System::Int32 CurIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Text::RegularExpressions::RegexNode*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXWRITER_EMITFRAGMENT_OFFSET))(this, nodetype, node, CurIndex);
		}
	};
}
