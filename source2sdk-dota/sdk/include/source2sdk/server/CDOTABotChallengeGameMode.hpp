#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseGameMode.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
    };
};

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
        // Size: 0x818
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTABotChallengeGameMode : public source2sdk::server::CDOTABaseGameMode
        {
        public:
            bool m_bRuleMidLaneOnly; // 0x7d8            
            bool m_bRuleEliteBotHeroes; // 0x7d9            
            bool m_bRuleMeteorStaff; // 0x7da            
            bool m_bHasStartedEndgame; // 0x7db            
            // m_hRadiantAncientNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hRadiantAncientNPC;
            char m_hRadiantAncientNPC[0x4]; // 0x7dc            
            // m_hDireAncientNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hDireAncientNPC;
            char m_hDireAncientNPC[0x4]; // 0x7e0            
            uint8_t _pad07e4[0x2c]; // 0x7e4
            bool m_bRuleAncientsDuel; // 0x810            
            uint8_t _pad0811[0x3]; // 0x811
            float m_flEndgameTime; // 0x814            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTABotChallengeGameMode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTABotChallengeGameMode) == 0x818);
    };
};
