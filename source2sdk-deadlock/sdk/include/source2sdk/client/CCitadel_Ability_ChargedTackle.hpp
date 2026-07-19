#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x16a0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bPreparing"
        // static metadata: MNetworkVarNames "bool m_bTackling"
        // static metadata: MNetworkVarNames "GameTime_t m_flTackleStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flPrepareStartTime"
        // static metadata: MNetworkVarNames "Vector m_vecTackleDir"
        #pragma pack(push, 1)
        class CCitadel_Ability_ChargedTackle : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x480]; // 0x11d8
            // metadata: MNetworkEnable
            bool m_bPreparing; // 0x1658            
            // metadata: MNetworkEnable
            bool m_bTackling; // 0x1659            
            uint8_t _pad165a[0x2]; // 0x165a
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTackleStartTime; // 0x165c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flPrepareStartTime; // 0x1660            
            // metadata: MNetworkEnable
            Vector m_vecTackleDir; // 0x1664            
            Vector m_vecLastPosition; // 0x1670            
            std::int32_t m_nStuckFramesCount; // 0x167c            
            // m_vecHitEnemies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecHitEnemies;
            char m_vecHitEnemies[0x18]; // 0x1680            
            source2sdk::client::ParticleIndex_t m_nDistancePreview; // 0x1698            
            uint8_t _pad169c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ChargedTackle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_ChargedTackle) == 0x16a0);
    };
};
