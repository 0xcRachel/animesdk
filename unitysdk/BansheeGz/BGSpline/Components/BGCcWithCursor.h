#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Curve/BGCc.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace BansheeGz::BGSpline::Components { class BGCcCursor; }
namespace System { class String; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_GETFROMTOINDEXES_OFFSET UNITYSDK_OFFSET(0x15EBB1F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_GETT_OFFSET UNITYSDK_OFFSET(0x15EAD510)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_GET_CURSOR_OFFSET UNITYSDK_OFFSET(0x15EA9580)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x15EBB150)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_LERPQUATERNION_OFFSET UNITYSDK_OFFSET(0x15EAD170)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_LERPVECTOR_OFFSET UNITYSDK_OFFSET(0x15EADEC0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_SET_CURSOR_OFFSET UNITYSDK_OFFSET(0x15EBB130)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15EABA30)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcWithCursor_TypeDefinitionIndex = 27500;

	class BGCcWithCursor : public ::BansheeGz::BGSpline::Curve::BGCc
	{
	public:
		::BansheeGz::BGSpline::Components::BGCcCursor* cursor; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR__CTOR_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcCursor* get_Cursor()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_GET_CURSOR_OFFSET))(this);
		}

		::System::Void set_Cursor(::BansheeGz::BGSpline::Components::BGCcCursor* value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcCursor*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_SET_CURSOR_OFFSET))(this, value);
		}

		::System::String* get_Error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_GET_ERROR_OFFSET))(this);
		}

		::UnityEngine::Quaternion LerpQuaternion(::System::String* fieldName, ::System::Int32 currentSection)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_LERPQUATERNION_OFFSET))(this, fieldName, currentSection);
		}

		::UnityEngine::Vector3 LerpVector(::System::String* name, ::System::Int32 currentSection)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_LERPVECTOR_OFFSET))(this, name, currentSection);
		}

		::System::Single GetT(::System::Int32& indexFrom, ::System::Int32& indexTo, ::System::Int32 currentSection)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_GETT_OFFSET))(this, indexFrom, indexTo, currentSection);
		}

		::System::Void GetFromToIndexes(::System::Int32& indexFrom, ::System::Int32& indexTo, ::System::Int32 currentSection)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCWITHCURSOR_GETFROMTOINDEXES_OFFSET))(this, indexFrom, indexTo, currentSection);
		}
	};
}
