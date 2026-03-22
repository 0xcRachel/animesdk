#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"

class Class_1_2FDE33CCAE591AA8;
class Class_2_AE868DCDC9CB2888;
namespace RPG::Client { class DirectDeliveryNoticeToastData; }

#define CLASS_2_67556107F6051F25__CTOR_OFFSET UNITYSDK_OFFSET(0x921B3C0)

inline static constexpr unsigned int Class_2_67556107F6051F25_TypeDefinitionIndex = 40887;

class Class_2_67556107F6051F25 : public ::Sofa::Core::ObservableObject
{
public:
	::Class_1_2FDE33CCAE591AA8* Field_2_1; // 0x18
	::Class_2_AE868DCDC9CB2888* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::Client::DirectDeliveryNoticeToastData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::DirectDeliveryNoticeToastData*))((::PBYTE)hIl2Cpp + CLASS_2_67556107F6051F25__CTOR_OFFSET))(this, a1);
	}
};
