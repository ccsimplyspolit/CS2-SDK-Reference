#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/ParticleMultiSegmentCountSelection_t.hpp"
#include "source2sdk/particles/ParticleMultiSegmentInputSelection_t.hpp"
#include "source2sdk/particles/ParticleMultiSegmentSpecialCharacter_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1828
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_MultiSegmentDisplaySnapshotGenerator : public source2sdk::particles::CParticleFunctionPreEmission
        {
        public:
            // metadata: MPropertyFriendlyName "snapshot control point number"
            std::int32_t m_nCPSnapshot; // 0x1e0            
            // metadata: MPropertyFriendlyName "Segment Count"
            source2sdk::particles::ParticleMultiSegmentCountSelection_t m_nSegCount; // 0x1e4            
            // metadata: MPropertyFriendlyName "Input Type"
            source2sdk::particles::ParticleMultiSegmentInputSelection_t m_nInputType; // 0x1e8            
            uint8_t _pad01ec[0x4]; // 0x1ec
            // metadata: MPropertyFriendlyName "Default String"
            // metadata: MPropertySuppressExpr "m_nInputType != PARTICLE_MULTISEGMENT_SELECTION_STRING"
            CUtlString m_strDefaultString; // 0x1f0            
            // metadata: MPropertyFriendlyName "Float Value"
            // metadata: MPropertySuppressExpr "m_nInputType != PARTICLE_MULTISEGMENT_SELECTION_FLOAT"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flValue; // 0x1f8            
            // metadata: MPropertyFriendlyName "Segment Special Character"
            // m_SpecialCharList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::particles::ParticleMultiSegmentSpecialCharacter_t> m_SpecialCharList;
            char m_SpecialCharList[0x18]; // 0x368            
            // metadata: MPropertyFriendlyName "unlit segment color"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecColorUnlit; // 0x380            
            // metadata: MPropertyFriendlyName "lit segment color"
            source2sdk::particleslib::CParticleCollectionVecInput m_vecColorLit; // 0xa38            
            // metadata: MPropertyFriendlyName "Radius"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flRadius; // 0x10f0            
            // metadata: MPropertyFriendlyName "Spacing Scale"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flSpacing; // 0x1260            
            // metadata: MPropertyFriendlyName "Minimum Digits Count"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flMinCount; // 0x13d0            
            // metadata: MPropertyFriendlyName "Maximum Digits Count"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flMaxCount; // 0x1540            
            // metadata: MPropertyFriendlyName "Prepend Empty Digits"
            bool m_bPrependEmpty; // 0x16b0            
            uint8_t _pad16b1[0x7]; // 0x16b1
            // metadata: MPropertyFriendlyName "Digits After Decimal"
            // metadata: MPropertySuppressExpr "m_nInputType != PARTICLE_MULTISEGMENT_SELECTION_FLOAT"
            source2sdk::particleslib::CParticleCollectionFloatInput m_flDigitsAfterDecimal; // 0x16b8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_MultiSegmentDisplaySnapshotGenerator because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_MultiSegmentDisplaySnapshotGenerator) == 0x1828);
    };
};
