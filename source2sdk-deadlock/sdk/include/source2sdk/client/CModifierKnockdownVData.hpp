#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_StunnedVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"

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
        // Size: 0x8d8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierKnockdownVData : public source2sdk::client::CCitadel_Modifier_StunnedVData
        {
        public:
            float m_flSatVolumeRadius; // 0x830            
            float m_flSatVolumeFadeOut; // 0x834            
            float m_flGravityScale; // 0x838            
            float m_flDesatAmount; // 0x83c            
            Color m_satColorDesat; // 0x840            
            Color m_satColorSat; // 0x844            
            Color m_satColorOutline; // 0x848            
            // metadata: MPropertyStartGroup "Camera"
            float m_flGetUpSeqDuration; // 0x84c            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceGetUp; // 0x850            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierKnockdownVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifierKnockdownVData) == 0x8d8);
    };
};
