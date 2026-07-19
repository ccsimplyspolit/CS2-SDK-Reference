#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/C_BaseFlex_Emphasized_Phoneme.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"

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
        // Size: 0xe60
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float32 m_flexWeight"
        #pragma pack(push, 1)
        class C_BaseFlex : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad0ca8[0x8]; // 0xca8
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "12"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "1"
            // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<float> m_flexWeight;
            char m_flexWeight[0x18]; // 0xcb0            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnViewTargetChanged"
            VectorWS m_vLookTargetPosition; // 0xcc8            
            uint8_t _pad0cd4[0xac]; // 0xcd4
            // metadata: MNotSaved
            std::int32_t m_nLastFlexUpdateFrameCount; // 0xd80            
            // metadata: MNotSaved
            Vector m_CachedViewTarget; // 0xd84            
            // metadata: MNotSaved
            source2sdk::modellib::AttachmentHandle_t m_iMouthAttachment; // 0xd90            
            // metadata: MNotSaved
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0xd91            
            // metadata: MNotSaved
            bool m_bResetFlexWeightsOnModelChange; // 0xd92            
            uint8_t _pad0d93[0x1d]; // 0xd93
            // metadata: MNotSaved
            std::int32_t m_nEyeOcclusionRendererBone; // 0xdb0            
            // metadata: MNotSaved
            matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xdb4            
            // metadata: MNotSaved
            Vector m_vEyeOcclusionRendererHalfExtent; // 0xde4            
            uint8_t _pad0df0[0x10]; // 0xdf0
            // metadata: MNotSaved
            source2sdk::client::C_BaseFlex_Emphasized_Phoneme m_PhonemeClasses[3]; // 0xe00            
            
            // Datamap fields:
            // void m_PhonemeClasses; // 0xe00
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseFlex) == 0xe60);
    };
};
