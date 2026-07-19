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
        // Size: 0x14a0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flDissipationRate"
        // static metadata: MNetworkVarNames "GameTime_t m_flDissipationTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flHeatTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flOverheatSoundTime"
        // static metadata: MNetworkVarNames "bool m_bOverheating"
        #pragma pack(push, 1)
        class CCitadel_Ability_Tokamak_HeatSinks_Inherent : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            std::int32_t m_nIntervalsElapsed; // 0x11d8            
            source2sdk::entity2::GameTime_t m_NextShotTime; // 0x11dc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flDissipationRate; // 0x11e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDissipationTime; // 0x11e4            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flHeatTime; // 0x11e8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flOverheatSoundTime; // 0x11ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bOverheating; // 0x11f0            
            uint8_t _pad11f1[0x2af];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tokamak_HeatSinks_Inherent because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Tokamak_HeatSinks_Inherent) == 0x14a0);
    };
};
