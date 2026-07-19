#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x1638
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bPreparing"
        // static metadata: MNetworkVarNames "bool m_bTackling"
        // static metadata: MNetworkVarNames "GameTime_t m_flTackleStartTime"
        // static metadata: MNetworkVarNames "float m_flTackleDuration"
        // static metadata: MNetworkVarNames "Vector m_vecTackleDir"
        #pragma pack(push, 1)
        class CCitadel_Ability_SuperNeutralCharge : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x400]; // 0x11d8
            // metadata: MNetworkEnable
            bool m_bPreparing; // 0x15d8            
            // metadata: MNetworkEnable
            bool m_bTackling; // 0x15d9            
            uint8_t _pad15da[0x2]; // 0x15da
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTackleStartTime; // 0x15dc            
            // metadata: MNetworkEnable
            float m_flTackleDuration; // 0x15e0            
            // metadata: MNetworkEnable
            Vector m_vecTackleDir; // 0x15e4            
            Vector m_vecLastPosition; // 0x15f0            
            std::int32_t m_nStuckFramesCount; // 0x15fc            
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0x1600            
            source2sdk::entity2::GameTime_t m_flPrepareStartTime; // 0x1618            
            source2sdk::client::ParticleIndex_t m_nDistancePreview; // 0x161c            
            uint8_t _pad1620[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_SuperNeutralCharge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_SuperNeutralCharge) == 0x1638);
    };
};
