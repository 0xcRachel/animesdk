#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_332D7328FA038F3C_PSODownloadResponse_Result.h"
#include "unitysdk/Class_1_332D7328FA038F3C_PSODownloadResponse_Status.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_332D7328FA038F3C_PSODOWNLOADRESPONSE__CTOR_OFFSET UNITYSDK_OFFSET(0x8D84A70)

inline static constexpr unsigned int Class_1_332D7328FA038F3C_PSODownloadResponse_TypeDefinitionIndex = 38272;

class Class_1_332D7328FA038F3C_PSODownloadResponse : public ::System::Object
{
public:
	::Class_1_332D7328FA038F3C_PSODownloadResponse_Status status; // 0x10
	::Class_1_332D7328FA038F3C_PSODownloadResponse_Result result; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_332D7328FA038F3C_PSODOWNLOADRESPONSE__CTOR_OFFSET))(this);
	}
};
