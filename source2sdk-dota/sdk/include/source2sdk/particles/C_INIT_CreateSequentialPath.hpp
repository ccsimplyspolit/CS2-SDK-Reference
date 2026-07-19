#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/CPathParameters.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x230
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MParticleMaxVersion "7"
        // static metadata: MParticleReplacementOp "C_INIT_CreateSequentialPathV2"
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_INIT_CreateSequentialPath : public source2sdk::particles::CParticleFunctionInitializer
        {
        public:
            // metadata: MPropertyFriendlyName "maximum distance"
            float m_fMaxDistance; // 0x1e0            
            // metadata: MPropertyFriendlyName "particles to map from start to end"
            float m_flNumToAssign; // 0x1e4            
            // metadata: MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
            bool m_bLoop; // 0x1e8            
            // metadata: MPropertyFriendlyName "use sequential CP pairs between start and end point"
            bool m_bCPPairs; // 0x1e9            
            // metadata: MPropertyFriendlyName "save offset"
            bool m_bSaveOffset; // 0x1ea            
            uint8_t _pad01eb[0x5]; // 0x1eb
            source2sdk::particles::CPathParameters m_PathParams; // 0x1f0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_INIT_CreateSequentialPath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_INIT_CreateSequentialPath) == 0x230);
    };
};
