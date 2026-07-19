#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/server/CIcePathShardGenerator.hpp"

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
        // Size: 0x1190
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIcePathing"
        // static metadata: MNetworkVarNames "QAngle m_qLastAngles"
        // static metadata: MNetworkVarNames "Vector m_vLastVelocity"
        // static metadata: MNetworkVarNames "bool m_bFirstMovementTick"
        #pragma pack(push, 1)
        class CCitadel_Ability_IcePath : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x100]; // 0xf70
            VectorWS m_vInitialPosition; // 0x1070            
            uint8_t _pad107c[0x4]; // 0x107c
            source2sdk::server::CIcePathShardGenerator m_cShardGenerator; // 0x1080            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIcePathing; // 0x1168            
            uint8_t _pad1169[0x3]; // 0x1169
            // metadata: MNetworkEnable
            QAngle m_qLastAngles; // 0x116c            
            // metadata: MNetworkEnable
            Vector m_vLastVelocity; // 0x1178            
            // metadata: MNetworkEnable
            bool m_bFirstMovementTick; // 0x1184            
            uint8_t _pad1185[0x3]; // 0x1185
            source2sdk::entity2::GameTime_t m_tLingerMovementControlUntilTime; // 0x1188            
            uint8_t _pad118c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_IcePath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_IcePath) == 0x1190);
    };
};
