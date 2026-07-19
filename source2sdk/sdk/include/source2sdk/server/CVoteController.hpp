#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseIssue;
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
        // Size: 0x658
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CVoteController : public source2sdk::server::CBaseEntity
        {
        public:
            std::int32_t m_iActiveIssueIndex; // 0x4a8            
            std::int32_t m_iOnlyTeamToVote; // 0x4ac            
            std::int32_t m_nVoteOptionCount[5]; // 0x4b0            
            std::int32_t m_nPotentialVotes; // 0x4c4            
            bool m_bIsYesNoVote; // 0x4c8            
            uint8_t _pad04c9[0x7]; // 0x4c9
            source2sdk::server::CountdownTimer m_acceptingVotesTimer; // 0x4d0            
            source2sdk::server::CountdownTimer m_executeCommandTimer; // 0x4e8            
            source2sdk::server::CountdownTimer m_resetVoteTimer; // 0x500            
            std::int32_t m_nVotesCast[64]; // 0x518            
            CPlayerSlot m_playerHoldingVote; // 0x618            
            CPlayerSlot m_playerOverrideForVote; // 0x61c            
            std::int32_t m_nHighestCountIndex; // 0x620            
            uint8_t _pad0624[0x4]; // 0x624
            // m_potentialIssues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CBaseIssue*> m_potentialIssues;
            char m_potentialIssues[0x18]; // 0x628            
            // m_VoteOptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<char*> m_VoteOptions;
            char m_VoteOptions[0x18]; // 0x640            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CVoteController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CVoteController) == 0x658);
    };
};
