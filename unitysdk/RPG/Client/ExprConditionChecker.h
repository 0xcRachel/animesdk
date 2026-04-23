#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ConditionChecker.h"

class Class_0_16E4307DCC419505_576;
namespace System { class String; }

#define RPG_CLIENT_EXPRCONDITIONCHECKER_CREATE_OFFSET UNITYSDK_OFFSET(0x161DB950)
#define RPG_CLIENT_EXPRCONDITIONCHECKER_DOSYNCCHECK_OFFSET UNITYSDK_OFFSET(0x161DBB50)
#define RPG_CLIENT_EXPRCONDITIONCHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x161DB9F0)
#define RPG_CLIENT_EXPRCONDITIONCHECKER__PARSEEXPR_OFFSET UNITYSDK_OFFSET(0x161DBA40)
#define RPG_CLIENT_EXPRCONDITIONCHECKER___IFIXBASEPROXY_DOSYNCCHECK_OFFSET UNITYSDK_OFFSET(0x161DBC30)

namespace RPG::Client
{
	inline static constexpr unsigned int ExprConditionChecker_TypeDefinitionIndex = 55276;

	class ExprConditionChecker : public ::RPG::Client::ConditionChecker
	{
	public:
		::Class_0_16E4307DCC419505_576* _Expr; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPRCONDITIONCHECKER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ExprConditionChecker* Create(::System::String* expression)
		{
			return ((::RPG::Client::ExprConditionChecker*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPRCONDITIONCHECKER_CREATE_OFFSET))(expression);
		}

		::System::Boolean DoSyncCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPRCONDITIONCHECKER_DOSYNCCHECK_OFFSET))(this);
		}

		::System::Void _ParseExpr(::System::String* expression)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPRCONDITIONCHECKER__PARSEEXPR_OFFSET))(this, expression);
		}

		::System::Boolean __iFixBaseProxy_DoSyncCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPRCONDITIONCHECKER___IFIXBASEPROXY_DOSYNCCHECK_OFFSET))(this);
		}
	};
}
