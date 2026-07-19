#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0x1348
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_vecNextExplosionTime"
        // static metadata: MNetworkVarNames "Vector m_vecNextExplosionLocation"
        #pragma pack(push, 1)
        class CCitadel_Ability_Unicorn_LuminousStrike : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::entity2::GameTime_t m_flLastStackChangeTime; // 0xf70            
            std::int32_t m_nLastStackCount; // 0xf74            
            uint8_t _pad0f78[0x18]; // 0xf78
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_vecNextExplosionTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<source2sdk::entity2::GameTime_t> m_vecNextExplosionTime;
            char m_vecNextExplosionTime[0x18]; // 0xf90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_vecNextExplosionLocation has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<Vector> m_vecNextExplosionLocation;
            char m_vecNextExplosionLocation[0x18]; // 0xfa8            
            std::int32_t m_nStackCount; // 0xfc0            
            bool m_bPendingStackUpdate; // 0xfc4            
            uint8_t _pad0fc5[0x383];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Unicorn_LuminousStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Unicorn_LuminousStrike) == 0x1348);
    };
};
