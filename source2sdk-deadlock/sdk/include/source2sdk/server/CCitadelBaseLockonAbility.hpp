#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/server/LockonTarget_t.hpp"

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
        // Size: 0x12e0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "LockonTarget_t m_vecLockonTargets"
        // static metadata: MNetworkVarNames "GameTime_t m_LockOnStartTime"
        #pragma pack(push, 1)
        class CCitadelBaseLockonAbility : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x300]; // 0xf70
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_vecLockonTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::LockonTarget_t> m_vecLockonTargets;
            char m_vecLockonTargets[0x68]; // 0x1270            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_LockOnStartTime; // 0x12d8            
            uint8_t _pad12dc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelBaseLockonAbility because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelBaseLockonAbility) == 0x12e0);
    };
};
