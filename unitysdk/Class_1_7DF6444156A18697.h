#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_49FC9E80671BDBC7;
class Class_1_E7C852659CE70433;
class Class_1_F3CA30716D4FAF92_4;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceFieldScoreRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7DF6444156A18697_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1600BEB0)
#define CLASS_1_7DF6444156A18697_GET_GAMEENDDATADIC_OFFSET UNITYSDK_OFFSET(0x1600D3A0)
#define CLASS_1_7DF6444156A18697_METHOD_1_1561BFA77991A03A_OFFSET UNITYSDK_OFFSET(0x1600C9C0)
#define CLASS_1_7DF6444156A18697_METHOD_1_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x1600C530)
#define CLASS_1_7DF6444156A18697_METHOD_1_70D453A4CDBD682F_OFFSET UNITYSDK_OFFSET(0x1600D1A0)
#define CLASS_1_7DF6444156A18697_METHOD_1_726DF786F5A9C19F_OFFSET UNITYSDK_OFFSET(0x1600D340)
#define CLASS_1_7DF6444156A18697_METHOD_1_809094DEBF13B21A_OFFSET UNITYSDK_OFFSET(0x1600BF00)
#define CLASS_1_7DF6444156A18697_METHOD_1_86DDAE90EF52A1F0_1_OFFSET UNITYSDK_OFFSET(0x1600D040)
#define CLASS_1_7DF6444156A18697_METHOD_1_86DDAE90EF52A1F0_OFFSET UNITYSDK_OFFSET(0x1600CEE0)
#define CLASS_1_7DF6444156A18697_METHOD_1_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0x1600BF70)
#define CLASS_1_7DF6444156A18697_METHOD_1_8F373CEC11952250_OFFSET UNITYSDK_OFFSET(0x1600C7D0)
#define CLASS_1_7DF6444156A18697_METHOD_1_C293C4BAF4F41E49_OFFSET UNITYSDK_OFFSET(0x1600CA20)
#define CLASS_1_7DF6444156A18697_SET_GAMEENDDATADIC_OFFSET UNITYSDK_OFFSET(0x1600D3B0)
#define CLASS_1_7DF6444156A18697__CTOR_OFFSET UNITYSDK_OFFSET(0x1600BE10)

inline static constexpr unsigned int Class_1_7DF6444156A18697_TypeDefinitionIndex = 28107;

class Class_1_7DF6444156A18697 : public ::System::Object
{
public:
	::Class_2_F3C45F1FC7349B6E* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_49FC9E80671BDBC7*>* _GameEndDataDic_k__BackingField; // 0x18

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_7DF6444156A18697__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DF6444156A18697_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_809094DEBF13B21A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DF6444156A18697_METHOD_1_809094DEBF13B21A_OFFSET))(this);
	}

	::System::Void Method_1_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DF6444156A18697_METHOD_1_33E2FA8E6403B93D_OFFSET))(this);
	}

	::Class_1_F3CA30716D4FAF92_4* Method_1_8F373CEC11952250(::System::UInt32 a1)
	{
		return ((::Class_1_F3CA30716D4FAF92_4*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7DF6444156A18697_METHOD_1_8F373CEC11952250_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B5E3014AFF7F8EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DF6444156A18697_METHOD_1_8B5E3014AFF7F8EA_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Method_1_C293C4BAF4F41E49()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DF6444156A18697_METHOD_1_C293C4BAF4F41E49_OFFSET))(this);
	}

	static ::System::UInt32 Method_1_86DDAE90EF52A1F0(::System::Int32 a1, ::RPG::GameCore::CakeRaceFieldScoreRow* a2)
	{
		return ((::System::UInt32(*)(::System::Int32, ::RPG::GameCore::CakeRaceFieldScoreRow*))((::PBYTE)hIl2Cpp + CLASS_1_7DF6444156A18697_METHOD_1_86DDAE90EF52A1F0_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_86DDAE90EF52A1F0_1(::System::Int32 a1, ::RPG::GameCore::CakeRaceFieldScoreRow* a2)
	{
		return ((::System::UInt32(*)(::System::Int32, ::RPG::GameCore::CakeRaceFieldScoreRow*))((::PBYTE)hIl2Cpp + CLASS_1_7DF6444156A18697_METHOD_1_86DDAE90EF52A1F0_1_OFFSET))(a1, a2);
	}

	::System::UInt32 Method_1_70D453A4CDBD682F(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7DF6444156A18697_METHOD_1_70D453A4CDBD682F_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_E7C852659CE70433* Method_1_1561BFA77991A03A()
	{
		return ((::Class_1_E7C852659CE70433*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DF6444156A18697_METHOD_1_1561BFA77991A03A_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_E7C852659CE70433*>* Method_1_726DF786F5A9C19F()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_E7C852659CE70433*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DF6444156A18697_METHOD_1_726DF786F5A9C19F_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_49FC9E80671BDBC7*>* get_GameEndDataDic()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_49FC9E80671BDBC7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7DF6444156A18697_GET_GAMEENDDATADIC_OFFSET))(this);
	}

	::System::Void set_GameEndDataDic(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_49FC9E80671BDBC7*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_49FC9E80671BDBC7*>*))((::PBYTE)hIl2Cpp + CLASS_1_7DF6444156A18697_SET_GAMEENDDATADIC_OFFSET))(this, value);
	}
};
