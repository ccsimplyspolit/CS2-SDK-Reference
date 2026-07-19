#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x1448
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsVisibleOnMinimap"
        // static metadata: MNetworkVarNames "GameTime_t m_flStoppedMovingStartTime"
        #pragma pack(push, 1)
        class CAbility_Fathom_LurkersAmbush : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f70[0x480]; // 0xf70
            // m_hRegenModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_hRegenModifier;
            char m_hRegenModifier[0x18]; // 0x13f0            
            // m_hInvisModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_hInvisModifier;
            char m_hInvisModifier[0x18]; // 0x1408            
            // metadata: MNetworkEnable
            bool m_bIsVisibleOnMinimap; // 0x1420            
            uint8_t _pad1421[0x3]; // 0x1421
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStoppedMovingStartTime; // 0x1424            
            Vector m_vLastPos; // 0x1428            
            float m_flDebuffDuration; // 0x1434            
            source2sdk::entity2::GameTime_t m_flChannelTimeStarted; // 0x1438            
            bool m_bWasLatchedWhenCast; // 0x143c            
            uint8_t _pad143d[0x3]; // 0x143d
            source2sdk::client::ParticleIndex_t m_ChargeUpParticle; // 0x1440            
            uint8_t _pad1444[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fathom_LurkersAmbush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Fathom_LurkersAmbush) == 0x1448);
    };
};
