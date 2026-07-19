#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_DotaSubquestBase;
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
        // Size: 0x970
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_DotaQuest : public source2sdk::client::C_BaseEntity
        {
        public:
            char m_pszQuestTitle[256]; // 0x5f0            
            char m_pszQuestText[256]; // 0x6f0            
            std::int32_t m_nQuestType; // 0x7f0            
            // m_hSubquests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_DotaSubquestBase> m_hSubquests[8];
            char m_hSubquests[0x20]; // 0x7f4            
            bool m_bHidden; // 0x814            
            bool m_bCompleted; // 0x815            
            bool m_bWinIfCompleted; // 0x816            
            bool m_bLoseIfCompleted; // 0x817            
            char m_pszGameEndText[256]; // 0x818            
            std::int32_t m_pnTextReplaceValuesCDotaQuest[4]; // 0x918            
            char m_pszTextReplaceString[64]; // 0x928            
            std::int32_t m_nTextReplaceValueVersion; // 0x968            
            bool m_bWasCompleted; // 0x96c            
            uint8_t _pad096d[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DotaQuest because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DotaQuest) == 0x970);
    };
};
