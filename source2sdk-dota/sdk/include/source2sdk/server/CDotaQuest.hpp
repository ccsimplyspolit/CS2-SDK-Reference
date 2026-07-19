#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CDotaSubquestBase;
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
        // Size: 0x918
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CDotaQuest : public source2sdk::server::CBaseEntity
        {
        public:
            char m_pszQuestTitle[256]; // 0x498            
            char m_pszQuestText[256]; // 0x598            
            std::int32_t m_nQuestType; // 0x698            
            // m_hSubquests has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDotaSubquestBase> m_hSubquests[8];
            char m_hSubquests[0x20]; // 0x69c            
            bool m_bHidden; // 0x6bc            
            bool m_bCompleted; // 0x6bd            
            bool m_bWinIfCompleted; // 0x6be            
            bool m_bLoseIfCompleted; // 0x6bf            
            char m_pszGameEndText[256]; // 0x6c0            
            std::int32_t m_pnTextReplaceValuesCDotaQuest[4]; // 0x7c0            
            char m_pszTextReplaceString[64]; // 0x7d0            
            std::int32_t m_nTextReplaceValueVersion; // 0x810            
            std::int32_t m_nQuestCompleteFadeAlpha; // 0x814            
            char m_pszQuestName[256]; // 0x818            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDotaQuest because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDotaQuest) == 0x918);
    };
};
