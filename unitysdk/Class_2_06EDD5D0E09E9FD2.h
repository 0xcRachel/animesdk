#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2AE89B9E4BF18AD3.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_30467842FAA5266B;
class Class_2_D5AD64F6FB3109AB;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig_Pair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_06EDD5D0E09E9FD2_METHOD_2_30EE0477E93E458B_OFFSET UNITYSDK_OFFSET(0x16045B50)
#define CLASS_2_06EDD5D0E09E9FD2_METHOD_2_9A461F26FF4C672B_OFFSET UNITYSDK_OFFSET(0x16045860)
#define CLASS_2_06EDD5D0E09E9FD2__CTOR_OFFSET UNITYSDK_OFFSET(0x16045850)

inline static constexpr unsigned int Class_2_06EDD5D0E09E9FD2_TypeDefinitionIndex = 27731;

class Class_2_06EDD5D0E09E9FD2 : public ::Class_1_2AE89B9E4BF18AD3
{
public:
	::RPG::GameCore::DiceCombatDiceSelectorConfig_Pair* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::DiceCombatDiceSelectorConfig_Pair* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatDiceSelectorConfig_Pair*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_2_06EDD5D0E09E9FD2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_9A461F26FF4C672B(::Class_2_D5AD64F6FB3109AB* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_2_06EDD5D0E09E9FD2_METHOD_2_9A461F26FF4C672B_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* Method_2_30EE0477E93E458B(::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_06EDD5D0E09E9FD2_METHOD_2_30EE0477E93E458B_OFFSET))(this, a1, a2, a3);
	}
};
