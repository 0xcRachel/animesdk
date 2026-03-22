#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RENDERITEMPOLYMERCONFIG_GET_ADDANIMATIONIRI_OFFSET UNITYSDK_OFFSET(0xA680E10)
#define RENDERITEMPOLYMERCONFIG_GET_ADDSYNCPOSITIONCHILDPATH_OFFSET UNITYSDK_OFFSET(0xA681750)
#define RENDERITEMPOLYMERCONFIG_GET_ADDSYNCPOSITIONROOTPATH_OFFSET UNITYSDK_OFFSET(0xA6805A0)
#define RENDERITEMPOLYMERCONFIG_METHOD_5_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0xA680B00)
#define RENDERITEMPOLYMERCONFIG_METHOD_5_B44E223C58DE8E13_OFFSET UNITYSDK_OFFSET(0xA680F50)
#define RENDERITEMPOLYMERCONFIG_METHOD_5_FBE22211014B40D9_OFFSET UNITYSDK_OFFSET(0xA680610)
#define RENDERITEMPOLYMERCONFIG_SET_ADDANIMATIONIRI_OFFSET UNITYSDK_OFFSET(0xA680E20)
#define RENDERITEMPOLYMERCONFIG_SET_ADDSYNCPOSITIONCHILDPATH_OFFSET UNITYSDK_OFFSET(0xA681760)
#define RENDERITEMPOLYMERCONFIG_SET_ADDSYNCPOSITIONROOTPATH_OFFSET UNITYSDK_OFFSET(0xA6805B0)
#define RENDERITEMPOLYMERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xA6818D0)

inline static constexpr unsigned int RenderItemPolymerConfig_TypeDefinitionIndex = 37272;

class RenderItemPolymerConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::System::String*>* SyncPositionRoot; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* SyncPositionChildPath; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* AnimationIRI; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_AddSyncPositionRootPath()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_GET_ADDSYNCPOSITIONROOTPATH_OFFSET))(this);
	}

	::System::Void set_AddSyncPositionRootPath(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_SET_ADDSYNCPOSITIONROOTPATH_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* get_AddAnimationIRI()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_GET_ADDANIMATIONIRI_OFFSET))(this);
	}

	::System::Void set_AddAnimationIRI(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_SET_ADDANIMATIONIRI_OFFSET))(this, a1);
	}

	::System::Void Method_5_FBE22211014B40D9(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_METHOD_5_FBE22211014B40D9_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* get_AddSyncPositionChildPath()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_GET_ADDSYNCPOSITIONCHILDPATH_OFFSET))(this);
	}

	::System::Void set_AddSyncPositionChildPath(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_SET_ADDSYNCPOSITIONCHILDPATH_OFFSET))(this, a1);
	}

	::System::Void Method_5_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_METHOD_5_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_5_B44E223C58DE8E13(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::String*& a3, ::System::String*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + RENDERITEMPOLYMERCONFIG_METHOD_5_B44E223C58DE8E13_OFFSET))(this, a1, a2, a3, a4);
	}
};
