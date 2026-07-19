#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseCSGrenadeProjectile.hpp"
#include "source2sdk/server/IntervalTimer.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xb60
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CMolotovProjectile : public source2sdk::server::CBaseCSGrenadeProjectile
        {
        public:
            bool m_bIsIncGrenade; // 0xa60            
            uint8_t _pad0a61[0x17]; // 0xa61
            bool m_bDetonated; // 0xa78            
            uint8_t _pad0a79[0x7]; // 0xa79
            source2sdk::server::IntervalTimer m_stillTimer; // 0xa80            
            uint8_t _pad0a90[0xd0];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMolotovProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMolotovProjectile) == 0xb60);
    };
};
