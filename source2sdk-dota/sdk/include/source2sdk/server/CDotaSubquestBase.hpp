#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

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
        // Size: 0x6f0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class CDotaSubquestBase : public source2sdk::server::CBaseEntity
        {
        public:
            char m_pszSubquestText[256]; // 0x498            
            bool m_bHidden; // 0x598            
            bool m_bCompleted; // 0x599            
            bool m_bShowProgressBar; // 0x59a            
            uint8_t _pad059b[0x1]; // 0x59b
            std::int32_t m_nProgressBarHueShift; // 0x59c            
            std::int32_t m_pnTextReplaceValuesCDotaSubquestBase[2]; // 0x5a0            
            char m_pszTextReplaceString[64]; // 0x5a8            
            std::int32_t m_nTextReplaceValueVersion; // 0x5e8            
            char m_pszSubquestName[256]; // 0x5ec            
            uint8_t _pad06ec[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDotaSubquestBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDotaSubquestBase) == 0x6f0);
    };
};
