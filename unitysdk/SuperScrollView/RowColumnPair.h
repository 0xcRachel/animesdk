#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SUPERSCROLLVIEW_ROWCOLUMNPAIR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3754A40)
#define SUPERSCROLLVIEW_ROWCOLUMNPAIR_EQUALS_OFFSET UNITYSDK_OFFSET(0x3754990)
#define SUPERSCROLLVIEW_ROWCOLUMNPAIR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x37549F0)
#define SUPERSCROLLVIEW_ROWCOLUMNPAIR_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x13EE9EA0)
#define SUPERSCROLLVIEW_ROWCOLUMNPAIR_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x13EE9750)
#define SUPERSCROLLVIEW_ROWCOLUMNPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x6BD370)
#define SUPERSCROLLVIEW_ROWCOLUMNPAIR___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x3754B00)
#define SUPERSCROLLVIEW_ROWCOLUMNPAIR___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3754A50)

namespace SuperScrollView
{
	inline static constexpr unsigned int RowColumnPair_TypeDefinitionIndex = 44923;

	struct alignas(4) RowColumnPair
	{
		::System::Int32 mRow; // 0x10
		::System::Int32 mColumn; // 0x14

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNPAIR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Equals(::SuperScrollView::RowColumnPair a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::SuperScrollView::RowColumnPair))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNPAIR_EQUALS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::SuperScrollView::RowColumnPair a1, ::SuperScrollView::RowColumnPair a2)
		{
			return ((::System::Boolean(*)(::SuperScrollView::RowColumnPair, ::SuperScrollView::RowColumnPair))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNPAIR_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::SuperScrollView::RowColumnPair a1, ::SuperScrollView::RowColumnPair a2)
		{
			return ((::System::Boolean(*)(::SuperScrollView::RowColumnPair, ::SuperScrollView::RowColumnPair))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNPAIR_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNPAIR_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNPAIR_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNPAIR___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNPAIR___IFIXBASEPROXY_EQUALS_OFFSET))(this, a1);
		}
	};
}
