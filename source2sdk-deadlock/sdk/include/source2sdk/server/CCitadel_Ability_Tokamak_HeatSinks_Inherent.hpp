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
        // Size: 0x1238
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flDissipationRate"
        // static metadata: MNetworkVarNames "GameTime_t m_flDissipationTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flHeatTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flOverheatSoundTime"
        // static metadata: MNetworkVarNames "bool m_bOverheating"
        #pragma pack(push, 1)
        class CCitadel_Ability_Tokamak_HeatSinks_Inherent : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            std::int32_t m_nIntervalsElapsed; // 0xf70            
            source2sdk::entity2::GameTime_t m_NextShotTime; // 0xf74            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flDissipationRate; // 0xf78            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDissipationTime; // 0xf7c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flHeatTime; // 0xf80            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flOverheatSoundTime; // 0xf84            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bOverheating; // 0xf88            
            uint8_t _pad0f89[0x2af];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tokamak_HeatSinks_Inherent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Tokamak_HeatSinks_Inherent) == 0x1238);
    };
};
