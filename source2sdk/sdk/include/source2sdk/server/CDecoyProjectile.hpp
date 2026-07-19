#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseCSGrenadeProjectile.hpp"

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
        // Size: 0xaa0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDecoyProjectile : public source2sdk::server::CBaseCSGrenadeProjectile
        {
        public:
            uint8_t _pad0a60[0x18]; // 0xa60
            std::int32_t m_nDecoyShotTick; // 0xa78            
            std::int32_t m_shotsRemaining; // 0xa7c            
            source2sdk::entity2::GameTime_t m_fExpireTime; // 0xa80            
            uint8_t _pad0a84[0xc]; // 0xa84
            std::uint16_t m_decoyWeaponDefIndex; // 0xa90            
            uint8_t _pad0a92[0xe];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDecoyProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDecoyProjectile) == 0xaa0);
    };
};
