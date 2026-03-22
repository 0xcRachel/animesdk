#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"

class Class_3_8BF224A66CC7AC6D;

#define ENVIROMENTSYSTEMV2SPACE_FMCHANNELENVSYSCLIENTMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xE50D2C0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int FMChannelEnvSysClientMonoPlugin_TypeDefinitionIndex = 39274;

	class FMChannelEnvSysClientMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::Class_3_8BF224A66CC7AC6D*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_FMCHANNELENVSYSCLIENTMONOPLUGIN__CTOR_OFFSET))(this);
		}
	};
}
