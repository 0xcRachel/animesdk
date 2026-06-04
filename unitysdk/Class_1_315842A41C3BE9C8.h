#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CD9533418F3B6F39_VCameraType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C991F2628C937838;
class Class_1_D4A8E06EA4E680A0;
class Class_1_E34FF29EE1CCACD4;
namespace Cinemachine { class CinemachineCRPVirtualCamera; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define CLASS_1_315842A41C3BE9C8_GET_CAMERATYPE_OFFSET UNITYSDK_OFFSET(0xD875BC0)
#define CLASS_1_315842A41C3BE9C8_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xD875730)
#define CLASS_1_315842A41C3BE9C8_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xD875C00)
#define CLASS_1_315842A41C3BE9C8_GET_ISAVAILABLEFORREUSE_OFFSET UNITYSDK_OFFSET(0xD875C40)
#define CLASS_1_315842A41C3BE9C8_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0xD875BE0)
#define CLASS_1_315842A41C3BE9C8_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xD875C20)
#define CLASS_1_315842A41C3BE9C8_GET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xD875800)
#define CLASS_1_315842A41C3BE9C8_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xD875C50)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xD875C70)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_2F2B436D8A949630_OFFSET UNITYSDK_OFFSET(0xD874050)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_32386405FC559B4F_OFFSET UNITYSDK_OFFSET(0xD874850)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_5163F984D98DE74B_OFFSET UNITYSDK_OFFSET(0xD874140)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_626C719A884DEF9A_1_OFFSET UNITYSDK_OFFSET(0xD875330)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_626C719A884DEF9A_2_OFFSET UNITYSDK_OFFSET(0xD875520)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_626C719A884DEF9A_3_OFFSET UNITYSDK_OFFSET(0xD8755A0)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_626C719A884DEF9A_OFFSET UNITYSDK_OFFSET(0xD8751C0)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_71227BBBB7D3D8E0_OFFSET UNITYSDK_OFFSET(0xD874620)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0xD875CE0)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_85F9AAEEA394BE31_1_OFFSET UNITYSDK_OFFSET(0xD875240)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_85F9AAEEA394BE31_OFFSET UNITYSDK_OFFSET(0xD8750D0)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_8FAD57395F26ACC4_1_OFFSET UNITYSDK_OFFSET(0xD8753B0)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xD874530)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_90EC931103FB6F31_1_OFFSET UNITYSDK_OFFSET(0xD875790)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0xD8756C0)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD875860)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_97889423B3D78768_OFFSET UNITYSDK_OFFSET(0xD874450)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_AF11EB02CE78B812_OFFSET UNITYSDK_OFFSET(0xD875620)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_B6BF2A1BCE9B9659_OFFSET UNITYSDK_OFFSET(0xD873EC0)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_BC46FCF99873D9DD_OFFSET UNITYSDK_OFFSET(0xD874100)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_D05C177151E50861_1_OFFSET UNITYSDK_OFFSET(0xD8758F0)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_D05C177151E50861_OFFSET UNITYSDK_OFFSET(0xD8742A0)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0xD8754B0)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0xD875440)
#define CLASS_1_315842A41C3BE9C8_METHOD_1_FA7F07669215B524_OFFSET UNITYSDK_OFFSET(0xD875D80)
#define CLASS_1_315842A41C3BE9C8_SET_CAMERATYPE_OFFSET UNITYSDK_OFFSET(0xD875BD0)
#define CLASS_1_315842A41C3BE9C8_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xD875C10)
#define CLASS_1_315842A41C3BE9C8_SET_ISCREATED_OFFSET UNITYSDK_OFFSET(0xD875BF0)
#define CLASS_1_315842A41C3BE9C8_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xD875C30)
#define CLASS_1_315842A41C3BE9C8_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xD875C60)
#define CLASS_1_315842A41C3BE9C8__CTOR_OFFSET UNITYSDK_OFFSET(0xD873DF0)

inline static constexpr unsigned int Class_1_315842A41C3BE9C8_TypeDefinitionIndex = 65203;

class Class_1_315842A41C3BE9C8 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0xFFFFFFFF; // 0x0
	::System::Collections::Generic::List_1<::Class_1_D4A8E06EA4E680A0*>* Field_1_1; // 0x10
	::Class_1_C991F2628C937838* Field_1_2; // 0x18
	::UnityEngine::GameObject* Field_1_3; // 0x20
	::Class_1_E34FF29EE1CCACD4* Field_1_4; // 0x28
	::Cinemachine::CinemachineCRPVirtualCamera* Field_1_5; // 0x30
	::Class_1_CD9533418F3B6F39_VCameraType _CameraType_k__BackingField; // 0x38
	::System::UInt32 _RuntimeID_k__BackingField; // 0x3C
	::System::Single Field_1_8; // 0x40
	::System::Int32 Field_1_9; // 0x44
	::System::Boolean _IsCreated_k__BackingField; // 0x48
	::System::Boolean _IsDestroyed_k__BackingField; // 0x49
	::System::Boolean _IsActive_k__BackingField; // 0x4A

	::System::Void _ctor(::Class_1_CD9533418F3B6F39_VCameraType a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CD9533418F3B6F39_VCameraType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B6BF2A1BCE9B9659(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_B6BF2A1BCE9B9659_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_BC46FCF99873D9DD()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_BC46FCF99873D9DD_OFFSET))(this);
	}

	::System::Void Method_1_5163F984D98DE74B(::UnityEngine::Rendering::CRPVirtualCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CRPVirtualCamera*))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_5163F984D98DE74B_OFFSET))(this, a1);
	}

	::System::Void Method_1_D05C177151E50861(::System::Collections::Generic::IReadOnlyList_1<::Class_1_D4A8E06EA4E680A0*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D4A8E06EA4E680A0*>*))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_D05C177151E50861_OFFSET))(this, a1);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_71227BBBB7D3D8E0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_71227BBBB7D3D8E0_OFFSET))(this);
	}

	::System::Void Method_1_85F9AAEEA394BE31(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_85F9AAEEA394BE31_OFFSET))(this, a1);
	}

	::System::Void Method_1_626C719A884DEF9A(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_626C719A884DEF9A_OFFSET))(this, a1);
	}

	::System::Void Method_1_85F9AAEEA394BE31_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_85F9AAEEA394BE31_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_626C719A884DEF9A_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_626C719A884DEF9A_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_8FAD57395F26ACC4_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_8FAD57395F26ACC4_1_OFFSET))(this, a1);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	::System::Void Method_1_626C719A884DEF9A_2(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_626C719A884DEF9A_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_626C719A884DEF9A_3(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_626C719A884DEF9A_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF11EB02CE78B812(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_AF11EB02CE78B812_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_90EC931103FB6F31()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_90EC931103FB6F31_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_90EC931103FB6F31_1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_90EC931103FB6F31_1_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_D05C177151E50861_1(::System::Collections::Generic::IReadOnlyList_1<::Class_1_D4A8E06EA4E680A0*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_D4A8E06EA4E680A0*>*))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_D05C177151E50861_1_OFFSET))(this, a1);
	}

	::Class_1_CD9533418F3B6F39_VCameraType get_CameraType()
	{
		return ((::Class_1_CD9533418F3B6F39_VCameraType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_GET_CAMERATYPE_OFFSET))(this);
	}

	::System::Void set_CameraType(::Class_1_CD9533418F3B6F39_VCameraType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CD9533418F3B6F39_VCameraType))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_SET_CAMERATYPE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsCreated()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_GET_ISCREATED_OFFSET))(this);
	}

	::System::Void set_IsCreated(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_SET_ISCREATED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsActive()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_GET_ISACTIVE_OFFSET))(this);
	}

	::System::Void set_IsActive(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_SET_ISACTIVE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsDestroyed()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_GET_ISDESTROYED_OFFSET))(this);
	}

	::System::Void set_IsDestroyed(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_SET_ISDESTROYED_OFFSET))(this, a1);
	}

	::System::Boolean get_IsAvailableForReuse()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_GET_ISAVAILABLEFORREUSE_OFFSET))(this);
	}

	::System::UInt32 get_RuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_GET_RUNTIMEID_OFFSET))(this);
	}

	::System::Void set_RuntimeID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_SET_RUNTIMEID_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_FollowTarget()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_GET_FOLLOWTARGET_OFFSET))(this);
	}

	::UnityEngine::Transform* get_LookAtTarget()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_GET_LOOKATTARGET_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_77FD543600E00498_OFFSET))(this);
	}

	::UnityEngine::Quaternion Method_1_FA7F07669215B524()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_FA7F07669215B524_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_1_2F2B436D8A949630()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_2F2B436D8A949630_OFFSET))(this);
	}

	::System::Void Method_1_97889423B3D78768()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_97889423B3D78768_OFFSET))(this);
	}

	::System::Void Method_1_32386405FC559B4F(::Class_1_D4A8E06EA4E680A0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D4A8E06EA4E680A0*))((::PBYTE)hIl2Cpp + CLASS_1_315842A41C3BE9C8_METHOD_1_32386405FC559B4F_OFFSET))(this, a1);
	}
};
