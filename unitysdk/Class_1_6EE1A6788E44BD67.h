#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_260;
class Class_1_303D5A33D1401D59;
class SceneLightVolume;
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class VolumeProfile; }

#define CLASS_1_6EE1A6788E44BD67_EQUALS_OFFSET UNITYSDK_OFFSET(0x10B3BE90)
#define CLASS_1_6EE1A6788E44BD67_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x10B3BF30)
#define CLASS_1_6EE1A6788E44BD67_GET_ACTIVEPROFILETRANSITIONTARGET_OFFSET UNITYSDK_OFFSET(0x10B3C100)
#define CLASS_1_6EE1A6788E44BD67_GET_NAMEEX_OFFSET UNITYSDK_OFFSET(0x10B3C480)
#define CLASS_1_6EE1A6788E44BD67_GET_PROFILEPATHEX_OFFSET UNITYSDK_OFFSET(0x10B3C460)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_0756F6A40AE30243_OFFSET UNITYSDK_OFFSET(0x10B3B550)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_0B8716EFED590CF5_OFFSET UNITYSDK_OFFSET(0x10B3C7B0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_0D93A4DE27DE82C8_OFFSET UNITYSDK_OFFSET(0x10B3B950)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_18B8B3C7AE5E95BB_OFFSET UNITYSDK_OFFSET(0x10B3D940)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_193E00E83BC3E6E8_OFFSET UNITYSDK_OFFSET(0x10B3D2A0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x10B3C280)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x10B3C370)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_1D4018D4200358D0_3_OFFSET UNITYSDK_OFFSET(0x10B3D440)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10B3C190)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_2002970A27968D84_OFFSET UNITYSDK_OFFSET(0x10B3D140)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_2395F429740EC13A_OFFSET UNITYSDK_OFFSET(0x10B3CDB0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_2536E2AA2CE58EE2_OFFSET UNITYSDK_OFFSET(0x10B3C600)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_269AC17BE7A40357_1_OFFSET UNITYSDK_OFFSET(0x10B3C2F0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_269AC17BE7A40357_2_OFFSET UNITYSDK_OFFSET(0x10B3C3E0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_269AC17BE7A40357_OFFSET UNITYSDK_OFFSET(0x10B3C200)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_26EA6756F39F4D15_OFFSET UNITYSDK_OFFSET(0x10B3DAC0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_2827A13C8FBC24CA_OFFSET UNITYSDK_OFFSET(0x10B3D9E0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_3E7A053DF81C1024_OFFSET UNITYSDK_OFFSET(0x10B3BFF0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_4E0D7E6519F278CA_OFFSET UNITYSDK_OFFSET(0x10B3C080)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_56181E3FE1C89E6C_OFFSET UNITYSDK_OFFSET(0x10B3CEB0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_579B4B6C9C309749_OFFSET UNITYSDK_OFFSET(0x10B3D1F0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_5B837EC82F8886F9_OFFSET UNITYSDK_OFFSET(0x10B3C8F0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_605552F1EE2530DA_OFFSET UNITYSDK_OFFSET(0x10B3BDC0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_7189EDC2DF255D46_OFFSET UNITYSDK_OFFSET(0x10B3D680)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_75F53A06EEAF2683_OFFSET UNITYSDK_OFFSET(0x10B3CCD0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_77FD543600E00498_1_OFFSET UNITYSDK_OFFSET(0x10B3D5D0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x10B3D520)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_7AB2A7695E303980_OFFSET UNITYSDK_OFFSET(0x10B3D8A0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_7AD49E91EE08A468_OFFSET UNITYSDK_OFFSET(0x10B3CF30)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_81E7A4FD20EC860C_1_OFFSET UNITYSDK_OFFSET(0x10B3D820)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_81E7A4FD20EC860C_OFFSET UNITYSDK_OFFSET(0x10B3D7A0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_95C0E31171155361_OFFSET UNITYSDK_OFFSET(0x10B3C870)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_A1C464B05BB7A5C1_1_OFFSET UNITYSDK_OFFSET(0x10B3CA00)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_A1C464B05BB7A5C1_OFFSET UNITYSDK_OFFSET(0x10B3C960)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_AD58DAB98B95C6DC_OFFSET UNITYSDK_OFFSET(0x10B3C800)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_BB3B7C44B2E34EF9_OFFSET UNITYSDK_OFFSET(0x10B3C690)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_BF4A0CEDDCF19F9C_OFFSET UNITYSDK_OFFSET(0x10B3C570)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10B3D760)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10B3C4A0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_D25CE55A19A14D5C_OFFSET UNITYSDK_OFFSET(0x10B3CFB0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_DB4A7431148323CB_OFFSET UNITYSDK_OFFSET(0x10B3C500)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_E9F90DCA5DE73CFE_1_OFFSET UNITYSDK_OFFSET(0x10B3CB40)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_E9F90DCA5DE73CFE_OFFSET UNITYSDK_OFFSET(0x10B3CAA0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_EB44EFCB44CBA9C1_OFFSET UNITYSDK_OFFSET(0x10B3D4B0)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_EC861120F410BADC_OFFSET UNITYSDK_OFFSET(0x10B3C720)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x10B3D700)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_F26AFC15917F0D52_OFFSET UNITYSDK_OFFSET(0x10B3D060)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_F6D8B25630BBFEEF_OFFSET UNITYSDK_OFFSET(0x10B3BD50)
#define CLASS_1_6EE1A6788E44BD67_METHOD_1_FAE46DEDB7732427_OFFSET UNITYSDK_OFFSET(0x10B3CBE0)
#define CLASS_1_6EE1A6788E44BD67_SET_ACTIVEPROFILETRANSITIONTARGET_OFFSET UNITYSDK_OFFSET(0x10B3C110)
#define CLASS_1_6EE1A6788E44BD67_SET_NAMEEX_OFFSET UNITYSDK_OFFSET(0x10B3C490)
#define CLASS_1_6EE1A6788E44BD67_SET_PROFILEPATHEX_OFFSET UNITYSDK_OFFSET(0x10B3C470)
#define CLASS_1_6EE1A6788E44BD67__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B3DF80)
#define CLASS_1_6EE1A6788E44BD67__CTOR_OFFSET UNITYSDK_OFFSET(0x10B3C0F0)
#define CLASS_1_6EE1A6788E44BD67___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x10B3DFF0)
#define CLASS_1_6EE1A6788E44BD67___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x10B3E000)

inline static constexpr unsigned int Class_1_6EE1A6788E44BD67_TypeDefinitionIndex = 55521;

class Class_1_6EE1A6788E44BD67 : public ::System::Object
{
public:
	static ::UnityEngine::Rendering::VolumeProfile** StaticGet_Field_1_3()
	{
		return (::UnityEngine::Rendering::VolumeProfile**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6EE1A6788E44BD67_TypeDefinitionIndex)->GetStaticField(0x44BD0);
	}
	static ::System::Collections::Generic::List_1<::Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_2_6A75EA4A76790B33_Struct_2_749864A93B6EEBBE>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6EE1A6788E44BD67_TypeDefinitionIndex)->GetStaticField(0x44BD8);
	}
	::System::String* _NameEx_k__BackingField; // 0x10
	::System::String* _ProfilePathEx_k__BackingField; // 0x18
	::System::Int32 Field_1_9; // 0x20
	::System::Int32 Field_1_6; // 0x24
	::System::Int32 Field_1_5; // 0x28
	::System::Int32 Field_1_10; // 0x2C
	::System::Int32 Field_1_7; // 0x30
	::System::Int32 Field_1_4; // 0x34
	::System::Int32 Field_1_8; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67__CCTOR_OFFSET))();
	}

	::System::Void Method_1_0756F6A40AE30243(::Il2CppArray<::System::String*>*& a1, ::Il2CppArray<::System::Type*>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*&, ::Il2CppArray<::System::Type*>*&))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_0756F6A40AE30243_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_0D93A4DE27DE82C8(::System::String* a1, ::Il2CppArray<::System::String*>*& a2, ::Il2CppArray<::System::Type*>*& a3)
	{
		return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::String*>*&, ::Il2CppArray<::System::Type*>*&))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_0D93A4DE27DE82C8_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F6D8B25630BBFEEF(::Class_1_6EE1A6788E44BD67* a1, ::Class_1_6EE1A6788E44BD67* a2)
	{
		return ((::System::Boolean(*)(::Class_1_6EE1A6788E44BD67*, ::Class_1_6EE1A6788E44BD67*))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_F6D8B25630BBFEEF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_605552F1EE2530DA(::Class_1_6EE1A6788E44BD67* a1, ::Class_1_6EE1A6788E44BD67* a2)
	{
		return ((::System::Boolean(*)(::Class_1_6EE1A6788E44BD67*, ::Class_1_6EE1A6788E44BD67*))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_605552F1EE2530DA_OFFSET))(a1, a2);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_EQUALS_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Void Method_1_3E7A053DF81C1024(::Class_1_6EE1A6788E44BD67* a1)
	{
		return ((::System::Void(*)(::Class_1_6EE1A6788E44BD67*))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_3E7A053DF81C1024_OFFSET))(a1);
	}

	static ::Class_1_6EE1A6788E44BD67* Method_1_4E0D7E6519F278CA(::System::String* a1, ::System::String* a2)
	{
		return ((::Class_1_6EE1A6788E44BD67*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_4E0D7E6519F278CA_OFFSET))(a1, a2);
	}

	::Class_0_16E4307DCC419505_260* get_ActiveProfileTransitionTarget()
	{
		return ((::Class_0_16E4307DCC419505_260*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_GET_ACTIVEPROFILETRANSITIONTARGET_OFFSET))(this);
	}

	::System::Void set_ActiveProfileTransitionTarget(::Class_0_16E4307DCC419505_260* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_260*))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_SET_ACTIVEPROFILETRANSITIONTARGET_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_269AC17BE7A40357(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_269AC17BE7A40357_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Void Method_1_269AC17BE7A40357_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_269AC17BE7A40357_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_1D4018D4200358D0_2_OFFSET))(this);
	}

	::System::Void Method_1_269AC17BE7A40357_2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_269AC17BE7A40357_2_OFFSET))(this, a1);
	}

	::System::String* get_ProfilePathEx()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_GET_PROFILEPATHEX_OFFSET))(this);
	}

	::System::Void set_ProfilePathEx(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_SET_PROFILEPATHEX_OFFSET))(this, value);
	}

	::System::String* get_NameEx()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_GET_NAMEEX_OFFSET))(this);
	}

	::System::Void set_NameEx(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_SET_NAMEEX_OFFSET))(this, value);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::Texture* Method_1_DB4A7431148323CB(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::UnityEngine::Texture*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_DB4A7431148323CB_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_BF4A0CEDDCF19F9C(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_BF4A0CEDDCF19F9C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2536E2AA2CE58EE2(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_2536E2AA2CE58EE2_OFFSET))(this, a1);
	}

	::System::Single Method_1_BB3B7C44B2E34EF9(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Single(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_BB3B7C44B2E34EF9_OFFSET))(this, a1);
	}

	::UnityEngine::Vector4 Method_1_EC861120F410BADC(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::UnityEngine::Vector4(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_EC861120F410BADC_OFFSET))(this, a1);
	}

	::UnityEngine::Gradient* Method_1_0B8716EFED590CF5(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::UnityEngine::Gradient*(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_0B8716EFED590CF5_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_AD58DAB98B95C6DC(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Int32(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_AD58DAB98B95C6DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_95C0E31171155361(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_95C0E31171155361_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5B837EC82F8886F9(::EnviromentSystem::EnviromentPropertiesID a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_5B837EC82F8886F9_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_A1C464B05BB7A5C1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_A1C464B05BB7A5C1_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_A1C464B05BB7A5C1_1_OFFSET))(this);
	}

	::UnityEngine::Light* Method_1_E9F90DCA5DE73CFE(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_E9F90DCA5DE73CFE_OFFSET))(this, a1);
	}

	::UnityEngine::Light* Method_1_E9F90DCA5DE73CFE_1(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Light*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_E9F90DCA5DE73CFE_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_FAE46DEDB7732427(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_FAE46DEDB7732427_OFFSET))(this, a1, a2, a3);
	}

	static ::UnityEngine::Rendering::VolumeProfile* Method_1_75F53A06EEAF2683()
	{
		return ((::UnityEngine::Rendering::VolumeProfile*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_75F53A06EEAF2683_OFFSET))();
	}

	::UnityEngine::Rendering::VolumeProfile* Method_1_2395F429740EC13A()
	{
		return ((::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_2395F429740EC13A_OFFSET))(this);
	}

	::System::Void Method_1_56181E3FE1C89E6C(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Gradient* a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_56181E3FE1C89E6C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7AD49E91EE08A468(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_7AD49E91EE08A468_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D25CE55A19A14D5C(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_D25CE55A19A14D5C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F26AFC15917F0D52(::EnviromentSystem::EnviromentPropertiesID a1, ::UnityEngine::Vector4 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_F26AFC15917F0D52_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2002970A27968D84(::EnviromentSystem::EnviromentPropertiesID a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_2002970A27968D84_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_579B4B6C9C309749(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_579B4B6C9C309749_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_193E00E83BC3E6E8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_193E00E83BC3E6E8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0_3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_1D4018D4200358D0_3_OFFSET))(this);
	}

	::UnityEngine::RenderTexture* Method_1_EB44EFCB44CBA9C1()
	{
		return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_EB44EFCB44CBA9C1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_77FD543600E00498_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_77FD543600E00498_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_77FD543600E00498_1_OFFSET))(this);
	}

	::System::Void Method_1_7189EDC2DF255D46(::Class_0_16E4307DCC419505_260* a1, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_260*, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_7189EDC2DF255D46_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_81E7A4FD20EC860C(::Class_0_16E4307DCC419505_260* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_260*))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_81E7A4FD20EC860C_OFFSET))(this, a1);
	}

	::System::Void Method_1_81E7A4FD20EC860C_1(::Class_0_16E4307DCC419505_260* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_260*))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_81E7A4FD20EC860C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_7AB2A7695E303980(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_7AB2A7695E303980_OFFSET))(this, a1);
	}

	::System::Void Method_1_18B8B3C7AE5E95BB(::Class_1_303D5A33D1401D59* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_303D5A33D1401D59*))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_18B8B3C7AE5E95BB_OFFSET))(this, a1);
	}

	::SceneLightVolume* Method_1_2827A13C8FBC24CA()
	{
		return ((::SceneLightVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_2827A13C8FBC24CA_OFFSET))(this);
	}

	::System::Void Method_1_26EA6756F39F4D15(::UnityEngine::Rendering::AmbientVolumneData& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AmbientVolumneData&))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67_METHOD_1_26EA6756F39F4D15_OFFSET))(this, a1);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6EE1A6788E44BD67___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
