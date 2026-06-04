#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD711FBD7923B1D0_Phase.h"
#include "unitysdk/RPG/Client/AirlineBirdWay_CurveRange.h"
#include "unitysdk/Struct_2_BBE13FFEB7E1D73E.h"
#include "unitysdk/Struct_2_F93DE209E992FF0D.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AirshipBird; }

#define CLASS_1_FD711FBD7923B1D0_CLEAR_OFFSET UNITYSDK_OFFSET(0x14A5EE80)
#define CLASS_1_FD711FBD7923B1D0_METHOD_1_127D8F0899EE0E05_1_OFFSET UNITYSDK_OFFSET(0x14A5F620)
#define CLASS_1_FD711FBD7923B1D0_METHOD_1_127D8F0899EE0E05_OFFSET UNITYSDK_OFFSET(0x14A5F560)
#define CLASS_1_FD711FBD7923B1D0_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x14A5FCE0)
#define CLASS_1_FD711FBD7923B1D0_METHOD_1_28C026B8C4636DE1_OFFSET UNITYSDK_OFFSET(0x14A5E8F0)
#define CLASS_1_FD711FBD7923B1D0_METHOD_1_43A8DE046F4EECDF_OFFSET UNITYSDK_OFFSET(0x14A5F970)
#define CLASS_1_FD711FBD7923B1D0_METHOD_1_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x14A5EA80)
#define CLASS_1_FD711FBD7923B1D0_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x14A5FCC0)
#define CLASS_1_FD711FBD7923B1D0_METHOD_1_54B5B5830A8571CA_OFFSET UNITYSDK_OFFSET(0x14A5F8D0)
#define CLASS_1_FD711FBD7923B1D0_METHOD_1_A5D5316A3D985EE0_OFFSET UNITYSDK_OFFSET(0x14A5F4C0)
#define CLASS_1_FD711FBD7923B1D0_METHOD_1_AD23FDCC7576BB32_OFFSET UNITYSDK_OFFSET(0x14A5EEE0)
#define CLASS_1_FD711FBD7923B1D0_METHOD_1_AF36EBA0C8D1FBA2_OFFSET UNITYSDK_OFFSET(0x14A5EF90)
#define CLASS_1_FD711FBD7923B1D0_METHOD_1_BED72B59CF367BE4_OFFSET UNITYSDK_OFFSET(0x14A5F6F0)
#define CLASS_1_FD711FBD7923B1D0_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x14A5FCD0)
#define CLASS_1_FD711FBD7923B1D0_METHOD_1_F7784354DB478BA6_OFFSET UNITYSDK_OFFSET(0x14A5E890)
#define CLASS_1_FD711FBD7923B1D0_METHOD_1_FAC9AC7514103353_OFFSET UNITYSDK_OFFSET(0x14A5FCB0)
#define CLASS_1_FD711FBD7923B1D0_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x14A5FC50)
#define CLASS_1_FD711FBD7923B1D0__CTOR_OFFSET UNITYSDK_OFFSET(0x14A5FD40)

inline static constexpr unsigned int Class_1_FD711FBD7923B1D0_TypeDefinitionIndex = 55901;

class Class_1_FD711FBD7923B1D0 : public ::System::Object
{
public:
	::Struct_2_BBE13FFEB7E1D73E Field_1_0; // 0x10
	::RPG::Client::AirshipBird* Field_1_1; // 0x58
	::RPG::Client::AirlineBirdWay_CurveRange Field_1_2; // 0x60
	::RPG::Client::AirlineBirdWay_CurveRange Field_1_3; // 0x80
	::RPG::Client::AirlineBirdWay_CurveRange Field_1_4; // 0xA0
	::Class_1_FD711FBD7923B1D0_Phase Field_1_5; // 0xC0
	::System::Single Field_1_6; // 0xC4
	::System::Single Field_1_7; // 0xC8
	::System::Single Field_1_8; // 0xCC
	::System::Single Field_1_9; // 0xD0
	::System::Single Field_1_10; // 0xD4
	::Class_1_FD711FBD7923B1D0_Phase Field_1_11; // 0xD8
	::Class_1_FD711FBD7923B1D0_Phase Field_1_12; // 0xDC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F7784354DB478BA6(::RPG::Client::AirshipBird* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AirshipBird*))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0_METHOD_1_F7784354DB478BA6_OFFSET))(this, a1);
	}

	::System::Void Method_1_28C026B8C4636DE1(::Struct_2_F93DE209E992FF0D a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_F93DE209E992FF0D, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0_METHOD_1_28C026B8C4636DE1_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_AD23FDCC7576BB32(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0_METHOD_1_AD23FDCC7576BB32_OFFSET))(this, a1);
	}

	::System::Void Method_1_AF36EBA0C8D1FBA2(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0_METHOD_1_AF36EBA0C8D1FBA2_OFFSET))(this, a1);
	}

	::System::Void Method_1_127D8F0899EE0E05(::RPG::Client::AirlineBirdWay_CurveRange a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AirlineBirdWay_CurveRange))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0_METHOD_1_127D8F0899EE0E05_OFFSET))(this, a1);
	}

	::System::Void Method_1_127D8F0899EE0E05_1(::RPG::Client::AirlineBirdWay_CurveRange a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AirlineBirdWay_CurveRange))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0_METHOD_1_127D8F0899EE0E05_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_BED72B59CF367BE4(::RPG::Client::AirlineBirdWay_CurveRange a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AirlineBirdWay_CurveRange))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0_METHOD_1_BED72B59CF367BE4_OFFSET))(this, a1);
	}

	::System::Void Method_1_54B5B5830A8571CA(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0_METHOD_1_54B5B5830A8571CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_43A8DE046F4EECDF(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0_METHOD_1_43A8DE046F4EECDF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_459C79521BFE514E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0_METHOD_1_459C79521BFE514E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5D5316A3D985EE0(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0_METHOD_1_A5D5316A3D985EE0_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::AirshipBird* Method_1_FAC9AC7514103353()
	{
		return ((::RPG::Client::AirshipBird*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0_METHOD_1_FAC9AC7514103353_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD711FBD7923B1D0_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}
};
