#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A8D9B9F0D6AFDEDA.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_C96FBFD0DC86CBB4_METHOD_2_BA94E3F6EB5A425F_OFFSET UNITYSDK_OFFSET(0x8442D30)
#define CLASS_2_C96FBFD0DC86CBB4__CTOR_OFFSET UNITYSDK_OFFSET(0x8442D20)

inline static constexpr unsigned int Class_2_C96FBFD0DC86CBB4_TypeDefinitionIndex = 49854;

class Class_2_C96FBFD0DC86CBB4 : public ::Class_1_A8D9B9F0D6AFDEDA
{
public:
	::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>* Field_2_0; // 0x18

	::System::Void _ctor(::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Comparison_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + CLASS_2_C96FBFD0DC86CBB4__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_BA94E3F6EB5A425F(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::IAvatarInfoProvider* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_2_C96FBFD0DC86CBB4_METHOD_2_BA94E3F6EB5A425F_OFFSET))(this, a1, a2);
	}
};
