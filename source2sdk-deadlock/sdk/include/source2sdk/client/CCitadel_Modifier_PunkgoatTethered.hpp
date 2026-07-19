#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/SatVolumeIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5d8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_PunkgoatTethered : public source2sdk::client::CCitadelModifier
        {
        public:
            source2sdk::client::ParticleIndex_t m_nParticleRope1; // 0xc0            
            source2sdk::client::SatVolumeIndex_t m_nSatVolumeIndex; // 0xc4            
            source2sdk::entity2::GameTime_t m_flLastDamageTime; // 0xc8            
            uint8_t _pad00cc[0x504]; // 0xcc
            // m_hTetheredTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTetheredTo;
            char m_hTetheredTo[0x4]; // 0x5d0            
            uint8_t _pad05d4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PunkgoatTethered because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_PunkgoatTethered) == 0x5d8);
    };
};
