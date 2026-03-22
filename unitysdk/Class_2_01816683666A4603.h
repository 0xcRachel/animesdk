#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2780D0F4B46A950.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemConfig.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemType.h"

namespace RPG::Client::Prop { class PinballPuzzleBoard; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }

#define CLASS_2_01816683666A4603_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x109EFE40)
#define CLASS_2_01816683666A4603_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x109EFDE0)
#define CLASS_2_01816683666A4603_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x109EFD80)
#define CLASS_2_01816683666A4603_METHOD_2_59D3B9EE9A2BDE85_1_OFFSET UNITYSDK_OFFSET(0x109EFCB0)
#define CLASS_2_01816683666A4603_METHOD_2_59D3B9EE9A2BDE85_OFFSET UNITYSDK_OFFSET(0x109EFC60)
#define CLASS_2_01816683666A4603_METHOD_2_65AEB11D284FE6A1_OFFSET UNITYSDK_OFFSET(0x109EFBB0)
#define CLASS_2_01816683666A4603_METHOD_2_6FF4D5ECCB5F9592_OFFSET UNITYSDK_OFFSET(0x109EFD60)
#define CLASS_2_01816683666A4603_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x109EFD00)
#define CLASS_2_01816683666A4603_METHOD_2_B9ABA76AA5857AFB_OFFSET UNITYSDK_OFFSET(0x109EFC00)
#define CLASS_2_01816683666A4603_METHOD_2_BE491FA660454AC6_OFFSET UNITYSDK_OFFSET(0x109EFD70)
#define CLASS_2_01816683666A4603__CTOR_OFFSET UNITYSDK_OFFSET(0x109EFB70)

inline static constexpr unsigned int Class_2_01816683666A4603_TypeDefinitionIndex = 62027;

class Class_2_01816683666A4603 : public ::Class_1_A2780D0F4B46A950
{
public:
	::System::Void _ctor(::RPG::Client::Prop::PinballPuzzleItemConfig a1, ::RPG::Client::Prop::PinballPuzzleBoard* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPuzzleItemConfig, ::RPG::Client::Prop::PinballPuzzleBoard*))((::PBYTE)hIl2Cpp + CLASS_2_01816683666A4603__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Prop::PinballPuzzleItemType Method_2_65AEB11D284FE6A1()
	{
		return ((::RPG::Client::Prop::PinballPuzzleItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01816683666A4603_METHOD_2_65AEB11D284FE6A1_OFFSET))(this);
	}

	::System::Void Method_2_B9ABA76AA5857AFB(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_2_01816683666A4603_METHOD_2_B9ABA76AA5857AFB_OFFSET))(this, a1);
	}

	::System::Void Method_2_59D3B9EE9A2BDE85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01816683666A4603_METHOD_2_59D3B9EE9A2BDE85_OFFSET))(this);
	}

	::System::Void Method_2_59D3B9EE9A2BDE85_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01816683666A4603_METHOD_2_59D3B9EE9A2BDE85_1_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01816683666A4603_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	::RPG::Client::Prop::PinballPuzzleItemType Method_2_6FF4D5ECCB5F9592()
	{
		return ((::RPG::Client::Prop::PinballPuzzleItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01816683666A4603_METHOD_2_6FF4D5ECCB5F9592_OFFSET))(this);
	}

	::System::Void Method_2_BE491FA660454AC6(::RPG::GameCore::PropComponent* P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_2_01816683666A4603_METHOD_2_BE491FA660454AC6_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01816683666A4603_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01816683666A4603_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01816683666A4603_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
