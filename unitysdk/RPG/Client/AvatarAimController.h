#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarAimController_Struct_2_E658502528B7C034_3.h"
#include "unitysdk/Struct_2_9C2AD9A3E720F0F7.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_704;
namespace RPG::Client { class AimSolver; }
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class MultiAimSolver; }
namespace RPG::Client { template <typename T1, typename T2> class AimEvaluator_2; }
namespace RootMotion::IKJob { class IKThreadProxyContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AVATARAIMCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0x8CBA5F0)
#define RPG_CLIENT_AVATARAIMCONTROLLER_COLLECTTHREADDATA_OFFSET UNITYSDK_OFFSET(0x8CBAE90)
#define RPG_CLIENT_AVATARAIMCONTROLLER_GETREFERENCETRANSFORMS_OFFSET UNITYSDK_OFFSET(0x8CBADA0)
#define RPG_CLIENT_AVATARAIMCONTROLLER_GET_CURRENTSOLVER_OFFSET UNITYSDK_OFFSET(0x8CBBA00)
#define RPG_CLIENT_AVATARAIMCONTROLLER_GET_ISPROCESSABLE_OFFSET UNITYSDK_OFFSET(0x8CBA930)
#define RPG_CLIENT_AVATARAIMCONTROLLER_METHOD_5_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x8CBB8F0)
#define RPG_CLIENT_AVATARAIMCONTROLLER_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x8CBA940)
#define RPG_CLIENT_AVATARAIMCONTROLLER_PROCESS_OFFSET UNITYSDK_OFFSET(0x8CBACA0)
#define RPG_CLIENT_AVATARAIMCONTROLLER_SAFEINIT_OFFSET UNITYSDK_OFFSET(0x8CBA740)
#define RPG_CLIENT_AVATARAIMCONTROLLER_SET_CURRENTSOLVER_OFFSET UNITYSDK_OFFSET(0x8CBBA10)
#define RPG_CLIENT_AVATARAIMCONTROLLER_STARTAIM_1_OFFSET UNITYSDK_OFFSET(0x8CBB420)
#define RPG_CLIENT_AVATARAIMCONTROLLER_STARTAIM_OFFSET UNITYSDK_OFFSET(0x8CBB080)
#define RPG_CLIENT_AVATARAIMCONTROLLER_STOPAIM_OFFSET UNITYSDK_OFFSET(0x8CBB650)
#define RPG_CLIENT_AVATARAIMCONTROLLER_STOPALLAIM_OFFSET UNITYSDK_OFFSET(0x8CBB850)
#define RPG_CLIENT_AVATARAIMCONTROLLER_UPDATEAIMSOLVE_OFFSET UNITYSDK_OFFSET(0x8CBAF90)
#define RPG_CLIENT_AVATARAIMCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8CBBA20)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarAimController_TypeDefinitionIndex = 54244;

	class AvatarAimController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Class_0_16E4307DCC419505_704* _CurrentSolver_k__BackingField; // 0x18
		::System::Boolean isMulti; // 0x20
		::RPG::Client::AimSolver* Solver; // 0x28
		::RPG::Client::MultiAimSolver* MultiSolver; // 0x30
		::Il2CppArray<::RPG::Client::AvatarAimController_Struct_2_E658502528B7C034_3>* Field_5_4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void SafeInit(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_SAFEINIT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsProcessable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_GET_ISPROCESSABLE_OFFSET))(this);
		}

		::System::Void PreProcess(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_PREPROCESS_OFFSET))(this, a1);
		}

		::System::Boolean Process(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_PROCESS_OFFSET))(this, a1);
		}

		::System::Void GetReferenceTransforms(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_GETREFERENCETRANSFORMS_OFFSET))(this, a1);
		}

		::System::Void CollectThreadData(::RootMotion::IKJob::IKThreadProxyContext* a1, ::Struct_2_9C2AD9A3E720F0F7& a2)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKThreadProxyContext*, ::Struct_2_9C2AD9A3E720F0F7&))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_COLLECTTHREADDATA_OFFSET))(this, a1, a2);
		}

		::System::Boolean UpdateAimSolve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_UPDATEAIMSOLVE_OFFSET))(this);
		}

		::System::Void StartAim(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::Vector2 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_STARTAIM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void StartAim_1(::System::String* a1, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>* a2, ::System::Single a3, ::UnityEngine::Vector2 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::AimEvaluator_2<::UnityEngine::Vector3, ::System::Boolean>*, ::System::Single, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_STARTAIM_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void StopAim(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_STOPAIM_OFFSET))(this, a1, a2);
		}

		::System::Void StopAllAim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_STOPALLAIM_OFFSET))(this);
		}

		::System::Void Method_5_455E250D679F9642()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_METHOD_5_455E250D679F9642_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_704* get_CurrentSolver()
		{
			return ((::Class_0_16E4307DCC419505_704*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_GET_CURRENTSOLVER_OFFSET))(this);
		}

		::System::Void set_CurrentSolver(::Class_0_16E4307DCC419505_704* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_704*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARAIMCONTROLLER_SET_CURRENTSOLVER_OFFSET))(this, value);
		}
	};
}
