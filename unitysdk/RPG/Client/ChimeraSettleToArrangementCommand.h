#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraSettleCommandBase.h"

namespace System { class String; }

#define RPG_CLIENT_CHIMERASETTLETOARRANGEMENTCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x8F357E0)
#define RPG_CLIENT_CHIMERASETTLETOARRANGEMENTCOMMAND__EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0x8F38A10)
#define RPG_CLIENT_CHIMERASETTLETOARRANGEMENTCOMMAND___IFIXBASEPROXY__EXECUTEIMPL_OFFSET UNITYSDK_OFFSET(0x8F38A80)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraSettleToArrangementCommand_TypeDefinitionIndex = 50395;

	class ChimeraSettleToArrangementCommand : public ::RPG::Client::ChimeraSettleCommandBase
	{
	public:
		// static const ::System::String* _ARRANGEMENT_PUZZLE_CUSTOM_STRING; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOARRANGEMENTCOMMAND__CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOARRANGEMENTCOMMAND__EXECUTEIMPL_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__ExecuteImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERASETTLETOARRANGEMENTCOMMAND___IFIXBASEPROXY__EXECUTEIMPL_OFFSET))(this);
		}
	};
}
