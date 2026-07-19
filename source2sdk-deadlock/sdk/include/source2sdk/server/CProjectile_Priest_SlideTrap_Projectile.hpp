#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelProjectile.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xe38
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flRangeAtCast"
        // static metadata: MNetworkVarNames "bool m_bArmed"
        // static metadata: MNetworkVarNames "bool m_bMoving"
        #pragma pack(push, 1)
        class CProjectile_Priest_SlideTrap_Projectile : public source2sdk::server::CCitadelProjectile
        {
        public:
            uint8_t _pad0860[0x14]; // 0x860
            // metadata: MNetworkEnable
            float m_flRangeAtCast; // 0x874            
            uint8_t _pad0878[0x3c]; // 0x878
            // metadata: MNetworkEnable
            bool m_bArmed; // 0x8b4            
            // metadata: MNetworkEnable
            bool m_bMoving; // 0x8b5            
            bool m_bFinished; // 0x8b6            
            uint8_t _pad08b7[0x581];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CProjectile_Priest_SlideTrap_Projectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CProjectile_Priest_SlideTrap_Projectile) == 0xe38);
    };
};
