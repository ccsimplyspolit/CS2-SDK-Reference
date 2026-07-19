#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleInput.hpp"
#include "source2sdk/particleslib/PFNoiseModifier_t.hpp"
#include "source2sdk/particleslib/PFNoiseTurbulence_t.hpp"
#include "source2sdk/particleslib/PFNoiseType_t.hpp"
#include "source2sdk/particleslib/ParticleFloatBiasType_t.hpp"
#include "source2sdk/particleslib/ParticleFloatInputMode_t.hpp"
#include "source2sdk/particleslib/ParticleFloatMapType_t.hpp"
#include "source2sdk/particleslib/ParticleFloatRandomMode_t.hpp"
#include "source2sdk/particleslib/ParticleFloatRoundType_t.hpp"
#include "source2sdk/particleslib/ParticleFloatType_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particleslib
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x170
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MCustomFGDMetadata "{ SkipImprintFGDClassOnKV3 = true SkipRemoveKeysInKV3AtFGDDefault = true KV3DefaultTestFnName = 'CParticleFloatInputDefaultTestFunc' }"
        #pragma pack(push, 1)
        class CParticleFloatInput : public source2sdk::particleslib::CParticleInput
        {
        public:
            source2sdk::particleslib::ParticleFloatType_t m_nType; // 0x10            
            source2sdk::particleslib::ParticleFloatMapType_t m_nMapType; // 0x14            
            float m_flLiteralValue; // 0x18            
            uint8_t _pad001c[0x4]; // 0x1c
            CParticleNamedValueRef m_NamedValue; // 0x20            
            std::int32_t m_nControlPoint; // 0x60            
            source2sdk::particles::ParticleAttributeIndex_t m_nScalarAttribute; // 0x64            
            source2sdk::particles::ParticleAttributeIndex_t m_nVectorAttribute; // 0x68            
            std::int32_t m_nVectorComponent; // 0x6c            
            bool m_bReverseOrder; // 0x70            
            uint8_t _pad0071[0x3]; // 0x71
            float m_flRandomMin; // 0x74            
            float m_flRandomMax; // 0x78            
            bool m_bHasRandomSignFlip; // 0x7c            
            uint8_t _pad007d[0x3]; // 0x7d
            std::int32_t m_nRandomSeed; // 0x80            
            source2sdk::particleslib::ParticleFloatRandomMode_t m_nRandomMode; // 0x84            
            uint8_t _pad0088[0x8]; // 0x88
            CUtlString m_strSnapshotSubset; // 0x90            
            float m_flLOD0; // 0x98            
            float m_flLOD1; // 0x9c            
            float m_flLOD2; // 0xa0            
            float m_flLOD3; // 0xa4            
            source2sdk::particles::ParticleAttributeIndex_t m_nNoiseInputVectorAttribute; // 0xa8            
            float m_flNoiseOutputMin; // 0xac            
            float m_flNoiseOutputMax; // 0xb0            
            float m_flNoiseScale; // 0xb4            
            Vector m_vecNoiseOffsetRate; // 0xb8            
            float m_flNoiseOffset; // 0xc4            
            std::int32_t m_nNoiseOctaves; // 0xc8            
            source2sdk::particleslib::PFNoiseTurbulence_t m_nNoiseTurbulence; // 0xcc            
            source2sdk::particleslib::PFNoiseType_t m_nNoiseType; // 0xd0            
            source2sdk::particleslib::PFNoiseModifier_t m_nNoiseModifier; // 0xd4            
            float m_flNoiseTurbulenceScale; // 0xd8            
            float m_flNoiseTurbulenceMix; // 0xdc            
            float m_flNoiseImgPreviewScale; // 0xe0            
            bool m_bNoiseImgPreviewLive; // 0xe4            
            uint8_t _pad00e5[0xb]; // 0xe5
            float m_flNoCameraFallback; // 0xf0            
            bool m_bUseBoundsCenter; // 0xf4            
            uint8_t _pad00f5[0x3]; // 0xf5
            source2sdk::particleslib::ParticleFloatInputMode_t m_nInputMode; // 0xf8            
            float m_flMultFactor; // 0xfc            
            float m_flInput0; // 0x100            
            float m_flInput1; // 0x104            
            float m_flOutput0; // 0x108            
            float m_flOutput1; // 0x10c            
            float m_flNotchedRangeMin; // 0x110            
            float m_flNotchedRangeMax; // 0x114            
            float m_flNotchedOutputOutside; // 0x118            
            float m_flNotchedOutputInside; // 0x11c            
            source2sdk::particleslib::ParticleFloatRoundType_t m_nRoundType; // 0x120            
            source2sdk::particleslib::ParticleFloatBiasType_t m_nBiasType; // 0x124            
            float m_flBiasParameter; // 0x128            
            uint8_t _pad012c[0x4]; // 0x12c
            CPiecewiseCurve m_Curve; // 0x130            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CParticleFloatInput because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particleslib::CParticleFloatInput) == 0x170);
    };
};
