#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0118F59C6619CAEE.h"

class Class_4_73A10F032383DACF;
namespace RPG::GameCore { class ChimeraDuelTalkNode; }

#define CLASS_4_7F2959351A53A590_METHOD_4_8E9678543C58A677_OFFSET UNITYSDK_OFFSET(0x156473C0)
#define CLASS_4_7F2959351A53A590_METHOD_4_A0DF566B6A49B088_OFFSET UNITYSDK_OFFSET(0x156477D0)
#define CLASS_4_7F2959351A53A590__CTOR_OFFSET UNITYSDK_OFFSET(0x156473B0)

inline static constexpr unsigned int Class_4_7F2959351A53A590_TypeDefinitionIndex = 72159;

class Class_4_7F2959351A53A590 : public ::Class_3_0118F59C6619CAEE
{
public:
	::Class_4_73A10F032383DACF* Field_4_0; // 0x20

	::System::Void _ctor(::Class_4_73A10F032383DACF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_73A10F032383DACF*))((::PBYTE)hIl2Cpp + CLASS_4_7F2959351A53A590__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_8E9678543C58A677(::RPG::GameCore::ChimeraDuelTalkNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + CLASS_4_7F2959351A53A590_METHOD_4_8E9678543C58A677_OFFSET))(this, a1);
	}

	::System::Boolean Method_4_A0DF566B6A49B088(::RPG::GameCore::ChimeraDuelTalkNode* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChimeraDuelTalkNode*))((::PBYTE)hIl2Cpp + CLASS_4_7F2959351A53A590_METHOD_4_A0DF566B6A49B088_OFFSET))(this, a1);
	}
};
