#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_73C7A91168CA39E6_CatStatType.h"
#include "unitysdk/Class_1_73C7A91168CA39E6_ModifyType.h"
#include "unitysdk/System/Object.h"

class Class_1_73C7A91168CA39E6_Class_1_0DDA78621B459B8F;
class Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541;
class Class_2_F3C45F1FC7349B6E;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_73C7A91168CA39E6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15F436E0)
#define CLASS_1_73C7A91168CA39E6_GET_CATSTATS_OFFSET UNITYSDK_OFFSET(0x15F47750)
#define CLASS_1_73C7A91168CA39E6_GET_PLAYERSTATS_OFFSET UNITYSDK_OFFSET(0x15F47770)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x15F45CE0)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_1D4EEDDAEDD99A9D_OFFSET UNITYSDK_OFFSET(0x15F43B60)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_2214B2DD0C024A0A_OFFSET UNITYSDK_OFFSET(0x15F442E0)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_25E83E51484561A9_OFFSET UNITYSDK_OFFSET(0x15F45030)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0x15F44840)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_81375C2F2F70333A_OFFSET UNITYSDK_OFFSET(0x15F44510)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_88947ACE1950EB23_OFFSET UNITYSDK_OFFSET(0x15F440F0)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x15F43730)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_CDC9D49B9C57EE71_OFFSET UNITYSDK_OFFSET(0x15F43EE0)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_E8C07C74D3D8F211_OFFSET UNITYSDK_OFFSET(0x15F44AE0)
#define CLASS_1_73C7A91168CA39E6_METHOD_1_FCB0D5F9B234088E_OFFSET UNITYSDK_OFFSET(0x15F44B40)
#define CLASS_1_73C7A91168CA39E6_SET_CATSTATS_OFFSET UNITYSDK_OFFSET(0x15F47760)
#define CLASS_1_73C7A91168CA39E6_SET_PLAYERSTATS_OFFSET UNITYSDK_OFFSET(0x15F47780)
#define CLASS_1_73C7A91168CA39E6__CTOR_OFFSET UNITYSDK_OFFSET(0x15F435C0)

inline static constexpr unsigned int Class_1_73C7A91168CA39E6_TypeDefinitionIndex = 28108;

class Class_1_73C7A91168CA39E6 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::Class_2_F3C45F1FC7349B6E* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541*>* _CatStats_k__BackingField; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_0DDA78621B459B8F*>* _PlayerStats_k__BackingField; // 0x28

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_1_1D4EEDDAEDD99A9D(::System::UInt32 a1, ::Class_1_73C7A91168CA39E6_CatStatType a2, ::Class_1_73C7A91168CA39E6_ModifyType a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_73C7A91168CA39E6_CatStatType, ::Class_1_73C7A91168CA39E6_ModifyType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_1D4EEDDAEDD99A9D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::UInt32 Method_1_CDC9D49B9C57EE71(::System::UInt32 a1, ::Class_1_73C7A91168CA39E6_CatStatType a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::Class_1_73C7A91168CA39E6_CatStatType))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_CDC9D49B9C57EE71_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_88947ACE1950EB23(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_88947ACE1950EB23_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_1_2214B2DD0C024A0A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_2214B2DD0C024A0A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_81375C2F2F70333A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_81375C2F2F70333A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_810DD818C57F797D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_810DD818C57F797D_OFFSET))(this);
	}

	::System::Void Method_1_E8C07C74D3D8F211(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_E8C07C74D3D8F211_OFFSET))(this, a1);
	}

	::System::Void Method_1_FCB0D5F9B234088E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_FCB0D5F9B234088E_OFFSET))(this, a1);
	}

	::System::Void Method_1_25E83E51484561A9(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_25E83E51484561A9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_METHOD_1_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541*>* get_CatStats()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_GET_CATSTATS_OFFSET))(this);
	}

	::System::Void set_CatStats(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_C249E433BCBD8541*>*))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_SET_CATSTATS_OFFSET))(this, value);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_0DDA78621B459B8F*>* get_PlayerStats()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_0DDA78621B459B8F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_GET_PLAYERSTATS_OFFSET))(this);
	}

	::System::Void set_PlayerStats(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_0DDA78621B459B8F*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_73C7A91168CA39E6_Class_1_0DDA78621B459B8F*>*))((::PBYTE)hIl2Cpp + CLASS_1_73C7A91168CA39E6_SET_PLAYERSTATS_OFFSET))(this, value);
	}
};
