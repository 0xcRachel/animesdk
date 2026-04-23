#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_1.h"
#include "unitysdk/System/Object.h"

class Class_2_24193089A4D2255F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_30AA368A3DF04D9E_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x108691F0)
#define CLASS_1_30AA368A3DF04D9E_METHOD_1_21886A8411E71157_1_OFFSET UNITYSDK_OFFSET(0x10869720)
#define CLASS_1_30AA368A3DF04D9E_METHOD_1_21886A8411E71157_OFFSET UNITYSDK_OFFSET(0x10869570)
#define CLASS_1_30AA368A3DF04D9E_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x10869F30)
#define CLASS_1_30AA368A3DF04D9E_METHOD_1_3716C7456CF0FFB9_OFFSET UNITYSDK_OFFSET(0x1086A300)
#define CLASS_1_30AA368A3DF04D9E_METHOD_1_40266B6F0E28247D_OFFSET UNITYSDK_OFFSET(0x1086A4B0)
#define CLASS_1_30AA368A3DF04D9E_METHOD_1_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x10869B00)
#define CLASS_1_30AA368A3DF04D9E_METHOD_1_48AC162B49224881_OFFSET UNITYSDK_OFFSET(0x1086A040)
#define CLASS_1_30AA368A3DF04D9E_METHOD_1_510C3C62CAC002C3_OFFSET UNITYSDK_OFFSET(0x10869E50)
#define CLASS_1_30AA368A3DF04D9E_METHOD_1_87E0654B98D0D63C_OFFSET UNITYSDK_OFFSET(0x10869250)
#define CLASS_1_30AA368A3DF04D9E_METHOD_1_8EC3255570F308C5_OFFSET UNITYSDK_OFFSET(0x10869EE0)
#define CLASS_1_30AA368A3DF04D9E_METHOD_1_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x108698D0)
#define CLASS_1_30AA368A3DF04D9E_METHOD_1_F6B7187F7AB59CCF_OFFSET UNITYSDK_OFFSET(0x1086A5F0)
#define CLASS_1_30AA368A3DF04D9E_METHOD_1_F9DFE5ED808CF67F_OFFSET UNITYSDK_OFFSET(0x10869FA0)
#define CLASS_1_30AA368A3DF04D9E__CTOR_1_OFFSET UNITYSDK_OFFSET(0x108692E0)
#define CLASS_1_30AA368A3DF04D9E__CTOR_OFFSET UNITYSDK_OFFSET(0x10868F70)

inline static constexpr unsigned int Class_1_30AA368A3DF04D9E_TypeDefinitionIndex = 66086;

class Class_1_30AA368A3DF04D9E : public ::System::Object
{
public:
	// static const ::System::String* Field_1_5; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ILBattleAvatarTag>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_0; // 0x18
	::System::String* Field_1_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_1; // 0x28
	::System::Collections::Generic::HashSet_1<::RPG::GameCore::ILBattleAvatarTag>* Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AA368A3DF04D9E__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_30AA368A3DF04D9E__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AA368A3DF04D9E_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_1_21886A8411E71157()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AA368A3DF04D9E_METHOD_1_21886A8411E71157_OFFSET))(this);
	}

	::System::Void Method_1_21886A8411E71157_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AA368A3DF04D9E_METHOD_1_21886A8411E71157_1_OFFSET))(this);
	}

	::System::Void Method_1_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AA368A3DF04D9E_METHOD_1_A27DC2C5A103933A_OFFSET))(this);
	}

	::System::Void Method_1_87E0654B98D0D63C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AA368A3DF04D9E_METHOD_1_87E0654B98D0D63C_OFFSET))(this);
	}

	::System::Void Method_1_510C3C62CAC002C3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AA368A3DF04D9E_METHOD_1_510C3C62CAC002C3_OFFSET))(this);
	}

	::System::Void Method_1_8EC3255570F308C5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_30AA368A3DF04D9E_METHOD_1_8EC3255570F308C5_OFFSET))(this, a1);
	}

	::System::Void Method_1_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AA368A3DF04D9E_METHOD_1_4389275F4099DE36_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AA368A3DF04D9E_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}

	::System::Boolean Method_1_F9DFE5ED808CF67F(::Class_2_24193089A4D2255F* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_24193089A4D2255F*))((::PBYTE)hIl2Cpp + CLASS_1_30AA368A3DF04D9E_METHOD_1_F9DFE5ED808CF67F_OFFSET))(this, a1);
	}

	::Struct_2_5B421F8FFABD4CA3_1 Method_1_48AC162B49224881(::Class_2_24193089A4D2255F* a1)
	{
		return ((::Struct_2_5B421F8FFABD4CA3_1(*)(::PVOID, ::Class_2_24193089A4D2255F*))((::PBYTE)hIl2Cpp + CLASS_1_30AA368A3DF04D9E_METHOD_1_48AC162B49224881_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_3716C7456CF0FFB9(::Class_2_24193089A4D2255F* a1, ::Class_2_24193089A4D2255F* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_24193089A4D2255F*, ::Class_2_24193089A4D2255F*))((::PBYTE)hIl2Cpp + CLASS_1_30AA368A3DF04D9E_METHOD_1_3716C7456CF0FFB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F6B7187F7AB59CCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30AA368A3DF04D9E_METHOD_1_F6B7187F7AB59CCF_OFFSET))(this);
	}

	::System::UInt32 Method_1_40266B6F0E28247D(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_30AA368A3DF04D9E_METHOD_1_40266B6F0E28247D_OFFSET))(this, a1, a2);
	}
};
