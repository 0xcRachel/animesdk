#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_2_01F4079471966D8C;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_INIT_OFFSET UNITYSDK_OFFSET(0x9CA9D80)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_METHOD_5_022B0D58A3077BF2_OFFSET UNITYSDK_OFFSET(0x9CAA490)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_METHOD_5_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x9CAA440)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9CAA630)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9CAA560)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETDISTANCELV_OFFSET UNITYSDK_OFFSET(0x9CA9B30)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETROTATERATIO_OFFSET UNITYSDK_OFFSET(0x9CA9D20)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETROTATETARGETATCONSTANTSPEED_OFFSET UNITYSDK_OFFSET(0x9CAA060)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETSCANCALLBACK_OFFSET UNITYSDK_OFFSET(0x9CA9AE0)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTREASUREFIND_OFFSET UNITYSDK_OFFSET(0x9CA9BE0)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTREASURE_OFFSET UNITYSDK_OFFSET(0x9CAA2C0)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTRIGGERDISAPPEAR_OFFSET UNITYSDK_OFFSET(0x9CA75C0)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTRIGGERSCAN_OFFSET UNITYSDK_OFFSET(0x9CA9C80)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x9CAA310)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x9CAA710)
#define RPG_CLIENT_PROP_PROBEPUZZLEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9CAA700)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ProbePuzzleItem_TypeDefinitionIndex = 62043;

	class ProbePuzzleItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::String** StaticGet_Field_5_11()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleItem_TypeDefinitionIndex)->GetStaticField(0x42E40);
		}
		static ::System::String** StaticGet_Field_5_9()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleItem_TypeDefinitionIndex)->GetStaticField(0x42E48);
		}
		static ::System::String** StaticGet_Field_5_10()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleItem_TypeDefinitionIndex)->GetStaticField(0x42E50);
		}
		static ::System::String** StaticGet_Field_5_8()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ProbePuzzleItem_TypeDefinitionIndex)->GetStaticField(0x42E58);
		}
		::System::Single _rotateRatio; // 0x18
		::UnityEngine::Transform* Field_5_1; // 0x20
		::Class_2_01F4079471966D8C* Field_5_2; // 0x28
		::System::Action_1<::System::Single>* Field_5_3; // 0x30
		::UnityEngine::Quaternion Field_5_4; // 0x38
		::UnityEngine::Quaternion Field_5_5; // 0x48
		::System::Single Field_5_6; // 0x58
		::System::Single Field_5_7; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM__CCTOR_OFFSET))();
		}

		::System::Void Init(::Class_2_01F4079471966D8C* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_01F4079471966D8C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_INIT_OFFSET))(this, a1);
		}

		::System::Void SetTreasure(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTREASURE_OFFSET))(this, a1);
		}

		::System::Void SetRotateRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETROTATERATIO_OFFSET))(this, a1);
		}

		::System::Void SetTreasureFind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTREASUREFIND_OFFSET))(this);
		}

		::System::Void SetTriggerScan()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTRIGGERSCAN_OFFSET))(this);
		}

		::System::Void SetTriggerDisappear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETTRIGGERDISAPPEAR_OFFSET))(this);
		}

		::System::Void SetDistanceLv(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETDISTANCELV_OFFSET))(this, a1);
		}

		::System::Void SetRotateTargetAtConstantSpeed(::UnityEngine::Transform* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETROTATETARGETATCONSTANTSPEED_OFFSET))(this, a1, a2);
		}

		::System::Void SetScanCallBack(::System::Action_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_SETSCANCALLBACK_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_7DD84EAFF333A1E4(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_METHOD_5_7DD84EAFF333A1E4_OFFSET))(this, a1);
		}

		::System::Void Method_5_022B0D58A3077BF2(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_METHOD_5_022B0D58A3077BF2_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PROBEPUZZLEITEM_ONDISABLE_OFFSET))(this);
		}
	};
}
