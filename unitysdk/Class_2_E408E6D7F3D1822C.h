#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_910212C026901FF5.h"

namespace RPG::Client { class MatchThreeBoard; }

#define CLASS_2_E408E6D7F3D1822C_CLEAR_OFFSET UNITYSDK_OFFSET(0x8402DB0)
#define CLASS_2_E408E6D7F3D1822C__CTOR_OFFSET UNITYSDK_OFFSET(0x8402E40)
#define CLASS_2_E408E6D7F3D1822C___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x8402E50)

inline static constexpr unsigned int Class_2_E408E6D7F3D1822C_TypeDefinitionIndex = 52334;

class Class_2_E408E6D7F3D1822C : public ::Class_1_910212C026901FF5
{
public:
	::RPG::Client::MatchThreeBoard* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E408E6D7F3D1822C__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E408E6D7F3D1822C_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E408E6D7F3D1822C___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};
