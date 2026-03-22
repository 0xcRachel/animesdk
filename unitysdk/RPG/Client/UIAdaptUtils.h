#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_92608A36037A1D69;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTINDENT_OFFSET UNITYSDK_OFFSET(0xA186A90)
#define RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTOFFSETLEFT_OFFSET UNITYSDK_OFFSET(0xA187DA0)
#define RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTOFFSETRIGHT_OFFSET UNITYSDK_OFFSET(0xA187E70)
#define RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTSCALE_OFFSET UNITYSDK_OFFSET(0xA187F40)
#define RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTVERTICALINDENT_OFFSET UNITYSDK_OFFSET(0xA187C70)
#define RPG_CLIENT_UIADAPTUTILS_CLEARCUSTOMIZEDSAFEAREAINDENT_OFFSET UNITYSDK_OFFSET(0xA1882F0)
#define RPG_CLIENT_UIADAPTUTILS_GETDEFAULTCUSTOMHORIZONTALINDENTVALUE_OFFSET UNITYSDK_OFFSET(0xA1886F0)
#define RPG_CLIENT_UIADAPTUTILS_GETDEVICESAFEAREAINDENT_OFFSET UNITYSDK_OFFSET(0xA188790)
#define RPG_CLIENT_UIADAPTUTILS_GETMAXCUSTOMHORIZONTALINDENTVALUE_OFFSET UNITYSDK_OFFSET(0xA188110)
#define RPG_CLIENT_UIADAPTUTILS_GETSAFEAREAINDENT_OFFSET UNITYSDK_OFFSET(0xA188010)
#define RPG_CLIENT_UIADAPTUTILS_GETSCREENADJUSTINDENT_OFFSET UNITYSDK_OFFSET(0xA1888D0)
#define RPG_CLIENT_UIADAPTUTILS_GETSCREENSPACESAFEAREAINDENT_OFFSET UNITYSDK_OFFSET(0xA186BC0)
#define RPG_CLIENT_UIADAPTUTILS_GET_ISADJUSTASCLOUDPHONE_OFFSET UNITYSDK_OFFSET(0xA188B70)
#define RPG_CLIENT_UIADAPTUTILS_GET_SCREENASPECT_OFFSET UNITYSDK_OFFSET(0xA188840)
#define RPG_CLIENT_UIADAPTUTILS_PERFORMUIADAPTIONOPERATION_OFFSET UNITYSDK_OFFSET(0xA188550)
#define RPG_CLIENT_UIADAPTUTILS_RESETUIADAPTIONOPERATION_OFFSET UNITYSDK_OFFSET(0xA1885F0)
#define RPG_CLIENT_UIADAPTUTILS_TRYADJUSTINDENT_OFFSET UNITYSDK_OFFSET(0xA1884A0)
#define RPG_CLIENT_UIADAPTUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0xA188D00)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdaptUtils_TypeDefinitionIndex = 47593;

	class UIAdaptUtils : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_IOSSafeAreaIndentFactor()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIAdaptUtils_TypeDefinitionIndex)->GetStaticField(0xBB20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS__CCTOR_OFFSET))();
		}

		static ::System::Void AdjustRectIndent(::UnityEngine::RectTransform* rectTrans, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTINDENT_OFFSET))(rectTrans, value);
		}

		static ::System::Void AdjustRectVerticalIndent(::UnityEngine::RectTransform* rectTrans, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTVERTICALINDENT_OFFSET))(rectTrans, value);
		}

		static ::System::Void AdjustRectOffsetLeft(::UnityEngine::RectTransform* rectTrans, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTOFFSETLEFT_OFFSET))(rectTrans, value);
		}

		static ::System::Void AdjustRectOffsetRight(::UnityEngine::RectTransform* rectTrans, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTOFFSETRIGHT_OFFSET))(rectTrans, value);
		}

		static ::System::Void AdjustRectScale(::UnityEngine::RectTransform* rectTrans, ::System::Single scaleX, ::System::Single scaleY, ::System::Single scaleZ)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_ADJUSTRECTSCALE_OFFSET))(rectTrans, scaleX, scaleY, scaleZ);
		}

		static ::System::Single GetSafeAreaIndent()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETSAFEAREAINDENT_OFFSET))();
		}

		static ::System::Single GetScreenSpaceSafeAreaIndent()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETSCREENSPACESAFEAREAINDENT_OFFSET))();
		}

		static ::System::Void ClearCustomizedSafeAreaIndent()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_CLEARCUSTOMIZEDSAFEAREAINDENT_OFFSET))();
		}

		static ::System::Void TryAdjustIndent(::UnityEngine::Transform* uiRoot)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_TRYADJUSTINDENT_OFFSET))(uiRoot);
		}

		static ::System::Void PerformUIAdaptionOperation(::UnityEngine::Transform* uiRoot, ::System::Collections::Generic::List_1<::Class_1_92608A36037A1D69*>* adaptOperations)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::Class_1_92608A36037A1D69*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_PERFORMUIADAPTIONOPERATION_OFFSET))(uiRoot, adaptOperations);
		}

		static ::System::Void ResetUIAdaptionOperation(::UnityEngine::Transform* uiRoot, ::System::Collections::Generic::List_1<::Class_1_92608A36037A1D69*>* adaptOperations)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::Class_1_92608A36037A1D69*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_RESETUIADAPTIONOPERATION_OFFSET))(uiRoot, adaptOperations);
		}

		static ::System::Single GetDefaultCustomHorizontalIndentValue()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETDEFAULTCUSTOMHORIZONTALINDENTVALUE_OFFSET))();
		}

		static ::System::Single GetMaxCustomHorizontalIndentValue()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETMAXCUSTOMHORIZONTALINDENTVALUE_OFFSET))();
		}

		static ::System::Single GetDeviceSafeAreaIndent()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETDEVICESAFEAREAINDENT_OFFSET))();
		}

		static ::System::Single GetScreenAdjustIndent()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GETSCREENADJUSTINDENT_OFFSET))();
		}

		static ::System::Single get_ScreenAspect()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GET_SCREENASPECT_OFFSET))();
		}

		static ::System::Boolean get_IsAdjustAsCloudPhone()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTUTILS_GET_ISADJUSTASCLOUDPHONE_OFFSET))();
		}
	};
}
