#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/System/Object.h"

class Class_1_434341DAC51FD4BD_110;
class Class_1_A89D7652B2FCF087;
class Class_1_C03D623E9F32FBCB_29;
class Class_2_099B78418029B3B1;
class Class_2_F3C45F1FC7349B6E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C6D701FC32CAF07F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15FC4310)
#define CLASS_1_C6D701FC32CAF07F_METHOD_1_80694343160BDCC2_OFFSET UNITYSDK_OFFSET(0x15FD6A90)
#define CLASS_1_C6D701FC32CAF07F_METHOD_1_D58ABA264253B81E_OFFSET UNITYSDK_OFFSET(0x15FD6E90)
#define CLASS_1_C6D701FC32CAF07F__CTOR_OFFSET UNITYSDK_OFFSET(0x15FC3AF0)

inline static constexpr unsigned int Class_1_C6D701FC32CAF07F_TypeDefinitionIndex = 28072;

class Class_1_C6D701FC32CAF07F : public ::System::Object
{
public:
	::Class_2_099B78418029B3B1* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt64>* Field_1_0; // 0x18
	::Class_2_F3C45F1FC7349B6E* Field_1_2; // 0x20

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1, ::Class_2_099B78418029B3B1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*, ::Class_2_099B78418029B3B1*))((::PBYTE)hIl2Cpp + CLASS_1_C6D701FC32CAF07F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6D701FC32CAF07F_DISPOSE_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::MsgRetcode Method_1_80694343160BDCC2(::System::UInt32 a1, ::Class_1_C03D623E9F32FBCB_29*& a2, ::Class_1_434341DAC51FD4BD_110*& a3)
	{
		return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32, ::Class_1_C03D623E9F32FBCB_29*&, ::Class_1_434341DAC51FD4BD_110*&))((::PBYTE)hIl2Cpp + CLASS_1_C6D701FC32CAF07F_METHOD_1_80694343160BDCC2_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_D58ABA264253B81E(::Class_1_A89D7652B2FCF087* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A89D7652B2FCF087*))((::PBYTE)hIl2Cpp + CLASS_1_C6D701FC32CAF07F_METHOD_1_D58ABA264253B81E_OFFSET))(this, a1);
	}
};
