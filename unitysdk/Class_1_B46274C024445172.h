#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class BatchAnimationClipGroup;
class Class_1_9E3B6A97D40289D6_Class_3_487EE6B302AC50B7_4;
class Class_1_D27BF54F25500E5F;
class Class_1_F84A89D9E3CCB841;
class Class_1_F84A89D9E3CCB841_Class_3_A6F48C4639F89890;
namespace RPG::Client { class BatchAnimationAttachPointMapping; }
namespace RPG::Client { class PedestrianMemberExternalConfig_BatchAnimation; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class BatchAnimationInstance; }

#define CLASS_1_B46274C024445172_CLEAR_OFFSET UNITYSDK_OFFSET(0x9207D00)
#define CLASS_1_B46274C024445172_GET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0x9209290)
#define CLASS_1_B46274C024445172_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x9209250)
#define CLASS_1_B46274C024445172_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9209230)
#define CLASS_1_B46274C024445172_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x9209210)
#define CLASS_1_B46274C024445172_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x9207AE0)
#define CLASS_1_B46274C024445172_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x9209270)
#define CLASS_1_B46274C024445172_METHOD_1_05891E8E87C14559_OFFSET UNITYSDK_OFFSET(0x9207EC0)
#define CLASS_1_B46274C024445172_METHOD_1_09CD9BF84DD32DF8_OFFSET UNITYSDK_OFFSET(0x9208D50)
#define CLASS_1_B46274C024445172_METHOD_1_1CDA0051FD244886_OFFSET UNITYSDK_OFFSET(0x9208EE0)
#define CLASS_1_B46274C024445172_METHOD_1_235D058510899FEE_OFFSET UNITYSDK_OFFSET(0x92083B0)
#define CLASS_1_B46274C024445172_METHOD_1_35A1BA48D9ACC587_OFFSET UNITYSDK_OFFSET(0x9208750)
#define CLASS_1_B46274C024445172_METHOD_1_3CDB5DB8BD0AC758_OFFSET UNITYSDK_OFFSET(0x9208AE0)
#define CLASS_1_B46274C024445172_METHOD_1_3DFACF146C0F4294_OFFSET UNITYSDK_OFFSET(0x92082E0)
#define CLASS_1_B46274C024445172_METHOD_1_5EA79CD11E1E5CB8_OFFSET UNITYSDK_OFFSET(0x9208CE0)
#define CLASS_1_B46274C024445172_METHOD_1_678A641D7D5163B2_1_OFFSET UNITYSDK_OFFSET(0x9208950)
#define CLASS_1_B46274C024445172_METHOD_1_678A641D7D5163B2_OFFSET UNITYSDK_OFFSET(0x92087C0)
#define CLASS_1_B46274C024445172_METHOD_1_82835BF5084804CE_OFFSET UNITYSDK_OFFSET(0x9208300)
#define CLASS_1_B46274C024445172_METHOD_1_8B7C44E1F71D9B2B_OFFSET UNITYSDK_OFFSET(0x9208120)
#define CLASS_1_B46274C024445172_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x92084A0)
#define CLASS_1_B46274C024445172_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x92084F0)
#define CLASS_1_B46274C024445172_METHOD_1_9F8BD2019ACB1327_OFFSET UNITYSDK_OFFSET(0x9208210)
#define CLASS_1_B46274C024445172_METHOD_1_BD8B32CA7F231547_OFFSET UNITYSDK_OFFSET(0x9207B00)
#define CLASS_1_B46274C024445172_METHOD_1_D4E1804C25B5032C_OFFSET UNITYSDK_OFFSET(0x9208700)
#define CLASS_1_B46274C024445172_METHOD_1_D9AAE950C6F28BA6_OFFSET UNITYSDK_OFFSET(0x9208560)
#define CLASS_1_B46274C024445172_METHOD_1_DFC0F40FEAB52DBC_OFFSET UNITYSDK_OFFSET(0x9208620)
#define CLASS_1_B46274C024445172_METHOD_1_F7F80C1DB6B12DA7_OFFSET UNITYSDK_OFFSET(0x9209180)
#define CLASS_1_B46274C024445172_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x92080A0)
#define CLASS_1_B46274C024445172_SET_BATCHANIMATION_OFFSET UNITYSDK_OFFSET(0x92092A0)
#define CLASS_1_B46274C024445172_SET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x9209260)
#define CLASS_1_B46274C024445172_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x9209240)
#define CLASS_1_B46274C024445172_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x9209220)
#define CLASS_1_B46274C024445172_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x9207AF0)
#define CLASS_1_B46274C024445172_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x9209280)
#define CLASS_1_B46274C024445172__CCTOR_OFFSET UNITYSDK_OFFSET(0x9209450)
#define CLASS_1_B46274C024445172__CTOR_OFFSET UNITYSDK_OFFSET(0x92092B0)

inline static constexpr unsigned int Class_1_B46274C024445172_TypeDefinitionIndex = 55052;

class Class_1_B46274C024445172 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B46274C024445172_TypeDefinitionIndex)->GetStaticField(0xF020);
	}
	static ::System::Int32* StaticGet_Field_1_18()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B46274C024445172_TypeDefinitionIndex)->GetStaticField(0xF024);
	}
	static ::System::Single* StaticGet_Field_1_17()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B46274C024445172_TypeDefinitionIndex)->GetStaticField(0xF028);
	}
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_13; // 0x10
	::UnityEngine::Rendering::BatchAnimationInstance* _BatchAnimation_k__BackingField; // 0x18
	::Class_1_F84A89D9E3CCB841* Field_1_8; // 0x20
	::UnityEngine::Transform* _Transform_k__BackingField; // 0x28
	::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* _Config_k__BackingField; // 0x30
	::System::Action* _Callback_k__BackingField; // 0x38
	::Class_1_F84A89D9E3CCB841_Class_3_A6F48C4639F89890* Field_1_11; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_12; // 0x48
	::UnityEngine::MaterialPropertyBlock* Field_1_15; // 0x50
	::System::String* _PrefabPath_k__BackingField; // 0x58
	::Class_1_9E3B6A97D40289D6_Class_3_487EE6B302AC50B7_4* Field_1_10; // 0x60
	::Class_1_D27BF54F25500E5F* Field_1_16; // 0x68
	::System::Single _Radius_k__BackingField; // 0x70
	::System::Int32 Field_1_9; // 0x74
	::System::Boolean Field_1_14; // 0x78
	::System::Nullable_1<::System::Int32> Field_1_6; // 0x7C
	::System::Nullable_1<::System::Int32> Field_1_7; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172__CCTOR_OFFSET))();
	}

	::System::Single get_Radius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_GET_RADIUS_OFFSET))(this);
	}

	::System::Void set_Radius(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_SET_RADIUS_OFFSET))(this, value);
	}

	::System::Void Method_1_BD8B32CA7F231547(::System::String* a1, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* a2, ::System::Action* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_BD8B32CA7F231547_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B7C44E1F71D9B2B(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_8B7C44E1F71D9B2B_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F8BD2019ACB1327(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_9F8BD2019ACB1327_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_82835BF5084804CE(::System::String* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_82835BF5084804CE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_235D058510899FEE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_235D058510899FEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFC0F40FEAB52DBC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_DFC0F40FEAB52DBC_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_D4E1804C25B5032C(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_D4E1804C25B5032C_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Boolean Method_1_35A1BA48D9ACC587(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_35A1BA48D9ACC587_OFFSET))(this, a1);
	}

	::System::Void Method_1_678A641D7D5163B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_678A641D7D5163B2_OFFSET))(this);
	}

	::System::Void Method_1_678A641D7D5163B2_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_678A641D7D5163B2_1_OFFSET))(this);
	}

	::System::Void Method_1_3CDB5DB8BD0AC758(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_3CDB5DB8BD0AC758_OFFSET))(this, a1);
	}

	::System::Void Method_1_05891E8E87C14559(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_05891E8E87C14559_OFFSET))(this, a1);
	}

	::System::Void Method_1_5EA79CD11E1E5CB8(::Class_1_F84A89D9E3CCB841* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F84A89D9E3CCB841*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_5EA79CD11E1E5CB8_OFFSET))(this, a1);
	}

	::System::Void Method_1_09CD9BF84DD32DF8(::BatchAnimationClipGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::BatchAnimationClipGroup*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_09CD9BF84DD32DF8_OFFSET))(this, a1);
	}

	::System::Void Method_1_F7F80C1DB6B12DA7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_F7F80C1DB6B12DA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_1CDA0051FD244886()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_1CDA0051FD244886_OFFSET))(this);
	}

	::System::Void Method_1_D9AAE950C6F28BA6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_D9AAE950C6F28BA6_OFFSET))(this, a1);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Void set_PrefabPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_SET_PREFABPATH_OFFSET))(this, value);
	}

	::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* get_Config()
	{
		return ((::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_GET_CONFIG_OFFSET))(this);
	}

	::System::Void set_Config(::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PedestrianMemberExternalConfig_BatchAnimation*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_SET_CONFIG_OFFSET))(this, value);
	}

	::System::Action* get_Callback()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_GET_CALLBACK_OFFSET))(this);
	}

	::System::Void set_Callback(::System::Action* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_SET_CALLBACK_OFFSET))(this, value);
	}

	::UnityEngine::Transform* get_Transform()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_GET_TRANSFORM_OFFSET))(this);
	}

	::System::Void set_Transform(::UnityEngine::Transform* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_SET_TRANSFORM_OFFSET))(this, value);
	}

	::UnityEngine::Rendering::BatchAnimationInstance* get_BatchAnimation()
	{
		return ((::UnityEngine::Rendering::BatchAnimationInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_GET_BATCHANIMATION_OFFSET))(this);
	}

	::System::Void set_BatchAnimation(::UnityEngine::Rendering::BatchAnimationInstance* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BatchAnimationInstance*))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_SET_BATCHANIMATION_OFFSET))(this, value);
	}

	::RPG::Client::BatchAnimationAttachPointMapping* Method_1_3DFACF146C0F4294()
	{
		return ((::RPG::Client::BatchAnimationAttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B46274C024445172_METHOD_1_3DFACF146C0F4294_OFFSET))(this);
	}
};
