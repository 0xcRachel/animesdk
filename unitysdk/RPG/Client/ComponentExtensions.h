#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class GCFreeLazy_1; }
namespace System { class String; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_COMPONENTEXTENSIONS_DESTROYCHILDRENIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1784A2C0)
#define RPG_CLIENT_COMPONENTEXTENSIONS_DESTROYCHILDREN_OFFSET UNITYSDK_OFFSET(0x1784A210)
#define RPG_CLIENT_COMPONENTEXTENSIONS_LUAGETLOCALCORNERS_OFFSET UNITYSDK_OFFSET(0x1784A800)
#define RPG_CLIENT_COMPONENTEXTENSIONS_LUAGETWORLDCORNERS_OFFSET UNITYSDK_OFFSET(0x1784A750)
#define RPG_CLIENT_COMPONENTEXTENSIONS_RECURSIVECOPYLIGHTWEIGHTACTIVETO_OFFSET UNITYSDK_OFFSET(0x1784B250)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SAFEFIND_OFFSET UNITYSDK_OFFSET(0x17849C90)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SAFESETACTIVEBYSCALE_OFFSET UNITYSDK_OFFSET(0x1784A000)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x17849E00)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SAFESETENABLED_OFFSET UNITYSDK_OFFSET(0x17849D40)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SAFESETLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x17849F00)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SET2DOBJECTWITH3DTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1784A8B0)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SETCANVASGROUPACTIVE_OFFSET UNITYSDK_OFFSET(0x1784A370)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SETCENTERPIVOT_OFFSET UNITYSDK_OFFSET(0x1784A3F0)
#define RPG_CLIENT_COMPONENTEXTENSIONS_SETXCOORDINATEWITH3DPOSITION_OFFSET UNITYSDK_OFFSET(0x1784B040)
#define RPG_CLIENT_COMPONENTEXTENSIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1784B4C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ComponentExtensions_TypeDefinitionIndex = 67977;

	class ComponentExtensions : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__LocalConers()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ComponentExtensions_TypeDefinitionIndex)->GetStaticField(0x68C40);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet__WorldConers()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ComponentExtensions_TypeDefinitionIndex)->GetStaticField(0x68C48);
		}
		static ::UnityEngine::Vector2* StaticGet__CenterPivot()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(ComponentExtensions_TypeDefinitionIndex)->GetStaticField(0x141F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Transform* SafeFind(::UnityEngine::Component* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Component*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SAFEFIND_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetEnabled(::UnityEngine::Component* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SAFESETENABLED_OFFSET))(a1, a2);
		}

		static ::System::Void SafeSetActive(::UnityEngine::Component* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SAFESETACTIVE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetLightWeightActive(::UnityEngine::Component* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SAFESETLIGHTWEIGHTACTIVE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void SafeSetActiveByScale(::UnityEngine::Component* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Component*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SAFESETACTIVEBYSCALE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DestroyChildren(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_DESTROYCHILDREN_OFFSET))(a1);
		}

		static ::System::Void DestroyChildrenImmediate(::UnityEngine::Component* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_DESTROYCHILDRENIMMEDIATE_OFFSET))(a1);
		}

		static ::System::Void SetCanvasGroupActive(::UnityEngine::CanvasGroup* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::UnityEngine::CanvasGroup*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SETCANVASGROUPACTIVE_OFFSET))(a1, a2);
		}

		static ::System::Void SetCenterPivot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SETCENTERPIVOT_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* LuaGetWorldCorners(::UnityEngine::RectTransform* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_LUAGETWORLDCORNERS_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* LuaGetLocalCorners(::UnityEngine::RectTransform* a1, ::System::Boolean a2)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::UnityEngine::RectTransform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_LUAGETLOCALCORNERS_OFFSET))(a1, a2);
		}

		static ::System::Void Set2DObjectWith3DTransform(::UnityEngine::RectTransform* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Transform*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SET2DOBJECTWITH3DTRANSFORM_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void SetXCoordinateWith3DPosition(::UnityEngine::RectTransform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_SETXCOORDINATEWITH3DPOSITION_OFFSET))(a1, a2);
		}

		static ::System::Void RecursiveCopyLightWeightActiveTo(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMPONENTEXTENSIONS_RECURSIVECOPYLIGHTWEIGHTACTIVETO_OFFSET))(a1, a2, a3);
		}
	};
}
