#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseCSGrenadeProjectile.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1290
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DecoyProjectile : public source2sdk::client::C_BaseCSGrenadeProjectile
        {
        public:
            std::int32_t m_nDecoyShotTick; // 0x1260            
            std::int32_t m_nClientLastKnownDecoyShotTick; // 0x1264            
            uint8_t _pad1268[0x20]; // 0x1268
            source2sdk::entity2::GameTime_t m_flTimeParticleEffectSpawn; // 0x1288            
            uint8_t _pad128c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DecoyProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DecoyProjectile) == 0x1290);
    };
};
