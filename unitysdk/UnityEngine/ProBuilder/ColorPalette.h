#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define UNITYENGINE_PROBUILDER_COLORPALETTE_GET_COLORS_OFFSET UNITYSDK_OFFSET(0x17FAB390)
#define UNITYENGINE_PROBUILDER_COLORPALETTE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x17FAB770)
#define UNITYENGINE_PROBUILDER_COLORPALETTE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17FAB370)
#define UNITYENGINE_PROBUILDER_COLORPALETTE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x17FAB6D0)
#define UNITYENGINE_PROBUILDER_COLORPALETTE_SETCOLORS_OFFSET UNITYSDK_OFFSET(0x17FAB3F0)
#define UNITYENGINE_PROBUILDER_COLORPALETTE_SETDEFAULTVALUES_OFFSET UNITYSDK_OFFSET(0x17FAB4A0)
#define UNITYENGINE_PROBUILDER_COLORPALETTE_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17FAB380)
#define UNITYENGINE_PROBUILDER_COLORPALETTE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x17FAB710)
#define UNITYENGINE_PROBUILDER_COLORPALETTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17FAB790)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ColorPalette_TypeDefinitionIndex = 33093;

	class ColorPalette : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Color _current_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Color>* m_Colors; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORPALETTE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Color get_current()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORPALETTE_GET_CURRENT_OFFSET))(this);
		}

		::System::Void set_current(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORPALETTE_SET_CURRENT_OFFSET))(this, value);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Color>* get_colors()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Color>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORPALETTE_GET_COLORS_OFFSET))(this);
		}

		::System::Void SetColors(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Color>* colors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORPALETTE_SETCOLORS_OFFSET))(this, colors);
		}

		::System::Void SetDefaultValues()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORPALETTE_SETDEFAULTVALUES_OFFSET))(this);
		}

		::UnityEngine::Color get_Item(::System::Int32 i)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORPALETTE_GET_ITEM_OFFSET))(this, i);
		}

		::System::Void set_Item(::System::Int32 i, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORPALETTE_SET_ITEM_OFFSET))(this, i, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_COLORPALETTE_GET_COUNT_OFFSET))(this);
		}
	};
}
