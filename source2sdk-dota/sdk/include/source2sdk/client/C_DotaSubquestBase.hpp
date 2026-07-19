#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

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
        // Size: 0x748
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_DotaSubquestBase : public source2sdk::client::C_BaseEntity
        {
        public:
            char m_pszSubquestText[256]; // 0x5f0            
            bool m_bHidden; // 0x6f0            
            bool m_bCompleted; // 0x6f1            
            bool m_bShowProgressBar; // 0x6f2            
            uint8_t _pad06f3[0x1]; // 0x6f3
            std::int32_t m_nProgressBarHueShift; // 0x6f4            
            std::int32_t m_pnTextReplaceValuesCDotaSubquestBase[2]; // 0x6f8            
            char m_pszTextReplaceString[64]; // 0x700            
            std::int32_t m_nTextReplaceValueVersion; // 0x740            
            bool m_bWasCompleted; // 0x744            
            uint8_t _pad0745[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DotaSubquestBase because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DotaSubquestBase) == 0x748);
    };
};
