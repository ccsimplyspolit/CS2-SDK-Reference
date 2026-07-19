#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1ee0
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Teleporting : public source2sdk::client::CDOTA_Buff
        {
        public:
            uint8_t _pad1a58[0x50]; // 0x1a58
            float m_fStartTime; // 0x1aa8            
            char m_iszPortalLoopAppear[260]; // 0x1aac            
            char m_iszPortalLoopDisappear[260]; // 0x1bb0            
            char m_iszHeroLoopAppear[260]; // 0x1cb4            
            char m_iszHeroLoopDisappear[260]; // 0x1db8            
            bool m_bSkipTeleportAnim; // 0x1ebc            
            bool m_bPlayingCoopAnim; // 0x1ebd            
            bool m_bIsPlayingTauntGesture; // 0x1ebe            
            uint8_t _pad1ebf[0x1]; // 0x1ebf
            float m_fChannelTime; // 0x1ec0            
            VectorWS m_vStart; // 0x1ec4            
            VectorWS m_vEnd; // 0x1ed0            
            uint8_t _pad1edc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Teleporting because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Modifier_Teleporting) == 0x1ee0);
    };
};
