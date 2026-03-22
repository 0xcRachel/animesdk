#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8906334B5B00344F_AutoAbility.h"
#include "unitysdk/System/Object.h"

class Class_2_43D1AA62A6D00FFF;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8906334B5B00344F_EXECUTE_OFFSET UNITYSDK_OFFSET(0xFD20840)
#define CLASS_1_8906334B5B00344F_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xFD20690)
#define CLASS_1_8906334B5B00344F_METHOD_1_092A26D9B5D0973E_OFFSET UNITYSDK_OFFSET(0xFD22EA0)
#define CLASS_1_8906334B5B00344F_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xFD20740)
#define CLASS_1_8906334B5B00344F_METHOD_1_1C956D515B538FC1_OFFSET UNITYSDK_OFFSET(0xFD239E0)
#define CLASS_1_8906334B5B00344F_METHOD_1_295406E0F4BA8309_OFFSET UNITYSDK_OFFSET(0xFD23590)
#define CLASS_1_8906334B5B00344F_METHOD_1_31923725EF32D27F_OFFSET UNITYSDK_OFFSET(0xFD21ED0)
#define CLASS_1_8906334B5B00344F_METHOD_1_397CD65F0E32511D_OFFSET UNITYSDK_OFFSET(0xFD23F60)
#define CLASS_1_8906334B5B00344F_METHOD_1_434351DA7926C95F_OFFSET UNITYSDK_OFFSET(0xFD20F70)
#define CLASS_1_8906334B5B00344F_METHOD_1_458DAEAB6170C584_OFFSET UNITYSDK_OFFSET(0xFD214F0)
#define CLASS_1_8906334B5B00344F_METHOD_1_4BBFF105489C663E_OFFSET UNITYSDK_OFFSET(0xFD22530)
#define CLASS_1_8906334B5B00344F_METHOD_1_4E7AFD104998004C_OFFSET UNITYSDK_OFFSET(0xFD23800)
#define CLASS_1_8906334B5B00344F_METHOD_1_568E2DFCDC397B64_OFFSET UNITYSDK_OFFSET(0xFD21BF0)
#define CLASS_1_8906334B5B00344F_METHOD_1_59E698464A340DCF_OFFSET UNITYSDK_OFFSET(0xFD22FE0)
#define CLASS_1_8906334B5B00344F_METHOD_1_5AC4405D21E0CB77_OFFSET UNITYSDK_OFFSET(0xFD222D0)
#define CLASS_1_8906334B5B00344F_METHOD_1_5BAC34D64C7A2A7E_OFFSET UNITYSDK_OFFSET(0xFD22B30)
#define CLASS_1_8906334B5B00344F_METHOD_1_7B26AA6786F8817E_OFFSET UNITYSDK_OFFSET(0xFD23280)
#define CLASS_1_8906334B5B00344F_METHOD_1_97E388074CF28F08_OFFSET UNITYSDK_OFFSET(0xFD227A0)
#define CLASS_1_8906334B5B00344F_METHOD_1_F829FAABE6A53B70_OFFSET UNITYSDK_OFFSET(0xFD22960)
#define CLASS_1_8906334B5B00344F__CTOR_OFFSET UNITYSDK_OFFSET(0xFD20620)

inline static constexpr unsigned int Class_1_8906334B5B00344F_TypeDefinitionIndex = 60929;

class Class_1_8906334B5B00344F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* Field_1_6; // 0x10
	::Class_3_F4528A5C0F861AF2* Field_1_5; // 0x18
	::Class_2_43D1AA62A6D00FFF* Field_1_4; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::System::Single Field_1_0; // 0x2C
	::System::Single Field_1_1; // 0x30
	::System::Int32 Field_1_2; // 0x34

	::System::Void _ctor(::Class_2_43D1AA62A6D00FFF* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_43D1AA62A6D00FFF*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_458DAEAB6170C584()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_458DAEAB6170C584_OFFSET))(this);
	}

	::System::Void Method_1_434351DA7926C95F(::Class_1_8906334B5B00344F_AutoAbility a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8906334B5B00344F_AutoAbility))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_434351DA7926C95F_OFFSET))(this, a1);
	}

	::System::Void Method_1_31923725EF32D27F(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_31923725EF32D27F_OFFSET))(this, a1);
	}

	::System::Void Method_1_568E2DFCDC397B64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_568E2DFCDC397B64_OFFSET))(this);
	}

	::System::Void Method_1_5AC4405D21E0CB77(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_5AC4405D21E0CB77_OFFSET))(this, a1);
	}

	::System::Void Method_1_092A26D9B5D0973E(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_092A26D9B5D0973E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4BBFF105489C663E(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_4BBFF105489C663E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F829FAABE6A53B70(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_F829FAABE6A53B70_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_97E388074CF28F08(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_97E388074CF28F08_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_397CD65F0E32511D(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_397CD65F0E32511D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5BAC34D64C7A2A7E(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_5BAC34D64C7A2A7E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_295406E0F4BA8309(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_295406E0F4BA8309_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E7AFD104998004C(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_4E7AFD104998004C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1C956D515B538FC1(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_1C956D515B538FC1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7B26AA6786F8817E(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_7B26AA6786F8817E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_59E698464A340DCF(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8906334B5B00344F_METHOD_1_59E698464A340DCF_OFFSET))(this, a1);
	}
};
