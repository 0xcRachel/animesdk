#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_B139B98AF2D803D6_31;
namespace RPG::GameCore { class TextJoinConfigRow; }
namespace System { class String; }

#define CLASS_1_268F2F20E69BD571_METHOD_1_08FA9F2CA66691B4_OFFSET UNITYSDK_OFFSET(0x86CEF40)
#define CLASS_1_268F2F20E69BD571_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x86CF120)
#define CLASS_1_268F2F20E69BD571_METHOD_1_5CEC4607322705E5_OFFSET UNITYSDK_OFFSET(0x86CF1D0)
#define CLASS_1_268F2F20E69BD571_METHOD_1_9032606E5E161A7C_OFFSET UNITYSDK_OFFSET(0x86CED40)
#define CLASS_1_268F2F20E69BD571_METHOD_1_A631C7EB7F64062E_OFFSET UNITYSDK_OFFSET(0x86CEE50)
#define CLASS_1_268F2F20E69BD571_METHOD_1_C3418CA152AE161E_OFFSET UNITYSDK_OFFSET(0x86CF160)
#define CLASS_1_268F2F20E69BD571__CTOR_OFFSET UNITYSDK_OFFSET(0x86CEE40)

inline static constexpr unsigned int Class_1_268F2F20E69BD571_TypeDefinitionIndex = 59398;

class Class_1_268F2F20E69BD571 : public ::System::Object
{
public:
	::System::Boolean Field_1_3; // 0x10
	::System::UInt32 Field_1_2; // 0x14
	::RPG::Client::TextID Field_1_0; // 0x18
	::RPG::Client::TextID Field_1_1; // 0x28

	::System::Void _ctor(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_268F2F20E69BD571__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_268F2F20E69BD571* Method_1_9032606E5E161A7C(::RPG::GameCore::TextJoinConfigRow* a1)
	{
		return ((::Class_1_268F2F20E69BD571*(*)(::RPG::GameCore::TextJoinConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_268F2F20E69BD571_METHOD_1_9032606E5E161A7C_OFFSET))(a1);
	}

	::System::Void Method_1_A631C7EB7F64062E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_268F2F20E69BD571_METHOD_1_A631C7EB7F64062E_OFFSET))(this, a1);
	}

	::System::String* Method_1_08FA9F2CA66691B4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_268F2F20E69BD571_METHOD_1_08FA9F2CA66691B4_OFFSET))(this);
	}

	::System::Void Method_1_C3418CA152AE161E(::Class_1_B139B98AF2D803D6_31* a1, ::System::Boolean& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B139B98AF2D803D6_31*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_268F2F20E69BD571_METHOD_1_C3418CA152AE161E_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_5CEC4607322705E5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_268F2F20E69BD571_METHOD_1_5CEC4607322705E5_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_268F2F20E69BD571_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
