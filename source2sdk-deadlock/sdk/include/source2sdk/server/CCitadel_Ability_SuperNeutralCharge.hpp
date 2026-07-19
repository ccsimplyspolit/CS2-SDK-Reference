#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
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
        // Size: 0x13d0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bPreparing"
        // static metadata: MNetworkVarNames "bool m_bTackling"
        // static metadata: MNetworkVarNames "GameTime_t m_flTackleStartTime"
        // static metadata: MNetworkVarNames "float m_flTackleDuration"
        // static metadata: MNetworkVarNames "Vector m_vecTackleDir"
        #pragma pack(push, 1)
        class CCitadel_Ability_SuperNeutralCharge : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x400]; // 0xf70
            // metadata: MNetworkEnable
            bool m_bPreparing; // 0x1370            
            // metadata: MNetworkEnable
            bool m_bTackling; // 0x1371            
            uint8_t _pad1372[0x2]; // 0x1372
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTackleStartTime; // 0x1374            
            // metadata: MNetworkEnable
            float m_flTackleDuration; // 0x1378            
            // metadata: MNetworkEnable
            Vector m_vecTackleDir; // 0x137c            
            Vector m_vecLastPosition; // 0x1388            
            std::int32_t m_nStuckFramesCount; // 0x1394            
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CEntityIndex> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0x1398            
            source2sdk::entity2::GameTime_t m_flPrepareStartTime; // 0x13b0            
            source2sdk::client::ParticleIndex_t m_nDistancePreview; // 0x13b4            
            uint8_t _pad13b8[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_SuperNeutralCharge because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_SuperNeutralCharge) == 0x13d0);
    };
};
