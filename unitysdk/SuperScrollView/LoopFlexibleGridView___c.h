#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA6EFC90)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA6EFCD0)
#define SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C__SETGRIDITEMS_B__29_0_OFFSET UNITYSDK_OFFSET(0xA6EFCE0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopFlexibleGridView___c_TypeDefinitionIndex = 37543;

	class LoopFlexibleGridView___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Collections::Generic::List_1<::System::Int32>*>** StaticGet___9__29_0()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(LoopFlexibleGridView___c_TypeDefinitionIndex)->GetStaticField(0x420B0);
		}
		static ::SuperScrollView::LoopFlexibleGridView___c** StaticGet___9()
		{
			return (::SuperScrollView::LoopFlexibleGridView___c**)Il2CppClass::FromTypeDefinitionIndex(LoopFlexibleGridView___c_TypeDefinitionIndex)->GetStaticField(0x420B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C__CTOR_OFFSET))(this);
		}

		::System::Void _SetGridItems_b__29_0(::System::Collections::Generic::List_1<::System::Int32>* indexs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPFLEXIBLEGRIDVIEW___C__SETGRIDITEMS_B__29_0_OFFSET))(this, indexs);
		}
	};
}
