#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/BaseMsgCreator_1.h"

namespace RPG::CustomRP { class DebugShaderVIPMaterialTestMsg; }
namespace RPG::CustomRP { class IRPMessage; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSGCREATOR_ONMSG_OFFSET UNITYSDK_OFFSET(0x157EEB30)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSGCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x157EF2F0)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSGCREATOR__FINDTYPE_OFFSET UNITYSDK_OFFSET(0x157EF180)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSGCREATOR__GETSHADERTESTCASEINSTANCE_OFFSET UNITYSDK_OFFSET(0x157EEF60)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSGCREATOR__INVOKEINSTANCEMETHOD_OFFSET UNITYSDK_OFFSET(0x157EF090)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugShaderVIPMaterialTestMsgCreator_TypeDefinitionIndex = 35433;

	class DebugShaderVIPMaterialTestMsgCreator : public ::RPG::CustomRP::BaseMsgCreator_1<::RPG::CustomRP::DebugShaderVIPMaterialTestMsg*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSGCREATOR__CTOR_OFFSET))(this);
		}

		::System::Void OnMsg(::RPG::CustomRP::IRPMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMessage*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSGCREATOR_ONMSG_OFFSET))(this, a1);
		}

		static ::System::Object* _GetShaderTestCaseInstance()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSGCREATOR__GETSHADERTESTCASEINSTANCE_OFFSET))();
		}

		static ::System::Void _InvokeInstanceMethod(::System::Object* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSGCREATOR__INVOKEINSTANCEMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Type* _FindType(::System::String* a1)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALTESTMSGCREATOR__FINDTYPE_OFFSET))(a1);
		}
	};
}
