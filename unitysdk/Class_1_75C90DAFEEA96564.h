#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapObjectState.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_227;
class Class_2_D905714C1E15C1C8;
namespace RPG::Client { class MapEntityDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_75C90DAFEEA96564_ASYNCLOAD_OFFSET UNITYSDK_OFFSET(0x853D7B0)
#define CLASS_1_75C90DAFEEA96564_DISPOSE_OFFSET UNITYSDK_OFFSET(0x853D5A0)
#define CLASS_1_75C90DAFEEA96564_GET_ENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x853D480)
#define CLASS_1_75C90DAFEEA96564_GET_ENTITY_OFFSET UNITYSDK_OFFSET(0x853D410)
#define CLASS_1_75C90DAFEEA96564_GET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0x853D3A0)
#define CLASS_1_75C90DAFEEA96564_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x853D3B0)
#define CLASS_1_75C90DAFEEA96564_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x853D4F0)
#define CLASS_1_75C90DAFEEA96564_GET_ISLOADED_OFFSET UNITYSDK_OFFSET(0x853D4E0)
#define CLASS_1_75C90DAFEEA96564_GET_ISTOBEREMOVED_OFFSET UNITYSDK_OFFSET(0x853D500)
#define CLASS_1_75C90DAFEEA96564_GET_MAPENTITYDEF_OFFSET UNITYSDK_OFFSET(0x853D530)
#define CLASS_1_75C90DAFEEA96564_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x853D3E0)
#define CLASS_1_75C90DAFEEA96564_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x853D420)
#define CLASS_1_75C90DAFEEA96564_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x853D440)
#define CLASS_1_75C90DAFEEA96564_GET_SERVERENTITYID_OFFSET UNITYSDK_OFFSET(0x853D3C0)
#define CLASS_1_75C90DAFEEA96564_GET_STATE_OFFSET UNITYSDK_OFFSET(0x853D520)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x853E1D0)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x853DEF0)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x853D390)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_60B5931C93B2E56E_OFFSET UNITYSDK_OFFSET(0x853DF80)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_6D93101E4CE10A96_OFFSET UNITYSDK_OFFSET(0x853E7F0)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_722D9000F2784BE5_OFFSET UNITYSDK_OFFSET(0x853E260)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_77ACBD7BC5408846_OFFSET UNITYSDK_OFFSET(0x853EA70)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0x853E000)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_9DA0D46365FF3B6A_OFFSET UNITYSDK_OFFSET(0x853EC20)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_AC7CD4175E0A3EF8_OFFSET UNITYSDK_OFFSET(0x853D6B0)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x853D470)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x853D540)
#define CLASS_1_75C90DAFEEA96564_METHOD_1_E71D40A839BB7877_OFFSET UNITYSDK_OFFSET(0x853E2D0)
#define CLASS_1_75C90DAFEEA96564_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x853D400)
#define CLASS_1_75C90DAFEEA96564_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x853D430)
#define CLASS_1_75C90DAFEEA96564_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x853D460)
#define CLASS_1_75C90DAFEEA96564_SET_STATE_OFFSET UNITYSDK_OFFSET(0x853D510)
#define CLASS_1_75C90DAFEEA96564_SYNCLOAD_OFFSET UNITYSDK_OFFSET(0x853D820)
#define CLASS_1_75C90DAFEEA96564_TOSTRING_OFFSET UNITYSDK_OFFSET(0x853E9E0)
#define CLASS_1_75C90DAFEEA96564__BEGINFADEOUT_B__51_0_OFFSET UNITYSDK_OFFSET(0x853EC70)
#define CLASS_1_75C90DAFEEA96564__CTOR_OFFSET UNITYSDK_OFFSET(0x853D560)
#define CLASS_1_75C90DAFEEA96564___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x853EC80)

inline static constexpr unsigned int Class_1_75C90DAFEEA96564_TypeDefinitionIndex = 48258;

class Class_1_75C90DAFEEA96564 : public ::System::Object
{
public:
	::Class_2_D905714C1E15C1C8* Field_1_4; // 0x10
	::RPG::GameCore::GameEntity* Field_1_5; // 0x18
	::RPG::Client::MapObjectState _State_k__BackingField; // 0x20
	::UnityEngine::Vector3 _Scale_k__BackingField; // 0x24
	::System::Boolean Field_1_6; // 0x30
	::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x34
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x44

	::System::Void _ctor(::Class_2_D905714C1E15C1C8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D905714C1E15C1C8*))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564__CTOR_OFFSET))(this, a1);
	}

	::Class_2_D905714C1E15C1C8* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_D905714C1E15C1C8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::UInt32 get_GroupInstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_GROUPINSTANCEID_OFFSET))(this);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_INSTANCEID_OFFSET))(this);
	}

	::System::UInt32 get_ServerEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_SERVERENTITYID_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_SET_POSITION_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_Entity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_ENTITY_OFFSET))(this);
	}

	::UnityEngine::Quaternion get_Rotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_ROTATION_OFFSET))(this);
	}

	::System::Void set_Rotation(::UnityEngine::Quaternion value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_SET_ROTATION_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_Scale()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_SCALE_OFFSET))(this);
	}

	::System::Void set_Scale(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_SET_SCALE_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}

	::System::UInt32 get_EntityRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_ENTITYRUNTIMEID_OFFSET))(this);
	}

	::System::Boolean get_IsLoaded()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_ISLOADED_OFFSET))(this);
	}

	::System::Boolean get_IsDisposed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_ISDISPOSED_OFFSET))(this);
	}

	::System::Boolean get_IsToBeRemoved()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_ISTOBEREMOVED_OFFSET))(this);
	}

	::System::Void set_State(::RPG::Client::MapObjectState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapObjectState))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_SET_STATE_OFFSET))(this, value);
	}

	::RPG::Client::MapObjectState get_State()
	{
		return ((::RPG::Client::MapObjectState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_STATE_OFFSET))(this);
	}

	::RPG::Client::MapEntityDef* get_MapEntityDef()
	{
		return ((::RPG::Client::MapEntityDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_GET_MAPENTITYDEF_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_DISPOSE_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_227*>* AsyncLoad()
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_227*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_ASYNCLOAD_OFFSET))(this);
	}

	::System::Void SyncLoad()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_SYNCLOAD_OFFSET))(this);
	}

	::System::Boolean Method_1_60B5931C93B2E56E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_60B5931C93B2E56E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9839DFE3C10E4654(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_9839DFE3C10E4654_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_AC7CD4175E0A3EF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_AC7CD4175E0A3EF8_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_227*>* Method_1_722D9000F2784BE5(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_227*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_722D9000F2784BE5_OFFSET))(this, a1);
	}

	::System::String* Method_1_E71D40A839BB7877()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_E71D40A839BB7877_OFFSET))(this);
	}

	::System::Void Method_1_6D93101E4CE10A96()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_6D93101E4CE10A96_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_TOSTRING_OFFSET))(this);
	}

	::System::Void Method_1_77ACBD7BC5408846(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_77ACBD7BC5408846_OFFSET))(this, a1);
	}

	::RPG::GameCore::EntityClassifyType Method_1_9DA0D46365FF3B6A()
	{
		return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564_METHOD_1_9DA0D46365FF3B6A_OFFSET))(this);
	}

	::System::Void _BeginFadeOut_b__51_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564__BEGINFADEOUT_B__51_0_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_75C90DAFEEA96564___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
