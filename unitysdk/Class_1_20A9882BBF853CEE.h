#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EAirshipWorkingState.h"
#include "unitysdk/RPG/Client/EAirshipDriveType.h"
#include "unitysdk/RPG/Client/EAirshipMoorState.h"
#include "unitysdk/Struct_2_BBE13FFEB7E1D73E.h"
#include "unitysdk/Struct_2_F93DE209E992FF0D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AirlineStation; }
namespace RPG::Client { class Airship; }
namespace RPG::Client { class AirshipAudio; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define CLASS_1_20A9882BBF853CEE_CLEAR_OFFSET UNITYSDK_OFFSET(0x89E86A0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_070E78F7BE10761C_OFFSET UNITYSDK_OFFSET(0x89ED8B0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_08C5265FFA615F64_OFFSET UNITYSDK_OFFSET(0x89ECF30)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_0F2122513F9EAC21_OFFSET UNITYSDK_OFFSET(0x89ED5E0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_1B98BDC16DCD1BB2_OFFSET UNITYSDK_OFFSET(0x89ECA30)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_1C7FF2EBE58CD8E1_OFFSET UNITYSDK_OFFSET(0x89EA650)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_1D0BAAA6D83C496B_OFFSET UNITYSDK_OFFSET(0x89EAF90)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x89E8830)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x89EE600)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_2045BA2947DBDBCE_OFFSET UNITYSDK_OFFSET(0x89EE150)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x89EA6D0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x89E8640)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_29DA7088051996A2_OFFSET UNITYSDK_OFFSET(0x89E89F0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_38B862BB2192EC08_OFFSET UNITYSDK_OFFSET(0x89EE690)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_46F38B806BD98B70_OFFSET UNITYSDK_OFFSET(0x89EEA40)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x89EE670)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_4C1E8F7F7712A882_OFFSET UNITYSDK_OFFSET(0x89EACC0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x89EE800)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_5323F2DF46A044DA_2_OFFSET UNITYSDK_OFFSET(0x89EEA60)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x89EE6F0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_55DBBE43B03881AD_OFFSET UNITYSDK_OFFSET(0x89EAF20)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_62BB36E1B63D890A_OFFSET UNITYSDK_OFFSET(0x89EE680)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_6D6EA29B8021E10A_OFFSET UNITYSDK_OFFSET(0x89EAA70)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_6F167E355D959906_OFFSET UNITYSDK_OFFSET(0x89EDED0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_71491C77820F89D9_OFFSET UNITYSDK_OFFSET(0x89ECAD0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_7245BCD5BA65436E_OFFSET UNITYSDK_OFFSET(0x89EE810)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_768CE08CF973C3AE_OFFSET UNITYSDK_OFFSET(0x89ED9F0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_7889E856344009E9_OFFSET UNITYSDK_OFFSET(0x89ED390)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_8C6E66D260CC37AD_1_OFFSET UNITYSDK_OFFSET(0x89EE0A0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_8C6E66D260CC37AD_OFFSET UNITYSDK_OFFSET(0x89EDFF0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0x89EDC10)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_9BFE2727ACC4DE16_OFFSET UNITYSDK_OFFSET(0x89E8530)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_ACE1B76C3A7F6CE1_OFFSET UNITYSDK_OFFSET(0x89ED480)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_AF11EB02CE78B812_OFFSET UNITYSDK_OFFSET(0x89E8890)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_C19E9E281EA0E4DD_OFFSET UNITYSDK_OFFSET(0x89ECB80)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_C5BA3A728E6EB4F3_OFFSET UNITYSDK_OFFSET(0x89EE3F0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x89EA730)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x89EE720)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_DBD08055DB7EB0F2_OFFSET UNITYSDK_OFFSET(0x89EA780)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_EFF275E2C18C04F2_OFFSET UNITYSDK_OFFSET(0x89E8DA0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x89ECAC0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_F0088C88851A7DFB_2_OFFSET UNITYSDK_OFFSET(0x89EEA50)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x89EE660)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_F1BB1C98F62A6506_OFFSET UNITYSDK_OFFSET(0x89EDCB0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_FB4BE762B6186C23_1_OFFSET UNITYSDK_OFFSET(0x89EE700)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_FB4BE762B6186C23_2_OFFSET UNITYSDK_OFFSET(0x89EE7D0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x89ED460)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_FDE09C8D62639E3E_OFFSET UNITYSDK_OFFSET(0x89EDF70)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0x89ECD40)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x89ECCE0)
#define CLASS_1_20A9882BBF853CEE_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x89E8D40)
#define CLASS_1_20A9882BBF853CEE__CCTOR_OFFSET UNITYSDK_OFFSET(0x89EEA70)
#define CLASS_1_20A9882BBF853CEE__CTOR_OFFSET UNITYSDK_OFFSET(0x89E84D0)

inline static constexpr unsigned int Class_1_20A9882BBF853CEE_TypeDefinitionIndex = 47326;

class Class_1_20A9882BBF853CEE : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_22()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20A9882BBF853CEE_TypeDefinitionIndex)->GetStaticField(0x2790);
	}
	static ::System::Int32* StaticGet_Field_1_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20A9882BBF853CEE_TypeDefinitionIndex)->GetStaticField(0x2794);
	}
	static ::System::Int32* StaticGet_Field_1_23()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20A9882BBF853CEE_TypeDefinitionIndex)->GetStaticField(0x2798);
	}
	static ::System::Int32* StaticGet_Field_1_19()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20A9882BBF853CEE_TypeDefinitionIndex)->GetStaticField(0x279C);
	}
	static ::System::Int32* StaticGet_Field_1_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_20A9882BBF853CEE_TypeDefinitionIndex)->GetStaticField(0x27A0);
	}
	::System::Collections::Generic::List_1<::Class_1_20A9882BBF853CEE*>* Field_1_5; // 0x10
	::Struct_2_BBE13FFEB7E1D73E Field_1_1; // 0x18
	::Struct_2_BBE13FFEB7E1D73E Field_1_0; // 0x60
	::RPG::Client::Airship* Field_1_3; // 0xA8
	::RPG::Client::AirshipAudio* Field_1_4; // 0xB0
	::System::Single Field_1_13; // 0xB8
	::System::Single Field_1_12; // 0xBC
	::System::Single Field_1_11; // 0xC0
	::System::Boolean Field_1_7; // 0xC4
	::System::Boolean Field_1_18; // 0xC5
	::System::Boolean Field_1_10; // 0xC6
	::System::Single Field_1_2; // 0xC8
	::System::Single Field_1_14; // 0xCC
	::System::Single Field_1_8; // 0xD0
	::RPG::Client::EAirshipDriveType Field_1_16; // 0xD4
	::System::Single Field_1_17; // 0xD8
	::UnityEngine::Vector3 Field_1_15; // 0xDC
	::RPG::Client::EAirshipMoorState Field_1_6; // 0xE8
	::System::Single Field_1_9; // 0xEC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE__CCTOR_OFFSET))();
	}

	::System::Void Method_1_9BFE2727ACC4DE16(::RPG::Client::Airship* a1, ::System::Collections::Generic::List_1<::Class_1_20A9882BBF853CEE*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Airship*, ::System::Collections::Generic::List_1<::Class_1_20A9882BBF853CEE*>*))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_9BFE2727ACC4DE16_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_AF11EB02CE78B812(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_AF11EB02CE78B812_OFFSET))(this, a1);
	}

	::System::Void Method_1_29DA7088051996A2(::Struct_2_F93DE209E992FF0D a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F93DE209E992FF0D, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_29DA7088051996A2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1C7FF2EBE58CD8E1(::EAirshipWorkingState a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::EAirshipWorkingState, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_1C7FF2EBE58CD8E1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_DBD08055DB7EB0F2(::RPG::Client::EAirshipDriveType a1, ::System::Single a2, ::System::Single a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EAirshipDriveType, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_DBD08055DB7EB0F2_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_4C1E8F7F7712A882(::RPG::Client::EAirshipDriveType a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EAirshipDriveType, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_4C1E8F7F7712A882_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_55DBBE43B03881AD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_55DBBE43B03881AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B98BDC16DCD1BB2(::RPG::Client::AirlineStation* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AirlineStation*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_1B98BDC16DCD1BB2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1D0BAAA6D83C496B(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_1D0BAAA6D83C496B_OFFSET))(this, a1);
	}

	::System::Void Method_1_EFF275E2C18C04F2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_EFF275E2C18C04F2_OFFSET))(this);
	}

	::System::Void Method_1_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_1_7889E856344009E9(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_7889E856344009E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_08C5265FFA615F64(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_08C5265FFA615F64_OFFSET))(this, a1);
	}

	::System::Void Method_1_ACE1B76C3A7F6CE1(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_ACE1B76C3A7F6CE1_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_0F2122513F9EAC21()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_0F2122513F9EAC21_OFFSET))(this);
	}

	::System::Void Method_1_070E78F7BE10761C(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_070E78F7BE10761C_OFFSET))(this, a1);
	}

	::System::Void Method_1_768CE08CF973C3AE(::UnityEngine::Transform* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_768CE08CF973C3AE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_6D6EA29B8021E10A(::System::Boolean a1, ::RPG::Client::EAirshipDriveType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::EAirshipDriveType))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_6D6EA29B8021E10A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_F1BB1C98F62A6506(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_F1BB1C98F62A6506_OFFSET))(this, a1);
	}

	::System::Void Method_1_FDE09C8D62639E3E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_FDE09C8D62639E3E_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C6E66D260CC37AD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_8C6E66D260CC37AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C6E66D260CC37AD_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_8C6E66D260CC37AD_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_2045BA2947DBDBCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_2045BA2947DBDBCE_OFFSET))(this);
	}

	::System::Void Method_1_C5BA3A728E6EB4F3(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_C5BA3A728E6EB4F3_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_20A9882BBF853CEE*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_20A9882BBF853CEE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::RPG::Client::AirlineStation* Method_1_6F167E355D959906()
	{
		return ((::RPG::Client::AirlineStation*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_6F167E355D959906_OFFSET))(this);
	}

	::RPG::Client::Airship* Method_1_62BB36E1B63D890A()
	{
		return ((::RPG::Client::Airship*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_62BB36E1B63D890A_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_1_38B862BB2192EC08()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_38B862BB2192EC08_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_FB4BE762B6186C23_1_OFFSET))(this);
	}

	::System::Single Method_1_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_FB4BE762B6186C23_2_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_FF7B2911BBACA4A9_1_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_7245BCD5BA65436E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_7245BCD5BA65436E_OFFSET))(this, a1);
	}

	::RPG::Client::AirshipAudio* Method_1_46F38B806BD98B70()
	{
		return ((::RPG::Client::AirshipAudio*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_46F38B806BD98B70_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_F0088C88851A7DFB_2_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_5323F2DF46A044DA_2_OFFSET))(this);
	}

	::System::Void Method_1_71491C77820F89D9(::Il2CppArray<::UnityEngine::Renderer*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_71491C77820F89D9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C19E9E281EA0E4DD(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_20A9882BBF853CEE_METHOD_1_C19E9E281EA0E4DD_OFFSET))(this, a1);
	}
};
