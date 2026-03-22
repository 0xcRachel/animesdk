#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_4DF3292AA5AADAD0_15;
class Class_1_58F0FC786D73046C;
namespace RPG::Client { class NetworkManager; }
namespace RPG::Client { class PlanetFesModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_46AC29DEBE45F8A8_1_GET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x91EE280)
#define CLASS_1_46AC29DEBE45F8A8_1_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x91EE260)
#define CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x91EE100)
#define CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_18E996F3C72A73F1_OFFSET UNITYSDK_OFFSET(0x91EDA50)
#define CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_1943FA7E230C2956_OFFSET UNITYSDK_OFFSET(0x91ED690)
#define CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_644EA91E47FBA8F7_OFFSET UNITYSDK_OFFSET(0x91EE200)
#define CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_673929C2E961D13E_OFFSET UNITYSDK_OFFSET(0x91EE160)
#define CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_A3690E3EECDBDC43_OFFSET UNITYSDK_OFFSET(0x91ED930)
#define CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_AEFC7EFD0BACA947_OFFSET UNITYSDK_OFFSET(0x91EDDA0)
#define CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_BB6263DF2BB2626E_OFFSET UNITYSDK_OFFSET(0x91EE2A0)
#define CLASS_1_46AC29DEBE45F8A8_1_SET_FINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x91EE290)
#define CLASS_1_46AC29DEBE45F8A8_1_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x91EE270)
#define CLASS_1_46AC29DEBE45F8A8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x91EE2D0)

inline static constexpr unsigned int Class_1_46AC29DEBE45F8A8_1_TypeDefinitionIndex = 53073;

class Class_1_46AC29DEBE45F8A8_1 : public ::System::Object
{
public:
	::System::UInt32 _Ratio_k__BackingField; // 0x10
	::System::UInt32 _FinishCount_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1943FA7E230C2956(::Class_1_58F0FC786D73046C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_58F0FC786D73046C*))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_1943FA7E230C2956_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_4DF3292AA5AADAD0_15* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4DF3292AA5AADAD0_15*))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::Void Method_1_673929C2E961D13E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_673929C2E961D13E_OFFSET))(this, a1);
	}

	::System::Numerics::BigInteger Method_1_A3690E3EECDBDC43(::Class_1_58F0FC786D73046C* a1)
	{
		return ((::System::Numerics::BigInteger(*)(::PVOID, ::Class_1_58F0FC786D73046C*))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_A3690E3EECDBDC43_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_18E996F3C72A73F1(::Class_1_58F0FC786D73046C* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_58F0FC786D73046C*))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_18E996F3C72A73F1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_AEFC7EFD0BACA947(::Class_1_58F0FC786D73046C* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::Class_1_58F0FC786D73046C*))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_AEFC7EFD0BACA947_OFFSET))(this, a1);
	}

	::System::UInt32 get_Ratio()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_GET_RATIO_OFFSET))(this);
	}

	::System::Void set_Ratio(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_SET_RATIO_OFFSET))(this, value);
	}

	::System::UInt32 get_FinishCount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_GET_FINISHCOUNT_OFFSET))(this);
	}

	::System::Void set_FinishCount(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_SET_FINISHCOUNT_OFFSET))(this, value);
	}

	::RPG::Client::PlanetFesModule* Method_1_644EA91E47FBA8F7()
	{
		return ((::RPG::Client::PlanetFesModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_644EA91E47FBA8F7_OFFSET))(this);
	}

	::RPG::Client::NetworkManager* Method_1_BB6263DF2BB2626E()
	{
		return ((::RPG::Client::NetworkManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46AC29DEBE45F8A8_1_METHOD_1_BB6263DF2BB2626E_OFFSET))(this);
	}
};
