#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0x15b0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_vecNextExplosionTime"
        // static metadata: MNetworkVarNames "Vector m_vecNextExplosionLocation"
        #pragma pack(push, 1)
        class CCitadel_Ability_Unicorn_LuminousStrike : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            source2sdk::entity2::GameTime_t m_flLastStackChangeTime; // 0x11d8            
            std::int32_t m_nLastStackCount; // 0x11dc            
            uint8_t _pad11e0[0x18]; // 0x11e0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_vecNextExplosionTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<source2sdk::entity2::GameTime_t> m_vecNextExplosionTime;
            char m_vecNextExplosionTime[0x18]; // 0x11f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_vecNextExplosionLocation has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<Vector> m_vecNextExplosionLocation;
            char m_vecNextExplosionLocation[0x18]; // 0x1210            
            std::int32_t m_nStackCount; // 0x1228            
            bool m_bPendingStackUpdate; // 0x122c            
            uint8_t _pad122d[0x383];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Unicorn_LuminousStrike because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Unicorn_LuminousStrike) == 0x15b0);
    };
};
