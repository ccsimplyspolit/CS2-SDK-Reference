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
        // Size: 0x848
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_ColorCorrection : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNotSaved
            VectorWS m_vecOrigin; // 0x600            
            // metadata: MNotSaved
            float m_MinFalloff; // 0x60c            
            // metadata: MNotSaved
            float m_MaxFalloff; // 0x610            
            // metadata: MNotSaved
            float m_flFadeInDuration; // 0x614            
            // metadata: MNotSaved
            float m_flFadeOutDuration; // 0x618            
            // metadata: MNotSaved
            float m_flMaxWeight; // 0x61c            
            // metadata: MNotSaved
            float m_flCurWeight; // 0x620            
            // metadata: MNotSaved
            char m_netlookupFilename[512]; // 0x624            
            // metadata: MNotSaved
            bool m_bEnabled; // 0x824            
            // metadata: MNotSaved
            bool m_bMaster; // 0x825            
            // metadata: MNotSaved
            bool m_bClientSide; // 0x826            
            // metadata: MNotSaved
            bool m_bExclusive; // 0x827            
            // metadata: MNotSaved
            bool m_bEnabledOnClient[1]; // 0x828            
            uint8_t _pad0829[0x3]; // 0x829
            // metadata: MNotSaved
            float m_flCurWeightOnClient[1]; // 0x82c            
            // metadata: MNotSaved
            bool m_bFadingIn[1]; // 0x830            
            uint8_t _pad0831[0x3]; // 0x831
            // metadata: MNotSaved
            float m_flFadeStartWeight[1]; // 0x834            
            // metadata: MNotSaved
            float m_flFadeStartTime[1]; // 0x838            
            // metadata: MNotSaved
            float m_flFadeDuration[1]; // 0x83c            
            uint8_t _pad0840[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ColorCorrection because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ColorCorrection) == 0x848);
    };
};
