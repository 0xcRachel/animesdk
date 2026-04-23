#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"

namespace RPG::Client { class MonoFogVolume; }
namespace RPG::CustomRP { class FogVolume; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_8981E75B701FEB10_METHOD_2_06FF382C0473D596_OFFSET UNITYSDK_OFFSET(0xEED6A20)
#define CLASS_2_8981E75B701FEB10_METHOD_2_3D2B77EBCAE390AB_OFFSET UNITYSDK_OFFSET(0xEED6860)
#define CLASS_2_8981E75B701FEB10_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10951020)
#define CLASS_2_8981E75B701FEB10_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1094FED0)
#define CLASS_2_8981E75B701FEB10_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0xEED6A80)
#define CLASS_2_8981E75B701FEB10_METHOD_2_A8ECA85E7B96802F_OFFSET UNITYSDK_OFFSET(0x10950060)
#define CLASS_2_8981E75B701FEB10_METHOD_2_B1EA412ACAE87C15_OFFSET UNITYSDK_OFFSET(0x10950170)
#define CLASS_2_8981E75B701FEB10_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xEED6820)
#define CLASS_2_8981E75B701FEB10_METHOD_2_F1CE64407785C32C_OFFSET UNITYSDK_OFFSET(0x1094FD50)
#define CLASS_2_8981E75B701FEB10__CTOR_OFFSET UNITYSDK_OFFSET(0xEED6A70)

inline static constexpr unsigned int Class_2_8981E75B701FEB10_TypeDefinitionIndex = 65283;

class Class_2_8981E75B701FEB10 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::MeshRenderer* Field_2_3; // 0x18
	::UnityEngine::Material* Field_2_1; // 0x20
	::RPG::CustomRP::FogVolume* Field_2_2; // 0x28
	::System::Boolean Field_2_4; // 0x30
	::System::Boolean Field_2_0; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8981E75B701FEB10__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F1CE64407785C32C(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_8981E75B701FEB10_METHOD_2_F1CE64407785C32C_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8981E75B701FEB10_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8981E75B701FEB10_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_B1EA412ACAE87C15()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8981E75B701FEB10_METHOD_2_B1EA412ACAE87C15_OFFSET))(this);
	}

	::UnityEngine::Material* Method_2_A8ECA85E7B96802F(::UnityEngine::Material* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_2_8981E75B701FEB10_METHOD_2_A8ECA85E7B96802F_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8981E75B701FEB10_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_3D2B77EBCAE390AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8981E75B701FEB10_METHOD_2_3D2B77EBCAE390AB_OFFSET))(this);
	}

	::RPG::Client::MonoFogVolume* Method_2_06FF382C0473D596()
	{
		return ((::RPG::Client::MonoFogVolume*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8981E75B701FEB10_METHOD_2_06FF382C0473D596_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_8981E75B701FEB10_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
