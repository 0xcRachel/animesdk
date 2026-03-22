#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace Hdg { class rdtSerializerRegistry; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define HDG_RDTSERIALIZERVECTOR2_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x80B3CB0)
#define HDG_RDTSERIALIZERVECTOR2_READ_OFFSET UNITYSDK_OFFSET(0x80B3D30)
#define HDG_RDTSERIALIZERVECTOR2_TOUNITYTYPE_OFFSET UNITYSDK_OFFSET(0x80B3CA0)
#define HDG_RDTSERIALIZERVECTOR2_WRITE_OFFSET UNITYSDK_OFFSET(0x80B3CE0)
#define HDG_RDTSERIALIZERVECTOR2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x80B3010)
#define HDG_RDTSERIALIZERVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x80B3C90)

namespace Hdg
{
	inline static constexpr unsigned int rdtSerializerVector2_TypeDefinitionIndex = 36971;

	class rdtSerializerVector2 : public ::System::Object
	{
	public:
		::System::Single x; // 0x10
		::System::Single y; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR2__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Vector2 v)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR2__CTOR_1_OFFSET))(this, v);
		}

		::UnityEngine::Vector2 ToUnityType()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR2_TOUNITYTYPE_OFFSET))(this);
		}

		::System::Object* Deserialize(::Hdg::rdtSerializerRegistry* registry)
		{
			return ((::System::Object*(*)(::PVOID, ::Hdg::rdtSerializerRegistry*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR2_DESERIALIZE_OFFSET))(this, registry);
		}

		::System::Void Write(::System::IO::BinaryWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR2_WRITE_OFFSET))(this, w);
		}

		::System::Void Read(::System::IO::BinaryReader* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryReader*))((::PBYTE)hIl2Cpp + HDG_RDTSERIALIZERVECTOR2_READ_OFFSET))(this, r);
		}
	};
}
