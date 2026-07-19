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
        // Size: 0x688
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_CSGO_MapPreviewCameraPath : public source2sdk::client::C_BaseEntity
        {
        public:
            float m_flZFar; // 0x600            
            float m_flZNear; // 0x604            
            bool m_bLoop; // 0x608            
            bool m_bVerticalFOV; // 0x609            
            bool m_bConstantSpeed; // 0x60a            
            uint8_t _pad060b[0x1]; // 0x60b
            float m_flDuration; // 0x60c            
            uint8_t _pad0610[0x40]; // 0x610
            float m_flPathLength; // 0x650            
            float m_flPathDuration; // 0x654            
            uint8_t _pad0658[0x14]; // 0x658
            bool m_bDofEnabled; // 0x66c            
            uint8_t _pad066d[0x3]; // 0x66d
            float m_flDofNearBlurry; // 0x670            
            float m_flDofNearCrisp; // 0x674            
            float m_flDofFarCrisp; // 0x678            
            float m_flDofFarBlurry; // 0x67c            
            float m_flDofTiltToGround; // 0x680            
            uint8_t _pad0684[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSGO_MapPreviewCameraPath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSGO_MapPreviewCameraPath) == 0x688);
    };
};
