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
        // Size: 0x838
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        #pragma pack(push, 1)
        class C_ColorCorrection : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNotSaved
            VectorWS m_vecOrigin; // 0x5f0            
            // metadata: MNotSaved
            float m_MinFalloff; // 0x5fc            
            // metadata: MNotSaved
            float m_MaxFalloff; // 0x600            
            // metadata: MNotSaved
            float m_flFadeInDuration; // 0x604            
            // metadata: MNotSaved
            float m_flFadeOutDuration; // 0x608            
            // metadata: MNotSaved
            float m_flMaxWeight; // 0x60c            
            // metadata: MNotSaved
            float m_flCurWeight; // 0x610            
            // metadata: MNotSaved
            char m_netlookupFilename[512]; // 0x614            
            // metadata: MNotSaved
            bool m_bEnabled; // 0x814            
            // metadata: MNotSaved
            bool m_bMaster; // 0x815            
            // metadata: MNotSaved
            bool m_bClientSide; // 0x816            
            // metadata: MNotSaved
            bool m_bExclusive; // 0x817            
            // metadata: MNotSaved
            bool m_bEnabledOnClient[1]; // 0x818            
            uint8_t _pad0819[0x3]; // 0x819
            // metadata: MNotSaved
            float m_flCurWeightOnClient[1]; // 0x81c            
            // metadata: MNotSaved
            bool m_bFadingIn[1]; // 0x820            
            uint8_t _pad0821[0x3]; // 0x821
            // metadata: MNotSaved
            float m_flFadeStartWeight[1]; // 0x824            
            // metadata: MNotSaved
            float m_flFadeStartTime[1]; // 0x828            
            // metadata: MNotSaved
            float m_flFadeDuration[1]; // 0x82c            
            uint8_t _pad0830[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ColorCorrection because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ColorCorrection) == 0x838);
    };
};
