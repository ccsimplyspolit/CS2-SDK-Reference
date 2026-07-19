#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0xc
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ModifierTrackedParticle_t
        {
        public:
            source2sdk::client::ParticleIndex_t m_nParticleIndex; // 0x0            
            bool m_bDestroyImmediately; // 0x4            
            bool m_bStatusEffect; // 0x5            
            bool m_bScreenSpace; // 0x6            
            uint8_t _pad0007[0x1]; // 0x7
            std::int16_t m_nStatusEffectPriority; // 0x8            
            uint8_t _pad000a[0x2];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::ModifierTrackedParticle_t, m_nParticleIndex) == 0x0);
        static_assert(offsetof(source2sdk::client::ModifierTrackedParticle_t, m_bDestroyImmediately) == 0x4);
        static_assert(offsetof(source2sdk::client::ModifierTrackedParticle_t, m_bStatusEffect) == 0x5);
        static_assert(offsetof(source2sdk::client::ModifierTrackedParticle_t, m_bScreenSpace) == 0x6);
        static_assert(offsetof(source2sdk::client::ModifierTrackedParticle_t, m_nStatusEffectPriority) == 0x8);
        
        static_assert(sizeof(source2sdk::client::ModifierTrackedParticle_t) == 0xc);
    };
};
