#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/AvatarMaskBodyPart.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_AVATARMASK_ADDTRANSFORMPATH_1_OFFSET UNITYSDK_OFFSET(0x1A60BC70)
#define UNITYENGINE_AVATARMASK_ADDTRANSFORMPATH_OFFSET UNITYSDK_OFFSET(0x1A60BC60)
#define UNITYENGINE_AVATARMASK_COPY_OFFSET UNITYSDK_OFFSET(0x1A60BD50)
#define UNITYENGINE_AVATARMASK_GETHUMANOIDBODYPARTACTIVE_OFFSET UNITYSDK_OFFSET(0x1A60BC20)
#define UNITYENGINE_AVATARMASK_GETTRANSFORMACTIVE_OFFSET UNITYSDK_OFFSET(0x1A60BCE0)
#define UNITYENGINE_AVATARMASK_GETTRANSFORMPATH_OFFSET UNITYSDK_OFFSET(0x1A60BCA0)
#define UNITYENGINE_AVATARMASK_GETTRANSFORMWEIGHT_OFFSET UNITYSDK_OFFSET(0x1A60BCC0)
#define UNITYENGINE_AVATARMASK_GET_HASFEETIK_OFFSET UNITYSDK_OFFSET(0x1A60BD40)
#define UNITYENGINE_AVATARMASK_GET_HUMANOIDBODYPARTCOUNT_OFFSET UNITYSDK_OFFSET(0x1A60BC10)
#define UNITYENGINE_AVATARMASK_GET_TRANSFORMCOUNT_OFFSET UNITYSDK_OFFSET(0x1A60BC40)
#define UNITYENGINE_AVATARMASK_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1A60BC00)
#define UNITYENGINE_AVATARMASK_REMOVETRANSFORMPATH_1_OFFSET UNITYSDK_OFFSET(0x1A60BC90)
#define UNITYENGINE_AVATARMASK_REMOVETRANSFORMPATH_OFFSET UNITYSDK_OFFSET(0x1A60BC80)
#define UNITYENGINE_AVATARMASK_SETHUMANOIDBODYPARTACTIVE_OFFSET UNITYSDK_OFFSET(0x1A60BC30)
#define UNITYENGINE_AVATARMASK_SETTRANSFORMACTIVE_OFFSET UNITYSDK_OFFSET(0x1A60BD00)
#define UNITYENGINE_AVATARMASK_SETTRANSFORMPATH_OFFSET UNITYSDK_OFFSET(0x1A60BCB0)
#define UNITYENGINE_AVATARMASK_SETTRANSFORMWEIGHT_OFFSET UNITYSDK_OFFSET(0x1A60BCD0)
#define UNITYENGINE_AVATARMASK_SET_TRANSFORMCOUNT_OFFSET UNITYSDK_OFFSET(0x1A60BC50)
#define UNITYENGINE_AVATARMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60BBF0)

namespace UnityEngine
{
	inline static constexpr unsigned int AvatarMask_TypeDefinitionIndex = 5055;

	class AvatarMask : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::AvatarMask* self)
		{
			return ((::System::Void(*)(::UnityEngine::AvatarMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_INTERNAL_CREATE_OFFSET))(self);
		}

		::System::Int32 get_humanoidBodyPartCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GET_HUMANOIDBODYPARTCOUNT_OFFSET))(this);
		}

		::System::Boolean GetHumanoidBodyPartActive(::UnityEngine::AvatarMaskBodyPart index)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AvatarMaskBodyPart))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETHUMANOIDBODYPARTACTIVE_OFFSET))(this, index);
		}

		::System::Void SetHumanoidBodyPartActive(::UnityEngine::AvatarMaskBodyPart index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarMaskBodyPart, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETHUMANOIDBODYPARTACTIVE_OFFSET))(this, index, value);
		}

		::System::Int32 get_transformCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GET_TRANSFORMCOUNT_OFFSET))(this);
		}

		::System::Void set_transformCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SET_TRANSFORMCOUNT_OFFSET))(this, value);
		}

		::System::Void AddTransformPath(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_ADDTRANSFORMPATH_OFFSET))(this, transform);
		}

		::System::Void AddTransformPath_1(::UnityEngine::Transform* transform, ::System::Boolean recursive)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_ADDTRANSFORMPATH_1_OFFSET))(this, transform, recursive);
		}

		::System::Void RemoveTransformPath(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_REMOVETRANSFORMPATH_OFFSET))(this, transform);
		}

		::System::Void RemoveTransformPath_1(::UnityEngine::Transform* transform, ::System::Boolean recursive)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_REMOVETRANSFORMPATH_1_OFFSET))(this, transform, recursive);
		}

		::System::String* GetTransformPath(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETTRANSFORMPATH_OFFSET))(this, index);
		}

		::System::Void SetTransformPath(::System::Int32 index, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETTRANSFORMPATH_OFFSET))(this, index, path);
		}

		::System::Single GetTransformWeight(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETTRANSFORMWEIGHT_OFFSET))(this, index);
		}

		::System::Void SetTransformWeight(::System::Int32 index, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETTRANSFORMWEIGHT_OFFSET))(this, index, weight);
		}

		::System::Boolean GetTransformActive(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GETTRANSFORMACTIVE_OFFSET))(this, index);
		}

		::System::Void SetTransformActive(::System::Int32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_SETTRANSFORMACTIVE_OFFSET))(this, index, value);
		}

		::System::Boolean get_hasFeetIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_GET_HASFEETIK_OFFSET))(this);
		}

		::System::Void Copy(::UnityEngine::AvatarMask* other)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_AVATARMASK_COPY_OFFSET))(this, other);
		}
	};
}
