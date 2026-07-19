#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierVData.hpp"

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
        // Size: 0x7a8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_SwingLine_SwingingVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Gameplay"
            CPiecewiseCurve m_PullSpeedScaleCurve; // 0x750            
            float m_flMass; // 0x790            
            float m_flBodyForwardForce; // 0x794            
            float m_flCameraForwardForce; // 0x798            
            float m_flPullForce; // 0x79c            
            float m_flGravityForce; // 0x7a0            
            float m_flDampingForce; // 0x7a4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_SwingLine_SwingingVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_SwingLine_SwingingVData) == 0x7a8);
    };
};
