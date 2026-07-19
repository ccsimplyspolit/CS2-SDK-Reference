#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/ShotID_t.hpp"
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
        // Size: 0x1508
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flNextShootTime"
        #pragma pack(push, 1)
        class CAbility_Synth_Barrage : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            source2sdk::client::ShotID_t m_tLastShotID; // 0xf70            
            uint8_t _pad0f74[0x584]; // 0xf74
            std::int32_t m_nProjectilesScheduled; // 0x14f8            
            source2sdk::client::ParticleIndex_t m_ChannelParticle; // 0x14fc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flNextShootTime; // 0x1500            
            uint8_t _pad1504[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Synth_Barrage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Synth_Barrage) == 0x1508);
    };
};
