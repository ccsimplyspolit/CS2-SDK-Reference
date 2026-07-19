#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
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
        // Size: 0xca0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bEnabled"
        // static metadata: MNetworkVarNames "float m_MaxWeight"
        // static metadata: MNetworkVarNames "float m_FadeDuration"
        // static metadata: MNetworkVarNames "float m_Weight"
        // static metadata: MNetworkVarNames "char m_lookupFilename"
        #pragma pack(push, 1)
        class C_ColorCorrectionVolume : public source2sdk::client::C_BaseTrigger
        {
        public:
            // metadata: MNotSaved
            float m_LastEnterWeight; // 0xa78            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_LastEnterTime; // 0xa7c            
            // metadata: MNotSaved
            float m_LastExitWeight; // 0xa80            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_LastExitTime; // 0xa84            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bEnabled; // 0xa88            
            uint8_t _pad0a89[0x3]; // 0xa89
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_MaxWeight; // 0xa8c            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_FadeDuration; // 0xa90            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_Weight; // 0xa94            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            char m_lookupFilename[512]; // 0xa98            
            uint8_t _pad0c98[0x8];
            
            // Datamap fields:
            // void m_lookupFilename; // 0xa98
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ColorCorrectionVolume because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ColorCorrectionVolume) == 0xca0);
    };
};
