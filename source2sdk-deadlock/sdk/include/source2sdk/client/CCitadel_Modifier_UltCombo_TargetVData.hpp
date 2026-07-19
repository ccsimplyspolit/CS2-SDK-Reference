#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_StunnedVData.hpp"

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
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_UltCombo_TargetVData : public source2sdk::client::CCitadel_Modifier_StunnedVData
        {
        public:
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flTargetPosDistance; // 0x830            
            float m_flTargetPosRange; // 0x834            
            float m_flPullSpeedMin; // 0x838            
            float m_flPullSpeedMax; // 0x83c            
            float m_flPullDistanceMin; // 0x840            
            float m_flPullDistanceMax; // 0x844            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_UltCombo_TargetVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_UltCombo_TargetVData) == 0x848);
    };
};
