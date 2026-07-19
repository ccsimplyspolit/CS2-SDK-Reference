#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_Buff.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: unknown
        // Standard-layout class: false
        // Size: 0x1a90
        // Has VTable
        #pragma pack(push, 1)
        class CDOTA_Modifier_Viper_Nose_Dive : public source2sdk::client::CDOTA_Buff
        {
        public:
            float m_flPredictedTotalTime; // 0x1a58            
            float m_flCurrentTimeVert; // 0x1a5c            
            VectorWS m_vTargetPos; // 0x1a60            
            VectorWS m_vStart; // 0x1a6c            
            float m_flZDelta; // 0x1a78            
            float radius; // 0x1a7c            
            float corrosive_radius; // 0x1a80            
            float effect_duration; // 0x1a84            
            float dive_speed; // 0x1a88            
            float start_height; // 0x1a8c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Modifier_Viper_Nose_Dive because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_Modifier_Viper_Nose_Dive) == 0x1a90);
    };
};
