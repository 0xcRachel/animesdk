#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/ParticleSystemForceFieldShape.h"
#include "unitysdk/UnityEngine/ParticleSystem_MinMaxCurve.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture3D; }

#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18284230)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONX_OFFSET UNITYSDK_OFFSET(0x182841F0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONY_INJECTED_OFFSET UNITYSDK_OFFSET(0x182842A0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONY_OFFSET UNITYSDK_OFFSET(0x18284260)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x18284310)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONZ_OFFSET UNITYSDK_OFFSET(0x182842D0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DRAG_INJECTED_OFFSET UNITYSDK_OFFSET(0x182844D0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DRAG_OFFSET UNITYSDK_OFFSET(0x18284490)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ENDRANGE_OFFSET UNITYSDK_OFFSET(0x182840C0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITYFOCUS_OFFSET UNITYSDK_OFFSET(0x18284100)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18284380)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x18284340)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x182840E0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x18284190)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET UNITYSDK_OFFSET(0x182841B0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONATTRACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18284460)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONATTRACTION_OFFSET UNITYSDK_OFFSET(0x18284420)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONRANDOMNESS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18284150)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONRANDOMNESS_OFFSET UNITYSDK_OFFSET(0x18284120)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x182843F0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONSPEED_OFFSET UNITYSDK_OFFSET(0x182843B0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0x18284080)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_STARTRANGE_OFFSET UNITYSDK_OFFSET(0x182840A0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDATTRACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x182845B0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDATTRACTION_OFFSET UNITYSDK_OFFSET(0x18284570)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18284540)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDSPEED_OFFSET UNITYSDK_OFFSET(0x18284500)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELD_OFFSET UNITYSDK_OFFSET(0x182841D0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18284250)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONX_OFFSET UNITYSDK_OFFSET(0x18284240)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONY_INJECTED_OFFSET UNITYSDK_OFFSET(0x182842C0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONY_OFFSET UNITYSDK_OFFSET(0x182842B0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x18284330)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONZ_OFFSET UNITYSDK_OFFSET(0x18284320)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DRAG_INJECTED_OFFSET UNITYSDK_OFFSET(0x182844F0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DRAG_OFFSET UNITYSDK_OFFSET(0x182844E0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ENDRANGE_OFFSET UNITYSDK_OFFSET(0x182840D0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITYFOCUS_OFFSET UNITYSDK_OFFSET(0x18284110)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x182843A0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x18284390)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x182840F0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET UNITYSDK_OFFSET(0x182841A0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET UNITYSDK_OFFSET(0x182841C0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONATTRACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18284480)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONATTRACTION_OFFSET UNITYSDK_OFFSET(0x18284470)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONRANDOMNESS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18284180)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONRANDOMNESS_OFFSET UNITYSDK_OFFSET(0x18284160)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18284410)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONSPEED_OFFSET UNITYSDK_OFFSET(0x18284400)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0x18284090)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_STARTRANGE_OFFSET UNITYSDK_OFFSET(0x182840B0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDATTRACTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x182845D0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDATTRACTION_OFFSET UNITYSDK_OFFSET(0x182845C0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18284560)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDSPEED_OFFSET UNITYSDK_OFFSET(0x18284550)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELD_OFFSET UNITYSDK_OFFSET(0x182841E0)
#define UNITYENGINE_PARTICLESYSTEMFORCEFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x182845E0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystemForceField_TypeDefinitionIndex = 5405;

	class ParticleSystemForceField : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD__CTOR_OFFSET))(this);
		}

		::UnityEngine::ParticleSystemForceFieldShape get_shape()
		{
			return ((::UnityEngine::ParticleSystemForceFieldShape(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_shape(::UnityEngine::ParticleSystemForceFieldShape value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemForceFieldShape))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_SHAPE_OFFSET))(this, value);
		}

		::System::Single get_startRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_STARTRANGE_OFFSET))(this);
		}

		::System::Void set_startRange(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_STARTRANGE_OFFSET))(this, value);
		}

		::System::Single get_endRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ENDRANGE_OFFSET))(this);
		}

		::System::Void set_endRange(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ENDRANGE_OFFSET))(this, value);
		}

		::System::Single get_length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_length(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_LENGTH_OFFSET))(this, value);
		}

		::System::Single get_gravityFocus()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITYFOCUS_OFFSET))(this);
		}

		::System::Void set_gravityFocus(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITYFOCUS_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_rotationRandomness()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONRANDOMNESS_OFFSET))(this);
		}

		::System::Void set_rotationRandomness(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONRANDOMNESS_OFFSET))(this, value);
		}

		::System::Boolean get_multiplyDragByParticleSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET))(this);
		}

		::System::Void set_multiplyDragByParticleSize(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_MULTIPLYDRAGBYPARTICLESIZE_OFFSET))(this, value);
		}

		::System::Boolean get_multiplyDragByParticleVelocity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET))(this);
		}

		::System::Void set_multiplyDragByParticleVelocity(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_MULTIPLYDRAGBYPARTICLEVELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::Texture3D* get_vectorField()
		{
			return ((::UnityEngine::Texture3D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELD_OFFSET))(this);
		}

		::System::Void set_vectorField(::UnityEngine::Texture3D* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture3D*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELD_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_directionX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONX_OFFSET))(this);
		}

		::System::Void set_directionX(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONX_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_directionY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONY_OFFSET))(this);
		}

		::System::Void set_directionY(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONY_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_directionZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONZ_OFFSET))(this);
		}

		::System::Void set_directionZ(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONZ_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_gravity()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITY_OFFSET))(this);
		}

		::System::Void set_gravity(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITY_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_rotationSpeed()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONSPEED_OFFSET))(this);
		}

		::System::Void set_rotationSpeed(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONSPEED_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_rotationAttraction()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONATTRACTION_OFFSET))(this);
		}

		::System::Void set_rotationAttraction(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONATTRACTION_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_drag()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DRAG_OFFSET))(this);
		}

		::System::Void set_drag(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DRAG_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_vectorFieldSpeed()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDSPEED_OFFSET))(this);
		}

		::System::Void set_vectorFieldSpeed(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDSPEED_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystem_MinMaxCurve get_vectorFieldAttraction()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDATTRACTION_OFFSET))(this);
		}

		::System::Void set_vectorFieldAttraction(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDATTRACTION_OFFSET))(this, value);
		}

		::System::Void get_rotationRandomness_Injected(::UnityEngine::Vector2& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONRANDOMNESS_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rotationRandomness_Injected(::UnityEngine::Vector2& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONRANDOMNESS_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_directionX_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONX_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_directionX_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONX_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_directionY_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_directionY_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONY_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_directionZ_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DIRECTIONZ_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_directionZ_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DIRECTIONZ_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_gravity_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_GRAVITY_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_gravity_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_GRAVITY_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_rotationSpeed_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONSPEED_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rotationSpeed_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONSPEED_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_rotationAttraction_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_ROTATIONATTRACTION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_rotationAttraction_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_ROTATIONATTRACTION_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_drag_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_DRAG_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_drag_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_DRAG_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_vectorFieldSpeed_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDSPEED_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_vectorFieldSpeed_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDSPEED_INJECTED_OFFSET))(this, value);
		}

		::System::Void get_vectorFieldAttraction_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_GET_VECTORFIELDATTRACTION_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_vectorFieldAttraction_Injected(::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEMFORCEFIELD_SET_VECTORFIELDATTRACTION_INJECTED_OFFSET))(this, value);
		}
	};
}
