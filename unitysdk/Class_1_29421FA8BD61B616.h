#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TalkOptionData; }
namespace RPG::GameCore { class OptionTalkInfo; }

#define CLASS_1_29421FA8BD61B616_METHOD_1_B335A6EA88191599_OFFSET UNITYSDK_OFFSET(0x10FD24D0)
#define CLASS_1_29421FA8BD61B616_METHOD_1_CA55870DEBCEA76B_OFFSET UNITYSDK_OFFSET(0x10FD23E0)
#define CLASS_1_29421FA8BD61B616__CTOR_OFFSET UNITYSDK_OFFSET(0x10FD25F0)

inline static constexpr unsigned int Class_1_29421FA8BD61B616_TypeDefinitionIndex = 53966;

class Class_1_29421FA8BD61B616 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_29421FA8BD61B616__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA55870DEBCEA76B(::RPG::GameCore::OptionTalkInfo* a1, ::RPG::Client::TalkOptionData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*, ::RPG::Client::TalkOptionData*))((::PBYTE)hIl2Cpp + CLASS_1_29421FA8BD61B616_METHOD_1_CA55870DEBCEA76B_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B335A6EA88191599(::RPG::GameCore::OptionTalkInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::OptionTalkInfo*))((::PBYTE)hIl2Cpp + CLASS_1_29421FA8BD61B616_METHOD_1_B335A6EA88191599_OFFSET))(this, a1);
	}
};
