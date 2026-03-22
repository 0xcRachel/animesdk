#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5B228A4605C15E47.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_303D5A33D1401D59;
class Class_1_3F28033F34305C46;
class Class_1_56FF45D7B2C55655;
class Class_1_8A6989C352B0F0F0;
class Class_1_DE4C6B309308A230;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::OpenWorld { class StreamingLayerDetail; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_ABC79F15600B30EF_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0x11215EE0)
#define CLASS_2_ABC79F15600B30EF_METHOD_2_001E6A5843D87992_OFFSET UNITYSDK_OFFSET(0x11216020)
#define CLASS_2_ABC79F15600B30EF_METHOD_2_37F4556F1574C3C9_OFFSET UNITYSDK_OFFSET(0x11215E70)
#define CLASS_2_ABC79F15600B30EF_METHOD_2_4F11956DB86B790A_OFFSET UNITYSDK_OFFSET(0x11215CF0)
#define CLASS_2_ABC79F15600B30EF_METHOD_2_BF7F293AEAA5E93F_OFFSET UNITYSDK_OFFSET(0x11216010)
#define CLASS_2_ABC79F15600B30EF__CTOR_OFFSET UNITYSDK_OFFSET(0x11215C80)
#define CLASS_2_ABC79F15600B30EF__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x11215F70)
#define CLASS_2_ABC79F15600B30EF__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x11215FC0)
#define CLASS_2_ABC79F15600B30EF___IFIXBASEPROXY_CHECKSTREAMINGLOD_OFFSET UNITYSDK_OFFSET(0x11216030)
#define CLASS_2_ABC79F15600B30EF___IFIXBASEPROXY__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x11216060)
#define CLASS_2_ABC79F15600B30EF___IFIXBASEPROXY__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x112160F0)

inline static constexpr unsigned int Class_2_ABC79F15600B30EF_TypeDefinitionIndex = 58778;

class Class_2_ABC79F15600B30EF : public ::Class_1_5B228A4605C15E47
{
public:
	::System::Void _ctor(::RPG::Client::OpenWorld::StreamingLayerDetail* a1, ::Class_1_56FF45D7B2C55655* a2, ::Class_1_303D5A33D1401D59* a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingLayerDetail*, ::Class_1_56FF45D7B2C55655*, ::Class_1_303D5A33D1401D59*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_ABC79F15600B30EF__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_4F11956DB86B790A(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_ABC79F15600B30EF_METHOD_2_4F11956DB86B790A_OFFSET))(this, a1);
	}

	::System::Void Method_2_37F4556F1574C3C9(::Class_1_DE4C6B309308A230* a1, ::System::Boolean a2, ::System::Single a3, ::Class_1_3F28033F34305C46* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_ABC79F15600B30EF_METHOD_2_37F4556F1574C3C9_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void CheckStreamingLod(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single& a3, ::System::Single& a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_ABC79F15600B30EF_CHECKSTREAMINGLOD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void _RegisterInstanceToCullingSystem(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_ABC79F15600B30EF__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET))(this, a1);
	}

	::System::Void _UnRegisterInstanceFromCullingSystem(::RPG::Client::OpenWorld::StreamingItemData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_ABC79F15600B30EF__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET))(this, a1);
	}

	::Class_1_8A6989C352B0F0F0* Method_2_BF7F293AEAA5E93F(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::Class_1_8A6989C352B0F0F0*(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_ABC79F15600B30EF_METHOD_2_BF7F293AEAA5E93F_OFFSET))(this, P0);
	}

	::System::Void Method_2_001E6A5843D87992(::Class_1_DE4C6B309308A230* P0, ::System::Boolean P1, ::System::Single P2, ::Class_1_3F28033F34305C46* P3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DE4C6B309308A230*, ::System::Boolean, ::System::Single, ::Class_1_3F28033F34305C46*))((::PBYTE)hIl2Cpp + CLASS_2_ABC79F15600B30EF_METHOD_2_001E6A5843D87992_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void __iFixBaseProxy_CheckStreamingLod(::UnityEngine::Vector3 P0, ::System::Single P1, ::System::Single& P2, ::System::Single& P3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_2_ABC79F15600B30EF___IFIXBASEPROXY_CHECKSTREAMINGLOD_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void __iFixBaseProxy__RegisterInstanceToCullingSystem(::Class_1_8A6989C352B0F0F0* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_ABC79F15600B30EF___IFIXBASEPROXY__REGISTERINSTANCETOCULLINGSYSTEM_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy__UnRegisterInstanceFromCullingSystem(::RPG::Client::OpenWorld::StreamingItemData* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + CLASS_2_ABC79F15600B30EF___IFIXBASEPROXY__UNREGISTERINSTANCEFROMCULLINGSYSTEM_OFFSET))(this, P0);
	}
};
