#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_4F30521532511E50;
class Class_1_E7B85B68BBCF7A51_Class_3_BE27BF221D2C7791;
namespace RPG::GameCore { class AlleyConditionExtendParam; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E7B85B68BBCF7A51_METHOD_1_4EFBA0E599106A78_OFFSET UNITYSDK_OFFSET(0x105B3720)
#define CLASS_1_E7B85B68BBCF7A51_METHOD_1_6E2A9DA32D5BF2C6_OFFSET UNITYSDK_OFFSET(0x105B2E00)
#define CLASS_1_E7B85B68BBCF7A51_METHOD_1_7C6E42710B4EE421_OFFSET UNITYSDK_OFFSET(0x105B3620)
#define CLASS_1_E7B85B68BBCF7A51_METHOD_1_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x105B2960)
#define CLASS_1_E7B85B68BBCF7A51_METHOD_1_BE0A744D771D75F8_OFFSET UNITYSDK_OFFSET(0x105B2CA0)
#define CLASS_1_E7B85B68BBCF7A51_METHOD_1_ED6C27C5CEC58C96_OFFSET UNITYSDK_OFFSET(0x105B2D80)
#define CLASS_1_E7B85B68BBCF7A51_METHOD_1_FAE672999DD7FA35_OFFSET UNITYSDK_OFFSET(0x105B3850)

inline static constexpr unsigned int Class_1_E7B85B68BBCF7A51_TypeDefinitionIndex = 49447;

class Class_1_E7B85B68BBCF7A51 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AlleyConditionType, ::Class_1_E7B85B68BBCF7A51_Class_3_BE27BF221D2C7791*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AlleyConditionType, ::Class_1_E7B85B68BBCF7A51_Class_3_BE27BF221D2C7791*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E7B85B68BBCF7A51_TypeDefinitionIndex)->GetStaticField(0x45850);
	}

	static ::System::Void Method_1_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E7B85B68BBCF7A51_METHOD_1_B7F8E0B4AF22DEA3_OFFSET))();
	}

	static ::System::Boolean Method_1_BE0A744D771D75F8(::Il2CppArray<::RPG::GameCore::AlleyConditionExtendParam*>* a1)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::AlleyConditionExtendParam*>*))((::PBYTE)hIl2Cpp + CLASS_1_E7B85B68BBCF7A51_METHOD_1_BE0A744D771D75F8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_6E2A9DA32D5BF2C6(::Il2CppArray<::Class_1_4F30521532511E50*>* a1)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::Class_1_4F30521532511E50*>*))((::PBYTE)hIl2Cpp + CLASS_1_E7B85B68BBCF7A51_METHOD_1_6E2A9DA32D5BF2C6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_ED6C27C5CEC58C96(::RPG::GameCore::AlleyConditionType a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::AlleyConditionType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7B85B68BBCF7A51_METHOD_1_ED6C27C5CEC58C96_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_7C6E42710B4EE421(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7B85B68BBCF7A51_METHOD_1_7C6E42710B4EE421_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4EFBA0E599106A78(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7B85B68BBCF7A51_METHOD_1_4EFBA0E599106A78_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_FAE672999DD7FA35(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_E7B85B68BBCF7A51_METHOD_1_FAE672999DD7FA35_OFFSET))(a1);
	}
};
