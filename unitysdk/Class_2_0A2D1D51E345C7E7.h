#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ErrorType.h"
#include "unitysdk/Struct_2_C1EF24062C99B01F.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define CLASS_2_0A2D1D51E345C7E7_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x16E36910)
#define CLASS_2_0A2D1D51E345C7E7_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16E36930)
#define CLASS_2_0A2D1D51E345C7E7_METHOD_2_B52DDA7F10F92B18_OFFSET UNITYSDK_OFFSET(0x16E369F0)
#define CLASS_2_0A2D1D51E345C7E7_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x16E36920)
#define CLASS_2_0A2D1D51E345C7E7_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x16E36940)
#define CLASS_2_0A2D1D51E345C7E7__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16E36A40)
#define CLASS_2_0A2D1D51E345C7E7__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16E36B10)
#define CLASS_2_0A2D1D51E345C7E7__CTOR_OFFSET UNITYSDK_OFFSET(0x16E36950)

inline static constexpr unsigned int Class_2_0A2D1D51E345C7E7_TypeDefinitionIndex = 22601;

class Class_2_0A2D1D51E345C7E7 : public ::System::Exception
{
public:
	::RPG::GameCore::ErrorType _Type_k__BackingField; // 0x88
	::Struct_2_C1EF24062C99B01F _Position_k__BackingField; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A2D1D51E345C7E7__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::RPG::GameCore::ErrorType a1, ::Struct_2_C1EF24062C99B01F a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ErrorType, ::Struct_2_C1EF24062C99B01F))((::PBYTE)hIl2Cpp + CLASS_2_0A2D1D51E345C7E7__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::System::String* a1, ::RPG::GameCore::ErrorType a2, ::Struct_2_C1EF24062C99B01F a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::ErrorType, ::Struct_2_C1EF24062C99B01F))((::PBYTE)hIl2Cpp + CLASS_2_0A2D1D51E345C7E7__CTOR_2_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_C1EF24062C99B01F get_Position()
	{
		return ((::Struct_2_C1EF24062C99B01F(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A2D1D51E345C7E7_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::Struct_2_C1EF24062C99B01F value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C1EF24062C99B01F))((::PBYTE)hIl2Cpp + CLASS_2_0A2D1D51E345C7E7_SET_POSITION_OFFSET))(this, value);
	}

	::RPG::GameCore::ErrorType get_Type()
	{
		return ((::RPG::GameCore::ErrorType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A2D1D51E345C7E7_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::ErrorType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ErrorType))((::PBYTE)hIl2Cpp + CLASS_2_0A2D1D51E345C7E7_SET_TYPE_OFFSET))(this, value);
	}

	static ::System::String* Method_2_B52DDA7F10F92B18(::RPG::GameCore::ErrorType a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::ErrorType))((::PBYTE)hIl2Cpp + CLASS_2_0A2D1D51E345C7E7_METHOD_2_B52DDA7F10F92B18_OFFSET))(a1);
	}
};
