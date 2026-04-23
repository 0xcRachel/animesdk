#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

namespace RPG::Client::LittleGame { class Match3EnergyViewStateBuffer; }

#define CLASS_2_EDE9AF83DF78BC85_CLEAR_OFFSET UNITYSDK_OFFSET(0xFC63D90)
#define CLASS_2_EDE9AF83DF78BC85_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0xFC63D20)
#define CLASS_2_EDE9AF83DF78BC85_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xFC63E20)
#define CLASS_2_EDE9AF83DF78BC85__CTOR_OFFSET UNITYSDK_OFFSET(0xFC63E80)
#define CLASS_2_EDE9AF83DF78BC85___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xFC63E90)
#define CLASS_2_EDE9AF83DF78BC85___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xFC63F20)

inline static constexpr unsigned int Class_2_EDE9AF83DF78BC85_TypeDefinitionIndex = 60653;

class Class_2_EDE9AF83DF78BC85 : public ::Class_1_7ACCB923E979A908
{
public:
	::RPG::Client::LittleGame::Match3EnergyViewStateBuffer* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDE9AF83DF78BC85__CTOR_OFFSET))(this);
	}

	static ::Class_2_EDE9AF83DF78BC85* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_EDE9AF83DF78BC85*(*)())((::PBYTE)hIl2Cpp + CLASS_2_EDE9AF83DF78BC85_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDE9AF83DF78BC85_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDE9AF83DF78BC85_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDE9AF83DF78BC85___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDE9AF83DF78BC85___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
