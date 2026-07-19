#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelPlayerClipComponent.hpp"
#include "source2sdk/client/C_AI_CitadelNPC.hpp"
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
        // Size: 0x1c08
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelPlayerClipComponent::Storage_t m_CCitadelPlayerClipComponent"
        // static metadata: MNetworkVarNames "int m_iLane"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutStart"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutEnd"
        #pragma pack(push, 1)
        class C_NPC_BarrackBoss : public source2sdk::client::C_AI_CitadelNPC
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelPlayerClipComponent"
            // metadata: MNetworkAlias "CCitadelPlayerClipComponent"
            // metadata: MNetworkTypeAlias "CCitadelPlayerClipComponent"
            source2sdk::client::CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // 0x1bd0            
            uint8_t _pad1bf0[0xc]; // 0x1bf0
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_iLane; // 0x1bfc            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flFadeOutStart; // 0x1c00            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flFadeOutEnd; // 0x1c04            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NPC_BarrackBoss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NPC_BarrackBoss) == 0x1c08);
    };
};
