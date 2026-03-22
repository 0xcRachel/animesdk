#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SuperScrollView/RowColumnPair.h"
#include "unitysdk/System/Object.h"

#define SUPERSCROLLVIEW_ROWCOLUMNCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0xA723210)
#define SUPERSCROLLVIEW_ROWCOLUMNCOMPARER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA723280)
#define SUPERSCROLLVIEW_ROWCOLUMNCOMPARER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA7232F0)
#define SUPERSCROLLVIEW_ROWCOLUMNCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0xA7232E0)

namespace SuperScrollView
{
	inline static constexpr unsigned int RowColumnComparer_TypeDefinitionIndex = 37532;

	class RowColumnComparer : public ::System::Object
	{
	public:
		static ::SuperScrollView::RowColumnComparer** StaticGet_comparer()
		{
			return (::SuperScrollView::RowColumnComparer**)Il2CppClass::FromTypeDefinitionIndex(RowColumnComparer_TypeDefinitionIndex)->GetStaticField(0x42300);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNCOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNCOMPARER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::SuperScrollView::RowColumnPair x, ::SuperScrollView::RowColumnPair y)
		{
			return ((::System::Boolean(*)(::PVOID, ::SuperScrollView::RowColumnPair, ::SuperScrollView::RowColumnPair))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNCOMPARER_EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 GetHashCode(::SuperScrollView::RowColumnPair obj)
		{
			return ((::System::Int32(*)(::PVOID, ::SuperScrollView::RowColumnPair))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_ROWCOLUMNCOMPARER_GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
