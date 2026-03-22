#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphAimUnionNodeType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerLogicOperator.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_83665B095F1535B5_21;
class Class_1_87EAC1A8F0E1AE21;
class Class_1_EDE9079B7B0FAB9F;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PhotoGraphAimContainerConfig; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_859C8B90384D9B45_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1100BEF0)
#define CLASS_1_859C8B90384D9B45_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1100DDD0)
#define CLASS_1_859C8B90384D9B45_GET_ISINRANGECACHE_OFFSET UNITYSDK_OFFSET(0x1100DDB0)
#define CLASS_1_859C8B90384D9B45_GET_ISVISIBLECACHE_OFFSET UNITYSDK_OFFSET(0x1100DD90)
#define CLASS_1_859C8B90384D9B45_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1100DD70)
#define CLASS_1_859C8B90384D9B45_METHOD_1_1DC66375F15E73A5_1_OFFSET UNITYSDK_OFFSET(0x1100CC50)
#define CLASS_1_859C8B90384D9B45_METHOD_1_1DC66375F15E73A5_OFFSET UNITYSDK_OFFSET(0x1100CB80)
#define CLASS_1_859C8B90384D9B45_METHOD_1_29F25F8149104FAC_OFFSET UNITYSDK_OFFSET(0x1100D570)
#define CLASS_1_859C8B90384D9B45_METHOD_1_31C534C262488ADB_OFFSET UNITYSDK_OFFSET(0x1100BE70)
#define CLASS_1_859C8B90384D9B45_METHOD_1_3763EF841C43390F_OFFSET UNITYSDK_OFFSET(0x1100C310)
#define CLASS_1_859C8B90384D9B45_METHOD_1_39D78A8EB32A5315_OFFSET UNITYSDK_OFFSET(0x1100C220)
#define CLASS_1_859C8B90384D9B45_METHOD_1_47501368B3AB6613_OFFSET UNITYSDK_OFFSET(0x1100D8A0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_4CF27C5B348D1667_OFFSET UNITYSDK_OFFSET(0x1100D220)
#define CLASS_1_859C8B90384D9B45_METHOD_1_8A2AC7CD7EA66CAC_OFFSET UNITYSDK_OFFSET(0x1100D740)
#define CLASS_1_859C8B90384D9B45_METHOD_1_A87307C3DF83DEC4_OFFSET UNITYSDK_OFFSET(0x1100CD40)
#define CLASS_1_859C8B90384D9B45_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x1100C8F0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_C257290527D7511F_OFFSET UNITYSDK_OFFSET(0x1100D9B0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x1100D690)
#define CLASS_1_859C8B90384D9B45_METHOD_1_D55EA5FD2E4D1E87_OFFSET UNITYSDK_OFFSET(0x1100DA80)
#define CLASS_1_859C8B90384D9B45_METHOD_1_D9A0FAB968FF5165_OFFSET UNITYSDK_OFFSET(0x1100C0B0)
#define CLASS_1_859C8B90384D9B45_METHOD_1_DE45EA3A177BC33B_OFFSET UNITYSDK_OFFSET(0x1100CA10)
#define CLASS_1_859C8B90384D9B45_METHOD_1_E5D05DDBED4EDE3B_OFFSET UNITYSDK_OFFSET(0x1100D330)
#define CLASS_1_859C8B90384D9B45_METHOD_1_EAA9473F5CD92E22_OFFSET UNITYSDK_OFFSET(0x1100CE50)
#define CLASS_1_859C8B90384D9B45_METHOD_1_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x1100D800)
#define CLASS_1_859C8B90384D9B45_METHOD_1_FEB3B4A14C149D1C_OFFSET UNITYSDK_OFFSET(0x1100C4B0)
#define CLASS_1_859C8B90384D9B45_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1100DDE0)
#define CLASS_1_859C8B90384D9B45_SET_ISINRANGECACHE_OFFSET UNITYSDK_OFFSET(0x1100DDC0)
#define CLASS_1_859C8B90384D9B45_SET_ISVISIBLECACHE_OFFSET UNITYSDK_OFFSET(0x1100DDA0)
#define CLASS_1_859C8B90384D9B45_SET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1100DD80)
#define CLASS_1_859C8B90384D9B45__CTOR_OFFSET UNITYSDK_OFFSET(0x1100BE20)

inline static constexpr unsigned int Class_1_859C8B90384D9B45_TypeDefinitionIndex = 55174;

class Class_1_859C8B90384D9B45 : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::RPG::GameCore::TaskContext* Field_1_12; // 0x18
	::System::Collections::Generic::List_1<::Class_1_EDE9079B7B0FAB9F*>* Field_1_9; // 0x20
	::Il2CppArray<::Class_1_859C8B90384D9B45*>* Field_1_1; // 0x28
	::RPG::GameCore::PhotoGraphAimContainerConfig* _Config_k__BackingField; // 0x30
	::RPG::GameCore::PhotoGraphAimContainerLogicOperator Field_1_7; // 0x38
	::System::Int32 Field_1_11; // 0x3C
	::System::Int32 Field_1_2; // 0x40
	::System::Boolean Field_1_8; // 0x44
	::System::Boolean _IsVisibleCache_k__BackingField; // 0x45
	::System::Boolean _IsInRangeCache_k__BackingField; // 0x46
	::RPG::Client::PhotoGraphAimUnionNodeType _NodeType_k__BackingField; // 0x48
	::System::Int32 Field_1_14; // 0x4C
	::System::Int32 Field_1_10; // 0x50
	::System::Int32 Field_1_13; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_31C534C262488ADB(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PhotoGraphAimContainerConfig* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PhotoGraphAimContainerConfig*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_31C534C262488ADB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_D9A0FAB968FF5165(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_D9A0FAB968FF5165_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_39D78A8EB32A5315()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_39D78A8EB32A5315_OFFSET))(this);
	}

	::System::Boolean Method_1_3763EF841C43390F(::RPG::GameCore::PhotoGraphTargetSize* a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_3763EF841C43390F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FEB3B4A14C149D1C(::Class_1_EDE9079B7B0FAB9F* a1, ::RPG::GameCore::PhotoGraphTargetSize* a2, ::System::Single a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EDE9079B7B0FAB9F*, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_FEB3B4A14C149D1C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Boolean Method_1_DE45EA3A177BC33B(::Class_1_EDE9079B7B0FAB9F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EDE9079B7B0FAB9F*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_DE45EA3A177BC33B_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_1DC66375F15E73A5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_1DC66375F15E73A5_OFFSET))(this);
	}

	::System::Void Method_1_A87307C3DF83DEC4(::UnityEngine::Vector3 a1, ::Class_1_87EAC1A8F0E1AE21* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::Class_1_87EAC1A8F0E1AE21*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_A87307C3DF83DEC4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_EAA9473F5CD92E22(::UnityEngine::Vector3 a1, ::Class_1_87EAC1A8F0E1AE21* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::Class_1_87EAC1A8F0E1AE21*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_EAA9473F5CD92E22_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_1DC66375F15E73A5_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_1DC66375F15E73A5_1_OFFSET))(this);
	}

	::System::Int32 Method_1_E5D05DDBED4EDE3B(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::Int32 a2, ::RPG::GameCore::PhotoGraphAimIdentifyType a3, ::Class_1_83665B095F1535B5_21* a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::Int32, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::Class_1_83665B095F1535B5_21*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_E5D05DDBED4EDE3B_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_1_29F25F8149104FAC(::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>* a1, ::System::Int32 a2, ::RPG::GameCore::PhotoGraphAimIdentifyType a3, ::Class_1_83665B095F1535B5_21* a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*>*, ::System::Int32, ::RPG::GameCore::PhotoGraphAimIdentifyType, ::Class_1_83665B095F1535B5_21*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_29F25F8149104FAC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Boolean Method_1_8A2AC7CD7EA66CAC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_8A2AC7CD7EA66CAC_OFFSET))(this);
	}

	::System::Void Method_1_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_ED34DCC6F6541B09_OFFSET))(this, a1);
	}

	::System::Void Method_1_47501368B3AB6613(::RPG::GameCore::GameEntity* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_47501368B3AB6613_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C257290527D7511F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_C257290527D7511F_OFFSET))(this, a1);
	}

	::System::Void Method_1_D55EA5FD2E4D1E87(::RPG::GameCore::GameEntity* a1, ::UnityEngine::GameObject* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_D55EA5FD2E4D1E87_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4CF27C5B348D1667(::System::Single a1, ::RPG::Client::TextID& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::Client::TextID&))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_METHOD_1_4CF27C5B348D1667_OFFSET))(this, a1, a2);
	}

	::RPG::Client::PhotoGraphAimUnionNodeType get_NodeType()
	{
		return ((::RPG::Client::PhotoGraphAimUnionNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_GET_NODETYPE_OFFSET))(this);
	}

	::System::Void set_NodeType(::RPG::Client::PhotoGraphAimUnionNodeType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphAimUnionNodeType))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_SET_NODETYPE_OFFSET))(this, value);
	}

	::System::Boolean get_IsVisibleCache()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_GET_ISVISIBLECACHE_OFFSET))(this);
	}

	::System::Void set_IsVisibleCache(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_SET_ISVISIBLECACHE_OFFSET))(this, value);
	}

	::System::Boolean get_IsInRangeCache()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_GET_ISINRANGECACHE_OFFSET))(this);
	}

	::System::Void set_IsInRangeCache(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_SET_ISINRANGECACHE_OFFSET))(this, value);
	}

	::RPG::GameCore::PhotoGraphAimContainerConfig* get_Config()
	{
		return ((::RPG::GameCore::PhotoGraphAimContainerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::GameCore::PhotoGraphAimContainerConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphAimContainerConfig*))((::PBYTE)hIl2Cpp + CLASS_1_859C8B90384D9B45_SET_CONFIG_OFFSET))(this, value);
	}
};
