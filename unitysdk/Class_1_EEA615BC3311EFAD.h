#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_308;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_EEA615BC3311EFAD_METHOD_1_14FD8276DF85E030_OFFSET UNITYSDK_OFFSET(0x8A294B0)
#define CLASS_1_EEA615BC3311EFAD_METHOD_1_69DFF67B9E6E7409_OFFSET UNITYSDK_OFFSET(0x8A299E0)
#define CLASS_1_EEA615BC3311EFAD_METHOD_1_9F606CFA3213A647_OFFSET UNITYSDK_OFFSET(0x8A295B0)

inline static constexpr unsigned int Class_1_EEA615BC3311EFAD_TypeDefinitionIndex = 49791;

class Class_1_EEA615BC3311EFAD : public ::System::Object
{
public:
	static ::System::Void Method_1_14FD8276DF85E030(::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_308*>* a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_308*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_EEA615BC3311EFAD_METHOD_1_14FD8276DF85E030_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Method_1_9F606CFA3213A647(::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_308*>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_308*>*))((::PBYTE)hIl2Cpp + CLASS_1_EEA615BC3311EFAD_METHOD_1_9F606CFA3213A647_OFFSET))(a1);
	}

	static ::System::Void Method_1_69DFF67B9E6E7409(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_EEA615BC3311EFAD_METHOD_1_69DFF67B9E6E7409_OFFSET))(a1, a2, a3);
	}
};
