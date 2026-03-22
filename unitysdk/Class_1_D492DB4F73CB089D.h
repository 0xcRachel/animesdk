#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_B139B98AF2D803D6_31;
class Class_1_D492DB4F73CB089D_Class_1_5B81B8ED269C8D2A;
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D492DB4F73CB089D_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10CC6820)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x10CC6A30)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_272681ACB7A37600_OFFSET UNITYSDK_OFFSET(0x10CC62D0)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10CC6980)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_B10506507C454711_OFFSET UNITYSDK_OFFSET(0x10CC69C0)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_DCCAA7AAE12A5C60_OFFSET UNITYSDK_OFFSET(0x10CC6AE0)
#define CLASS_1_D492DB4F73CB089D_METHOD_1_F22299097B32BA80_OFFSET UNITYSDK_OFFSET(0x10CC64C0)
#define CLASS_1_D492DB4F73CB089D__CTOR_OFFSET UNITYSDK_OFFSET(0x10CC6200)
#define CLASS_1_D492DB4F73CB089D__GETTEXTJOINVALUE_B__8_0_OFFSET UNITYSDK_OFFSET(0x10CC6BB0)

inline static constexpr unsigned int Class_1_D492DB4F73CB089D_TypeDefinitionIndex = 59403;

class Class_1_D492DB4F73CB089D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_D492DB4F73CB089D_Class_1_5B81B8ED269C8D2A*>* Field_1_0; // 0x10
	::RPG::Client::TextID Field_1_1; // 0x18
	::System::UInt32 Field_1_3; // 0x28
	::System::Boolean Field_1_4; // 0x2C
	::System::UInt32 Field_1_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TextJoinConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_272681ACB7A37600(::RPG::GameCore::TextJoinConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_272681ACB7A37600_OFFSET))(this, a1);
	}

	::System::String* Method_1_F22299097B32BA80()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_F22299097B32BA80_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_B10506507C454711(::Class_1_B139B98AF2D803D6_31* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B139B98AF2D803D6_31*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_B10506507C454711_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::UInt32 Method_1_DCCAA7AAE12A5C60(::System::Int32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D_METHOD_1_DCCAA7AAE12A5C60_OFFSET))(this, a1);
	}

	::System::Boolean _GetTextJoinValue_b__8_0(::Class_1_D492DB4F73CB089D_Class_1_5B81B8ED269C8D2A* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D492DB4F73CB089D_Class_1_5B81B8ED269C8D2A*))((::PBYTE)hIl2Cpp + CLASS_1_D492DB4F73CB089D__GETTEXTJOINVALUE_B__8_0_OFFSET))(this, x);
	}
};
