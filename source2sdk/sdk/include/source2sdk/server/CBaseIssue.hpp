#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace server
    {
        struct CVoteController;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x178
        // Has VTable
        // Is Abstract
        #pragma pack(push, 1)
        class CBaseIssue
        {
        public:
            uint8_t _pad0000[0x20]; // 0x0
            char m_szTypeString[64]; // 0x20            
            char m_szDetailsString[260]; // 0x60            
            std::int32_t m_iNumYesVotes; // 0x164            
            std::int32_t m_iNumNoVotes; // 0x168            
            std::int32_t m_iNumPotentialVotes; // 0x16c            
            source2sdk::server::CVoteController* m_pVoteController; // 0x170            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CBaseIssue, m_szTypeString) == 0x20);
        static_assert(offsetof(source2sdk::server::CBaseIssue, m_szDetailsString) == 0x60);
        static_assert(offsetof(source2sdk::server::CBaseIssue, m_iNumYesVotes) == 0x164);
        static_assert(offsetof(source2sdk::server::CBaseIssue, m_iNumNoVotes) == 0x168);
        static_assert(offsetof(source2sdk::server::CBaseIssue, m_iNumPotentialVotes) == 0x16c);
        static_assert(offsetof(source2sdk::server::CBaseIssue, m_pVoteController) == 0x170);
        
        static_assert(sizeof(source2sdk::server::CBaseIssue) == 0x178);
    };
};
