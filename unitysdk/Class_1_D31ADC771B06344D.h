#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/NavVertexType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_865;
class Class_1_A9BFC150668414F7;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D31ADC771B06344D_METHOD_1_3F5F5161B2702835_OFFSET UNITYSDK_OFFSET(0x843AC30)
#define CLASS_1_D31ADC771B06344D_METHOD_1_56E37159C2615A15_OFFSET UNITYSDK_OFFSET(0x843B200)
#define CLASS_1_D31ADC771B06344D_METHOD_1_98B3685A0DA3BB40_OFFSET UNITYSDK_OFFSET(0x843ACB0)

inline static constexpr unsigned int Class_1_D31ADC771B06344D_TypeDefinitionIndex = 59587;

class Class_1_D31ADC771B06344D : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	// static const ::System::String* Field_1_4; // 0x0
	// static const ::System::String* Field_1_5; // 0x0

	static ::Class_0_16E4307DCC419505_865* Method_1_3F5F5161B2702835(::Class_1_A9BFC150668414F7* a1, ::RPG::Client::NavMap::NavVertexType a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a3)
	{
		return ((::Class_0_16E4307DCC419505_865*(*)(::Class_1_A9BFC150668414F7*, ::RPG::Client::NavMap::NavVertexType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_D31ADC771B06344D_METHOD_1_3F5F5161B2702835_OFFSET))(a1, a2, a3);
	}

	static ::Class_0_16E4307DCC419505_865* Method_1_98B3685A0DA3BB40(::Class_1_A9BFC150668414F7* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_865*(*)(::Class_1_A9BFC150668414F7*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_D31ADC771B06344D_METHOD_1_98B3685A0DA3BB40_OFFSET))(a1, a2);
	}

	static ::Class_0_16E4307DCC419505_865* Method_1_56E37159C2615A15(::Class_1_A9BFC150668414F7* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* a2)
	{
		return ((::Class_0_16E4307DCC419505_865*(*)(::Class_1_A9BFC150668414F7*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_D31ADC771B06344D_METHOD_1_56E37159C2615A15_OFFSET))(a1, a2);
	}
};
