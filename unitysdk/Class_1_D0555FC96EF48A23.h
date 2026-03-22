#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_354;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D0555FC96EF48A23_METHOD_1_5FA5A5B1FB46B408_OFFSET UNITYSDK_OFFSET(0x10B48910)
#define CLASS_1_D0555FC96EF48A23_METHOD_1_65534A949F6F6E37_OFFSET UNITYSDK_OFFSET(0x10B489E0)
#define CLASS_1_D0555FC96EF48A23__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B48680)

inline static constexpr unsigned int Class_1_D0555FC96EF48A23_TypeDefinitionIndex = 43815;

class Class_1_D0555FC96EF48A23 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivitySubModeType, ::System::Type*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ActivitySubModeType, ::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0555FC96EF48A23_TypeDefinitionIndex)->GetStaticField(0x450C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0555FC96EF48A23__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_5FA5A5B1FB46B408(::RPG::GameCore::ActivitySubModeType a1, ::System::Type* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivitySubModeType, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_D0555FC96EF48A23_METHOD_1_5FA5A5B1FB46B408_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_354* Method_1_65534A949F6F6E37(::RPG::GameCore::ActivitySubModeType a1)
	{
		return ((::Class_0_16E4307DCC419505_354*(*)(::RPG::GameCore::ActivitySubModeType))((::PBYTE)hIl2Cpp + CLASS_1_D0555FC96EF48A23_METHOD_1_65534A949F6F6E37_OFFSET))(a1);
	}
};
