#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MVVM::Model { class LimaoNewsPostData; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x95BC630)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE___C__DISPLAYCLASS23_0___GETPOSTDATA_B__0_OFFSET UNITYSDK_OFFSET(0x95BC640)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsPostService___c__DisplayClass23_0_TypeDefinitionIndex = 59290;

	class LimaoNewsPostService___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::UInt32 postID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetPostData_b__0(::RPG::Client::MVVM::Model::LimaoNewsPostData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsPostData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSPOSTSERVICE___C__DISPLAYCLASS23_0___GETPOSTDATA_B__0_OFFSET))(this, x);
		}
	};
}
