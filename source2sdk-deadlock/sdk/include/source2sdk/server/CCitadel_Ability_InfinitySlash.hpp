#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseYamatoAbility.hpp"

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
        // Size: 0x1208
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flExplodeEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flBuffEndTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_InfinitySlash : public source2sdk::server::CCitadelBaseYamatoAbility
        {
        public:
            uint8_t _pad0f78[0x280]; // 0xf78
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flExplodeEndTime; // 0x11f8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flBuffEndTime; // 0x11fc            
            source2sdk::client::ParticleIndex_t m_nCastEffect; // 0x1200            
            uint8_t _pad1204[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_InfinitySlash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_InfinitySlash) == 0x1208);
    };
};
