#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0xa70
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CFlashbangProjectile : public source2sdk::server::CBaseCSGrenadeProjectile
        {
        public:
            float m_flTimeToDetonate; // 0xa60            
            std::uint8_t m_numOpponentsHit; // 0xa64            
            std::uint8_t m_numTeammatesHit; // 0xa65            
            uint8_t _pad0a66[0xa];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFlashbangProjectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFlashbangProjectile) == 0xa70);
    };
};
