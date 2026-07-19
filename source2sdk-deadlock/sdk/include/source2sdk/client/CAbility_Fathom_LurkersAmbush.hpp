#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
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
        // Size: 0x16b0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIsVisibleOnMinimap"
        // static metadata: MNetworkVarNames "GameTime_t m_flStoppedMovingStartTime"
        #pragma pack(push, 1)
        class CAbility_Fathom_LurkersAmbush : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad11d8[0x480]; // 0x11d8
            // m_hRegenModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::client::CCitadelModifier> m_hRegenModifier;
            char m_hRegenModifier[0x18]; // 0x1658            
            // m_hInvisModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::client::CCitadelModifier> m_hInvisModifier;
            char m_hInvisModifier[0x18]; // 0x1670            
            // metadata: MNetworkEnable
            bool m_bIsVisibleOnMinimap; // 0x1688            
            uint8_t _pad1689[0x3]; // 0x1689
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStoppedMovingStartTime; // 0x168c            
            Vector m_vLastPos; // 0x1690            
            float m_flDebuffDuration; // 0x169c            
            source2sdk::entity2::GameTime_t m_flChannelTimeStarted; // 0x16a0            
            bool m_bWasLatchedWhenCast; // 0x16a4            
            uint8_t _pad16a5[0x3]; // 0x16a5
            source2sdk::client::ParticleIndex_t m_ChargeUpParticle; // 0x16a8            
            uint8_t _pad16ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fathom_LurkersAmbush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Fathom_LurkersAmbush) == 0x16b0);
    };
};
