#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAdditivePropertyType.h"
#include "unitysdk/RPG/GameCore/DiceCombatModifierFlag.h"
#include "unitysdk/System/Object.h"

class Class_1_137C00B46E99044C;
class Class_1_895EBA3389065493;
class Class_1_CFC41C1E202F76CF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3B849E3502CE5CFD_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x166D2040)
#define CLASS_1_3B849E3502CE5CFD_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x166D1FF0)
#define CLASS_1_3B849E3502CE5CFD_METHOD_1_5050C67FFC95EBE7_OFFSET UNITYSDK_OFFSET(0x166D2170)
#define CLASS_1_3B849E3502CE5CFD_METHOD_1_65EC73288BE5333B_OFFSET UNITYSDK_OFFSET(0x166D26D0)
#define CLASS_1_3B849E3502CE5CFD_METHOD_1_9FE4A16D1C35D1E8_OFFSET UNITYSDK_OFFSET(0x166D2500)
#define CLASS_1_3B849E3502CE5CFD_METHOD_1_AD6438C287489460_OFFSET UNITYSDK_OFFSET(0x166D2090)
#define CLASS_1_3B849E3502CE5CFD_METHOD_1_CCB93DB5F893C716_OFFSET UNITYSDK_OFFSET(0x166B7710)
#define CLASS_1_3B849E3502CE5CFD__CTOR_OFFSET UNITYSDK_OFFSET(0x166D27D0)

inline static constexpr unsigned int Class_1_3B849E3502CE5CFD_TypeDefinitionIndex = 28336;

class Class_1_3B849E3502CE5CFD : public ::System::Object
{
public:
	::Class_1_137C00B46E99044C* Field_1_9; // 0x10
	::Class_1_CFC41C1E202F76CF* Field_1_7; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int64>* Field_1_8; // 0x20
	::Class_1_137C00B46E99044C* Field_1_10; // 0x28
	::System::Collections::Generic::List_1<::Class_1_895EBA3389065493*>* Field_1_6; // 0x30
	::System::Int32 Field_1_5; // 0x38
	::System::Int32 Field_1_0; // 0x3C
	::System::Int32 Field_1_1; // 0x40
	::System::UInt32 Field_1_11; // 0x44
	::System::Int32 Field_1_3; // 0x48
	::System::Int32 Field_1_4; // 0x4C
	::System::Int32 Field_1_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B849E3502CE5CFD__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B849E3502CE5CFD_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B849E3502CE5CFD_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::Class_1_895EBA3389065493* Method_1_CCB93DB5F893C716(::System::UInt32 a1)
	{
		return ((::Class_1_895EBA3389065493*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3B849E3502CE5CFD_METHOD_1_CCB93DB5F893C716_OFFSET))(this, a1);
	}

	::System::Void Method_1_AD6438C287489460(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3B849E3502CE5CFD_METHOD_1_AD6438C287489460_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_5050C67FFC95EBE7(::RPG::GameCore::DiceCombatAdditivePropertyType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::DiceCombatAdditivePropertyType))((::PBYTE)hIl2Cpp + CLASS_1_3B849E3502CE5CFD_METHOD_1_5050C67FFC95EBE7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9FE4A16D1C35D1E8(::RPG::GameCore::DiceCombatModifierFlag a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DiceCombatModifierFlag))((::PBYTE)hIl2Cpp + CLASS_1_3B849E3502CE5CFD_METHOD_1_9FE4A16D1C35D1E8_OFFSET))(this, a1);
	}

	::System::Void Method_1_65EC73288BE5333B(::Class_1_3B849E3502CE5CFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3B849E3502CE5CFD*))((::PBYTE)hIl2Cpp + CLASS_1_3B849E3502CE5CFD_METHOD_1_65EC73288BE5333B_OFFSET))(this, a1);
	}
};
