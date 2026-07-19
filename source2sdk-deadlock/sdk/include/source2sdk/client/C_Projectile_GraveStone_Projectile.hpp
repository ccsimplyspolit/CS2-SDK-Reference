#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelProjectile.hpp"
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
        // Size: 0xc60
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flWidth"
        // static metadata: MNetworkVarNames "GameTime_t m_tDieTime"
        #pragma pack(push, 1)
        class C_Projectile_GraveStone_Projectile : public source2sdk::client::C_CitadelProjectile
        {
        public:
            // metadata: MNetworkEnable
            float m_flWidth; // 0xad8            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tDieTime; // 0xadc            
            uint8_t _pad0ae0[0x180];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Projectile_GraveStone_Projectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Projectile_GraveStone_Projectile) == 0xc60);
    };
};
